# Topics and Resources #

### [Interview Questions](https://ashayraut.files.wordpress.com/2014/05/interview-preparation-best-100-ashay-raut.pdf) | [Google Interview Ques](https://gist.github.com/KWMalik/3734578) | [Sorting: CS50](https://www.youtube.com/watch?v=EeQ8pwjQxTM&list=PLSwY8rzKAeZJOu6CnpdW10HquwgOP-5a7)

* ## Computational Geometry

  * **Orientation**
     * [To see if 2 lines intersect or not.](http://www.geeksforgeeks.org/check-if-two-given-line-segments-intersect/)Find all the 4 slopes  and check of opposite orientation of both the pairs.
  * **Convex Hull**
     * [Jarvis Algorithm](http://www.geeksforgeeks.org/convex-hull-set-1-jarviss-algorithm-or-wrapping/). Time Complexity: **n^2**
       1. Pick the leftmost point *P*
       2. Repeat until *P* is reached:
          * Next point *Q* is such that pair *(p,q,r)* is in anticlock [orientataion](http://www.geeksforgeeks.org/orientation-3-ordered-points/).
          * next[*P*] = *Q*
          * *P* = *Q*
              
          
    * [Graham's Algorithm](http://www.geeksforgeeks.org/convex-hull-set-2-graham-scan/). Time Complexity: **nlogn**
       1. Initialize bottom-most(leftmost, if multiple) point *P*.
       2. Sort all points w.r.t *P* to find the closed path.
       3. Move on the path and pick a point if counter-clock rotation found.
       
* ## DP
  ### Some cool links:
     * [DP:Novice to Advanced-Topcoder](https://www.topcoder.com/community/data-science/data-science-tutorials/dynamic-programming-from-novice-to-advanced/)  Awesome thou art.
     * [everythingOnDP-codeforces](http://codeforces.com/blog/entry/43256)-Noobs don't try 
 * **[Fractional Knapsack](http://www.geeksforgeeks.org/fractional-knapsack-problem/)**
 * **[0-1 Knapsack problem](http://www.geeksforgeeks.org/knapsack-problem/)**
 
      Here's a short [video](https://www.youtube.com/watch?v=8LusJS5-AGo&list=PLrmLmBdmIlpsHaNTPP_jHHDx_os9ItYXr) to understand how to form a DP table.Implementation:
    ```cpp
    int knapsack(int n, int wmax, int val[], int wt[]){
       if(n==0 || wmax ==0){
       return 0;
       }
       else if(wt[n-1] > wmax) return knapsack(n-1, wmax, val, wt);
       else return max(val[n-1]+ knapsack(n-1, wmax- wt[n-1],val, wt), knapsack(n-1, wmax,val, wt));
    }
    ```
 * [Unbounded Knapsack (Repetition of items allowed)](http://www.geeksforgeeks.org/unbounded-knapsack-repetition-items-allowed/)
 * **[Longest Common Subsequence](http://www.geeksforgeeks.org/longest-common-subsequence/)**
 
      [Video Link](https://www.youtube.com/watch?v=NnD96abizww&list=PLrmLmBdmIlpsHaNTPP_jHHDx_os9ItYXr&index=2).
      
      And [here](http://www.geeksforgeeks.org/printing-longest-common-subsequence/) is is how to print it([my code](http://ide.geeksforgeeks.org/7Bj9wu
)).
 * Matrix Chain Multiplication 
     
     lite
 * **[Subset Sum Problem](http://www.geeksforgeeks.org/dynamic-programming-subset-sum-problem/)**
 
      [Video link](https://www.youtube.com/watch?v=s6FhG--P7z0&index=4&list=PLrmLmBdmIlpsHaNTPP_jHHDx_os9ItYXr)
        Just see this and move on.
        
     ```cpp
     if(j<set[i-1])
       subset[i][j] = subset[i-1][j];
     if (j >= set[i-1])
       subset[i][j] = subset[i-1][j] || subset[i - 1][j-set[i-1]];
     ```  
                                        
 * **[Optimal Binary Search Tree](http://www.geeksforgeeks.org/dynamic-programming-set-24-optimal-binary-search-tree/)**
 
    [Video link](https://www.youtube.com/watch?v=hgA4xxlVvfQ&list=PLrmLmBdmIlpsHaNTPP_jHHDx_os9ItYXr&t=-7)
    - [ ] TBDL
 * **[Coin Change](http://www.geeksforgeeks.org/dynamic-programming-set-7-coin-change/)**
  Simple shit
 *  **Longest Increasing Subsequence**
         
      - [n^2](http://www.geeksforgeeks.org/longest-increasing-subsequence/)
      - [nlogn](http://www.geeksforgeeks.org/longest-monotonically-increasing-subsequence-size-n-log-n/)
      - Examples:
          - [x] [ZigZag](https://community.topcoder.com/stat?c=problem_statement&pm=1259&rd=4493) : if(a[i].a[j]<0) z[i] = 1+max(d[i],d[j]);
          - [ ] [Bad Neighbours](https://community.topcoder.com/tc?module=ProblemDetail&rd=5009&pm=2402)
          - [ ] [Flower Garden](https://community.topcoder.com/tc?module=ProblemDetail&rd=5006&pm=1918)
          
 *  **[Minimum Edit Distance](http://www.geeksforgeeks.org/dynamic-programming-set-5-edit-distance/)**
 
       [Video](https://www.youtube.com/watch?v=We3YDTzNXEk&list=PLrmLmBdmIlpsHaNTPP_jHHDx_os9ItYXr&index=8)
      [my code](https://github.com/aayush4vedi/MyCompetitiveCoding/blob/master/editdist.cpp)
      
 *   **[Longest Palindrome Sequence](http://www.geeksforgeeks.org/dynamic-programming-set-12-longest-palindromic-subsequence/)**
 
       [Video](https://www.youtube.com/watch?v=_nCsPn7_OgI&list=PLrmLmBdmIlpsHaNTPP_jHHDx_os9ItYXr&index=9)
       [Nacheez ka code](https://github.com/aayush4vedi/MyCompetitiveCoding/blob/master/longestPalindrome.cpp)
 *   **[Weighted Job Scheduling Dynamic Programming](http://www.geeksforgeeks.org/weighted-job-scheduling/)**
       - sort by ending time and apply [LIS](http://www.geeksforgeeks.org/longest-increasing-subsequence/)
       - [Video](https://www.youtube.com/watch?v=cr6Ip0J9izc&index=12&list=PLrmLmBdmIlpsHaNTPP_jHHDx_os9ItYXr)
 *   **Egg Dropping Problem**
       Intresting one!
       This [video](https://www.youtube.com/watch?v=3hcaVyX00_4&list=PLrmLmBdmIlpsHaNTPP_jHHDx_os9ItYXr&index=13) is alone enough.
 *   **[Cutting Rod Problem](http://www.geeksforgeeks.org/dynamic-programming-set-13-cutting-a-rod/)**
            [Video](https://www.youtube.com/watch?v=IRwVmTmN6go)
 *   **[Minimum path cost](https://www.youtube.com/watch?v=lBRtnuxg-gU&index=20&list=PLrmLmBdmIlpsHaNTPP_jHHDx_os9ItYXr)**
       
       That *blow*(sigh!)
       - Examples:
           - [ ] [Chess Metric](https://community.topcoder.com/tc?module=ProblemDetail&rd=4482&pm=1592)
           - [x] [Avoid Road](https://community.topcoder.com/tc?module=ProblemDetail&rd=4709&pm=1889)
           - [ ] top->bottom->top [MiniPaint](https://community.topcoder.com/tc?module=ProblemDetail&rd=4710&pm=1996)
 
 *   **[Maximum Sum Rectangular Submatrix in Matrix ](https://www.youtube.com/watch?v=yCQN096CwWM&index=15&list=PLrmLmBdmIlpsHaNTPP_jHHDx_os9ItYXr)**
       Uses [kadane's algorithm](http://www.geeksforgeeks.org/largest-sum-contiguous-subarray/) for 2D array.
 
 *   **[K-th smallest element in array](http://www.geeksforgeeks.org/k-largestor-smallest-elements-in-an-array/)**
 *    **[Minimum number of railway sattions reqd](http://www.geeksforgeeks.org/minimum-number-platforms-required-railwaybus-station/)**
 *
 *
 ### Problems:
 * **Standard Problems** should be really familiar with these types
  
     - [ ] [Creature Training](https://community.topcoder.com/stat?c=problem_statement&pm=8570&rd=12012&rm=269199&cr=7581406)
          -[editorial](https://community.topcoder.com/tc?module=Static&d1=match_editorials&d2=tco08rd2)
     -  [X] [noOfEncodings](http://www.geeksforgeeks.org/count-possible-decodings-given-digit-sequence/)
     -  [x] [Palindrome Partition](https://www.youtube.com/watch?v=lDYIvtBVmgo)
 * **State Space Reduction**
     - [ ]
 
 
 
 
* ## Strings
  * Print all permutations of a string
     1.[w/o STL](http://www.geeksforgeeks.org/write-a-c-program-to-print-all-permutations-of-a-given-string/)
     2.[with STL](http://www.geeksforgeeks.org/permutations-of-a-given-string-using-stl/)
     
  * [smallest window in a string containing all characters of another string](http://www.geeksforgeeks.org/find-the-smallest-window-in-a-string-containing-all-characters-of-another-string/)
  * [Minimum number of bracket reversals needed to make an expression balanced](http://www.geeksforgeeks.org/minimum-number-of-bracket-reversals-needed-to-make-an-expression-balanced/)
  * [Given a string, find its first non-repeating character](http://www.geeksforgeeks.org/given-a-string-find-its-first-non-repeating-character/)
  * [Minimum number of deletions to make a string palindrome](http://www.geeksforgeeks.org/minimum-number-deletions-make-string-palindrome/)
* ## Greedy
  - [Gas station](https://www.interviewbit.com/problems/gas-station/)  [My code](https://github.com/aayush4vedi/MyCompetitiveCoding/blob/master/gasStation.cpp)
  - [stock buy and sell](http://practice.geeksforgeeks.org/problems/stock-buy-and-sell/0) 
  - [Activity Selection Problem](http://www.geeksforgeeks.org/greedy-algorithms-set-1-activity-selection-problem/)
  - [Kruskal’s Minimum Spanning Tree Algorithm](http://www.geeksforgeeks.org/greedy-algorithms-set-2-kruskals-minimum-spanning-tree-mst/)
  - [Prim's MST](http://www.geeksforgeeks.org/greedy-algorithms-set-5-prims-minimum-spanning-tree-mst-2/)
  - [Huffman Coding](http://www.geeksforgeeks.org/greedy-algorithms-set-3-huffman-coding/)
  - [KMP](http://www.geeksforgeeks.org/searching-for-patterns-set-2-kmp-algorithm/)
  - [Rearrange characters in a string such that no two adjacent are same](http://www.geeksforgeeks.org/rearrange-characters-string-no-two-adjacent/)
  - [Rearrange a string so that all same characters become d distance away](http://www.geeksforgeeks.org/rearrange-a-string-so-that-all-same-characters-become-at-least-d-distance-away/)
  - [Fitting Shelves Problem](http://www.geeksforgeeks.org/fitting-shelves-problem/)
  - [Egyptian Fraction](http://www.geeksforgeeks.org/greedy-algorithm-egyptian-fraction/)
  - [Find if two rectangles overlap](http://www.geeksforgeeks.org/find-two-rectangles-overlap/)
  * [Huffman Encoding](http://www.geeksforgeeks.org/greedy-algorithms-set-3-huffman-coding/)
  
* ## Storage Scalabitily

* ## Arrays
  - [ ] [Next Greater Element](http://www.geeksforgeeks.org/next-greater-element/)
  - [x] [Rotate Array by 90 anti-clock](http://www.geeksforgeeks.org/inplace-rotate-square-matrix-by-90-degrees/) - some weired rotation trick; see once
  - [x] [Find duplicates in O(n) time](http://www.geeksforgeeks.org/find-duplicates-in-on-time-and-constant-extra-space/) - smarty art thou
  - [x] [Print the array in spiral form](http://www.geeksforgeeks.org/print-a-given-matrix-in-spiral-form/)
  - [x] [Find the repeating and the missing](http://www.geeksforgeeks.org/find-a-repeating-and-a-missing-number/) -simple application of the duplictaes prob above
  - [x] [Arrange given numbers to form the biggest number](http://www.geeksforgeeks.org/given-an-array-of-numbers-arrange-the-numbers-to-form-the-biggest-number/) - make an bool compare function, based on result of appending 
  - [ ] [Majority Element in unsorted Array](http://www.geeksforgeeks.org/majority-element/)
  - [ ] [Majority element in sorted array](http://www.geeksforgeeks.org/check-for-majority-element-in-a-sorted-array/)
  - Number of shapes in Boolean Matrix
       1. [Using DFS](http://www.geeksforgeeks.org/find-number-of-islands/)
       2. [Using Disjoint Set](http://www.geeksforgeeks.org/find-the-number-of-islands-set-2-using-disjoint-set/)
  - Union and Intersection of:
       1. [Sorted Array](http://www.geeksforgeeks.org/union-and-intersection-of-two-sorted-arrays-2/)
       2. [Unsorted Array](http://www.geeksforgeeks.org/find-union-and-intersection-of-two-unsorted-arrays/)
  - [Collect maximum points in an array with k moves](http://www.geeksforgeeks.org/collect-maximum-points-array-k-moves/)
  - [Find an element in array such that sum of left array is equal to sum of right array](http://www.geeksforgeeks.org/find-element-array-sum-left-array-equal-sum-right-array/)
  - [Find minimum cost to buy all books](http://www.geeksforgeeks.org/find-minimum-cost-buy-books/)
  - [Remove elements from array](http://www.geeksforgeeks.org/delete-an-element-from-array-using-two-traversals-and-one-traversal/) : 2 pointer
  - [Remove duplicate elements from sorted array](http://www.geeksforgeeks.org/remove-duplicates-sorted-array/) : 2 pointer
  - [2sum](http://www.geeksforgeeks.org/count-pairs-with-given-sum/)
  - [3Sum](http://www.geeksforgeeks.org/find-a-triplet-that-sum-to-a-given-value/)
  - [Power Set](http://www.geeksforgeeks.org/power-set/)
  - [Merge 2 sorted arrays](http://www.geeksforgeeks.org/merge-two-sorted-arrays/)
  - [Maximum sum such that no two elements are adjacent](http://www.geeksforgeeks.org/maximum-sum-such-that-no-two-elements-are-adjacent/)
  - [Binary Heaps: insertion, deletion,removal, updation](http://www.geeksforgeeks.org/binary-heap/)
  - [Find position of an element in a sorted array of infinite numbers](http://www.geeksforgeeks.org/find-position-element-sorted-array-infinite-numbers/)
  - [Sort an array of 0s, 1s and 2s](http://www.geeksforgeeks.org/sort-an-array-of-0s-1s-and-2s/)
  - [Search in a row wise and column wise sorted matrix](http://www.geeksforgeeks.org/search-in-row-wise-and-column-wise-sorted-matrix/)
  - [Matrix traversal in diagonal form/Zigzag](http://www.geeksforgeeks.org/zigzag-or-diagonal-traversal-of-matrix/)
  - [Find the rotation point in a rotated sorted array](http://www.geeksforgeeks.org/find-rotation-count-rotated-sorted-array/)
  - [Rearrange positive and negative numbers in O(n) time and O(1) extra space](http://www.geeksforgeeks.org/rearrange-positive-and-negative-numbers-publish/)
  - [Rearrange array in alternating positive & negative items ](http://www.geeksforgeeks.org/rearrange-array-alternating-positive-negative-items-o1-extra-space/)
* ## Binary Search
  - [x] [Square root of Integer](http://www.geeksforgeeks.org/square-root-of-an-integer/)
  - [ ] [Decimal to Roman](http://www.geeksforgeeks.org/converting-decimal-number-lying-between-1-to-3999-to-roman-numerals/)
  - [ ]
* ## Linked List
  - [Clone a link list with next](http://www.geeksforgeeks.org/a-linked-list-with-next-and-arbit-pointer/)
  - [Reverse a link list](http://www.geeksforgeeks.org/reverse-a-linked-list/)
  - [Find Middle element](http://www.geeksforgeeks.org/write-a-c-function-to-print-the-middle-of-the-linked-list/)
  - [Merge sort for doubly linked list](http://www.geeksforgeeks.org/merge-sort-for-doubly-linked-list/)
  - [Insertion Sort](http://www.geeksforgeeks.org/insertion-sort-for-singly-linked-list/)
  - [Add 1 to a number represented as linked list](http://www.geeksforgeeks.org/add-1-number-represented-linked-list/)
  - [Segregate even and odd nodes](http://www.geeksforgeeks.org/segregate-even-and-odd-elements-in-a-linked-list/)
* ## Stacks & Queues
  - [ ] Largest Area under histogram:
        1. [Using Divide and Conquer](http://www.geeksforgeeks.org/largest-rectangular-area-in-a-histogram-set-1/): *O(nlogn)*
        2. [Using Stacks](http://www.geeksforgeeks.org/largest-rectangle-under-histogram/) : *O(n)*
* ## Backtracking
  - [Valid sudoku](http://www.geeksforgeeks.org/backtracking-set-7-suduku/)
* ## Hashing 
  - [Longest Consecutive Subsequence](http://www.geeksforgeeks.org/longest-consecutive-subsequence/)
  - Anagrams
        1. [Usign Hashing](http://www.geeksforgeeks.org/given-a-sequence-of-words-print-all-anagrams-together/)
        2. [Using Treis](http://www.geeksforgeeks.org/given-a-sequence-of-words-print-all-anagrams-together-set-2/)
  - [Find Recurring Sequence in a Fraction](http://www.geeksforgeeks.org/find-recurring-sequence-fraction/)
  - [Maxm points on the same line](http://www.geeksforgeeks.org/count-maximum-points-on-same-line/)
  - [Longest substring without repeat](http://www.geeksforgeeks.org/length-of-the-longest-substring-without-repeating-characters/)
* ## Heaps & Maps & Graphs
  - [Detect Cycle in a Directed Graph](http://www.geeksforgeeks.org/detect-cycle-in-a-graph/)
* ## Stacks & Queues
  * [Trapping Rain Water](http://www.geeksforgeeks.org/trapping-rain-water/)
  * [Generate All Parenthesis](http://www.geeksforgeeks.org/print-all-combinations-of-balanced-parentheses/)
  * [Min Stack](http://www.geeksforgeeks.org/design-a-stack-that-supports-getmin-in-o1-time-and-o1-extra-space/)
  * [Redundant Braces](http://www.geeksforgeeks.org/find-expression-duplicate-parenthesis-not/)
  * [Nearest Smalles element](http://qa.geeksforgeeks.org/3824/qa.geeksforgeeks.org/3824/find-the-nearest-smaller-elements)
  
* ## Trees
  * Search:
      1. [DFS](http://www.geeksforgeeks.org/depth-first-traversal-for-a-graph/)
      2. [BFS](http://www.geeksforgeeks.org/breadth-first-traversal-for-a-graph/)
          A.[Minimum time required to rot all oranges](http://www.geeksforgeeks.org/minimum-time-required-so-that-all-oranges-become-rotten/)
  * [Traversal](http://www.geeksforgeeks.org/tree-traversals-inorder-preorder-and-postorder/) :Preorder, Inorder, Postorder
  * [Lowest common ancestor](http://www.geeksforgeeks.org/lowest-common-ancestor-binary-tree-set-1/)
  * [Flattenng a binary tree to linked list](http://qa.geeksforgeeks.org/3976/flattening-a-binary-tree)
  * [to check if a binary tree is BST or not](http://www.geeksforgeeks.org/a-program-to-check-if-a-binary-tree-is-bst-or-not/)
  * [Sorted Array to BST](http://www.geeksforgeeks.org/sorted-array-to-balanced-bst/)
  * [Symmetric Binary Tree](http://www.geeksforgeeks.org/symmetric-tree-tree-which-is-mirror-image-of-itself/)
  * [Connect Nodes at same level](http://www.geeksforgeeks.org/connect-nodes-at-same-level-with-o1-extra-space/) :Asked by Microsoft
  * [Identical Binary Tree] (http://www.geeksforgeeks.org/write-c-code-to-determine-if-two-trees-are-identical/)
  * [Zigzag level order traversal](http://www.geeksforgeeks.org/level-order-traversal-in-spiral-form/)
  * [Spiral level order traversal](http://www.geeksforgeeks.org/level-order-traversal-in-spiral-form/)
  * Sum:
       1. [Root to leaf path sum](http://www.geeksforgeeks.org/root-to-leaf-path-sum-equal-to-a-given-number/)
       2. [Maximum Path Sum](http://www.geeksforgeeks.org/find-maximum-path-sum-in-a-binary-tree/)
       3. [Print all k-sums](http://www.geeksforgeeks.org/print-k-sum-paths-binary-tree/)
  * [k-th smallest element in bst](http://www.geeksforgeeks.org/find-k-th-smallest-element-in-bst-order-statistics-in-bst/)
  * [Minimum no. of iterations to pass information to all nodes in the tree](http://www.geeksforgeeks.org/minimum-iterations-pass-information-nodes-tree/)
  * [Two nodes of a BST are swapped, correct the BST](http://www.geeksforgeeks.org/fix-two-swapped-nodes-of-bst/)
  * [Find height of a special binary tree whose leaf nodes are connected](http://www.geeksforgeeks.org/find-height-of-a-special-binary-tree-whose-leaf-nodes-are-connected/)
  * [Removing half nodes in Binary Trees](http://www.geeksforgeeks.org/given-a-binary-tree-how-do-you-remove-all-the-half-nodes/)
  * [Convert given tree to sum tree](http://www.geeksforgeeks.org/convert-a-given-tree-to-sum-tree/)
  * [Convert an arbitrary Binary Tree to a tree that holds Children Sum Property](http://www.geeksforgeeks.org/convert-an-arbitrary-binary-tree-to-a-tree-that-holds-children-sum-property/)
  * [Check if two trees are Mirror](http://www.geeksforgeeks.org/check-if-two-trees-are-mirror/)
  * [Convert a Binary Tree into its Mirror Tree](http://www.geeksforgeeks.org/write-an-efficient-c-function-to-convert-a-tree-into-its-mirror-tree/)
  * Vertical Sum in a given Binary Tree
        A.[HashMap](http://www.geeksforgeeks.org/vertical-sum-in-a-given-binary-tree/)
        B.[Doubly Linked List](http://www.geeksforgeeks.org/vertical-sum-in-binary-tree-set-space-optimized/)
  * Convert a given Binary Tree to Doubly Linked List
        1.[Set1](http://www.geeksforgeeks.org/in-place-convert-a-given-binary-tree-to-doubly-linked-list/)
        2.[Set2](http://www.geeksforgeeks.org/convert-a-given-binary-tree-to-doubly-linked-list-set-2/)
        3.[Set3](http://www.geeksforgeeks.org/convert-given-binary-tree-doubly-linked-list-set-3/)
        4.[Set4](http://www.geeksforgeeks.org/convert-a-given-binary-tree-to-doubly-linked-list-set-4/)
  * [Print all nodes at distance k from a given node](http://www.geeksforgeeks.org/print-nodes-distance-k-given-node-binary-tree/)
  * [Find diameter of tree](http://www.geeksforgeeks.org/diameter-of-a-binary-tree/)
  * [Find median of BST](http://www.geeksforgeeks.org/find-median-bst-time-o1-space/)
  * **[Trie](http://www.geeksforgeeks.org/trie-display-content/)**
  * **[Red Black Tree](http://www.geeksforgeeks.org/red-black-tree-set-1-introduction-2/)**
  * **[AVL Trees](http://www.geeksforgeeks.org/avl-tree-set-1-insertion/)**
  
* ## Bit Manipulation  | [Tut on bitwise operator](http://www.cprogramming.com/tutorial/bitwise_operators.html)
  - [ ] [Count set bits in an integer](http://www.geeksforgeeks.org/count-set-bits-in-an-integer/)
  - [ ] [Count total set bits in all numbers from 1 to n](http://www.geeksforgeeks.org/count-numbers-from-1-to-n-that-have-4-as-a-a-digit/)
  - [ ] [Swap bits in a given number](http://www.geeksforgeeks.org/swap-bits-in-a-given-number/)
  - [ ] [Count number of bits to be flipped to convert A to B](http://www.geeksforgeeks.org/count-number-of-bits-to-be-flipped-to-convert-a-to-b/)
  - [ ] [n-th number whose binary representation is a palindrome](http://www.geeksforgeeks.org/find-n-th-number-whose-binary-representation-palindrome/)
  - [ ] [Check whether all the bits are set in the given range](http://www.geeksforgeeks.org/check-whether-bits-set-given-range/)
  - [Reverse bits](http://www.geeksforgeeks.org/write-an-efficient-c-program-to-reverse-bits-of-a-number/)
  - [Single Number](https://stackoverflow.com/questions/35185/finding-a-single-number-in-a-list)
  - [Divide without dividing](http://qa.geeksforgeeks.org/3794/divide-integers-without-multiplication-division-operator)
  - [nth magic number](http://www.geeksforgeeks.org/find-nth-magic-number/)
  
*

  
