<p align="center">

<br>
<!-- <img src="" data-canonical-src="MiP" /> -->
<br>
<br>
<a href="https://github.com/aayush4vedi/MyCompetitiveCoding/blob/master/MissionImplacement.md#notes"><img src="https://img.shields.io/badge/Notes-f39f37" alt="Notes"></a>
<a href="https://github.com/aayush4vedi/MyCompetitiveCoding/blob/master/MissionImplacement.md#1linked-list"><img src="https://img.shields.io/badge/Linked List-8FD400" alt="Linked List"></a>
<a href="https://github.com/aayush4vedi/MyCompetitiveCoding/blob/master/MissionImplacement.md#"><img src="https://img.shields.io/badge/Trees -FF5050" alt="Trees"></a>
<a href="https://github.com/aayush4vedi/MyCompetitiveCoding/blob/master/MissionImplacement.md#"><img src="https://img.shields.io/badge/Stack&Queue-0081AB" alt="Stack&Queue"></a>
<a href="https://github.com/aayush4vedi/MyCompetitiveCoding/blob/master/MissionImplacement.md#"><img src="https://img.shields.io/badge/Search-FD5240" alt="Search"></a>
<a href="https://github.com/aayush4vedi/MyCompetitiveCoding/blob/master/MissionImplacement.md#"><img src="https://img.shields.io/badge/Sort-614051" alt="Sort"></a>
<a href="https://github.com/aayush4vedi/MyCompetitiveCoding/blob/master/MissionImplacement.md#"><img src="https://img.shields.io/badge/BackTrack-253529" alt="BackTrack"></a>
<a href="https://github.com/aayush4vedi/MyCompetitiveCoding/blob/master/MissionImplacement.md#"><img src="https://img.shields.io/badge/Greedy-4997D0" alt="Greedy"></a>
<a href="https://https://github.com/aayush4vedi/MyCompetitiveCoding/blob/master/MissionImplacement.md#"><img src="https://img.shields.io/badge/DP-719B6A" alt="DP"></a>
<a href="https://github.com/aayush4vedi/MyCompetitiveCoding/blob/master/MissionImplacement.md#"><img src="https://img.shields.io/badge/Graph-4570E6" alt="Graph"></a>
<a href="https://github.com/aayush4vedi/MyCompetitiveCoding/blob/master/MissionImplacement.md#"><img src="https://img.shields.io/badge/Database-0081AB" alt=Array"></a>
<a href="https://github.com/aayush4vedi/MyCompetitiveCoding/blob/master/MissionImplacement.md#"><img src="https://img.shields.io/badge/String-FD5240" alt="String"></a>
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



