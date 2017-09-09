# Topics and Resources #

## [Interview Questions](https://ashayraut.files.wordpress.com/2014/05/interview-preparation-best-100-ashay-raut.pdf)

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
* ## Greedy
  * [Gas station](https://www.interviewbit.com/problems/gas-station/)  [My code](https://github.com/aayush4vedi/MyCompetitiveCoding/blob/master/gasStation.cpp)
  * [stock buy and sell](http://practice.geeksforgeeks.org/problems/stock-buy-and-sell/0) 
  
* ## Storage Scalabitily

* ## Arrays
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
 
* ## Binary Search
  - [x] [Square root of Integer](http://www.geeksforgeeks.org/square-root-of-an-integer/)
  - [ ] [Decimal to Roman](http://www.geeksforgeeks.org/converting-decimal-number-lying-between-1-to-3999-to-roman-numerals/)
  - [ ]
* ## Linked List
* ## Stacks & Queues
* ## Backtracking
* ## Hashing 
* ## Heaps & Maps
* ## Trees
  * Search:
      1. [DFS](http://www.geeksforgeeks.org/depth-first-traversal-for-a-graph/)
      2. [BFS](http://www.geeksforgeeks.org/breadth-first-traversal-for-a-graph/)
  * [Traversal](http://www.geeksforgeeks.org/tree-traversals-inorder-preorder-and-postorder/) :Preorder, Inorder, Postorder
  * [Lowest common ancestor](http://www.geeksforgeeks.org/lowest-common-ancestor-binary-tree-set-1/)
  * [Flattenng a binary tree to linked list](http://qa.geeksforgeeks.org/3976/flattening-a-binary-tree)
  * [to check if a binary tree is BST or not](http://www.geeksforgeeks.org/a-program-to-check-if-a-binary-tree-is-bst-or-not/)
  * [Sorted Array to BST](http://www.geeksforgeeks.org/sorted-array-to-balanced-bst/)
  * [Symmetric Binary Tree](http://www.geeksforgeeks.org/symmetric-tree-tree-which-is-mirror-image-of-itself/)
  * [Connect Nodes at same level](http://www.geeksforgeeks.org/connect-nodes-at-same-level-with-o1-extra-space/) :Asked by Microsoft
  * [Identical Binary Tree] (http://www.geeksforgeeks.org/write-c-code-to-determine-if-two-trees-are-identical/)
  * [Zigzag level order traversal](http://www.geeksforgeeks.org/level-order-traversal-in-spiral-form/)
  * Sum:
       1. [Root to leaf path sum](http://www.geeksforgeeks.org/root-to-leaf-path-sum-equal-to-a-given-number/)
       2. [Maximum Path Sum](http://www.geeksforgeeks.org/find-maximum-path-sum-in-a-binary-tree/)
       3. [Print all k-sums](http://www.geeksforgeeks.org/print-k-sum-paths-binary-tree/)
  * [k-th smallest element in bst](http://www.geeksforgeeks.org/find-k-th-smallest-element-in-bst-order-statistics-in-bst/)

  
*
*

  
