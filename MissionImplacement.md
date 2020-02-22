<p align="center">

<br>
<!-- <img src="" data-canonical-src="MiP" /> -->
<br>
<br>
<a href="https://github.com/aayush4vedi/MyCompetitiveCoding/blob/master/MissionImplacement.md#notes"><img src="https://img.shields.io/badge/Notes-f39f37" alt="Notes"></a>
<a href="https://github.com/aayush4vedi/MyCompetitiveCoding/blob/master/MissionImplacement.md#1linked-list"><img src="https://img.shields.io/badge/Linked List-8FD400" alt="Linked List"></a>
<a href="https://github.com/aayush4vedi/MyCompetitiveCoding/blob/master/MissionImplacement.md#2-trees"><img src="https://img.shields.io/badge/Trees -FF5050" alt="Trees"></a>
<a href="https://github.com/aayush4vedi/MyCompetitiveCoding/blob/master/MissionImplacement.md##3a-stacks"><img src="https://img.shields.io/badge/Stack&Queue-0081AB" alt="Stack&Queue"></a>
<a href="https://github.com/aayush4vedi/MyCompetitiveCoding/blob/master/MissionImplacement.md#4-search"><img src="https://img.shields.io/badge/Search-FD5240" alt="Search"></a>
<a href="https://github.com/aayush4vedi/MyCompetitiveCoding/blob/master/MissionImplacement.md#5-sort"><img src="https://img.shields.io/badge/Sort-614051" alt="Sort"></a>
<a href="https://github.com/aayush4vedi/MyCompetitiveCoding/blob/master/MissionImplacement.md#6-backtrack"><img src="https://img.shields.io/badge/BackTrack-253529" alt="BackTrack"></a>
<a href="https://github.com/aayush4vedi/MyCompetitiveCoding/blob/master/MissionImplacement.md#6-greedy"><img src="https://img.shields.io/badge/Greedy-4997D0" alt="Greedy"></a>
<a href="https://https://github.com/aayush4vedi/MyCompetitiveCoding/blob/master/MissionImplacement.md#7-dp"><img src="https://img.shields.io/badge/DP-719B6A" alt="DP"></a>
<a href="https://github.com/aayush4vedi/MyCompetitiveCoding/blob/master/MissionImplacement.md#8-graph"><img src="https://img.shields.io/badge/Graph-4570E6" alt="Graph"></a>
<a href="https://github.com/aayush4vedi/MyCompetitiveCoding/blob/master/MissionImplacement.md#9-two-pointers"><img src="https://img.shields.io/badge/Array-0000AB" alt=2Pointers"></a>
<a href="https://github.com/aayush4vedi/MyCompetitiveCoding/blob/master/MissionImplacement.md#10-array"><img src="https://img.shields.io/badge/Array-0081AB" alt=Array"></a>
<a href="https://github.com/aayush4vedi/MyCompetitiveCoding/blob/master/MissionImplacement.md#11-string"><img src="https://img.shields.io/badge/String-FD5240" alt="String"></a>
<br>
<br>
</p>
 

# 0.Notes:
- Pointers:
    - `&` => *A(nd)*ddress of
    - `*` => Value@
    >It's easier to give someone your address to find you than a copy of your house.
- Masters's Theorem:<br>
    `T(n) = aT(n/b) + f(n)` , where f(n) = &theta;(n<sup>c</sup>)
    <br>
    (i)     `c` < log<sub>b</sub>a    => `T(n)` = &theta;(n<sup>log<sub>b</sub>a</sup>)    <br>
    (ii)    .. = ........   => `T(n)` = &theta;(`n`<sup>c</sup>log`n`)     <br>
    (iii)   .. = ........   => `T(n)` = &theta;(f`(n)`)

- Binary Exponantiation:
    ```cpp
    int f(x,n){
        if(n==0)return 1;
        if(n&1)return x*f(x*x, (n-1)/2);
        return           f(x*x, n/2);
    }
    ```
- GCD:
    ```cpp
    int f(a,b){
        i(b==0)return a;
        return f(b, a%b);
    }
    ```
- Sieve of Eratosthenes: `O(Nlog(logN))`
    ```cpp
    void sieve(int N) {
        bool isPrime[N+1];
        for(int i = 0; i <= N;++i) {
            isPrime[i] = true;
        }
        isPrime[0] = false;
        isPrime[1] = false;
        for(int i = 2; i * i <= N; ++i) {
            if(isPrime[i] == true) {
                // Mark all the multiples of i as composite numbers
                for(int j = i * i; j <= N ;j += i)
                    isPrime[j] = false;
            }
        }
    }
    ```
- [Euler'a Totient Function](https://www.geeksforgeeks.org/eulers-totient-function/)
- [Bit Manipulation](https://www.hackerearth.com/practice/notes/bit-manipulation/):
    - Left Shift ( 1 `<<` n = 2<sup>n</sup>): equivalent to multiplying the bit pattern with `2n`
    - Right Shift ( 16 `>>` 4 = 1): equivalent to dividing the bit pattern with `2n`
    - `(x-1)`: Means flipping all the bits to the right of rightmost 1 in x and also including the rightmost 1
    - Check if a given number is a power of 2: `return (x && !(x & (x - 1)));`
    - Count the number of ones in the binary representation of n: `while(n){ n = n& (n-1); cnt++}`
    - Check if the i-th bit is set in the binary form of N : `if( N & (1 << i)) return true; else return false;`
    - generate all the possible subsets of an array:
        ```cpp
            for(int i = 0;i < (1 << N); ++i)
            {
                for(int j = 0;j < N;++j)
                    if(i & (1 << j))
                        cout << A[j] << ‘ ‘;
                cout << endl;
            }
        ```
    - `x ^ ( x & (x-1))` :Returns the rightmost 1 in binary representation of x
    - `x & (-x)` : Returns the rightmost 1 in binary representation of x
    - `x | (1 << n)` : Returns the number x with the nth bit set
<hr>

# 1.Linked List:
## (1.0) General
- [ll vs arr](https://www.geeksforgeeks.org/programmers-approach-looking-array-vs-linked-list/) - a programmers' approach
## (1.1) Single LL
- [Insertion](https://www.geeksforgeeks.org/linked-list-set-2-inserting-a-node/)
    - At begin
    - At end
    - After given node
- [Delete a node with value K](https://www.geeksforgeeks.org/delete-a-linked-list-node-at-a-given-position/)
- `*` [Delete a LL](https://www.geeksforgeeks.org/write-a-function-to-delete-a-linked-list/)
- [Nth node from end](https://www.geeksforgeeks.org/write-a-function-to-get-nth-node-in-a-linked-list/)
- Loop:
    - [Detect](https://www.geeksforgeeks.org/detect-loop-in-a-linked-list/)
    - start of loop
    - why? :: v<sub>hair</sub> = v<sub>tort</sub>  => `x = z`
    - [length](https://www.geeksforgeeks.org/find-length-of-loop-in-linked-list/)
- Reverse LL:
    - [iterative](https://www.geeksforgeeks.org/reverse-a-linked-list/)
    - [recursive](https://www.geeksforgeeks.org/recursively-reversing-a-linked-list-a-simple-implementation/) => Don't forget `node->next = NULL;` for every node
    - [reverse in K size](https://www.geeksforgeeks.org/reverse-a-list-in-groups-of-given-size/)
- `*` [Check Palindrome](https://www.geeksforgeeks.org/function-to-check-if-a-singly-linked-list-is-palindrome/)
- [Remove duplicates from *sorted* ll](https://www.geeksforgeeks.org/remove-duplicates-from-a-sorted-linked-list/)  => Don't forget to free the memory too
- [Remove all repeating values](https://www.geeksforgeeks.org/remove-occurrences-duplicates-sorted-linked-list/)
- Uninon-Intersection:
    - [Union](https://www.geeksforgeeks.org/union-and-intersection-of-two-linked-lists/)
    - [Intersection](https://www.geeksforgeeks.org/intersection-of-two-sorted-linked-lists/)
    - [Get intersection point](https://www.geeksforgeeks.org/write-a-function-to-get-the-intersection-point-of-two-linked-lists/)
- Add 1 to LL:
    - [I](https://www.geeksforgeeks.org/add-1-number-represented-linked-list/)
    - II
- Add 2 numbers:
    - [I](https://www.geeksforgeeks.org/add-two-numbers-represented-by-linked-lists/)
    - II
- [Segregate even & odd valued nodes in ll](https://www.geeksforgeeks.org/segregate-even-and-odd-elements-in-a-linked-list/)
- [Alternate Odd & Even valued nodes](https://www.geeksforgeeks.org/segregate-even-and-odd-elements-in-a-linked-list/):
    - Segregate(upar to dekko)
    - Split
    - Merge
- [Rotate ll anti-clock by `k` nodes](https://www.geeksforgeeks.org/rotate-a-linked-list/)
- [Rearrange in Zig-Zag fashion](https://www.geeksforgeeks.org/linked-list-in-zig-zag-fashion/) :: if not-swap adjacents, else-continue
- [Clone LL with next & random pointer](https://www.geeksforgeeks.org/a-linked-list-with-next-and-arbit-pointer/)
- `*` Sorting:
    - [MergeSort](https://www.geeksforgeeks.org/merge-sort-for-linked-list/)  => [Flatten ll](https://www.geeksforgeeks.org/flattening-a-linked-list/)
    - [QuickSort](https://www.geeksforgeeks.org/quicksort-on-singly-linked-list/)
    - [Why Quick Sort preferred for Arrays and Merge Sort for Linked Lists?](https://www.geeksforgeeks.org/why-quick-sort-preferred-for-arrays-and-merge-sort-for-linked-lists/)
        - => ll: merge operation of merge sort can be implemented in O(1)
        - => arr: quicksort is O(1) space & mergesort is O(n) space
## (1.2) * DLL
- [Struct & Insert](https://www.geeksforgeeks.org/doubly-linked-list/)
- [Delete](https://www.geeksforgeeks.org/delete-a-node-in-a-doubly-linked-list/)
- [Reverse](https://www.geeksforgeeks.org/reverse-a-doubly-linked-list/)
- [XOR LL](https://www.geeksforgeeks.org/memory-efficient-doubly-linked-list/) - A memory efficient DLL

<hr>

# 2. Trees

## 2.1 Binray Tree
- Types(**FCP**):
    - **Full**: 0/2 leaf nodes
        - `l = i + 1`
    - **Complete**: 
        1. all levels except last, filled
        2. last level has nodes as left as possible
    - **Perfect**: 
        1. 2 child
        2. same level leaves
        - Has 2<sup>h</sup> -1 nodes, where `h` is tree's height
- [Insertion](https://www.geeksforgeeks.org/insertion-in-a-binary-tree-in-level-order/)
- 
### Traversal
- **DFS**:
    - [Recursive](https://www.geeksforgeeks.org/tree-traversals-inorder-preorder-and-postorder/)
    - Iterative: 
        - preO: [1 stack](https://www.geeksforgeeks.org/iterative-preorder-traversal/) => `while(!s.empty()){print; pop; s.inert(left) && s.insert(right);}`
        - inO : [1 stack](https://www.geeksforgeeks.org/inorder-tree-traversal-without-recursion/) => `while(left){s.push(node)}; `
        - postO: [1 stack](https://www.geeksforgeeks.org/iterative-postorder-traversal-using-stack/) | [2 stacks](https://www.geeksforgeeks.org/iterative-postorder-traversal/)
    - given preO, construct *BST* : [see both](https://www.geeksforgeeks.org/construct-bst-from-given-preorder-traversa/): O(n<sup>2</sup>) & O(n)- `if( key > min && key < max )`
    - given preO & inO:
        - [Build BT](https://www.geeksforgeeks.org/full-and-complete-binary-tree-from-given-preorder-and-postorder-traversals/)
        - [find postO](https://www.geeksforgeeks.org/print-postorder-from-given-inorder-and-preorder-traversals/)
    - check if given preO, inO, posO are of same BT : [Build Tree](https://www.geeksforgeeks.org/check-if-given-preorder-inorder-and-postorder-traversals-are-of-same-tree/)-O(n<sup>2</sup>) | [use `len` var in preO to check in postO & inO](https://www.geeksforgeeks.org/check-if-given-preorder-inorder-and-postorder-traversals-are-of-same-tree-set-2/)- O(1) space
    - `*` [populate inO successor as next node](https://www.geeksforgeeks.org/populate-inorder-successor-for-all-nodes/) => **reverse order traversal**
        ```cpp
            Node *x = NULL;  
            if (p)  
            {   populateNext(p->right);  
                p->next = x;  
                x = p;  
                populateNext(p->left);  
            }
        ```
- **BFS** / Level Order Traversal:
    - [queue](https://www.geeksforgeeks.org/level-order-tree-traversal/): O(n)
    - [Height-wise](https://www.geeksforgeeks.org/level-order-tree-traversal/): O(n<sup>2</sup>)
    - [line by line](https://www.geeksforgeeks.org/level-order-traversal-line-line-set-3-using-one-queue/) -uses `Q.size()`   
    - [spiral](https://www.geeksforgeeks.org/level-order-traversal-in-spiral-form/)
        - Height-wise
        - Iterative: using **2 stacks**
    - [reverse order](https://www.geeksforgeeks.org/reverse-level-order-traversal/)
        - Height-wise
        - Iterative: using **1Stack & 1 Queue**
- Vertical order traversal
    - [Map Based](https://www.geeksforgeeks.org/print-binary-tree-vertical-order-set-2/)
    - [Level Order](https://www.geeksforgeeks.org/print-a-binary-tree-in-vertical-order-set-3-using-level-order-traversal/): Queue based
- Diagonal traversal
    - [Map](https://www.geeksforgeeks.org/diagonal-traversal-of-binary-tree/)
    - [Queue](https://www.geeksforgeeks.org/iterative-diagonal-traversal-binary-tree/)
- Views:
    - [Left](https://www.geeksforgeeks.org/print-left-view-binary-tree/)
    - [Right](https://www.geeksforgeeks.org/print-right-view-binary-tree-2/)
    - [Top](https://www.geeksforgeeks.org/print-nodes-in-the-top-view-of-binary-tree-set-3/)
    - [Bottom](https://www.geeksforgeeks.org/bottom-view-binary-tree/)
- `*` [Boundary Traversal](https://www.geeksforgeeks.org/boundary-traversal-of-binary-tree/)
### Conversion
- [Sorted DLL to BT](https://www.geeksforgeeks.org/in-place-conversion-of-sorted-dll-to-balanced-bst/) : 2 methods
- [BT to Sum Tree](https://www.geeksforgeeks.org/convert-a-given-tree-to-sum-tree/)
    ```cpp
    int f(node *Node)  
    {  
        if(Node == NULL)return 0;  
        int old_val = Node->data;  
        Node->data = f(Node->left) + f(Node->right);  
        return Node->data + old_val;  
    }  
    ```
- [BT to Mirror Tree](https://www.geeksforgeeks.org/write-an-efficient-c-function-to-convert-a-tree-into-its-mirror-tree/)
- * [Ternary exp to BT](https://www.geeksforgeeks.org/convert-ternary-expression-binary-tree/)
    ```cpp
        Node * root =newNode(str[i]); 
        if(i==str.length()-1) return root; 
        i++; 
        if(str[i]=='?') 
        { i++; 
          root->left = convertExpression(str,i); 
          i++; 
          root->right = convertExpression(str,i); 
          return root; 
        } 
        else return root; 
    ```
- `*` [BT to BST](https://www.geeksforgeeks.org/binary-tree-to-binary-search-tree-conversion/) => Get inO, sort it, use it to construct to BST
- [Min swaps reqd to convert BT to BST](https://www.geeksforgeeks.org/minimum-swap-required-convert-binary-tree-binary-search-tree/) :get inorder & count [#swaps to sort an array](https://www.geeksforgeeks.org/minimum-number-swaps-required-sort-array/)
### Check
- [is SumTree?](https://www.geeksforgeeks.org/check-if-a-given-binary-tree-is-sumtree/)
- [is SubTree?](https://www.geeksforgeeks.org/check-if-a-binary-tree-is-subtree-of-another-binary-tree/)
    ```cpp
    bool isSubtree(node *T, node *S)  
    {  
        if (S == NULL) return true;  
        if (T == NULL) return false;  
        if (areIdentical(T, S)) return true;  
        return isSubtree(T->left, S) ||isSubtree(T->right, S);  
    }  
    ```
- [Check if 2 nodes are at same level](https://www.geeksforgeeks.org/check-leaves-level/)
- [if Cousins?](https://www.geeksforgeeks.org/check-two-nodes-cousins-binary-tree/)
- [is perfectBT?](https://www.geeksforgeeks.org/check-weather-given-binary-tree-perfect-not/)
- [is fullBT?](https://www.geeksforgeeks.org/check-whether-binary-tree-full-binary-tree-not/)
- [is height Balanced?](https://www.geeksforgeeks.org/check-given-binary-tree-follows-height-property-red-black-tree/)
- [are identical trees?](https://www.geeksforgeeks.org/iterative-function-check-two-trees-identical/)
- [are mirror trees?](https://www.geeksforgeeks.org/check-if-two-trees-are-mirror/)
- [is given graph a tree?](https://www.geeksforgeeks.org/check-given-graph-tree/)
    1. No cycle : run BFS/DFS from any node & check vis[]
    2. isConnected: : run BFS/DFS to check all vertices reachable or not
### Print
- [longest leaf to leaf path](https://www.geeksforgeeks.org/print-longest-leaf-leaf-path-binary-tree/)
- `*` [root to given node path](https://www.geeksforgeeks.org/print-path-root-given-node-binary-tree/) ::Backtrack
### Summation
- `*` [Sum oflongest root to leaf path](https://www.geeksforgeeks.org/sum-nodes-longest-path-root-leaf-node/)
- [find maxPathSum b/w 2 nodes](https://www.geeksforgeeks.org/find-maximum-path-sum-in-a-binary-tree/)
- [check if root to leaf path == `k`](https://www.geeksforgeeks.org/check-root-leaf-path-given-sequence/)
### LCA
- `*` [find LCA](https://www.geeksforgeeks.org/lowest-common-ancestor-binary-tree-set-1/)
    ```cpp
        if (root == NULL) return NULL; 
        if (root->key == n1 || root->key == n2) return root; 
        Node *left_lca  = findLCA(root->left, n1, n2); 
        Node *right_lca = findLCA(root->right, n1, n2); 
        if (left_lca && right_lca) return root; 
        return (left_lca != NULL)? left_lca: right_lca; 
    ```
### Misc
- `*` [Delete a node](https://www.geeksforgeeks.org/deletion-binary-tree/)
- [Delete a BT](https://www.geeksforgeeks.org/write-a-c-program-to-delete-a-tree/)
- [Diameter](https://www.geeksforgeeks.org/diameter-of-a-binary-tree/) `return max(height(tree->left)+height(tree->right)+1, max(diameter(tree->left),diameter(tree->right)))`
- [Deepest Node](https://www.geeksforgeeks.org/find-deepest-node-binary-tree/)
- `*` [Connect Nodes @SameLevel](https://www.geeksforgeeks.org/connect-nodes-level-level-order-traversal/)

## 2.2 BST
- [Insertion](https://www.geeksforgeeks.org/binary-search-tree-set-1-search-and-insertion/)
- [Deletion](https://www.geeksforgeeks.org/binary-search-tree-set-2-delete/)
- [BST vs HashTable](https://www.geeksforgeeks.org/advantages-of-bst-over-hash-table/):
    - Where [HashTables](https://www.geeksforgeeks.org/hashing-set-1-introduction/) win:: HashTables have O(1) for:
        1. Search
        2. Insert
        3. Delete
    - Where BST win:
        1. sorting (inO)
        2. Easier Range Queries
### Construct
- [from preO](https://www.geeksforgeeks.org/construct-bst-from-given-preorder-traversa/): O(n<sup>2</sup>) & O(n)- `if( key > min && key < max )`
- [from arr](https://www.geeksforgeeks.org/sorted-array-to-balanced-bst/) => `T(n) = 2T(n/2) + C` => `O(n)`
- [from sorted ll](https://www.geeksforgeeks.org/sorted-linked-list-to-balanced-bst/)
- `* ` [Construct all possible BSTs for keys 1 to N](https://www.geeksforgeeks.org/construct-all-possible-bsts-for-keys-1-to-n/)
- `* ` [BST to DLL](https://www.geeksforgeeks.org/in-place-convert-a-given-binary-tree-to-doubly-linked-list/) :: don't ignore!
- `* ` [Merge Two Balanced Binary Search Trees](https://www.geeksforgeeks.org/merge-two-balanced-binary-search-trees/):
    - Insert elements from 1st to 2nd BST: `mLog(m+n-1)`
    - Sort inO's & merge & construct BST: `O(m+n)`
    - Convert BSTs to DLLs, merge, construct BST: `O(m+n)`
### Check & Search
- [Check BST](https://www.geeksforgeeks.org/a-program-to-check-if-a-binary-tree-is-bst-or-not/) :
    ```cpp
    bool f(node* node, int min, int max)  
    {  
        if (node==NULL) return true;  
        if (node->data < min || node->data > max) return false;  
        return (f(node->left, min, node->data-1) && f(node->right, node->data+1, max)); 
    }
    ```
- [LCA](https://www.geeksforgeeks.org/lowest-common-ancestor-in-a-binary-search-tree/)
- `* `[Find k-th smallest element](https://www.geeksforgeeks.org/find-k-th-smallest-element-in-bst-order-statistics-in-bst/):
    1. inO
    2. Keep rank(#) of elements: if(#root > k =>search in right)
- [Find pair with given sum](https://www.geeksforgeeks.org/find-a-pair-with-given-sum-in-bst/):
    - Array
    - `* `In-place:(*Inorder and Reverse Inorder traversal*) 2 nodes problem, starting @leftmost & rightmost
- [Find Median in O(n) time & O(1) space](https://www.geeksforgeeks.org/find-median-bst-time-o1-space/) -similar to k-th smallest; maintain ranks
- [Find closest element](https://www.geeksforgeeks.org/find-closest-element-binary-search-tree/)(node with min absolute diff)
- [inO successor](https://www.geeksforgeeks.org/inorder-successor-in-binary-search-tree/)
### Misc
- `* `[2 nodes swapped, correct BST](https://www.geeksforgeeks.org/fix-two-swapped-nodes-of-bst/) ::3 pointer problem
- [Print common nodes in 2 BSTs](https://www.geeksforgeeks.org/print-common-nodes-in-two-binary-search-trees/)
- [Count inversions in Array](https://www.geeksforgeeks.org/count-inversions-in-an-array-set-2-using-self-balancing-bst/)
- [Rank of element in stream](https://www.geeksforgeeks.org/rank-element-stream/)
- [Minimum Possible value of |ai + aj – k| for given array and k](https://www.geeksforgeeks.org/minimum-possible-value-ai-aj-k-given-array-k/)

## 2.3 Adv Trees
- ### Segment Tree
    - [HackerEarth Tut](https://www.hackerearth.com/practice/data-structures/advanced-data-structures/segment-trees/tutorial/)
        - Build: `O(n)`
            ```cpp
            void build(int node, int start, int end)
            {
                if(start == end)
                {
                    tree[node] = A[start];
                }
                else
                {
                    int mid = (start + end) / 2;
                    build(2*node, start, mid);
                    build(2*node+1, mid+1, end);
                    tree[node] = tree[2*node] + tree[2*node+1];
                }
            }
            ```
        - Update(at `idx`): `O(logn)`
            ```cpp
            void update(int node, int start, int end, int idx, int val)
            {
                if(start == end)
                {
                    A[idx] += val;
                    tree[node] += val;
                }
                else
                {
                    int mid = (start + end) / 2;
                    if(start <= idx and idx <= mid)
                    {
                        update(2*node, start, mid, idx, val);
                    }
                    else
                    {
                        update(2*node+1, mid+1, end, idx, val);
                    }
                    tree[node] = tree[2*node] + tree[2*node+1];
                }
            }
            ```
        - Query: `O(logn)`
            ```cpp
            int query(int node, int start, int end, int l, int r)
            {
                if(r < start or end < l)
                {
                    return 0;
                }
                if(l <= start and end <= r)
                {
                    return tree[node];
                }
                int mid = (start + end) / 2;
                int p1 = query(2*node, start, mid, l, r);
                int p2 = query(2*node+1, mid+1, end, l, r);
                return (p1 + p2);
            }
            ```
        - [Lazy Propagation](https://www.hackerearth.com/practice/notes/segment-tree-and-lazy-propagation/)

- ### Self Balancing Trees:
    -  ### AVL Tree
        - [link](https://www.geeksforgeeks.org/avl-tree-set-1-insertion/)
        - is a BST when diff b/w heights of left and right subtrees cannot be more than one for all nodes.
        - Vs Red Black Tree:
            - when search-heavy: AVL
            - when insertion/deletion heavy: Red-Black(as AVL involves rotation)
    - ### Red Black Tree
        - [link](https://www.geeksforgeeks.org/red-black-tree-set-1-introduction-2/)
        - Rules:
            1) Every node has a color either red or black.
            2) Root of tree is always black.
            3) There are no two adjacent red nodes (A red node cannot have a red parent or red child).
            4) Every path from a node (including root) to any of its descendant NULL node has the same number of black nodes.
- ### Trie
    - [struct](https://www.geeksforgeeks.org/trie-insert-and-search/):
        ```cpp
        struct TrieNode 
        { 
            struct TrieNode *children[ALPHABET_SIZE]; 
            bool isEndOfWord; 
        }; 
        ```
    - insert & search:
        ```cpp
        void insert(struct TrieNode *root, string key) 
        { 
            struct TrieNode *pCrawl = root; 
            for (int i = 0; i < key.length(); i++) 
            { 
                int index = key[i] - 'a'; 
                if (!pCrawl->children[index]) 
                    pCrawl->children[index] = getNode(); 
                pCrawl = pCrawl->children[index]; 
            } 
            pCrawl->isEndOfWord = true; 
        } 
        bool search(struct TrieNode *root, string key) 
        { 
            struct TrieNode *pCrawl = root; 
            for (int i = 0; i < key.length(); i++) 
            { 
                int index = key[i] - 'a'; 
                if (!pCrawl->children[index]) 
                    return false; 
                pCrawl = pCrawl->children[index]; 
            } 
            return (pCrawl != NULL && pCrawl->isEndOfWord); 
        } 
        ```
    - [Longest Common Prefix](https://www.geeksforgeeks.org/longest-common-prefix-using-trie/)
    - [Minimum XOR Value Pair](https://www.geeksforgeeks.org/minimum-xor-value-pair/)
- ### BIT/Fenwick Tree
- ### XOR List
## 2.4 Heaps
- Max Heap: `pq<int>P`
- Min Heap: `pq<int, vi, pii>P`
- [Time Complexities](https://www.geeksforgeeks.org/time-complexity-of-building-a-heap/):
    - Heapify: `O(logn)`
    - Building a heap: `O(n)`
- [Heap Sort](https://www.geeksforgeeks.org/heap-sort/) : `O(logn)`
- [Median of Stream of Running Integers](https://www.geeksforgeeks.org/median-of-stream-of-running-integers-using-stl/)
- [Connect n ropes with minimum cost](https://www.geeksforgeeks.org/connect-n-ropes-minimum-cost/)
- [Largest Derangement of a Sequence](https://www.geeksforgeeks.org/largest-derangement-sequence/)

<hr>

# 3.A Stacks
- ### Implementation
    - [Implement Queue using Stack](https://www.geeksforgeeks.org/queue-using-stacks/):
        - 2 stacks
        - 1 stack (rec)
            ```cpp
            int deQueue() 
                { if (s.empty()){exit(0);} 
                    int x = s.top(); 
                    s.pop(); 
                    if (s.empty()) return x; 
                    int item = deQueue(); 
                    s.push(x); 
                    return item; 
                } 
            ```
    - Implement Stack using Queue:
    - [Design stack with `getMin()` in `O(1)` time & `O(1)` space](https://www.geeksforgeeks.org/design-a-stack-that-supports-getmin-in-o1-time-and-o1-extra-space/)
- ### Operation
    - Reverse a stack
        - [Using another stack](https://www.geeksforgeeks.org/reverse-stack-without-using-extra-space/)
        - [Recursion](https://www.geeksforgeeks.org/reverse-a-stack-using-recursion/)
    - Sort a stack
        - [Using another stack](https://www.geeksforgeeks.org/sort-stack-using-temporary-stack/)
        - [Recursion](https://www.geeksforgeeks.org/sort-a-stack-using-recursion/)
- ### Questions
    - [Stock-span problem](https://www.geeksforgeeks.org/the-stock-span-problem/) :left mei kitne mujhse <= hai?
        ```cpp
            stack<int> st; 
            st.push(0); 
            S[0] = 1; 
            for (int i = 1; i < n; i++) { 
                while (!st.empty() && price[st.top()] <= price[i]) st.pop(); 
                S[i] = (st.empty()) ? (i + 1) : (i - st.top()); 
                st.push(i); 
            } 
        ```
    - [Check for balanced paranthesis](https://www.geeksforgeeks.org/check-for-balanced-parentheses-in-an-expression/)
    - [Next Greater Element](https://www.geeksforgeeks.org/next-greater-element/)
    - [Celebrity Problem](https://www.geeksforgeeks.org/the-celebrity-problem/)
    - [Arithmetic expression evaluation](https://www.geeksforgeeks.org/arithmetic-expression-evalution/)
    - [Merge overlapping intervals](https://www.geeksforgeeks.org/merging-intervals/)
    - [Largest Rect. area in Histogram](https://www.geeksforgeeks.org/largest-rectangle-under-histogram/)
        ```cpp
        while (i < n) 
            { 
                if (s.empty() || hist[s.top()] <= hist[i]) s.push(i++); 
                else
                {   tp = s.top();  // store the top index 
                    s.pop();  // pop the top 
                    area_with_top = hist[tp] * (s.empty() ? i : i - s.top() - 1); 
                    if (max_area < area_with_top) max_area = area_with_top; 
                } 
            } 
            while (s.empty() == false) 
            { 
                tp = s.top(); 
                s.pop(); 
                area_with_top = hist[tp] * (s.empty() ? i : i - s.top() - 1); 
                if (max_area < area_with_top) max_area = area_with_top; 
            } 
        ```
    - [Length of largest valid substring](https://www.geeksforgeeks.org/length-of-the-longest-valid-substring/)
    - [Min number of bracket reversals needed to make an expression balanced](https://www.geeksforgeeks.org/minimum-number-of-bracket-reversals-needed-to-make-an-expression-balanced/)

# 3.B Queues
- ### Implementation
    - [DLL implementation of Queue](https://www.geeksforgeeks.org/implementation-deque-using-doubly-linked-list/)
- ### Operation
    - Reverse 
        - [itr](https://www.geeksforgeeks.org/reversing-a-queue/)
        - [recursive](https://www.geeksforgeeks.org/reversing-queue-using-recursion/)
- ### Questions
    - [LRU cache](https://www.geeksforgeeks.org/lru-cache-implementation/)
    - [Max element in sliding window of size K](https://www.geeksforgeeks.org/sliding-window-maximum-maximum-of-all-subarrays-of-size-k/)
    - First non-repeating element in stream
    - [Min time required to rot all oranges](https://www.geeksforgeeks.org/minimum-time-required-so-that-all-oranges-become-rotten/)
    - [Petrol pump problem](https://www.geeksforgeeks.org/find-a-tour-that-visits-all-stations/)
    - [Find the largest multiple of 3](https://www.geeksforgeeks.org/find-the-largest-number-multiple-of-3/)
    - [Non-repeating character in a stream](https://www.geeksforgeeks.org/queue-based-approach-for-first-non-repeating-character-in-a-stream/)

<hr>

# 4. Search
- ## Binary Search
    - Algo:
        ```cpp
        if (r >= l) { 
                int mid = l + (r - l) / 2; 
                if (arr[mid] == x) return mid; 
                if (arr[mid] > x) return binarySearch(arr, l, mid - 1, x); 
                return binarySearch(arr, mid + 1, r, x); 
            } 
        ```
    - Median of 2 sorted array
        - [Same size](https://www.geeksforgeeks.org/median-of-two-sorted-arrays/)
        - [Diff size](https://www.geeksforgeeks.org/median-of-two-sorted-arrays-of-different-sizes/)
    - Median of Array
    - [Kth smallest element in row & column-wise sorted matrix](https://www.geeksforgeeks.org/kth-smallest-element-in-a-row-wise-and-column-wise-sorted-2d-array-set-1/)
    - Matrix madian
    - Square root of x
    - [Make all array elements equal with minimum cost](https://www.geeksforgeeks.org/make-array-elements-equal-minimum-cost/)
    - [Find the Missing Number](https://www.geeksforgeeks.org/find-the-missing-number/)
    - [Search an element in a sorted and rotated array](https://www.geeksforgeeks.org/search-an-element-in-a-sorted-and-pivoted-array/)
    - [Two elements whose sum is closest to zero](https://www.geeksforgeeks.org/two-elements-whose-sum-is-closest-to-zero/)
    - [Find the repeating and the missing](https://www.geeksforgeeks.org/find-a-repeating-and-a-missing-number/)
    - [Find a peak element](https://www.geeksforgeeks.org/find-a-peak-in-a-given-array/)
    - [Search in an almost sorted array](https://www.geeksforgeeks.org/search-almost-sorted-array/)
    - [Find the first repeating element in an array of integers](https://www.geeksforgeeks.org/find-first-repeating-element-array-integers/)
    - [Find common elements in three sorted arrays](https://www.geeksforgeeks.org/find-common-elements-three-sorted-arrays/)
    - [Count 1’s in a sorted binary array](https://www.geeksforgeeks.org/count-1s-sorted-binary-array/)
    - [Find the element that appears once in a sorted array](https://www.geeksforgeeks.org/find-the-element-that-appears-once-in-a-sorted-array/) -#ShareChat
    - [Find the odd appearing element](https://www.geeksforgeeks.org/find-the-element-that-odd-number-of-times-in-olog-n-time/)
    - [Find the largest three elements in an array](https://www.geeksforgeeks.org/find-the-largest-three-elements-in-an-array/)
- ## String Search
    - `is_permutations()` is used to check if two containers like string and vector are permutation of each other
        - `is_permutation(v1.begin(), v1.end(), v2.begin())`
        - [Given a pattern and a text, find all occurrences of pattern and its anagrams in text](https://www.geeksforgeeks.org/is_permutation-c-application-anagram-search/)
            ```cpp
            for (int i=0; i<=t_len-p_len; i++) 
                    // Check if substring text[i..i+p_len] is a permutation of pat[]. 
                    // Three parameters are : 
                    // 1) Beginning position of current window in text 
                    // 2) End position of current window in text 
                    // 3) Pattern to be mathced with current window 
                    if (is_permutation(text.begin()+i, text.begin()+i+p_len, pat.begin())) count++; 
            ```
    - [KMP](https://www.quora.com/What-is-the-best-resource-to-learn-KMP-Algorithm)
    - [Z-algo](https://www.geeksforgeeks.org/z-algorithm-linear-time-pattern-searching-algorithm/) :`O(m + n)` 
    - [Anagram substring search](https://www.geeksforgeeks.org/anagram-substring-search-search-permutations/)
    - [Search a Word in a 2D Grid of characters](https://www.geeksforgeeks.org/search-a-word-in-a-2d-grid-of-characters/)
<hr>

# 5. Sort
- ## Algos:
    - External Sorting
    - 
    | Algo      | Best  | Avg. | Worst |
    |:---------:|:-----:|:----:|:-----:|
    |[Selection](https://www.geeksforgeeks.org/selection-sort/) | &ohm;(n<sup>2</sup>) | &theta;(n<sup>2</sup>) | O(n<sup>2</sup>)|
    |[Bubble](https://www.geeksforgeeks.org/bubble-sort/) |&ohm;(n) |&theta;(n<sup>2</sup>) | O(n<sup>2</sup>)|
    |[Insertion](https://www.geeksforgeeks.org/insertion-sort/) |&ohm;(n) |&theta;(n<sup>2</sup>) |O(n<sup>2</sup>) |
    |[Merge](https://www.geeksforgeeks.org/merge-sort/) |&ohm;(nlogn) |&theta;(nlogn) |O(nlogn) |
    |[Quick](https://www.geeksforgeeks.org/quick-sort/) |&ohm;(nlogn) |&theta;(nlogn)  |O(n<sup>2</sup>) |
    |[Heap](https://www.geeksforgeeks.org/heap-sort/) |&ohm;(nlogn) |&theta;(nlogn)  |O(nlogn) |
    |[Counting](https://www.geeksforgeeks.org/counting-sort/) |O(n+k) | | |
    |[Radix](https://www.geeksforgeeks.org/radix-sort/) |&ohm;(nk) |&theta;(nk)  |O(nk) |
    |[Bucket](https://www.geeksforgeeks.org/bucket-sort-2/) |&ohm;(n+k) |&theta;(n+k)  |O(n<sup>2</sup>) |
- ## Questions:
    - [Count inversions in array](https://www.geeksforgeeks.org/counting-inversions/) -MergeSort
    - [Sort an array of 0s, 1s and 2s](https://www.geeksforgeeks.org/sort-an-array-of-0s-1s-and-2s/)
    - [Sort a nearly sorted (or K sorted) array](https://www.geeksforgeeks.org/nearly-sorted-algorithm/) -InsertionSort
    - [Find number of pairs (x, y) in an array such that x^y > y^x](https://www.geeksforgeeks.org/find-number-pairs-xy-yx/)
    - [Count all distinct pairs with difference equal to k](https://www.geeksforgeeks.org/count-pairs-difference-equal-k/)
    - [Given a sorted array and a number x, find the pair in array whose sum is closest to x](https://www.geeksforgeeks.org/given-sorted-array-number-x-find-pair-array-whose-sum-closest-x/)
    - [Sort an array in wave form](https://www.geeksforgeeks.org/sort-array-wave-form-2/)
    - [Find the point where maximum intervals overlap](https://www.geeksforgeeks.org/find-the-point-where-maximum-intervals-overlap/)
    - [Sorting an array of dates](https://www.geeksforgeeks.org/how-to-sort-an-array-of-dates-in-cc/)
    - [Minimum sum of two numbers formed from digits of an array](https://www.geeksforgeeks.org/minimum-sum-two-numbers-formed-digits-array/)
    - [Find a permutation that causes worst case of Merge Sort](https://www.geeksforgeeks.org/find-a-permutation-that-causes-worst-case-of-merge-sort/)
    - [Rearrange positive and negative numbers with constant extra space](https://www.geeksforgeeks.org/rearrange-positive-and-negative-numbers/)
    - [Count distinct occurrences as a subsequence](https://www.geeksforgeeks.org/count-distinct-occurrences-as-a-subsequence/)
    - [Minimum number of swaps required to sort an array](https://www.geeksforgeeks.org/minimum-number-swaps-required-sort-array/)
    - [Number of swaps to sort when only adjacent swapping allowed](https://www.geeksforgeeks.org/number-swaps-sort-adjacent-swapping-allowed/)
    - [Minimum swaps to make two arrays identical](https://www.geeksforgeeks.org/minimum-swaps-to-make-two-array-identical/)
    - [Count minimum number of subsets with consecutive numbers](https://www.geeksforgeeks.org/count-minimum-number-subsets-subsequences-consecutive-numbers/)
    - [Chocolate Distribution Problem](https://www.geeksforgeeks.org/chocolate-distribution-problem/)
    - [Check whether Arithmetic Progression can be formed from the given array](https://www.geeksforgeeks.org/check-whether-arithmetic-progression-can-formed-given-array/)
    - [Find all triplets with zero sum](https://www.geeksforgeeks.org/find-triplets-array-whose-sum-equal-zero/)
    - [Sort an array of large numbers](https://www.geeksforgeeks.org/sort-array-large-numbers/)
    - [Program to check if an array is sorted or not](https://www.geeksforgeeks.org/program-check-array-sorted-not-iterative-recursive/)

<hr>

# 6. Backtrack
- ## Standard 
    - [The Knight’s tour problem](https://www.geeksforgeeks.org/the-knights-tour-problem-backtracking-1/)
    - [Rat in a Maze](https://www.geeksforgeeks.org/rat-in-a-maze-backtracking-2/)
    - [N Queen Problem](https://www.geeksforgeeks.org/n-queen-problem-backtracking-3/)
    - [Subset Sum](https://www.geeksforgeeks.org/subset-sum-backtracking-4/)
    - [m Coloring Problem](https://www.geeksforgeeks.org/m-coloring-problem-backtracking-5/)
    - [Hamiltonian Cycle](https://www.geeksforgeeks.org/hamiltonian-cycle-backtracking-6/)
    - [Sudoku](https://www.geeksforgeeks.org/sudoku-backtracking-7/)
    - [Magnet Puzzle](https://www.geeksforgeeks.org/magnet-puzzle-backtracking-9/)
    - [Remove Invalid Parentheses](https://www.geeksforgeeks.org/remove-invalid-parentheses/)
    - [print all permutations of a given string](https://www.geeksforgeeks.org/write-a-c-program-to-print-all-permutations-of-a-given-string/)
    - [Print all possible paths from top left to bottom right of a matrix](https://www.geeksforgeeks.org/print-all-possible-paths-from-top-left-to-bottom-right-of-a-mxn-matrix/)
- ## Questions
    - [Combinational Sum](https://www.geeksforgeeks.org/combinational-sum/)
    - [Find all subsets](https://www.geeksforgeeks.org/backtracking-to-find-all-subsets/)
    - [Find all distinct subsets of a given set](https://www.geeksforgeeks.org/find-distinct-subsets-given-set/)
    - [Power Set in Lexicographic order](https://www.geeksforgeeks.org/powet-set-lexicographic-order/)
    - [Check if a given string is sum-string](https://www.geeksforgeeks.org/check-given-string-sum-string/)
    - [Word Break Problem](https://www.geeksforgeeks.org/minimize-number-unique-characters-string/)
    - [Minimize number of unique characters in string](https://www.geeksforgeeks.org/minimize-number-unique-characters-string/)
    - [Count all possible paths between two vertices](https://www.geeksforgeeks.org/count-possible-paths-two-vertices/)
    - [Find shortest safe route in a path with landmines](https://www.geeksforgeeks.org/find-shortest-safe-route-in-a-path-with-landmines/)

<hr>

# 6. Greedy

- ## Standard
    - [Activity Selection](https://www.geeksforgeeks.org/activity-selection-problem-greedy-algo-1/)
    - [Job Sequencing](https://www.geeksforgeeks.org/job-sequencing-problem/) : !simple & !similar to Activity Selection
    - [Egyptian Fraction](https://www.geeksforgeeks.org/greedy-algorithm-egyptian-fraction/)
    - [Huffman Coding](https://www.geeksforgeeks.org/huffman-coding-greedy-algo-3/)
    - [Water Connection Problem](https://www.geeksforgeeks.org/water-connection-problem/)
    - [Policemen catch thieves](https://www.geeksforgeeks.org/policemen-catch-thieves/)
    - [Minimum Swaps for Bracket Balancing](https://www.geeksforgeeks.org/minimum-swaps-bracket-balancing/)
    - [Fitting Shelves Problem](https://www.geeksforgeeks.org/fitting-shelves-problem/)
    - [Assign Mice to Holes](https://www.geeksforgeeks.org/assign-mice-holes/)

- ## Misc
    - [Fractional Knapsack](https://www.geeksforgeeks.org/fractional-knapsack-problem/)
    - [Minimum product subset of an array](https://www.geeksforgeeks.org/minimum-product-subset-array/)
    - [Maximize the sum of arr[i]*i](https://www.geeksforgeeks.org/maximize-sum-arrii/)
    - [Maximum sum of absolute difference of an array](https://www.geeksforgeeks.org/maximum-sum-absolute-difference-array/)
    - [Maximum sum of increasing order elements from n arrays](https://www.geeksforgeeks.org/maximum-sum-increasing-order-elements-n-arrays/)
    - [Partition into two subarrays of lengths k and (N – k) such that the difference of sums is maximum](https://www.geeksforgeeks.org/partition-into-two-subarrays-of-lengths-k-and-n-k-such-that-the-difference-of-sums-is-maximum/)
    - [Minimum sum of product of two arrays](https://www.geeksforgeeks.org/minimum-sum-product-two-arrays/)
    - [Minimum operations to make GCD of array a multiple of k](https://www.geeksforgeeks.org/minimum-operations-make-gcd-array-multiple-k/)
    - [Minimum sum of absolute difference of pairs of two arrays](https://www.geeksforgeeks.org/minimum-sum-absolute-difference-pairs-two-arrays/)
    - [Find Minimum number of Coins](https://www.geeksforgeeks.org/greedy-algorithm-to-find-minimum-number-of-coins/)
    - [Split n into maximum composite numbers](https://www.geeksforgeeks.org/split-n-maximum-composite-numbers/)
    - [Buy-Sell Stocks](https://www.geeksforgeeks.org/buy-maximum-stocks-stocks-can-bought-th-day/)
    - [Min Cash Flow](https://www.geeksforgeeks.org/minimize-cash-flow-among-given-set-friends-borrowed-money/)
    - [Minimum rotations to unlock a circular lock](https://www.geeksforgeeks.org/minimum-rotations-unlock-circular-lock/)
    - [Paper Cut into Minimum Number of Squares](https://www.geeksforgeeks.org/paper-cut-minimum-number-squares/)
    - [Connect n ropes with minimum cost](https://www.geeksforgeeks.org/connect-n-ropes-minimum-cost/)
    - [Rearrange characters in a string such that no two adjacent are same](https://www.geeksforgeeks.org/rearrange-characters-string-no-two-adjacent/)
    - [Check if it is possible to survive on Island](https://www.geeksforgeeks.org/survival/)

<hr>

# 7. DP
- [Tabulation vs Memoization](https://www.geeksforgeeks.org/tabulation-vs-memoization/)
- ## Basic
    - [Ugly Numbers](https://www.geeksforgeeks.org/ugly-numbers/)
    - [Fibonacci Num](https://www.geeksforgeeks.org/program-for-nth-fibonacci-number/)
    - [Catalan Num](https://www.geeksforgeeks.org/program-nth-catalan-number/)
    - [Binom coeff](https://www.geeksforgeeks.org/binomial-coefficient-dp-9/)
    - [Tiling Prob](https://www.geeksforgeeks.org/tiling-problem/)
    - [Coin Change](https://www.geeksforgeeks.org/coin-change-dp-7/)
    - [Friends Pairing](https://www.geeksforgeeks.org/friends-pairing-problem/)
    - [Subset Sum Problem](https://www.geeksforgeeks.org/subset-sum-problem-dp-25/)
    - [Game:Choice of Area](https://www.geeksforgeeks.org/game-theory-choice-area/)
    - [Rod Cutting](https://www.geeksforgeeks.org/cutting-a-rod-dp-13/)
    - [Dominos Tiling- 2X1 on 3X1 board](https://www.geeksforgeeks.org/tiling-with-dominoes/)
    - [Painting Fence](https://www.geeksforgeeks.org/painting-fence-algorithm/)
    - [LIS: Longest Increasing Subsequence](https://www.geeksforgeeks.org/longest-increasing-subsequence-dp-3/)
    - [LCS: Longest Common Subsequence](https://www.geeksforgeeks.org/longest-common-subsequence-dp-4/)
    - [Printing LCS](https://www.geeksforgeeks.org/printing-longest-common-subsequence-set-2-printing/)
    - [LCS of 3 strings](https://www.geeksforgeeks.org/lcs-longest-common-subsequence-three-strings/) - 3D array
    - [Min Cost Path](https://www.geeksforgeeks.org/min-cost-path-dp-6/)
    - [Minimum number of jumps to reach end](https://www.geeksforgeeks.org/minimum-number-of-jumps-to-reach-end-of-a-given-array/)
    - [Count number of ways to reach a given score in a game](https://www.geeksforgeeks.org/count-number-ways-reach-given-score-game/)
    - [Count of different ways to express N as the sum of 1, 3 and 4](https://www.geeksforgeeks.org/count-ofdifferent-ways-express-n-sum-1-3-4/)
    - [Counts paths from a point to reach Origin](https://www.geeksforgeeks.org/counts-paths-point-reach-origin/)
    - [Count number of ways to cover a distance](https://www.geeksforgeeks.org/count-number-of-ways-to-cover-a-distance/)
    - [Count ways to divide circle using N non-intersecting chords](https://www.geeksforgeeks.org/count-ways-divide-circle-using-n-non-intersecting-chords/)
    - Kaden's Algo: [Largest Sum Contiguous Subarray](https://www.geeksforgeeks.org/largest-sum-contiguous-subarray/)
        ```cpp
        for (int i = 1; i < size; i++) 
        { 
                curr_max = max(a[i], curr_max+a[i]); 
                max_so_far = max(max_so_far, curr_max); 
        } 
        ```
- ## Medium
    - [0-1 Knapsack](https://www.geeksforgeeks.org/0-1-knapsack-problem-dp-10/)
    - [Unbounded Knapsack](https://www.geeksforgeeks.org/unbounded-knapsack-repetition-items-allowed/)
    - [Egg Dropping Puzzle](https://www.geeksforgeeks.org/egg-dropping-puzzle-dp-11/)
    - [Longest Palindromic Subsequence](https://www.geeksforgeeks.org/longest-palindromic-subsequence-dp-12/)
    - [Longest Repeating Subsequence](https://www.geeksforgeeks.org/longest-repeating-subsequence/)
    - [Largest sum Zigzag sequence in a matrix](https://www.geeksforgeeks.org/largest-sum-zig-zag-sequence-in-a-matrix/)
    - [Length of Longest Balanced Paranthesis Subsequence](https://www.geeksforgeeks.org/length-longest-balanced-subsequence/)
    - `* ` [Weighted Job Scheduling](https://www.geeksforgeeks.org/weighted-job-scheduling/)
    - `* `[Count Possible Decodings of a given Digit Sequence](https://www.geeksforgeeks.org/count-possible-decodings-given-digit-sequence/)
    - [Count number of ways to partition a set into k subsets](https://www.geeksforgeeks.org/count-number-of-ways-to-partition-a-set-into-k-subsets/)
    - [Count ways to assign unique cap to every person: **Bitmasking**](https://www.geeksforgeeks.org/bitmasking-and-dynamic-programming-set-1-count-ways-to-assign-unique-cap-to-every-person/)
    - [Maximum size subset with given sum](https://www.geeksforgeeks.org/maximum-size-subset-given-sum/)
    - [Maximum Product Subarray](https://www.geeksforgeeks.org/maximum-product-subarray-added-negative-product-case/)
    - [Minimum Cost To Make Two Strings Identical](https://www.geeksforgeeks.org/minimum-cost-make-two-strings-identical/)
    - [Minimum insertions to form a palindrome](https://www.geeksforgeeks.org/minimum-insertions-to-form-a-palindrome-dp-28/)
- ## Hard?
    - [Palindrome Partitioning](https://www.geeksforgeeks.org/palindrome-partitioning-dp-17/)
    - [Painter’s partition problem](https://www.geeksforgeeks.org/painters-partition-problem/)
    - [Matrix Chain Multiplication](https://www.geeksforgeeks.org/matrix-chain-multiplication-dp-8/)

<hr>

# 8. Graph
- `vector <int> adj[E];` `REP(i,0,V){ajd[x].pb(y);}`
- ## Algos
    - [BFS](https://www.hackerearth.com/practice/algorithms/graphs/breadth-first-search/tutorial/) | [DFS](https://www.hackerearth.com/practice/algorithms/graphs/depth-first-search/tutorial/) :: both `O(V+E)` when implemented with `adjList`
    - [MST](https://www.hackerearth.com/practice/algorithms/graphs/minimum-spanning-tree/tutorial/):
        - Kruskal's -`O(ElogV)`
        - Prim's -`O((V+E)logV)` :BFS with PQ
    - [Shortest Path](https://www.hackerearth.com/practice/algorithms/graphs/shortest-path-algorithms/tutorial/):
        - Bellman Ford - `O(V.E)`
        - Dijkstra - `O(V + ElogV)`
        - Floyd Warshall - `O(V^3)`
    - [Flood Fill](https://www.hackerearth.com/practice/algorithms/graphs/flood-fill-algorithm/tutorial/)
    - [Hamiltonian Path](https://www.hackerearth.com/practice/algorithms/graphs/hamiltonian-path/tutorial/)
    - Euler Path
    - [Topological Sort](https://www.hackerearth.com/practice/algorithms/graphs/topological-sort/tutorial/):
        ```cpp
        f(x){   //gives topological sort in t[]
            vis[x] = true;
            REP(nei of x){
                if(adj[x][i] not in vis){
                    f(adj[x][i]);
                }
            }
            T.insert_in_begin(x);
        }
        ```
- ## Questions
    - [Jumping Numbers](https://www.geeksforgeeks.org/print-all-jumping-numbers-smaller-than-or-equal-to-a-given-value/)
    - [Alien Dictionray](https://www.geeksforgeeks.org/given-sorted-dictionary-find-precedence-characters/)
    - [Water jug problem](https://www.geeksforgeeks.org/water-jug-problem-using-bfs/)
    - [ath in a Rectangle with Circles](https://www.geeksforgeeks.org/path-rectangle-containing-circles/)


<hr>

# 9. Two Poiters

# 10. Array
- `* ` Transpose: `(i,0,R)(j,i,c)swap(`A<sub>ij</sub>, A<sub>ji</sub>`)`
- `* ` Rotate Matrix 90<sup>o</sup>:
    1. Take transpose then (`AC` \ `CR`)
    - **C**lockwise: rev **R**ow
    - **A**nticlockwise: rev **C**ol
- kaden's [Max Sum cont subarr](https://www.geeksforgeeks.org/largest-sum-contiguous-subarray/)
- [Repeat & Missing Number](https://www.geeksforgeeks.org/find-a-repeating-and-a-missing-number/)
- [Pascal's Triangle](https://www.geeksforgeeks.org/pascal-triangle/)
- [Next Permutation](https://www.geeksforgeeks.org/find-the-next-lexicographically-greater-word-than-a-given-word/)
- [Next Palindrome](https://www.geeksforgeeks.org/given-a-number-find-next-smallest-palindrome-larger-than-this-number/)
- [Majority Element](https://www.geeksforgeeks.org/majority-element/) : Moore's voting algo
- [Max Path sum](https://www.geeksforgeeks.org/find-maximum-path-sum-in-a-binary-tree/)
- [Product Array Puzzle](https://www.geeksforgeeks.org/a-product-array-puzzle/) -antilog
- [Max contig. series of 1's](https://www.geeksforgeeks.org/find-zeroes-to-be-flipped-so-that-number-of-consecutive-1s-is-maximized/)
- [Container with most water](https://www.geeksforgeeks.org/container-with-most-water/)
- [Find maximum value of Sum( i*arr[i])](https://www.geeksforgeeks.org/find-maximum-value-of-sum-iarri-with-only-rotations-on-given-array-allowed/)
- [Move all zeroes to end of array](https://www.geeksforgeeks.org/move-zeroes-end-array-set-2-using-single-traversal/)
- [Rearrange positive and negative numbers](https://www.geeksforgeeks.org/rearrange-positive-and-negative-numbers/)
- [Find the largest three elements in an array](https://www.geeksforgeeks.org/find-the-largest-three-elements-in-an-array/)
- [Given an array arr[], find the maximum j – i such that arr[j] > arr[i]](https://www.geeksforgeeks.org/given-an-array-arr-find-the-maximum-j-i-such-that-arrj-arri/)
- [Find the closest pair from two sorted arrays](https://www.geeksforgeeks.org/given-two-sorted-arrays-number-x-find-pair-whose-sum-closest-x/)
- [Find zeroes to be flipped so that number of consecutive 1’s is maximized](https://www.geeksforgeeks.org/find-zeroes-to-be-flipped-so-that-number-of-consecutive-1s-is-maximized/)
- [Sort an array in wave form](https://www.geeksforgeeks.org/sort-array-wave-form-2/)
- `* `[Count Inversions in an array](https://www.geeksforgeeks.org/counting-inversions/)
- [Minimum number of swaps required to sort an array](https://www.geeksforgeeks.org/minimum-number-swaps-required-sort-array/)
- [Find whether an array is subset of another array](https://www.geeksforgeeks.org/find-whether-an-array-is-subset-of-another-array-set-1/)

<hr>


# 11. String

- [Longest Common Prefix](https://www.geeksforgeeks.org/longest-common-prefix-using-word-by-word-matching/)
- [Count & Say](https://www.geeksforgeeks.org/look-and-say-sequence/)
- [Min deletion reqd to make palindrome](https://www.geeksforgeeks.org/minimum-number-deletions-make-string-palindrome/)
- [atoi](https://www.geeksforgeeks.org/write-your-own-atoi/)
- [Roman to int](https://www.geeksforgeeks.org/converting-roman-numerals-decimal-lying-1-3999/)
- [Int to Roman](https://www.geeksforgeeks.org/converting-decimal-number-lying-between-1-to-3999-to-roman-numerals/)
- [Excel to row](https://www.geeksforgeeks.org/find-excel-column-number-column-title/)
- [Row to excel](https://www.geeksforgeeks.org/find-excel-column-name-given-number/)
- `* `[Recursively remove all duplicates in string](https://www.geeksforgeeks.org/remove-consecutive-duplicates-string/)
- [Smallest window that contains all characters of string itself](https://www.geeksforgeeks.org/smallest-window-contains-characters-string/)
- [Print words of a string in reverse order](https://www.geeksforgeeks.org/print-words-string-reverse-order/)
