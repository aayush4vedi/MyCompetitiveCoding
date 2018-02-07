//1
#include <bits/stdc++.h>
using namespace std;

// Returns the cost of entire operation in bringing
// the height of all towers to equal height eq_h
long int costOfOperation(int n, int h[], int cost[],
                         int eq_h)
{
    // Initialize initial cost to 0
    long int c = 0;

    // Adding cost for each tower
    for (int i = 0; i < n; i++)
        c += abs(h[i] - eq_h) * cost[i];

    return c;
}

// Return the minimum possible cost of operation
// to bring all the towers of different height
// in height[0..n-1] to same height.
long long int Bsearch(int n, int h[], int cost[])
{
    long int max_h = *max_element(h, h + n);
    long int ans = LONG_MAX;

    // Do binary search for minimum cost
    long int high = 1 + max_h;
    long int low = 0;
    while (high > low) {
        int mid = (low + high) >> 1;

        // Cost below mid
        long int bm = (mid > 0) ?
                costOfOperation(n, h, cost, mid - 1) :
                LONG_MAX;

        // Cost at mid
        long int m = costOfOperation(n, h, cost, mid);

        // Cost above mid
        long int am = costOfOperation(n, h, cost, mid + 1);

        // Break if the answer becomes equal to
        // minimum cost m
        if (ans == m)
            break;

        // ans should hold the minimum cost of operation
        ans = min(ans, m);

        // Search lower cost
        if (bm <= m)
            high = mid;

        // Search higher cost
        else if (am <= m)
            low = mid + 1;
    }

    return ans;
}

// Driver code
int main()
{
    int h[] = { 1, 2, 3 };
    int cost[] = { 10, 100, 1000 };
    int n = sizeof(h)/sizeof(h[0]);
    cout << Bsearch(n, h, cost);
    return 0;
}

//2
#include <bits/stdc++.h>

int  _mergeSort(int arr[], int temp[], int left, int right);
int merge(int arr[], int temp[], int left, int mid, int right);

/* This function sorts the input array and returns the
   number of inversions in the array */
int mergeSort(int arr[], int array_size)
{
    int *temp = (int *)malloc(sizeof(int)*array_size);
    return _mergeSort(arr, temp, 0, array_size - 1);
}

/* An auxiliary recursive function that sorts the input array and
  returns the number of inversions in the array. */
int _mergeSort(int arr[], int temp[], int left, int right)
{
  int mid, inv_count = 0;
  if (right > left)
  {
    /* Divide the array into two parts and call _mergeSortAndCountInv()
       for each of the parts */
    mid = (right + left)/2;

    /* Inversion count will be sum of inversions in left-part, right-part
      and number of inversions in merging */
    inv_count  = _mergeSort(arr, temp, left, mid);
    inv_count += _mergeSort(arr, temp, mid+1, right);

    /*Merge the two parts*/
    inv_count += merge(arr, temp, left, mid+1, right);
  }
  return inv_count;
}

/* This funt merges two sorted arrays and returns inversion count in
   the arrays.*/
int merge(int arr[], int temp[], int left, int mid, int right)
{
  int i, j, k;
  int inv_count = 0;

  i = left; /* i is index for left subarray*/
  j = mid;  /* j is index for right subarray*/
  k = left; /* k is index for resultant merged subarray*/
  while ((i <= mid - 1) && (j <= right))
  {
    if (arr[i] <= arr[j])
    {
      temp[k++] = arr[i++];
    }
    else
    {
      temp[k++] = arr[j++];

     /*this is tricky -- see above explanation/diagram for merge()*/
      inv_count = inv_count + (mid - i);
    }
  }

  /* Copy the remaining elements of left subarray
   (if there are any) to temp*/
  while (i <= mid - 1)
    temp[k++] = arr[i++];

  /* Copy the remaining elements of right subarray
   (if there are any) to temp*/
  while (j <= right)
    temp[k++] = arr[j++];

  /*Copy back the merged elements to original array*/
  for (i=left; i <= right; i++)
    arr[i] = temp[i];

  return inv_count;
}

/* Driver program to test above functions */
int main(int argv, char** args)
{
  int arr[] = {1, 20, 6, 4, 5};
  printf(" Number of inversions are %d \n", mergeSort(arr, 5));
  getchar();
  return 0;
}


//3
//////////3.1
// SPOJ 685: Partition the sequence
// http://www.spoj.com/problems/SEQPAR/
//
// Solution: binary search + DP with binary search tree
//
// 1. Do binary search to convert minimization problem
//    to feasibility problem.
//
// 2. To solve the feasibility problem, we use the following fact:
//      Let f = min #parts of M partition,
//          g = max #parts of M partition.
//      Then, for all k : f <= k <= g,
//      there exist a k parts M partition.
//
// 3. Computation of f and g:
//    The DP relation is
//       f(i) = max f(j)+1 | a[j,i) <= M
//    This can be solved in O(n log n) times,
//    using binary search tree of key = a[0]+...+a[k]
//    and value = f(k).

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <vector>
#include <functional>
#include <algorithm>

#include <ctime>

using namespace std;
const int INF = 1 << 30;

struct RangeMinimumQuery {
  typedef int Key;
  typedef pair<int,int> Value;
  struct Node {
    Key key;
    Value value, sum;
    int pr;
    Node *ch[2];
    Node(Key key, Value value) :
      key(key), value(value), pr(rand()) { ch[0] = ch[1] = 0; }
  } *root;
  RangeMinimumQuery() : root(0) { }

  Value SUM(Node *n) { return n ? n->sum : Value(INF,-INF); }
  Value PLUS(Value x, Value y) {
    return Value(min(x.first, y.first), max(x.second, y.second));
  }
  Node *update(Node *n) {
    if (n) n->sum = PLUS(n->value, PLUS(SUM(n->ch[0]), SUM(n->ch[1])));
    return n;
  }
  Node *rotate(Node *n, int b) {
    Node *m = n->ch[b];
    n->ch[b] = m->ch[!b];
    m->ch[!b] = update(n);
    return update(m);
  }
  Node *insert(Node *n, Key key, Value value) {
    if (!n) return update(new Node(key, value));
    int b = (n->key < key);
    n->ch[b] = insert(n->ch[b], key, value);
    return n->ch[b]->pr < n->pr ? rotate(n, b) : update(n);
  }
  void insert(Key key, Value value) {
    root = insert(root, key, value);
  }
  Value rangeSum(Node *n, Key key) { // sum over n.key >= key
    if (!n) return SUM(n);
    if (n->key < key) return rangeSum(n->ch[1], key);
    return PLUS(rangeSum(n->ch[0], key), PLUS(n->value, SUM(n->ch[1])));
  }
};

int a[20000], s[20000], n, k;
bool possible(int m) {
  pair<int,int> p;
  RangeMinimumQuery RMQ;
  RMQ.insert(0, make_pair(0, 0));
  for (int i = 0; i < n; ++i) {
    p = RMQ.rangeSum(RMQ.root, s[i] - m);
    p.first += 1; p.second += 1;
    RMQ.insert(s[i], p);
  }
  return p.first <= k && k <= p.second;
}
int solve() {
  int l = -INF, r = +INF;
  while (l+1 < r) {
    int m = (r + l) / 2;
    if (possible(m)) r = m;
    else l = m;
  }
  return r;
}
int main() {
  int T; scanf("%d", &T);
  while (T--) {
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; ++i)
      scanf("%d", &a[i]);
    s[0] = a[0];
    for (int i = 1; i < n; ++i)
      s[i] = s[i-1] + a[i];
    printf("%d\n", solve());
  }
}
////3.2
#include <iostream>
#include <cstring>
using namespace std;

const int mx = 30000 * 15000 + 10;
const int mxn = 15010;

int n, k;
int pref[mxn];
int poss[mxn];

bool ok(int targ) {
	memset(poss, 0, sizeof(poss));
	poss[0] = 1;
	for (int i = 1; i <= n; i++) {
		int curtarg = pref[i] - targ;
		for (int j = 0; j < i; j++) {
			if (pref[j] >= curtarg) {
				poss[i] |= (poss[j] << 1);
			}
		}
	}
	return (poss[n] >> k) & 1;
}

int main() {
	int ntest;
	cin >> ntest;
	for (int itest = 0; itest < ntest; itest++) {
		cin >> n >> k;
		for (int i = 0; i < n; i++) {
			int a;
			cin >> a;
			pref[i + 1] = pref[i] + a;
		}
		int lo = -mx, hi = mx;
		while (lo + 1 < hi) {
			int mid = (lo + hi + 2 * mx - 1) / 2 - mx;
			if (ok(mid)) {
				hi = mid + 1;
			} else {
				lo = mid + 1;
			}
		}
		cout << lo << '\n';
	}
	return 0;
}

///4
//https://math.stackexchange.com/questions/tagged/combinatorics

///5

///6
#include <iostream>
#include <algorithm>
using namespace std;

/* A Binary Search based function to find index of FIRST occurrence
  of x in arr[].  If x is not present, then it returns -1 */
int first(int arr[], int low, int high, int x, int n)
{
    if (high >= low)
    {
        int mid = low + (high-low)/2;  /* (low + high)/2; */
        if ((mid == 0 || x > arr[mid-1]) && arr[mid] == x)
            return mid;
        if (x > arr[mid])
            return first(arr, (mid + 1), high, x, n);
        return first(arr, low, (mid -1), x, n);
    }
    return -1;
}

// Sort A1[0..m-1] according to the order defined by A2[0..n-1].
void sortAccording(int A1[], int A2[], int m, int n)
{
    // The temp array is used to store a copy of A1[] and visited[]
    // is used mark the visited elements in temp[].
    int temp[m], visited[m];
    for (int i=0; i<m; i++)
    {
        temp[i] = A1[i];
        visited[i] = 0;
    }

    // Sort elements in temp
    sort(temp, temp + m);

    int ind = 0;  // for index of output which is sorted A1[]

    // Consider all elements of A2[], find them in temp[]
    // and copy to A1[] in order.
    for (int i=0; i<n; i++)
    {
        // Find index of the first occurrence of A2[i] in temp
        int f = first(temp, 0, m-1, A2[i], m);

        // If not present, no need to proceed
        if (f == -1) continue;

        // Copy all occurrences of A2[i] to A1[]
        for (int j = f; (j<m && temp[j]==A2[i]); j++)
        {
            A1[ind++] = temp[j];
            visited[j] = 1;
        }
    }

    // Now copy all items of temp[] which are not present in A2[]
    for (int i=0; i<m; i++)
        if (visited[i] == 0)
            A1[ind++] = temp[i];
}

// Utility function to print an array
void printArray(int arr[], int n)
{
    for (int i=0; i<n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Driver program to test above function.
int main()
{
    int A1[] = {2, 1, 2, 5, 7, 1, 9, 3, 6, 8, 8};
    int A2[] = {2, 1, 8, 3};
    int m = sizeof(A1)/sizeof(A1[0]);
    int n = sizeof(A2)/sizeof(A2[0]);
    cout << "Sorted array is \n";
    sortAccording(A1, A2, m, n);
    printArray(A1, m);
    return 0;
}
///7
#include <bits/stdc++.h>
using namespace std;

// Prints max at first position, min at second position
// second max at third position, second min at fourth
// position and so on.
void rearrange(int arr[], int n)
{
    // Auxiliary array to hold modified array
    int temp[n];

    // Indexes of smallest and largest elements
    // from remaining array.
    int small=0, large=n-1;

    // To indicate whether we need to copy rmaining
    // largest or remaining smallest at next position
    int flag = true;

    // Store result in temp[]
    for (int i=0; i<n; i++)
    {
        if (flag)
            temp[i] = arr[large--];
        else
            temp[i] = arr[small++];

        flag = !flag;
    }

    // Copy temp[] to arr[]
    for (int i=0; i<n; i++)
        arr[i] = temp[i];
}

// Driver program to test above function
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Original Arrayn";
    for (int i=0; i<n; i++)
        cout << arr[i] << " ";

    rearrange(arr, n);

    cout << "nModified Arrayn";
    for (int i=0; i<n; i++)
        cout << arr[i] << " ";
    return 0;
}

///8

///9
#include<bits/stdc++.h>
using namespace std;

// Returns true if str1 is smaller than str2.
bool compareNumbers(string str1, string str2)
{
    // Calculate lengths of both string
    int n1 = str1.length(), n2 = str2.length();

    if (n1 < n2)
       return true;
    if (n2 < n1)
       return false;

    // If lengths are same
    for (int i=0; i<n1; i++)
    {
       if (str1[i] < str2[i])
          return true;
       if (str1[i] > str2[i])
          return false;
    }

    return false;
}

// Function for sort an array of large numbers
// represented as strings
void sortLargeNumbers(string arr[], int n)
{
   sort(arr, arr+n, compareNumbers);
}

// Driver code
int main()
{
    string arr[] = {"5", "1237637463746732323",
                    "97987", "12" };
    int n = sizeof(arr)/sizeof(arr[0]);

    sortLargeNumbers(arr, n);

    for (int i=0; i<n; i++)
      cout << arr[i] << " ";

    return 0;
}
//10
void selectionSortArray(int Array[], int SIZE, long PerformanceDataArray[])
02
{
03
    //Variable declarations for performance testing
04
    long swapCounter = 0;//Increment this counter whenever a swap takes place
05
    long comparisonCounter=0;//Increment this counter whenever a comparison takes place
06

07
    int TempVal = 0;
08
    int IndexMinVal = 0;
09
    int CompResult;
10

11
    // Now the Selection Sort begins //
12
    for(int i = 0; i < SIZE -1; i++)
13
    {
14
        IndexMinVal = i;
15

16
        for(int j = i + 1; j < SIZE; j++)
17
        {
18
            CompResult = compare(Array[j], Array[IndexMinVal]);
19
            comparisonCounter++;
20

21
            if(CompResult==-1)
22
            {
23
                IndexMinVal = j;
24
            }
25
        }
26

27
        swap(Array[i], Array[IndexMinVal]);
28
        swapCounter++;
29
    }
30

31
    PerformanceDataArray[0] = comparisonCounter;
32
    PerformanceDataArray[1] = swapCounter;
33
}//End of selectionSortArray()
34

35

36
void insertionSortArray(int Array[], int SIZE,  long PerformanceDataArray[])
37
{
38
    //Variable declarations for performance testing
39
    long swapCounter = 0;//Increment this counter whenever a swap takes place
40
    long comparisonCounter =0;//Increment this counter whenever a comparison takes place
41

42
    int comparisonResult;
43
    for(int i = 1; i<SIZE; i++)
44
    {
45
        for(int j = i; j>0; j--)
46
        {
47
            comparisonResult = compare(Array[j], Array[j-1]);
48
            comparisonCounter++;
49

50
            if(comparisonResult == -1)
51
            {
52
                swap(Array[j], Array[j-1]);
53
            }
54
                        swapCounter++;
55
        }
56
    }
57

58
    PerformanceDataArray[0] = comparisonCounter;
59
    PerformanceDataArray[1] = swapCounter;
60
}//End of insertionSortArray()
61

62
void bubbleSort(int Array[], int SIZE,  int PerformanceDataArray[])
02
{
03
   //Variable declarations for performance testing
04
   long swapCounter = 0;//Increment this counter whenever a swap takes place
05
   long comparisonCounter=0;//Increment this counter whenever a comparison takes place
06
   bool swapped = true;
07

08
   for (int x = 1; x<SIZE && swapped; x++)
09
   {
10
       swapped = false;
11
       for (int y = SIZE-1; y>=x; y--)
12
       {
13
           comparisonCounter++;
14
           if (Array[y-1] > Array[y])
15
           {
16
               swap(Array[y], Array[y-1]);
17
               swapCounter++;
18
               swapped = true;
19

20
           }
21
       }
22
   }
23

24
   PerformanceDataArray[0] = comparisonCounter;
25
   PerformanceDataArray[1] = swapCounter;
26
}//End of
