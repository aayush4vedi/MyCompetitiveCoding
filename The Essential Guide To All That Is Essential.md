# Topics and Resources #


#### [MIT interview material](https://web.archive.org/web/20160906124824/http://courses.csail.mit.edu/iap/interview/materials.php) | [Interview Questions](https://ashayraut.files.wordpress.com/2014/05/interview-preparation-best-100-ashay-raut.pdf) | [Google Interview Ques](https://gist.github.com/KWMalik/3734578) | [Career Cup Google](https://www.careercup.com/page?pid=google-interview-questions&job=software-engineer-interview-questions) | [Leetcode](https://www.programcreek.com/2012/11/top-10-algorithms-for-coding-interview/)
```diff
+ green?
-red?

```
* ###  [Super Collection of interview questions](http://tristan-interview.blogspot.in/2012/02/enumerate-all-possible-binary-trees.html)


### Cheat Sheets
  * [BigO cheat sheet](http://bigocheatsheet.com/)
  * [c++ STL](https://github.com/jwasham/coding-interview-university/blob/master/extras/cheat%20sheets/STL%20Quick%20Reference%201.29.pdf)
     * ceil(x) //if x=6.79; cout=7

#### [getting better at given language](http://exercism.io/languages)
# Data Structures #

* **Arrays**
  * [Dynamic alloaction of arrays: example](http://www.fredosaurus.com/notes-cpp/newdelete/55dynexample.html)
  * C++ dynamic arrays = vectors
       * freqFuncs
         * vector<int>v(5,5) //size 5 ; all elements 5
         * vi (arr, arr+n);
         * sort(v.begin(),v.end()) //sort
         * sort(v.rbegin(),.rend()) //reverse sort
         * random_shuffle(v.begin(),v.begin()+2, v.end()) //partial shuffle
         * set_intersection(v1.begin(),v1.end(),v2.begin(),v2.end())
         * vector<int>:: iterator j;
         * j= lower_bound(v.begin(),v.end(), key); if(j== v.end())cout<<"not found"; //binary search for lower bound
         * next_permutation(v.begin(),v.end());
         * v.size() - number of items
         * v.is_empty() //retrurns 0-1
         * v.at(index) - returns item at given index, blows up if index out of bounds
         * v.push(item) | v.push_back(item) | v.push_front(item)
         * v.insert(index, item)
         * v.pop_back(); //Removes the last element in the vector, reducing size by one,destroys the removed element.
         * v.find(key) //looks for value and returns first index with that value, -1 if not found
         * v.resize(new_capacity)

       * Time
         * O(1) to add/remove at end
         * O(n) to insert/remove elsewhere
       * Space
         * contiguous in memory, so proximity helps performance
         * space needed = (array capacity, which is >= n) * size of item, but even if 2n, still O(n)

  ***Problems***

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
  - [4sum](https://leetcode.com/problems/4sum/description/) : [soln](http://www.geeksforgeeks.org/find-four-elements-that-sum-to-a-given-value-set-2/)
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
  - [x]  To print nth row of Pascal's triangle [CodePic](https://github.com/aayush4vedi/MyCompetitiveCoding/blob/master/Codepics/kth%20line%20in%20pascals%20triangle.jpg)
  - [x]  Find ele that appear more than n/k times: [CodePic](https://github.com/aayush4vedi/MyCompetitiveCoding/blob/master/Codepics/count%20element%20occurance.jpg)
  - [x] [Print the array in wave form](https://www.interviewbit.com/problems/wave-array/) :you can deduce the first method; look up here for second
  - [Find three closest elements from given three sorted arrays](http://www.geeksforgeeks.org/find-three-closest-elements-from-given-three-sorted-arrays/)
  - [Container With Most Water](https://leetcode.com/problems/container-with-most-water/description/)
* **Linked List**
  
  * [link list essential code](https://github.com/aayush4vedi/MyCompetitiveCoding/blob/master/linklistessential.cpp)
  #### [Intro video](https://www.codementor.io/codementorteam/a-comprehensive-guide-to-implementation-of-singly-linked-list-using-c_plus_plus-ondlm5azr) ####
  * [Pointers](https://www.codeproject.com/Articles/24684/How-to-create-Linked-list-using-C-C) - [video](https://www.youtube.com/watch?v=h-HBipu_1P0&list=PL2_aWCzGMAwLZp6LMUKI3cc7pgGsasm2_) '&' means 'address of' and '*' means 'value at'
  * [Creation and Traversal](http://www.geeksforgeeks.org/linked-list-set-1-introduction/) | [Insertion](http://www.geeksforgeeks.org/linked-list-set-2-inserting-a-node/) | [Deletion](http://www.geeksforgeeks.org/linked-list-set-3-deleting-node/)
  * ### [c++ stl](http://www.geeksforgeeks.org/list-cpp-stl/): ###
         -front() – Returns reference to the first element in the list
         -back() – Returns reference to the last element in the list
         -push_front(g) – Adds a new element ‘g’ at the beginning of the list
         -push_back(g) – Adds a new element ‘g’ at the end of the list
         -pop_front() – Removes the first element of the list, and reduces size of the list by 1
         -pop_back() – Removes the last element of the list, and reduces size of the list by 1
         -begin() – Returns an iterator pointing to the first element of the list
         -end() – Returns an iterator pointing to the theoretical last element which follows the last element
         -empty() – Returns whether the list is empty(1) or not(0)
         -insert() – Inserts new elements in the list before the element at a specified position
         -erase() – Removes a single element or a range of elements from the list
         -assign() – Assigns new elements to list by replacing current elements and resizes the list
         -remove() – Removes all the elements from the list, which are equal to given element
         -reverse() – Reverses the list
         -size() – Returns the number of elements in the list
         -sort() – Sorts the list in increasing order



  ***Problems***
  - [Adding with carry](http://www.geeksforgeeks.org/add-1-number-represented-linked-list/)
  - [Clone a link list with next](http://www.geeksforgeeks.org/a-linked-list-with-next-and-arbit-pointer/)
  - [Reverse a link list](http://www.geeksforgeeks.org/reverse-a-linked-list/)
  - [Find Middle element](http://www.geeksforgeeks.org/write-a-c-function-to-print-the-middle-of-the-linked-list/)
  - [Merge sort for doubly linked list](http://www.geeksforgeeks.org/merge-sort-for-doubly-linked-list/)
  - [Insertion Sort](http://www.geeksforgeeks.org/insertion-sort-for-singly-linked-list/)
  - [Add 1 to a number represented as linked list](http://www.geeksforgeeks.org/add-1-number-represented-linked-list/)
  - [Segregate even and odd nodes](http://www.geeksforgeeks.org/segregate-even-and-odd-elements-in-a-linked-list/)





* **Stacks**
   * ### [stl c++](http://www.geeksforgeeks.org/stack-data-structure/):
      - s.push(val)
      - s.pop()
      - s.top()
      - s.isEmpty(): Returns true if stack is empty, else false

* **Queues**
   * Implementation:
        * [array implementation](http://www.geeksforgeeks.org/queue-set-1introduction-and-array-implementation/)
            : [My code](https://github.com/aayush4vedi/MyCompetitiveCoding/blob/master/array%20implementation%20of%20queue%20C%2B%2B.cpp)
        * [link list implementation](http://www.geeksforgeeks.org/queue-set-2-linked-list-implementation/)
            : [My code](https://github.com/aayush4vedi/MyCompetitiveCoding/blob/master/link%20list%20implementation%20of%20queue.cpp)
        * [stacks implementation](http://www.geeksforgeeks.org/?p=5009)
            : [My code](https://github.com/aayush4vedi/MyCompetitiveCoding/blob/master/stack%20implementation%20of%20queues.cpp)
   * [Priority_queues](http://www.geeksforgeeks.org/priority-queue-set-1-introduction/) - are implemented using heaps
        ```cpp
        priority_queue<pair<int, string>>pooh;
        pooh.push(make_pair(1,"tigger"));    // O(logn)
        pair<int, string> rerult = pooh.top; // O(1)
        pooh.pop();                          // O(logn)
        ```
    * [Dequeue](http://www.geeksforgeeks.org/deque-set-1-introduction-applications/) STL c++ -> std::deque
    *  ## Problems:
          - [ ] [Generate binary numbers from 1 to n](http://www.geeksforgeeks.org/interesting-method-generate-binary-numbers-1-n/)
          - [ ] [Implementing k queues in single array](http://www.geeksforgeeks.org/efficiently-implement-k-queues-single-array/)
          - [ ] [Implement a stack using single queue](http://www.geeksforgeeks.org/implement-a-stack-using-single-queue/)
          - [ ] [Trapping Rain Water](http://www.geeksforgeeks.org/trapping-rain-water/)
          - [ ] [Generate All Parenthesis](http://www.geeksforgeeks.org/print-all-combinations-of-balanced-parentheses/)
          - [ ] [Min Stack](http://www.geeksforgeeks.org/design-a-stack-that-supports-getmin-in-o1-time-and-o1-extra-space/)
          - [ ] [Redundant Braces](http://www.geeksforgeeks.org/find-expression-duplicate-parenthesis-not/)
          - [ ] [Nearest Smalles element](http://qa.geeksforgeeks.org/3824/qa.geeksforgeeks.org/3824/find-the-nearest-smaller-elements)
          - [ ] Largest Area under histogram:
                1. [Using Divide and Conquer](http://www.geeksforgeeks.org/largest-rectangular-area-in-a-histogram-set-1/): *O(nlogn)*
                2. [Using Stacks](http://www.geeksforgeeks.org/largest-rectangle-under-histogram/) : *O(n)*
          - [Sliding Window Maximum (Maximum of all subarrays of size k)](http://www.geeksforgeeks.org/sliding-window-maximum-maximum-of-all-subarrays-of-size-k/)
          - [N Queens](http://www.geeksforgeeks.org/backtracking-set-3-n-queen-problem/)


* **Hash Table**
  #### [Awesome Hackerearth tut](https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/tutorial/)
  #### Problems:

     - [Longest Consecutive Subsequence](http://www.geeksforgeeks.org/longest-consecutive-subsequence/)
     - Anagrams
           1. [Usign Hashing](http://www.geeksforgeeks.org/given-a-sequence-of-words-print-all-anagrams-together/)
           2. [Using Treis](http://www.geeksforgeeks.org/given-a-sequence-of-words-print-all-anagrams-together-set-2/)
     - [Find Recurring Sequence in a Fraction](http://www.geeksforgeeks.org/find-recurring-sequence-fraction/)
     - [Maxm points on the same line](http://www.geeksforgeeks.org/count-maximum-points-on-same-line/)
     - [Longest substring without repeat](http://www.geeksforgeeks.org/length-of-the-longest-substring-without-repeating-characters/)
     - [Valid sudoku](http://www.geeksforgeeks.org/backtracking-set-7-suduku/)

* **Trees**
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
 - [ ] [Invert a binary tree](http://www.geeksforgeeks.org/flip-binary-tree/)
 * **[Trie](http://www.geeksforgeeks.org/trie-display-content/)**
    * [trie- a neglected DS](https://www.toptal.com/java/the-trie-a-neglected-data-structure)
    * [Topcoder](https://www.topcoder.com/community/data-science/data-science-tutorials/using-tries/)
    forget not the problems at bottom
    * [Sedgewick video lecture](https://www.youtube.com/watch?v=00YaFPcC65g&list=PLe-ggMe31CTe9IyG9MB8vt5xUJeYgOYRQ)
 * **[Red Black Tree](http://www.geeksforgeeks.org/red-black-tree-set-1-introduction-2/)**
 * **[AVL Trees](http://www.geeksforgeeks.org/avl-tree-set-1-insertion/)**

* ***Graphs*** | [Graph compulsion](https://github.com/aayush4vedi/MyCompetitiveCoding/blob/master/graphcompulsion.cpp) :1 place to find BFS,DFS and what no
  * Graph representation:
    1. Objects and Pointers
    2. Adjacency matrix
    3. Adjacency list
    4. Edge List
  * [for simplified understanding-no code](https://www.khanacademy.org/computing/computer-science/algorithms/graph-representation/a/representing-graphs)
  2.Adjacency matrix

  ```cpp
      int AdjMat[100][100];

      // Adj Matrix
      //   for each line: |V| entries, 0 or the weight
      /*
      0  10   0   0 100   0
     10   0   7   0   8   0
      0   7   0   9   0   0
      0   0   9   0  20   5
    100   8   0  20   0   0
      0   0   0   5   0   0
      */
      Inputting: like 2-D matrix
      for (int i = 0; i < V; i++)
        for (int j = 0; j < V; j++)
          scanf("%d", &AdjMat[i][j]);

      Outputting:
      printf("Neighbors of vertex 0:\n");
      for (int j = 0; j < V; j++)                                    
        if (AdjMat[0][j])
          printf("Edge 0-%d (weight = %d)\n", j, AdjMat[0][j]);
  ```
  3. Adjacency List: vector of vector of pairs or array of linked list
  ```cpp
  typedef pair<int, int> ii;
  typedef vector<ii> vii;
  vector<vii> AdjList;
  /*
  2 2 10 5 100
  3 1 10 3 7 5 8
  2 2 7 4 9
  3 3 9 5 20 6 5
  3 1 100 2 8 4 20
  1 4 5
  */
  scanf("%d", &V);
  AdjList.assign(V, vii()); // quick way to initialize AdjList with V entries of vii
  for (int i = 0; i < V; i++) {
    scanf("%d", &total_neighbors);
    for (int j = 0; j < total_neighbors; j++) {
      scanf("%d %d", &id, &weight);
      AdjList[i].push_back(ii(id - 1, weight));    // some index adjustment
    }
  }

  printf("Neighbors of vertex 0:\n");
  for (vii::iterator j = AdjList[0].begin(); j != AdjList[0].end(); j++)
    // AdjList[0] contains the required information
    // O(k), where k is the number of neighbors
    printf("Edge 0-%d (weight = %d)\n", j->first, j->second);

  ```
  3.Edge List
  ```cpp
  priority_queue< pair<int, ii> > EdgeList;   // one way to store Edge List
  scanf("%d", &E);
  for (int i = 0; i < E; i++) {
    scanf("%d %d %d", &a, &b, &weight);
    EdgeList.push(make_pair(-weight, ii(a, b))); // trick to reverse sort order
  }

  // edges sorted by weight (smallest->largest)
  for (int i = 0; i < E; i++) {
    pair<int, ii> edge = EdgeList.top(); EdgeList.pop();
    // negate the weight again
    printf("weight: %d (%d-%d)\n", -edge.first, edge.second.first, edge.second.second);
  }




  * 2.Adjacency matrix

    ```cpp
    int AdjMat[100][100];


    /*
    0  10   0   0 100   0
   10   0   7   0   8   0
    0   7   0   9   0   0
    0   0   9   0  20   5
  100   8   0  20   0   0
    0   0   0   5   0   0
    */
    Inputting: like 2-D matrix
    for (int i = 0; i < V; i++)
      for (int j = 0; j < V; j++)
        scanf("%d", &AdjMat[i][j]);

    Outputting:
    printf("Neighbors of vertex 0:\n");
    for (int j = 0; j < V; j++)                                    
      if (AdjMat[0][j])
        printf("Edge 0-%d (weight = %d)\n", j, AdjMat[0][j]);
    ```
  *  3. Adjacency List
  ```cpp
  typedef pair<int, int> ii;
  typedef vector<ii> vii;
  vector<vii> AdjList;
  /*
  2 2 10 5 100
  3 1 10 3 7 5 8
  2 2 7 4 9
  3 3 9 5 20 6 5
  3 1 100 2 8 4 20
  1 4 5
  */
  scanf("%d", &V);
  AdjList.assign(V, vii()); // quick way to initialize AdjList with V entries of vii
  for (int i = 0; i < V; i++) {
    scanf("%d", &total_neighbors);
    for (int j = 0; j < total_neighbors; j++) {
      scanf("%d %d", &id, &weight);
      AdjList[i].push_back(ii(id - 1, weight));    // some index adjustment
    }
  }

  printf("Neighbors of vertex 0:\n");
  for (vii::iterator j = AdjList[0].begin(); j != AdjList[0].end(); j++)
    // AdjList[0] contains the required information
    // O(k), where k is the number of neighbors
    printf("Edge 0-%d (weight = %d)\n", j->first, j->second);

  ```
  * 4.Edge List
  ```cpp
  priority_queue< pair<int, ii> > EdgeList;   // one way to store Edge List
  scanf("%d", &E);
  for (int i = 0; i < E; i++) {
    scanf("%d %d %d", &a, &b, &weight);
    EdgeList.push(make_pair(-weight, ii(a, b))); // trick to reverse sort order
  }

  // edges sorted by weight (smallest->largest)
  for (int i = 0; i < E; i++) {
    pair<int, ii> edge = EdgeList.top(); EdgeList.pop();
    // negate the weight again
    printf("weight: %d (%d-%d)\n", -edge.first, edge.second.first, edge.second.second);
  }

  ```

  * When asked a question, look for a graph-based solution first, then move on if none.
  * [BFS in graph](http://www.geeksforgeeks.org/breadth-first-traversal-for-a-graph/)
  * [DFS in graph](http://www.geeksforgeeks.org/depth-first-traversal-for-a-graph/)
  * Graph Algorithms:
    * [Sorting](https://www.youtube.com/watch?v=ddTC4Zovtbc&list=PLrmLmBdmIlpu2f2g8ltqaaCZiq6GJvl1j)
    * Single source shortest path:
        1.[Dijkstra's algo](https://www.youtube.com/watch?v=lAXZGERcDf4&list=PLrmLmBdmIlpu2f2g8ltqaaCZiq6GJvl1j&index=2)
        2. [Bellman-Ford](https://www.youtube.com/watch?v=-mOEd_3gTK0&index=6&list=PLrmLmBdmIlpu2f2g8ltqaaCZiq6GJvl1j)
    * All pair shortest path [Floyd Warshell](https://www.youtube.com/watch?v=LwJdNfdLF9s&list=PLrmLmBdmIlpu2f2g8ltqaaCZiq6GJvl1j&index=8)
    * MSP:
        1.[Kruskal's algo](https://www.youtube.com/watch?v=fAuF0EuZVCk&list=PLrmLmBdmIlpu2f2g8ltqaaCZiq6GJvl1j&index=3)
        2. [Prim's algo](https://www.youtube.com/watch?v=oP2-8ysT3QQ&index=4&list=PLrmLmBdmIlpu2f2g8ltqaaCZiq6GJvl1j)
    * [Travelling salesman](https://www.youtube.com/watch?v=-JjA4BLQyqE&index=5&list=PLrmLmBdmIlpu2f2g8ltqaaCZiq6GJvl1j)
    * Strongly connected components: [Kosaraju's algo](https://www.youtube.com/watch?v=RpgcYiky7uw&index=9&list=PLrmLmBdmIlpu2f2g8ltqaaCZiq6GJvl1j)
    * Max Flow [Ford Fulkerson/Edmonds Karp](https://www.youtube.com/watch?v=GiN3jRdgxU4&list=PLrmLmBdmIlpu2f2g8ltqaaCZiq6GJvl1j&index=10)
    * Detecting cycles:
          * [in unidirected graphs ](https://www.youtube.com/watch?v=n_t0a_8H8VY&list=PLrmLmBdmIlpu2f2g8ltqaaCZiq6GJvl1j&index=11)
          *  [in directed gaphs](https://www.youtube.com/watch?v=rKQaZuoUR4M&list=PLrmLmBdmIlpu2f2g8ltqaaCZiq6GJvl1j&index=12)
          * all simple cycles in directed graphs: [Johnson's algo](https://www.youtube.com/watch?v=johyrWospv0&index=14&list=PLrmLmBdmIlpu2f2g8ltqaaCZiq6GJvl1j)
    * [Articulation points algo](https://www.youtube.com/watch?v=2kREIkF9UAs&list=PLrmLmBdmIlpu2f2g8ltqaaCZiq6GJvl1j&index=13)

    * [count connected components in unidirected graphs](http://www.geeksforgeeks.org/connected-components-in-an-undirected-graph/)
    * [check for bipartite graph](http://www.geeksforgeeks.org/bipartite-graph/)



# Algorithms #

* #### Binary Search
  * [recursive implementation](http://www.geeksforgeeks.org/binary-search/)
  * [iterative implementation](http://www.geeksforgeeks.org/binary-search/)
  * problems:
      - [x] [Square root of Integer](http://www.geeksforgeeks.org/square-root-of-an-integer/)
      - [ ] [Decimal to Roman](http://www.geeksforgeeks.org/converting-decimal-number-lying-between-1-to-3999-to-roman-numerals/)
      - [ ] [calculate (x^y)%z without pow()](https://www.careercup.com/question?id=22767685)
      ```cpp
      int NoPowMod( int x, int y, int z )
      {
      	int a = x % z;
      	int t = 1;
      	while( y > 0 )
      	{
      		// Y is odd
      		if( y & 1 )
      		{
      			t = (t * a) % z;
      		}
      		y >>= 1;
      		a = (a * a) % z;
      	}
      	return(t);
      }
      ```
* ## Bitwise Opertions  *~ means 1's complement*
  * [Bits Cheat Sheet](https://github.com/jwasham/coding-interview-university/blob/master/extras/cheat%20sheets/bits-cheat-cheet.pdf) ghot from 2^1 to 2^16 & 2^32
  * [creative use of bitwise operators in calendar events](https://snook.ca/archives/javascript/creative-use-bitwise-operators)
  * counting number of set bits in a number: ``` cout<< __builtin_popcount (4);//1```
      1.__builtin_popcount = int
      2.__builtin_popcountl = long int
      3.__builtin_popcountll = long long
  * [video] to understand &, |, ^, ~, >>, << {(1 << n = 2^n), (1 >> n = 2^-n)}
      * set a given bit to 1:( *it's like multiplying with 2^position* )
        ```cpp
        def set_bit(x,position):  // x        00000110
            mask = 1 << position  //position  00000101 i.e.set 5th bit to 1
            return x | mask       //mask      00100000 1 got r. shifted by 5
                           //returned value   00100110
        ```
      * clear a bit- make it 0 :( *it's like dividing with 2^position* )
        ```cpp
        def clear_bit(x, position):  // x        00000110
          mask = 1 << position      //position  00000010
          return x & ~mask          //mask      00000100
                                    //~mask     11111011
                           //returned value     00000010   
        ```
      * flip bit:
        ```cpp
        def flip_bit(x, postion): // x     01100110
          maks = 1 << position //position 00000010
          return x ^ mask     //mask      00000100
                        //returned value  01100010
        ```

      * is bit at given position set or not(boolean return)
      ```cpp
      def is_bit_set(x, position): //    x 01100110
        shifted = x >> position //position 00000101
        return shifted & 1       //shifted 00000011
                          //returned value 00000001
      ```
      * modifying bit at given position(state=1 ->set_bit; state=0 ->clear_bit )
      ```cpp
      def modify_bit(x, position, state): //state 00000001
        mask = 1 << position             //-state 11111111
        return (x & ~mask) | (-state & mask)
      ```
  * [1's Complement](https://en.wikipedia.org/wiki/Ones%27_complement) : reverse the bit
  * [2's complement](https://en.wikipedia.org/wiki/Two%27s_complement) : reverse and add 1 from last bit
  * [Bit tricks](https://graphics.stanford.edu/~seander/bithacks.html) | [Hackerearth](https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/tutorial/):
      * Check_if_even : ```if((x & 1)==0)even   ```
      * check_if_power_of_2 :(means only 1 bit will be set)
          ```cpp
          if((x & x-1)==0)return true   //x 1000
                                      //x-1 0111    
                                      //&   0000

          ```
      * Count the number of ones in the binary representation of the given number ```while( n ){ n = n&(n-1);count++;  }  //O(k), k is no of one's in bin form```
      * find the largest power of 2, which is <= x
        :Change all the bits which are at the right side of the most significant digit, to 1
      ```
      int highestPowerof2(unsigned int n)
      {
          // Invalid input
          if (n < 1)
              return 0;

          int res = 1;

          // Try all powers starting from 2^1
          for (int i=0; i<8*sizeof(unsigned int); i++)
          {
              int curr = 1 << i;

              // If current power is more than n, break
              if (curr > n)
                 break;

              res = curr;
          }

          return res;
      }
      ```
      * compute the sign of an integer: ```int sign = -(x < 0) // if v < 0 then -1, else 0.```
      * Detect if two integers have opposite signs ```bool f = ((x ^ y) < 0); // true iff x and y have opposite signs ```
      * Compute the minimum (min) or maximum (max) of two integers without branching:  
          ```
          result = y ^ ((x ^ y) & -(x < y)); // min(x, y)
          result = x ^ ((x ^ y) & -(x < y)); // max(x, y)
          ```

      * Counting bits set
          ```
          for (count = 0; x; x >>= 1)
          {
            count += x & 1;
          }
                    ```
      * Computing parity in given number(Parity of a number refers to whether it contains an odd or even number of 1-bits. )
      ```
      unsigned int v;       // word value to compute the parity of
      bool parity = false;  // parity will be the parity of v
      while (v)
      {
        parity = !parity;
        v = v & (v - 1);
      }
      ```
      * Swapping ```#define SWAP(a, b) (((a) ^= (b)), ((b) ^= (a)), ((a) ^= (b))) ```
      * Returns the rightmost 1 in binary representation of x ```x ^ ( x & (x-1)) ```


      * Compute modulus division by 1 << s without a division operator
      ```cpp
      const unsigned int n;          // numerator
      const unsigned int s;
      const unsigned int d = 1U << s; // So d will be one of: 1, 2, 4, 8, 16, 32, ...
      unsigned int m;                // m will be n % d
      m = n & (d - 1);
      ```
      * find log base 2 of given interger ``` int resulg t=0; while(x >>= 1){result++;} ```
      * [-] [Add one to a number](http://www.geeksforgeeks.org/add-1-to-a-given-number/) : [CodePic](https://github.com/aayush4vedi/MyCompetitiveCoding/blob/master/Codepics/merge%20element.jpg)


  * [bit manipulation-wiki](https://en.wikipedia.org/wiki/Bit_manipulation)
  * [bitwise operations](https://en.wikipedia.org/wiki/Bitwise_operation)
  * Problems:
      - [Reverse bits](http://www.geeksforgeeks.org/write-an-efficient-c-program-to-reverse-bits-of-a-number/)
      - [Single Number](https://stackoverflow.com/questions/35185/finding-a-single-number-in-a-list)
      - [Divide without dividing](http://qa.geeksforgeeks.org/3794/divide-integers-without-multiplication-division-operator)
      - [nth magic number](http://www.geeksforgeeks.org/find-nth-magic-number/)
      - [Single Number 1](https://leetcode.com/problems/single-number/description/)
      - [single Number 2](https://leetcode.com/problems/single-number-ii/description/)
      - [ ] [Count set bits in an integer](http://www.geeksforgeeks.org/count-set-bits-in-an-integer/)
      - [ ] [Count total set bits in all numbers from 1 to n](http://www.geeksforgeeks.org/count-numbers-from-1-to-n-that-have-4-as-a-a-digit/)
      - [ ] [Swap bits in a given number](http://www.geeksforgeeks.org/swap-bits-in-a-given-number/)
      - [ ] [Count number of bits to be flipped to convert A to B](http://www.geeksforgeeks.org/count-number-of-bits-to-be-flipped-to-convert-a-to-b/)
      - [ ] [n-th number whose binary representation is a palindrome](http://www.geeksforgeeks.org/find-n-th-number-whose-binary-representation-palindrome/)
      - [ ] [Check whether all the bits are set in the given range](http://www.geeksforgeeks.org/check-whether-bits-set-given-range/)
      - [ ] [Find the Maximum of Two Integers without Comparison](http://tristan-interview.blogspot.in/2012/04/find-maximum-of-two-integers-without.html)  Logic: if(a-b >=0, max(a,b)=a;else max(a,b) = a-(a-b)

* ## Sorting
  - [CS50 : ](https://www.youtube.com/watch?v=EeQ8pwjQxTM&list=PLSwY8rzKAeZJOu6CnpdW10HquwgOP-5a7)
  - [Visual Representation](https://visualgo.net/bn/sorting?slide=7) : pure gold
  - Sorting algo:
        - [Bubble sort](https://www.tutorialspoint.com/data_structures_algorithms/bubble_sort_algorithm.htm)
        - [Insertion](https://www.tutorialspoint.com/data_structures_algorithms/insertion_sort_algorithm.htm)
        - [Selection](https://www.tutorialspoint.com/data_structures_algorithms/selection_sort_algorithm.htm)
        - [Merge](https://www.tutorialspoint.com/data_structures_algorithms/merge_sort_algorithm.htm)
        - [Quick](https://www.tutorialspoint.com/data_structures_algorithms/quick_sort_algorithm.htm)
        - [Heap](http://www.geeksforgeeks.org/heap-sort/)
        - [Radix](http://www.geeksforgeeks.org/radix-sort/)
  - [Merged Sort For Linked list](http://www.geeksforgeeks.org/merge-sort-for-linked-list/)





  * FUN- visual representation of 15 [sorting algorithms](https://www.youtube.com/watch?v=kPRA0W1kECg)

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
     3.[see this](https://github.com/neel123456/SolutionToDiscoAssign1/blob/master/Q18.cpp)
  * [smallest window in a string containing all characters of another string](http://www.geeksforgeeks.org/find-the-smallest-window-in-a-string-containing-all-characters-of-another-string/)
  * [Minimum number of bracket reversals needed to make an expression balanced](http://www.geeksforgeeks.org/minimum-number-of-bracket-reversals-needed-to-make-an-expression-balanced/)
  * [Given a string, find its first non-repeating character](http://www.geeksforgeeks.org/given-a-string-find-its-first-non-repeating-character/)
  * [Minimum number of deletions to make a string palindrome](http://www.geeksforgeeks.org/minimum-number-deletions-make-string-palindrome/)
  * [Multiply strings](https://leetcode.com/problems/multiply-strings/description/)
  * [Text Justification](https://leetcode.com/problems/text-justification/description/)
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



* ## Backtracking
  - [Valid sudoku](http://www.geeksforgeeks.org/backtracking-set-7-suduku/)

* ## Heaps & Maps & Graphs
  - [Detect Cycle in a Directed Graph](http://www.geeksforgeeks.org/detect-cycle-in-a-graph/)




*
* ## Other Topics
  * NP complete
    * [halting problem](https://www.youtube.com/watch?v=2PaOjhnyQ9o)
    * [Turing Machine](https://www.youtube.com/watch?v=ezf-f2-TO08)
    * P, NP complete, NP hard:
        * [stacksoverflow](https://stackoverflow.com/questions/6916162/what-are-np-and-np-complete-problems)
        * [GfG](http://www.geeksforgeeks.org/np-completeness-set-1/)
        * [Quora](https://www.quora.com/What-are-P-NP-NP-complete-and-NP-hard)
    * [Near optimal solution for tavelling salesman problem](http://nbviewer.jupyter.org/url/norvig.com/ipython/TSP.ipynb)


### Puzzles:  | [technical interview puzzles set](https://www.techinterview.org/) | [GfG puzzles set](http://www.geeksforgeeks.org/puzzles/) : must do
 - [x] [Daughters age](https://www.techinterview.org/post/526335645/daughters-ages/)
 - [x] [cross the bridge](http://www.geeksforgeeks.org/puzzle-18-torch-and-bridge/)
 - [x] [Divide the cake](https://puzzlersworld.com/logical-puzzles/rectangular-cake-puzzle/)
 - [x] [2 Eggs and 100 Floors](http://www.geeksforgeeks.org/puzzle-set-35-2-eggs-and-100-floors/)
 - [ ] [Ratio of Boys and Girls in a Country where people want only boys](http://www.geeksforgeeks.org/puzzle-17-ratio-of-boys-and-girls-in-a-country-where-people-want-only-boys/)

## Richa's Work[InterviewBit Microsoft questions]##
**Math**
  - [x] [Trailing zeros in Factorial](http://practice.geeksforgeeks.org/problems/trailing-zeroes-in-factorial/0)

**Binary Search**
  - [x] [Rotated Sorted Array SearchBookmark Suggest Edit](http://practice.geeksforgeeks.org/problems/finding-number/0)
  - [x] [Cout Squares](http://practice.geeksforgeeks.org/problems/count-squares/0)
  - [x] [Find the Median](http://practice.geeksforgeeks.org/problems/find-the-median/0)

**Arrays**
  - [x] [Max Sum Contaguous Sub array](http://www.geeksforgeeks.org/largest-sum-contiguous-subarray/)
  - [x] [Print a given matrix in spiral order](http://www.geeksforgeeks.org/print-a-given-matrix-in-spiral-form/)

**String**
  - [x] [Reverse a string word by word](ttp://www.geeksforgeeks.org/reverse-words-in-a-given-string/)
  - [x] [Implement strstr()](http://practice.geeksforgeeks.org/viewSol.php?subId=3935511&pid=700320&user=srashmi032)
  - [X] [Integer to Roman](http://www.geeksforgeeks.org/converting-decimal-number-lying-between-1-to-3999-to-roman-numerals/)
  - [x] [Length of last word](http://www.geeksforgeeks.org/length-of-last-word-in-a-string/)

**linkedlist**
  - [x] [Swap linked list nodes in pairs](http://practice.geeksforgeeks.org/problems/pairwise-swap-elements-of-a-linked-list-by-swapping-data/1)
  - [x][Remove Duplicates from sorted list](http://practice.geeksforgeeks.org/problems/remove-duplicate-element-from-sorted-linked-list/1)

**Trees**
  - [x] [LevelOrderTraversal using queue lib and vector stl in c++](http://practice.geeksforgeeks.org/problems/level-order-traversal/1)
  - [x] [Level Order traversal lineby line](http://practice.geeksforgeeks.org/problems/level-order-traversal-line-by-line/1)
  - [x] [Lowestcommon ancester in BST](http://practice.geeksforgeeks.org/problems/lowest-common-ancestor-in-a-bst/1)
  - [x] [lowest common ancester in BT](http://practice.geeksforgeeks.org/problems/lowest-common-ancestor-in-a-binary-tree/1)
