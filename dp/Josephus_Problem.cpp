#include <bits//stdc++.h>
using namespace std;

int josephus(int n, int k)
{
    if(n == 1) return 1;
    /*After the first person (kth from begining) is killed, n-1 persons are left.
     So we call josephus(n – 1, k) to get the position with n-1 persons.
     But the position returned by josephus(n – 1, k) will consider the position starting from k%n + 1.
     So, we must make adjustments to the position returned by josephus(n – 1, k)*/
    return (josephus(n-1, k) + k-1) % n + 1;
}

int main()
{
    int n, k;
    cin >> n >>k;
    cout << josephus(n, k) << endl;
    return 0;
}
