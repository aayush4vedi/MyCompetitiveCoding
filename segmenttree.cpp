#include <iostream>
#include <cstring>
#include <vector>

using namespace std;
//DP approach
#define INF 1 << 30
#define Max 100

int data[] = {21, 2, 7, 3, 4, 5, 1, 6, 9, 32, 11, 13, 23, 17, 8};
const size_t arrLength = sizeof data / sizeof(data[0]);

/*  Top Down Approach  */
int cache[Max][Max];

int RMQ(int begin, int end) {
    if(cache[begin][end] != -1) return cache[begin][end];
    if(begin == end) return cache[begin][end] = begin;
    if(begin > end) return -1;
    int ret = RMQ(begin, end - 1);
    return cache[begin][end] = (data[ret] < data[end]) ? ret : end;
}

/*  Bottom up Approach  */
int dp[Max][Max];

void RMQ() {
    memset(dp, -1, sizeof dp);
    for(int i = 0; i < arrLength; i++) {
        for (int j = i; j < arrLength; j++) {
            if(i == j) dp[i][j] = i;
            else dp[i][j] = (data[dp[i][j - 1]] < data[j]) ? dp[i][j - 1] : j;
        }
    }
}

void update(int index, int item) {
    data[index] = item;
}

int main() {
    memset(cache, -1, sizeof cache);
    cout << RMQ(0, 8) << "\n";

    RMQ();
    cout << dp[0][8] << "\n";

    update(6, 100);
    RMQ();
    cout << dp[0][8];

    return 0;
}
//Implementation with Segment Tree
// code for three types of operation
enum RequestCode {rangeSum, rangeMin, rangeMax};

vector <int> segment_tree; // will contain the node value of ST

// array of data upon which we will build segment tree
int data[] = {21, 2, 7, 3, 4, 5, 1, 6, 9, 32, 11, 13, 23, 17, 8};
size_t arrLength = sizeof data / sizeof(data[0]); // size of the array

/**
 * allocate & initialize segment tree
 */
void initSegmentTree() {
    // the required segment tree array length is 2*2^(floor(log2(N))) + 1;
    int length = 2 * pow(2.0, floor(log((double) arrLength ) / log(2.0)) + 1 );
    segment_tree.clear();
    segment_tree.resize(length, 0);
}

/**
 * Time: O(n*log(n))
 * functions for building segment tree
 * buildHelper(code, node, begin, end)
 * buildSegmentTree(code)
 */
void buildHelper( RequestCode code, int node, int begin, int end ) {
    if (begin == end) {
        if (code == rangeSum) segment_tree[node] = data[begin];
        else segment_tree[node] = begin;
        return;
    }
    int leftIndx = node << 1, rightIndx = leftIndx | 1;

    buildHelper(code, leftIndx, begin, (begin + end) / 2);
    buildHelper(code, rightIndx, (begin + end) / 2 + 1, end);

    int lContent = segment_tree[leftIndx], rContent = segment_tree[rightIndx];

    if(code == rangeSum) segment_tree[node] = lContent + rContent;
    if(code == rangeMin) segment_tree[node] = ( data[lContent] <= data[rContent] ) ? lContent : rContent;
    if(code == rangeMax) segment_tree[node] = ( data[lContent] >= data[rContent] ) ? lContent : rContent;

}

void buildSegmentTree(RequestCode code) {
    buildHelper(code, 1, 0, arrLength - 1);
}

/**
 * Time: O(log(n))
 * query functions for ST
 * queryHelper(code, node, begin, end, lowerRange, upperRange)
 * query(code, loweRange, upperRange)
 */
//divide & conquer fashion [r1,r2] = [r1, (r1+r2)/2] , [(r1+r2)/2 + 1, r2]
int queryHelper(RequestCode code, int node, int begin, int end, int i, int j) {
    // if the current interval does not intersect query interval
    if (i > end || j < begin) return -1;

    if (begin >= i && end <= j) return segment_tree[node];

    // compute the minimum position in the left and right part of the interval
    int leftIndx = node << 1, rightIndx = leftIndx | 1;
    int pos1 = queryHelper(code, leftIndx, begin, (begin + end) / 2, i, j);
    int pos2 = queryHelper(code, rightIndx, (begin + end) / 2 + 1, end, i, j);

    // return the position where the overall minimum is
    if(pos1 == -1) return pos2; // can happen if we try to access segment outside query
    if(pos2 == -1) return pos1;

    if (code == rangeSum) {
        return pos1 + pos2;
    } else if(code == rangeMin) {
        return (data[pos1] <= data[pos2]) ? pos1 : pos2;
    } else return (data[pos1] >= data[pos2]) ? pos1 : pos2;
}

int query(RequestCode code, int lower, int upper) {
    return queryHelper(code, 1, 0, arrLength - 1, lower, upper);
}

/**
 * Time: O(log(n))
 * update functions for segment tree
 * updates an index with given value
 * updateHelper(code, begin, end, index, value)
 * update(code, index, value)
 */
/* root to leaf */
void updateHelper(RequestCode code, int node, int begin, int end, int index, int value ) {

    // this is the only condition and change that makes this updateHelper() function different from buildHelper()
    if( index < begin || index > end || begin > end ) return;

    if( begin == end ) {
        data[begin] = value; // data array is needed to be updated

        // rest of the code is same as buildHelper() method
        if(code == rangeSum) segment_tree[node] = data[begin];
        else segment_tree[node] = begin;
        return;
    }
    int leftIndx = node << 1, rightIndx = leftIndx | 1;

    updateHelper(code, leftIndx, begin, ( begin + end ) >> 1, index, value );
    updateHelper(code, rightIndx, ( ( begin + end ) >> 1 ) + 1, end, index, value );

    int lContent = segment_tree[leftIndx], rContent = segment_tree[rightIndx];

    if(code == rangeSum) segment_tree[node] = lContent + rContent;
    else if(code == rangeMin) segment_tree[node] = ( data[lContent] <= data[rContent] ) ? lContent : rContent;
    else if(code == rangeMax) segment_tree[node] = ( data[lContent] >= data[rContent] ) ? lContent : rContent;
}

void update(RequestCode code, int index, int item) {
    updateHelper(code, 1, 0, arrLength - 1, index, item);
}

int main() {
    initSegmentTree();

    buildSegmentTree(rangeMin);
    // query command for Range Minimum query from 0 to 8
    cout << query(rangeMin, 0, 8) << "\n";

    // update index 6 with value 100
    update(rangeMin, 6, 100);
    cout << query(rangeMin, 0, 8) << "\n";

    buildSegmentTree(rangeMax);
    cout << query(rangeMax, 0, 8) << "\n";

    buildSegmentTree(rangeSum);
    cout << query(rangeSum, 0, 8);
    return 0;
}
//2D segment tree
#define Max 506
#define INF (1 << 30)
int P[Max][Max]; // container for 2D grid

/* 2D Segment Tree node */
struct Point {
    int x, y, mx;
    Point() {}
    Point(int x, int y, int mx) : x(x), y(y), mx(mx) {}

    bool operator < (const Point& other) const {
        return mx < other.mx;
    }
};

struct Segtree2d {
    Point T[2 * Max * Max];
    int n, m;

    // initialize and construct segment tree
    void init(int n, int m) {
        this -> n = n;
        this -> m = m;
        build(1, 1, 1, n, m);
    }

    // build a 2D segment tree from data [ (a1, b1), (a2, b2) ]
    // Time: O(n logn)
    Point build(int node, int a1, int b1, int a2, int b2) {
        // out of range
        if (a1 > a2 or b1 > b2)
            return def();

        // if it is only a single index, assign value to node
        if (a1 == a2 and b1 == b2)
            return T[node] = Point(a1, b1, P[a1][b1]);

        // split the tree into four segments
        T[node] = def();
        T[node] = maxNode(T[node], build(4 * node - 2, a1, b1, (a1 + a2) / 2, (b1 + b2) / 2 ) );
        T[node] = maxNode(T[node], build(4 * node - 1, (a1 + a2) / 2 + 1, b1, a2, (b1 + b2) / 2 ));
        T[node] = maxNode(T[node], build(4 * node + 0, a1, (b1 + b2) / 2 + 1, (a1 + a2) / 2, b2) );
        T[node] = maxNode(T[node], build(4 * node + 1, (a1 + a2) / 2 + 1, (b1 + b2) / 2 + 1, a2, b2) );
        return T[node];
    }

    // helper function for query(int, int, int, int);
    Point query(int node, int a1, int b1, int a2, int b2, int x1, int y1, int x2, int y2) {
        // if we out of range, return dummy
        if (x1 > a2 or y1 > b2 or x2 < a1 or y2 < b1 or a1 > a2 or b1 > b2)
            return def();

        // if it is within range, return the node
        if (x1 <= a1 and y1 <= b1 and a2 <= x2 and b2 <= y2)
            return T[node];

        // split into four segments
        Point mx = def();
        mx = maxNode(mx, query(4 * node - 2, a1, b1, (a1 + a2) / 2, (b1 + b2) / 2, x1, y1, x2, y2) );
        mx = maxNode(mx, query(4 * node - 1, (a1 + a2) / 2 + 1, b1, a2, (b1 + b2) / 2, x1, y1, x2, y2) );
        mx = maxNode(mx, query(4 * node + 0, a1, (b1 + b2) / 2 + 1, (a1 + a2) / 2, b2, x1, y1, x2, y2) );
        mx = maxNode(mx, query(4 * node + 1, (a1 + a2) / 2 + 1, (b1 + b2) / 2 + 1, a2, b2, x1, y1, x2, y2));

        // return the maximum value
        return mx;
    }

    // query from range [ (x1, y1), (x2, y2) ]
    // Time: O(logn)
    Point query(int x1, int y1, int x2, int y2) {
        return query(1, 1, 1, n, m, x1, y1, x2, y2);
    }

    // helper function for update(int, int, int);
    Point update(int node, int a1, int b1, int a2, int b2, int x, int y, int value) {
        if (a1 > a2 or b1 > b2)
            return def();

        if (x > a2 or y > b2 or x < a1 or y < b1)
            return T[node];

        if (x == a1 and y == b1 and x == a2 and y == b2)
            return T[node] = Point(x, y, value);

        Point mx = def();
        mx = maxNode(mx, update(4 * node - 2, a1, b1, (a1 + a2) / 2, (b1 + b2) / 2, x, y, value) );
        mx = maxNode(mx, update(4 * node - 1, (a1 + a2) / 2 + 1, b1, a2, (b1 + b2) / 2, x, y, value));
        mx = maxNode(mx, update(4 * node + 0, a1, (b1 + b2) / 2 + 1, (a1 + a2) / 2, b2, x, y, value));
        mx = maxNode(mx, update(4 * node + 1, (a1 + a2) / 2 + 1, (b1 + b2) / 2 + 1, a2, b2, x, y, value) );
        return T[node] = mx;
    }

    // update the value of (x, y) index to 'value'
    // Time: O(logn)
    Point update(int x, int y, int value) {
        return update(1, 1, 1, n, m, x, y, value);
    }

    // utility functions; these functions are virtual because they will be overridden in child class
    virtual Point maxNode(Point a, Point b) {
        return max(a, b);
    }

    // dummy node
    virtual Point def() {
        return Point(0, 0, -INF);
    }
};

/* 2D Segment Tree for range minimum query; a override of Segtree2d class */
struct Segtree2dMin : Segtree2d {
    // overload maxNode() function to return minimum value
    Point maxNode(Point a, Point b) {
        return min(a, b);
    }

    Point def() {
        return Point(0, 0, INF);
    }
};

// initialize class objects
Segtree2d Tmax;
Segtree2dMin Tmin;


/* Drier program */
int main(void) {
    int n, m;
    // input
    scanf("%d %d", &n, &m);
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            scanf("%d", &P[i][j]);

    // initialize
    Tmax.init(n, m);
    Tmin.init(n, m);

    // query
    int x1, y1, x2, y2;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    Tmax.query(x1, y1, x2, y2).mx;
    Tmin.query(x1, y1, x2, y2).mx;

    // update
    int x, y, v;
    scanf("%d %d %d", &x, &y, &v);
    Tmax.update(x, y, v);
    Tmin.update(x, y, v);

    return 0;
}
