# DSA topics for Competitive Coding #

<details open>
<summary>Data Structures</summary>
<br>*this Man has done what you're doing- https://github.com/rabiulcste
  <details>
  <summary>---Tree</summary>
                    <details>
                            <summary>------Binary Tree</summary>
                             Khaali
                    </details>
                    <details>
                            <summary>------Binary Search Tree</summary>
                            <details>
                                    <summary>---------------About</summary>
                                     Is a binary tree with ( "node->left < node < node -> right)
                           </details>
                           <details>
                                   <summary>---------------------Declaration</summary>
                                            --------------------------[Code](https://github.com/aayush4vedi/MyCompetitiveCoding/blob/master/spoj/tree/BST/templateBST.cpp)
                                            <br>
                                            ---------------------------------Includes:
                                            <br>
                                            ------------------------------------1.Inserting a node<br>
                                            ------------------------------------2.Deletion of a node<br>
                                            ------------------------------------3.Searching for a node<br>
                                            ------------------------------------4.Tree traversal(preorder,inorder, postorder)                                               <br>
                                            ------------------------------------5.Printing the tree(display)<br>
                                            ------------------------------------6.Has path sum<br>
                                            ------------------------------------7.Height of a node<br>
                                            ------------------------------------8.Diameter of tree<br>
                                            ------------------------------------9.Mirror a tree<br>
                                            ------------------------------------10.LCA-using BST properties, so won't work on                                     tree !=BST<br>
                                            ------------------------------------11.Print ancestors of a node<br>
                                            ------------------------------------12.Print Vertically<br>
                                            ------------------------------------13.Diagonal Print-not working with class(goto                                            GfG)<br>
                           </details>
                           <details>
                                   <summary>---------------Uses</summary>
                                   <details>
                                           <summary>---------------------In heaps/Maps</summary>
                                   </details>
                           </details>
                           <details>
                                   <summary>---------------Questions</summary>
                                            <details>
                                                     <summary>---------------------------Topic</summary>
                                                      Link: http://www.spoj.com/problems/BST/
                                                      <br>
                                                      Solution: https://www.quora.com/What-is-the-approach-to-solve-this-question-SPOJ-com-Problem-BST
                                            </details>
                           </details>
                  </details>
                  <details>
                          <summary>------Segment Tree</summary>
                          <details>
                                  <summary>---------------About</summary>
                                  ---Is a height balanced binary tree with static structure(str can't be changed once made)
                                  <br><br>------Height = log2(n)// n is #ele in array
                                  <br>------#Internal nodes = n-1
                                  <br>------#total nodes = n+n-1
                                  <br><br>
                                  ---Used in Range Queries.
                                  <br>
                                  ---Easy to think and code.
                                  <br>
                                  ---Fundamental operations:
                                  <br>
                                  ------(1)Merge: (going up) storing information(e.g. sum,min/max ele) of 2 nodes into a singe node
                                  <br>
                                  ------(2)Split: (going down) propagation of information(like: update)from parent node to it's children.It's done in **Lazy Manner.
                                  <br>Heavy light decompostion:https://blog.anudeep2011.com/heavy-light-decomposition/
                        </details>
                        <details>
                                <summary>---------------------Code: SegTree</summary>
                                          --------------------------[Code for SegTree](https://github.com/aayush4vedi/MyCompetitiveCoding/blob/master/spoj/tree/SegmentTree/template.cpp)
                                          <br>
                                          ---------------------------------Includes:
                                          <br>
                                          ------------------------------------1.Build tree-O(N)<br>
                                          ------------------------------------2.Update an index-O(logN)<br>
                                          ------------------------------------2.Update an Rante-O(NlogN) // the code gives SSGIV<br>
                                          ------------------------------------4.Range Query-O(logN)
                                          <br>
                                          ---------------------------------------------4.1 Range Sum Query<br>
                                          ---------------------------------------------4.1 Range Min Query<br>
                                          ------------------------------------TIP.To traverse array-print arr[i]
                                          </details>
                                          <details>
                                          <summary>---------------------Code: Lazy Propagation-segTree</summary>
                                          --------------------------[Code for SegTree]-LAZY PROPAGATION](https://github.com/aayush4vedi/MyCompetitiveCoding/blob/master/spoj/tree/SegmentTree/template_lazyPropagation.cpp)
                                          <br>
                                          ---------------------------------Includes:
                                          <br>
                                          ------------------------------------1.Build tree-O(N)<br>
                                          ------------------------------------2.Update an index-O(logN)<br>
                                          ------------------------------------2.Update an range-O(logN) //while upar wala does in O(nlogN)<br>
                                          ------------------------------------5.Point-Query//to see updated array(logN)
                                          <br>
                                          ------------------------------------TIP.To traverse array-REP(i,0,n)cout< < pointer-query(0,n-1,i-1);<br>
                                          ------------------------------------6.Range Query-O(logN)
                                          <br>
                                          ---------------------------------------------4.1 Range Sum Query<br>
                                          ---------------------------------------------4.1 Range Min Query
                        </details>
                        <details>
                                <summary>---------------Uses</summary>
                                <br>---------------------Range Queries in O(logN)
                        </details>
                        <details>
                                <summary>---------------Questions</summary>
                                <details>
                                        <summary>---------------------------Simple SegTree</summary>
                                                  Link: http://codeforces.com/contest/380/problem/C
                                                  <br>
                                                  Solution: https://sidhantgoyal.wordpress.com/2014/02/05/sereja-and-brackets/
                                                  <br>https://github.com/jhonber/Programming-Contest/blob/47b0e6685c18dc4dc3640fc7e1982628681ad718/codeforces/Codeforces%20Round%20%23223%20%28Div.%201%29/C.cpp
                                 </details>
                                 <details>
                                        <summary>---------------------------CodeForces collection-undone: http://codeforces.com/blog/entry/15890</summary>
                                 </details>
                                 <details>
                                        <summary>---------------------------Another collection-All done</summary>
                                                  Link: http://jaskamalkainth.github.io/Segment-tree-Problems/                                                    </details>
                        </details>
                        </details>
                        <details>
                                <summary>------Trie</summary>
                                ------------reTRIEval of data
                                <br>------------ Trie can store information about keys/numbers/strings compactly in a tree.
                                <br>------------used in dictionary searching for strings
                                <details>
                                        <summary>------------code</summary>
                                        <details>
                                                 <summary>------------1.Mine</summary>
                                                 1.GfG: use when a bool value is reqd in class(is_last,count)-doesnt contains delete- https://www.geeksforgeeks.org/trie-insert-and-search/
                                                 2.GoTigers!-easy deletion(in C)-http://yihuad.blogspot.in/2013/11/trie-implementation-in-c-geeksforgeeks.html
                                                 <br>------------------Includes:
                                                 ------------------------0.Build trie-O(n*m)<br>
                                                 ------------------------1.Insertion-O(key lenght){time},O(alphabet_size*key_lenght*no_of_keys){space}<br>
                                                 ------------------------2.Search-O(key lenght){time},O(alphabet_size*key_lenght*no_of_keys){space}<br>
                                                 ------------------------3.Deletion<br>
                                                 ------------------------4.Lexographical print<br>
                                        </details>
                                        <details>
                                                 <summary>------------2.Using map</summary>
                                                 http://pastebin.com/fyqsH65k
                                        </details>
                                         <details>
                                                 <summary>------------2.Using Linked list</summary>
                                                 http://pastebin.com/kUYHiLRC
                                        </details>
                                        <details>
                                                 <summary>------------3.Using Classes </summary>
                                                 https://gist.github.com/reterVision/8487831
                                        </details>
                                        <details>
                                                 <summary>------------4.Memory Effecient(& easy)</summary>
http://yihuad.blogspot.in/2013/11/trie-implementation-in-c-geeksforgeeks.html                                        </details>
                                </details>
                                <details>
                                        <summary>------------Questions</summary>
                                        <details>
                                                <summary>---------------(A)Bit-string wale(XOR)</summary>
                                                <details>
                                                       <summary>------------------1.Find 2 elements in array with max XOR value                                                        </summary>
                                                       Link: https://threads-iiith.quora.com/Tutorial-on-Trie-and-example-problems
                                                       <br>solution: https://www.geeksforgeeks.org/minimum-xor-value-pair/
                                              </details>
                                              <details>
                                                       <summary>------------------1.Find subarray with maximum XOR                                                        </summary>
                                                       Link: https://threads-iiith.quora.com/Tutorial-on-Trie-and-example-problems
                                                       <br>solution: https://www.geeksforgeeks.org/find-the-maximum-subarray-xor-in-a-given-array/
                                              </details>
                                              <details>
                                                       <summary>------------------1.print the number of subarrays whose XOR is less than K                                                        </summary>
                                                       Link: https://threads-iiith.quora.com/Tutorial-on-Trie-and-example-problems
                                                       <br>solution: https://www.geeksforgeeks.org/subarray-xor-less-k/
                                              </details>
                                        </details>
                                        <details>
                                                <summary>---------------(B)Alpha-string</summary>
                                                <details>
                                                        <summary>------------------(E).Add & count partial appearnces</summary>
                                                        Link:  https://www.hackerrank.com/challenges/contacts/problem <br>
                                                        Solution: https://www.hackerrank.com/challenges/contacts/editorial
                                                </details>
                                                <details>
                                                        <summary>------------------(M).Find if a string is prefix of any other</summary>
                                                        Link: https://www.hackerrank.com/challenges/no-prefix-set/problem <br>
                                                        Solution: https://www.hackerrank.com/challenges/no-prefix-set/editorial
                                                </details>              
                                                <details>
                                                        <summary>------------------(M).Phone list-SPOJ: used vector of occurrences in node declaration</summary>
                                                        Link: http://www.spoj.com/problems/PHONELST/<br>
                                                        Solution: http://theoryofprogramming.com/2015/08/24/trie-tree-practise-spoj-phonelst/
                                                </details>  
                                                <details>
                                                        <summary>------------------(D).Partial Search & Lexographical Print</summary>
                                                        Link:http://theoryofprogramming.com/2015/09/01/trie-tree-practise-spoj-dict/ 
                                                </details>                                            
                                          </details>
                                </details>
                        </details>
                        <details>
                                <summary>------BIT/AVL Tree</summary>
                                <details>
                                         <summary>Uses</summary>
                                          <details>
                                                   <summary>Find kth smallest element in array after sorting for each query</summary>
                                          </details>                                  
                                </details>
                        </details>
                        <details>
                                <summary>------Heap</summary>
                                <details>
                                        <summary>---------MinHeap</summary>
                                </details>
                                        <details>
                                        <summary>---------MaxHeap</summary>
                                </details>
                       </details>
                      <details>
                              <summary>------Red Black Tree</summary>
                      </details>
                      <details>
                              <summary>------Splay Tree</summary>
                      </details>
                      <details>
                              <summary>------Treap</summary>
                      </details>
                      <details>
                              <summary>------Suffix Tree</summary>
                      </details>
                      <details>
                              <summary>------Prefix Tree</summary>
                      </details>
             </details>
              <br>
      </details>
      <details>
              <summary>---Graph</summary>
              <details>
                      <summary>---------1.Representation</summary>
                      Link: https://gist.github.com/mailpraveens/78713d5d69601bdb6737
              </details>
               <details>
                      <summary>---------2.BFS</summary>
                      <details>
                              <summary>---------------2.1.BFS</summary>
                              link: https://github.com/rabiulcste/Graph-Theory/blob/master/BFS.cpp
                      </details>
                       <details>
                              <summary>---------------2.2.BFS using color{W,G,B}</summary>
                              link: https://github.com/rabiulcste/Graph-Theory/blob/master/BFS%20using%20color.cpp
                      </details>
                       <details>
                              <summary>---------------2.3. 2D BFS</summary>
                              Code: https://github.com/rabiulcste/Graph-Theory/blob/master/BFS%20(2D).cpp
                              example: https://stackoverflow.com/questions/37654296/breadth-first-search-on-2d-array
                      </details>
                </details>
                <details>
                      <summary>---------3.DFS</summary>
                      <details>
                               <summary>---------------3.1 DFS using adjacency list</summary>
                                link: https://github.com/rabiulcste/Graph-Theory/blob/master/DFS.cpp
                      </details>
                      <details>
                               <summary>---------------3.2 DFS using adjacency matrix</summary>
                               link: https://github.com/rabiulcste/Graph-Theory/blob/master/DFS%20using%20matrix.cpp
                      </details>
                      <details>
                               <summary>---------------3.3 2D-DFS</summary>
                               link: https://github.com/rabiulcste/Graph-Theory/blob/master/DFS%202D.cpp
                      </details>
                      <details>
                               <summary>---------------3.3 DFS - Leaf Count and Print</summary>
                               link: https://github.com/aayush4vedi/MyCompetitiveCoding/edit/master/DSA.md
                      </details>
                      <details>
                               <summary>---------------3.3 Cycle detection using DFS</summary>
                               link: https://github.com/rabiulcste/Graph-Theory/blob/master/Cycle%20in%20a%20Graph%20using%20DFS.cpp
                      </details>
              </details>
              <details>
                      <summary>---------4.Shortest Path</summary>
                      <details>
                              <summary>---------------4.1 Djikstra's {works only for + edge weight}</summary>
                              ------to find the shortest paths from the source vertex to all other vertices in the graph.
                                      <details>
                                      <summary>---------------4.1.1 Djikstra's Easy</summary>
                                      link: https://github.com/rabiulcste/Graph-Theory/blob/master/Dijkstra%20easy.cpp
                                      </details>
                                      <details>
                                      <summary>---------------4.1.2 Djikstra's 2D</summary>
                                      link: https://github.com/rabiulcste/Graph-Theory/blob/master/Dijkstra%202D.cpp
                                      </details>
                                      <details>
                                      <summary>---------------4.1.3 Djikstra's Path Print</summary>
                                      link: https://github.com/rabiulcste/Graph-Theory/blob/master/Dijkstra%20Path%20Print.cpp
                                      </details>
                                      <details>
                                      <summary>---------------4.1.4 Djikstra's !easy</summary>
                                      link: https://github.com/rabiulcste/Graph-Theory/blob/master/Dijkstra's%20Algorithm.cpp
                                      </details>https://github.com/rabiulcste/Graph-Theory/blob/master/Bellman%20Ford%20Algorithm.cpp
                      </details>
                      <details>
                              <summary>---------------4.2 Bellman Ford {works for -ve edge weight too}-O(V.E)</summary>
                              ------to find the shortest paths from the source vertex to all other vertices in the graph.
                                      <details>
                                      <summary>---------------4.2.1 Bellman Ford</summary>
                                      link: https://github.com/rabiulcste/Graph-Theory/blob/master/Bellman%20Ford%20Algorithm.cpp
                                      </details>
                                      <details>
                                      <summary>---------------4.2.2 Bellman Ford easy</summary>
                                      link: https://github.com/aayush4vedi/MyCompetitiveCoding/edit/master/DSA.md
                                      </details>
                                      <details>
                                      <summary>---------------4.2.3 Bellman Ford using matrix</summary>
                                      link: https://github.com/rabiulcste/Graph-Theory/blob/master/Bellman%20Ford%20using%20matrix.cpp
                                      </details>
                      </details>
                      <details>
                              <summary>---------------4.3 Floyd-Warshall's {works only for both +/- edge weight}-O(v^3)</summary>
                              ------used to find the shortest paths between between all pairs of vertices in a graph
                              link: 
                                      <details>
                                      <summary>---------------4.3.1 Floyd-Warshall's</summary>
                                      link: https://github.com/rabiulcste/Graph-Theory/blob/master/Floyd%20Warshall%20algorithm.cpp
                                      </details>       
                                      <details>
                                      <summary>---------------4.3.1 Floyd-Warshall's easy</summary>
                                      link: https://github.com/rabiulcste/Graph-Theory/blob/master/Floyd%20Warshall%20Easy.cpp
                                      </details>  
                      </details>                
              </details>
                <details>
                      <summary>---------5.Minimum Spanning Tree</summary>
                                <details>
                                         <summary>---------------5.1.Kruskal's - O(ElogV)</summary>
                                ---builds the spanning tree by adding edges one by one into a growing spanning tree.
                                <br>---follows GREEDY approach as in each iteration it finds an edge which has least weight and add it to the growing spanning tree.<br>
---code: https://github.com/rabiulcste/Graph-Theory/blob/master/Mst%20Krushkal%20Algorithm.cpp
                                </details>
                                <details>
                                         <summary>---------------5.2.Prim's - O((E+V)logV)</summary>
                                ---also use Greedy approach<br>---here we grow the spanning tree from a starting position<br>--- Unlike an edge in Kruskal's, we add vertex to the growing spanning tree in Prim's.<br>
code: https://github.com/rabiulcste/Graph-Theory/blob/master/Mst%20Prims%20Algorithm.cpp
                                </details>
                </details>
                <details>
                      <summary>---------6.Check Eulerian or not</summary>
                      <details>
                                <summary>-------------6.1 for directed graph</summary>
                                 ---link: https://github.com/rabiulcste/Graph-Theory/blob/master/Eulerian%20for%20Directed%20Graph.cpp
                      </details>
                       <details>
                                <summary>-------------6.1 for undirected graph</summary>
                                 ---link: https://github.com/rabiulcste/Graph-Theory/blob/master/Eulerian%20for%20Undirected%20Graph.cpp
                      </details>
              </details>
                <details>
                      <summary>---------7.Bipartite</summary>
                      <details>
                               <summary>--------------7.1 isBipartite</summary>
                               ---link: https://github.com/rabiulcste/Graph-Theory/blob/master/IsBipartite.cpp
                      </details>
                      <details>
                               <summary>--------------7.1 Max Bipartite Matching</summary>
                               ---link: https://github.com/rabiulcste/Graph-Theory/blob/master/Max%20Bipartite%20Matching.cpp
                      </details>
              </details>
              <details>
                      <summary>---------8.Topological Sort</summary>
                      <details>
                              <summary>-------------8.1 Topological Sort- Easy</summary>
                               ---link: https://github.com/rabiulcste/Graph-Theory/blob/master/Topsort%20easy%20full-code.cpp
                      </details>
                      <details>
                              <summary>-------------8.1 Topological Sort in DAG</summary>
                               ---link: https://github.com/rabiulcste/Graph-Theory/blob/master/Topsort%20in%20DAG.cpp
                      </details>                
              </details>
                <details>
                      <summary>---------9.Articulation Point</summary>
                      ---a vertex is called an articulation point if removing it and all the edges associated with it results in the increase of the number of connected components in the graph
                      <br>--code: https://github.com/rabiulcste/Graph-Theory/blob/master/Articulation%20Point.cpp
              </details>
              <details>
                      <summary>---------10. Connected</summary>
                      <details>
                                <summary>-------------10.1. No. of connected components</summary>
                                ---link: https://github.com/rabiulcste/Graph-Theory/blob/master/No.%20of%20Connected%20Components%20in%20a%20Graph.cpp
                      </details>
                      <details>
                                <summary>-------------10.2. No. of Strongly connected components</summary>
                                ---link: https://github.com/rabiulcste/Graph-Theory/blob/master/Strongly%20Connected%20Components.cpp
                      </details>
            </details>
            <details>
                      <summary>---------11.Max Flow</summary>
                      <details>
                              <summary>---------------11.1. Edmonds-Karp's</summary>
                              ---link: https://github.com/rabiulcste/Graph-Theory/blob/master/Max%20Flow%20Edmonds-Karp%20Algorithm.cpp
                      </details>
            </details>
            <details>
                     <summary>---------------12.Min Vertex Cover</summary>
                              ---link: https://github.com/rabiulcste/Graph-Theory/blob/master/Min%20Vertex%20Cover.cpp
             </details>
              <details>
                     <summary>---------------13.Cut Vertex</summary>
                              ---link: https://github.com/rabiulcste/Graph-Theory/blob/master/Cut%20Vertex.cpp
             </details>
      </details>
  </details>
  <br>
  <details>
  <summary>---Stack</summary>
    
  </details>
  <br>
  <details>
  <summary>---Queue</summary>
    
  </details>
  <br>
  <details>
  <summary>---Heap</summary>
  </details>
  <br>
  <details>  
  
  <summary>---Disjoint Set</summary>
    <details>
  <summary>---------Union Find</summary>
  ---link: https://github.com/rabiulcste/Graph-Theory/blob/master/Union-Find%20(Disjoint%20sets%20data%20structure).cpp
  </details>
  </details>
  <br>
  <details>
  <summary>---Array</summary>
    
  </details>
</details>
<br><br>
<details open>
        <summary>Algorithms</summary>
        <br>
                <details>
                        <summary>---DP</summary>
                        ##The last resort of any interviewer set on seeing you fail<br>
                        ------------------------>>>>>Greedy vs DP:<br>---given a problem which can be solved by greedy method, it can also be solved by dp but IT IS OVERKILLING.
                        <details>
                        <summary>--------->>About</summary>  
                        --Diff b/w MEMOIZATION & DP: https://www.codechef.com/wiki/tutorial-dynamic-programming
                        --How to identify DP problems: it must have-<br>
                        ----(A)Optimal Substructure: we can get the final answer just by combining ans of subproblems<br>
                        ----(B)Overlapping Subproblems: same value is being asked again&again."Remember your past."<br>
                        </details>
                        <details>
                                  <summary>---------->>>How to solve?</summary>
                                  --Fab article:https://blog.pramp.com/how-to-solve-any-dynamic-programming-problem-603b6fbbd771<br>
                                  --the FAST Method:<br>
                                  -------(1) find the First solution  - just write the (ineffecient)brute force recursion you can think of<br>
                                  -------(2) Analyse the solution - if it has both (A)&&(B); buckle up for a buttload of DPing<br>
                                  -------(3) identify the Subproblem - (top_downing)save the result of each subproblem as we compute it and then check before computing any value whether or not it’s already computed.<br>
                                  -------(4) Turn around the solution - (bottom_upping) With our previous (top-down) solution, we started with n and repeatedly broke it down into smaller and smaller values until we reached n == 1 and n == 0. Now, instead, we’ll start with the base cases and work our way up until we get the result.<br>
                        </details>
                        <details>
                                <summary>------Knapsack</summary>
                                --Given weights and values of n items, put these items in a knapsack of capacity W to get the maximum total value in the knapsack
                                <details>
                                        <summary>----------(1) 0-1 Knapsack</summary>
                                        <details>
                                                  <summary>---------->>>Bottom-up Approach(DP)</summary>
                                                  --Complexity- O(nW)<br>
                                                  --Code: https://github.com/aayush4vedi/MyCompetitiveCoding/blob/master/dp/0-1Knapsack_bottom_up.cpp
                                        </details>
                                        <details>
                                                  <summary>---------->>>Overlapping Subproblem Approach(recursion)</summary>
                                                  --Complexity- O(2^2)<br>
                                                  --Code: https://github.com/aayush4vedi/MyCompetitiveCoding/blob/master/dp/0-1Knapsack_recursive.cpp
                                        </details>                                       
                                </details>
                                <details>
                                          <summary>-----------------------------Questions:</summary>
                                          <br>-------------------> Unbounded Knapsack(repetition is allowed) https://www.geeksforgeeks.org/unbounded-knapsack-repetition-items-allowed/ 
                                          <br>-------------------> Fractional Knapsack https://www.geeksforgeeks.org/fractional-knapsack-problem/ 
                                          <br>-------------------> https://discuss.codechef.com/questions/42898/exam-editorial-ncc-2014                                  
                                          <br>------------------->https://discuss.codechef.com/questions/87642/ssq-editorial
                                          <br>------------------->https://discuss.codechef.com/questions/75766/effdeliv-editorial
                                          <br>------------------->https://discuss.codechef.com/questions/80457/coex01-editorial
                                          <br>------------------->https://discuss.codechef.com/questions/87809/wa-in-eqgifts-problem-on-iarcs-pls-help
                                          <br>------------------->https://discuss.codechef.com/questions/90330/seabox-editorial
                                          <br>------------------->https://stackoverflow.com/questions/48616925/maximum-value-taken-by-thief
                                          <br>------------------->https://stackoverflow.com/questions/48560646/a-variant-of-the-knapsack-algorithm
                                          <br>------------------->https://stackoverflow.com/questions/48552724/fast-knapsack-solver-for-big-problems                             
                                          <br>------------------->http://www.spoj.com/problems/KNAPSACK/
                                          <br>------------------->http://www.spoj.com/problems/FOODIE/
                                          <br>------------------->http://www.spoj.com/problems/LKS/
                                          <br>------------------->http://www.spoj.com/problems/MINVEST/
                                          <br>------------------->http://www.spoj.com/problems/WACHOVIA/                                    
                                 </details>
                        </details>
                        <details>
                                <summary>------BitMask</summary>
                                 ----------->> Has exponantial space&time complexities.<br>
                                 ----------->> When to use: "To solve a sub problem, I need the previously visited positions/indices"
                                <details>
                                         <summary>------Questions:</summary>  
                                          -------------------->> 1D bitmask-How many subsets with sum >=k : O(n*2^n)<br>
                                          ----link: https://github.com/aayush4vedi/MyCompetitiveCoding/blob/master/dp/bitmask_how_many_subsets_with_sum_%3C%3DK.cpp
                                          <br>-------------------->> 2D bitmask- job assignment problem : O(2^n)<br>
                                          ----link: https://github.com/aayush4vedi/MyCompetitiveCoding/blob/master/dp/bitmask2D_job_assignment_problem.cpp
                                          <br>-------------------->>[Easy]https://www.codechef.com/problems/MARCHA1                                                       <br>-------------------->>[Easy]https://www.codechef.com/JAN13/problems/LEALCO
                                          <br>-------------------->>[Easy]http://www.spoj.com/problems/GNY07H/
                                          <br>-------------------->>[Easy]http://www.spoj.com/problems/HIST2/
                                          <br>-------------------->>[Easy]http://www.spoj.com/problems/M3TILE/
                                          <br>-------------------->>[Medium]http://www.spoj.com/problems/COURIER/
                                          <br>-------------------->>[Hard]http://www.spoj.com/problems/BABY/
                                          <br>-------------------->>[Hard]http://www.spoj.com/problems/HELPBOB/
                                </details>                          
                        </details>
                        <details>
                                <summary>------Coin Change</summary>
                                ------------>> Problem: given infinite supply of coins of denominations a[], find how many ways can sum N be given?<br>
                                ------------>> Solution- O(m*n)<br>----//Optimal substructure: f(a[],n,N)=f(a[],n-1,N)+f(a[],n,N-am)//(i)not taking the n'th coin and (ii)taking it<br>----link: https://github.com/aayush4vedi/MyCompetitiveCoding/blob/master/dp/coin_change.cpp
                                <br>------------->> Min no of coins to make given change:<br>
                                  ---code: https://github.com/aayush4vedi/MyCompetitiveCoding/blob/master/dp/Minimum_number_of_coins_for_a_given_change.cpp
                        </details>
                        <details>
                                <summary>------Digit DP</summary>
                                <details>
                                        <summary>---------->>Where to use:</summary>
                                        --calculation of how many numbers between two values ( say, A and B) satisfying a particular property<br>
                                        --Answer=solve(B)-solve(A-1) 
                                </details>     
                                <details>
                                        <summary>---------->>Example: <br>---(1)how many integers in the interval [L..R] have sum divisible by a number K<br>--solution: https://github.com/aayush4vedi/MyCompetitiveCoding/blob/master/dp/digitDP_how_many_digits_with_sumk.cpp<br>---(2)Sum of digits from A to B <br>--solution: https://github.com/aayush4vedi/MyCompetitiveCoding/blob/master/dp/digitDP_calculate_sum_of_dig_fromAtoB.cpp
                                        </summary>
                                </details>   
                                <details>
                                        <summary>---------->> Problems:</summary>
                                         --(.) https://www.codechef.com/problems/WORKCHEF <br>
                                         --(.) http://www.spoj.com/problems/NUMTSN/<br>
                                         --(.) http://www.spoj.com/problems/LUCIFER/<br>
                                         --(.) http://www.spoj.com/problems/RAONE/<br>  
                                         --(.) http://www.spoj.com/problems/PR003004/<br>
                                         --(.) http://www.spoj.com/problems/CPCRC1C/<br>
                                         --(.) https://devskill.com/CodingProblems/ViewProblem/392<br>
                                         --(.) https://www.codechef.com/problems/DIGIMU<br>  
                                         --(.) http://www.spoj.com/problems/TAP2012C/en/<br>
                                         --(.) http://codeforces.com/gym/100886/problem/G<br>
                                         --(.) https://vjudge.net/problem/LightOJ-1205<br>  
                                         --(.) http://codeforces.com/contest/628/problem/D<br> 
                                         --(.) https://toph.co/p/lids<br> 
                                         --(.) https://vjudge.net/problem/LightOJ-1068                                  
                                </details>
                        </details>                  
                        <details>
                                <summary>------Edit Distance</summary>
                                --->> convert string1 to string2 by remove/delete/insert<br>
                                <details>
                                        <summary>--------------Code: </summary>
                                        <details>
                                                 <summary>-----------------(1)Recursion: O(3^n)</summary>
                                                  Link: https://github.com/aayush4vedi/MyCompetitiveCoding/blob/master/dp/Edit_Distance_Recursive.cpp
                                        </details>
                                        <details>
                                                 <summary>-----------------(1)DP: O(n*m):O(n*m)::time:space</summary>
                                                  Link: https://github.com/aayush4vedi/MyCompetitiveCoding/blob/master/dp/Edit_Distance_Bottom_Up.cpp
                                        </details>                                  
                                </details>
                        </details>
                        <details>
                                <summary>------Distinct Subsequences</summary>
                                --->> Given a string;count all distict subsequences((2^n)-repeated)<br>
                                --->> Link: https://github.com/aayush4vedi/MyCompetitiveCoding/blob/master/dp/Distinct_Subsequence.cpp
                        </details> 
                        <details>
                                <summary>------Joshephus Problem:</summary>
                                 <details>
                                         <summary>--->>Statement:</summary>
                                         Given the total number of persons n and a number k which indicates that k-1 persons are skipped and kth person is killed in circle. The task is to choose the place in the initial circle so that you are the last one remaining and so survive.<br>Code O(n) : https://github.com/aayush4vedi/MyCompetitiveCoding/blob/master/dp/Josephus_Problem.cpp
                                </details>                                 
                        </details>                    
                        <details>
                                <summary>------LCS</summary>
                                <details>
                                        <summary>-----------1.LCS length -O(m*n)</summary>
                                        Code: https://github.com/aayush4vedi/MyCompetitiveCoding/blob/master/dp/LCS_Length_(bottom%20up).cpp
                                </details>  
                                <details>
                                        <summary>-----------2.LCS print-O(m*n)</summary>
                                        Code: https://github.com/aayush4vedi/MyCompetitiveCoding/blob/master/dp/LCS_Print_Backtrack.cpp
                                </details>
                                <details>
                                        <summary>-----------3.LCS print(sentence)-O(m*n)</summary>
                                        Code: https://github.com/aayush4vedi/MyCompetitiveCoding/blob/master/dp/LCS_Print_(sentence).cpp
                                </details>  
                                <details>
                                        <summary>-----------0.shortest common subsequence</summary>
                                        Code: https://github.com/aayush4vedi/MyCompetitiveCoding/blob/master/dp/Shortest_Common_Subsequence.cpp
                                </details>                             
                        </details>    
                        <details>
                                <summary>------Longest Increasing subseq</summary>
                                <details>
                                        <summary>---->> Code for:</summary>
                                        (1)LIS length- O(nlogn)<br>-code: https://github.com/aayush4vedi/MyCompetitiveCoding/blob/master/dp/Length_Of_LIS.cpp<br>
                                        (2) LIS print- O(nlogn) vs O(n^2)<br>-code: https://github.com/aayush4vedi/MyCompetitiveCoding/blob/master/dp/LIS-O(nlogn).cpp
                                 </details>   
                                 <details>
                                        <summary>--------->>Questions</summary>
                                        ------------------------(1)Building Bridges problem- sort by north x and apply LIS<br>
                                        ----link: https://github.com/aayush4vedi/MyCompetitiveCoding/blob/master/dp/building_Bridges_Problem_LIS.cpp 
                                </details>                            
                        </details>    
                        <details>
                                <summary>------Longest Palindromic Subseq</summary>
                                -code: https://github.com/aayush4vedi/MyCompetitiveCoding/blob/master/dp/Longest_Palindromic_Subsequence.cpp
                        </details>    
                        <details>
                                <summary>------Matrix Chain Multiplication</summary>
                                -->> About: given a chain of matrices a[]{a[i](nxm), a[i+1](mxp)i.e. all the consecutive matrices can be multiplied}; find the order of multiplication to maximise the result: A(BC)or(AB)C<br>
                                -code: https://github.com/aayush4vedi/MyCompetitiveCoding/blob/master/dp/Matrix_Chain_Multiflication.cpp
                        </details>    
                        <details>
                                <summary>------Largest sum 1D contiguous Array</summary>
                                -code- O(n) : https://github.com/aayush4vedi/MyCompetitiveCoding/blob/master/dp/Largest_sum_1D_contiguous_array.cpp
                        </details>
                       <details>
                                <summary>------Max Sum such that no 2 elements are adjacent</summary>
                                -code- o(n) : https://github.com/aayush4vedi/MyCompetitiveCoding/blob/master/dp/MaxSumForNonAdjacentElements.cpp
                        </details>                     
                        <details>
                                <summary>------Min Cost Path in 2D matrix</summary>
                                (1)Right,Down, Diagonally-right-down<br>
                                 ---code O(n*m) : https://github.com/aayush4vedi/MyCompetitiveCoding/blob/master/dp/Minimum_Cost_Path_RDDrd.cpp<br>
                                (2)Up,Down,Right,Left<br>
                                 ---code: https://github.com/aayush4vedi/MyCompetitiveCoding/blob/master/dp/Min_cost_path_RLUD.cpp
                        </details>        
                        <details>
                                <summary>------nCr</summary>
                                --code: https://github.com/aayush4vedi/MyCompetitiveCoding/blob/master/dp/nCr.cpp
                        </details>        
                        <details>
                                <summary>------Palindomic Partitioning</summary>
                                --->> Print min #cuts to make all substrs palin<br>
                                - code -O(n^2) :https://github.com/aayush4vedi/MyCompetitiveCoding/blob/master/dp/PalindromePartitioningMinCut.cpp
                                <br>--->> Print all palindromic substrs:{Not-DP} <br>
                                - code - https://github.com/aayush4vedi/MyCompetitiveCoding/blob/master/dp/PrintAllPalindromes.cpp
                        </details>    
                        <details>
                                <summary>------Rod Cutting</summary>
                                 -->> Problem:<br>
                                  -Given a rod of length n inches and an array of prices that contains prices of all pieces of size smaller than n. Determine the maximum value obtainable by cutting up the rod and selling the pieces.
                                  -code: O(n^2) https://github.com/aayush4vedi/MyCompetitiveCoding/blob/master/dp/RodCut.cpp
                        </details>                    
                        <details>
                                <summary>------RMQ-sparse table</summary>
                                code: https://github.com/aayush4vedi/MyCompetitiveCoding/blob/master/dp/Range%20Min%20Query%20(Sparse%20Table).cpp
                        </details>       
                        <details>
                                <summary>------Subset sum-2D</summary>
                                code: https://github.com/aayush4vedi/MyCompetitiveCoding/blob/master/dp/Sum_of_subset(2D).cpp
                        </details>        
                        <details>
                                <summary>------Weighted Job scheduling</summary>
                                -->> Statement:<br>Given N jobs where every job is represented by following three elements of it:{ Start Time,Finish Time,Profit or Value Associated}.<br>
Find the maximum profit subset of jobs such that no two jobs in the subset overlap.<br> --code: https://github.com/aayush4vedi/MyCompetitiveCoding/blob/master/dp/Weighted_Job_Scheduling.cpp
                        </details>                          
                </details>
                <br>
                <details>
                        <summary>---Greedy</summary>
                        <details>
                                <summary>----->>About:<summary>
                                  --makes a locally-optimal choice in the hope that this choice will lead to a globally-optimal solution.<br>-------------->>How to identify Greedy problems: think along these lines-<br>
                          --(1) Do I have a choice b/w diff alternatives at some point?<br>
                          --(2) Does this choice result in sub-problems that can be solved individually?<br>
                          --(3) Optimal substructure: Will I be able to use the solution of the sub-problem to derive a solution for the overall problem?<br> ------------------------>>>>>Greedy vs DP:<br>---given a problem which can be solved by greedy method, it can also be solved by dp but IT IS OVERKILLING.
                         </details>
                         <details>
                                  <summary>--------->>>Standard Problems</summary>
                                  <details>
                                          <summary>------------(.) Fractional Knapsack problem</summary>
                                          --Maximise value with sumWeight =W; breaking of an item will break the value is allowes.<br>
                                          -code: O(nlogn) https://github.com/aayush4vedi/MyCompetitiveCoding/blob/master/Greedy/fractional_knapsack.cpp                            
                                   </details>    
                                    <details>
                                            <summary>------------(.) Bin Packing Problem</summary>
                                            --Given n items of different weights and bins each of capacity c, assign each item to a bin such that number of total used bins is minimized. <br>
                                            -- code: O(n):O(1)::time:space https://github.com/aayush4vedi/MyCompetitiveCoding/blob/master/Greedy/BinPacking.cpp
                                      </details>    
                                    <details>
                                            <summary>------------(.) Set Cover Problem</summary>
                                            -- Given a universe U of n elements, a collection of subsets of U say S = {S1, S2…,Sm} where every subset Si has an associated cost. Find a minimum cost subcollection of S that covers all elements of U.<br>--------i.e. find the minimum number of sets needed to cover every element.<br>
                                           <br>--code: N/A
                                           <details>
                                                    <summary>------------------>>Problems:</summary>
                                                    ---- https://www.codechef.com/COOK52/problems/COVERING
                                          </details>
                                      </details> 
                                     <details>
                                            <summary>------------(.) K centers problem</summary>
                                            --->>>Given n cities and distances between every pair of cities, select k cities to place ATMs such that the maximum distance of a city to a ATM is minimized.<br>
                                           ------------------no polynomial time soln-it's NP hard problem
                                            ---->>Read: https://www.geeksforgeeks.org/k-centers-problem-set-1-greedy-approximate-algorithm/
                                      </details>    
                                    <details>
                                            <summary>------------(.) Job Sequencing(with deadline)</summary>
                                            ---->> Maximise the profit<br>
                                            -- code: O(n^2) https://github.com/aayush4vedi/MyCompetitiveCoding/blob/master/Greedy/job_sequencing_with_deadline.cpp
                                      </details>    
                                    <details>
                                            <summary>------------(.) Dijkstra's</summary>
                                      </details>         
                                    <details>
                                            <summary>------------(.) Prim's MST</summary>
                                      </details>  
                                    <details>
                                            <summary>------------(.) Huffman Coding</summary>
                                            - code: O(nlogn) https://github.com/aayush4vedi/MyCompetitiveCoding/blob/master/Greedy/huffman_coding.c
                                      </details>  
                                    <details>
                                            <summary>------------(.) Kruskal MST</summary>
                                      </details>  
                                    <details>
                                            <summary>------------(.) Activity Selection Problem</summary>
                                            ---->>> You are given n activities with their start and finish times. Select the maximum number of activities that can be performed by a single person, assuming that a person can only work on a single activity at a time.<br>
                                            --code: https://github.com/aayush4vedi/MyCompetitiveCoding/blob/master/Greedy/job_sequencing_with_deadline.cpp
                                      </details>          
                                    <details>
                                            <summary>------------(.) Graph Coloring</summary>
                                            <details>
                                                      <summary>---------------------->>> Standard Problems</summary>
                                                      <details>
                                                             <summary>--- Perform Coloring on Edges</summary>
                                                              ---------------performs greedy coloring on edges<br>
                                                              -------->code: https://github.com/aayush4vedi/MyCompetitiveCoding/blob/master/Graph_Coloring/performs_coloring_on_EDGEs_of_graph.cpp
                                                      </details> 
                                                      <details>
                                                             <summary>--- Perform Coloring on Vertices</summary>
                                                              -------------performs greedy coloring on vertices<br>
                                                              -------->code: https://github.com/aayush4vedi/MyCompetitiveCoding/blob/master/Graph_Coloring/performs_coloring_on_VERTICES_of_given_graph.cpp
                                                      </details>  
                                                      <details>
                                                             <summary>--- Perform Coloring on All Possible Edges</summary>
                                                              ---------------//for all the possible n*(n-1)/2 edges<br>//doesnt even asks for edges<br>
                                                              -------->code:https://github.com/aayush4vedi/MyCompetitiveCoding/blob/master/Graph_Coloring/perform_edge_coloring_on_complete_graph.cpp
                                                      </details> 
                                                      <details>
                                                             <summary>--- Checks if 2 graphs are bipartitie using 2 color thormem</summary>
                                                              --------------- //uses adj matrix<br>
                                                              -------->code:https://github.com/aayush4vedi/MyCompetitiveCoding/blob/master/Graph_Coloring/check_if_2_graphs_are_bipartitie_using_2_color_theorem.cpp
                                                      </details>    
                                                      <details>
                                                             <summary>--- Perform Coloring on Given Bipartite Graph</summary>
                                                              ---------------takes a bipartite graph as input and outputs
colours of the each vertex after coloring the vertices<br>
                                                              -------->code:https://github.com/aayush4vedi/MyCompetitiveCoding/blob/master/Graph_Coloring/performs_graph_coloring_on_given_bipartite_graph.cpp
                                                      </details> 
                                                      <details>
                                                             <summary>--- Finds Chromatic number and performs coloring on cyclic graph</summary>
                                                               -------->code: https://github.com/aayush4vedi/MyCompetitiveCoding/blob/master/Graph_Coloring/finds_chromatic_no_and_perform_coloring.cpp
                                                      </details>      
                                                      <details>
                                                             <summary>--- Finds independent sets in graph by graph coloring</summary>
                                                              ---------------finds largest independent set by graph coloring<br>
                                                              ---------------In graph theory, an independent set or stable set is a set of vertices in a graph, no two of which are adjacent. That is, it is a set I of vertices such that for every two vertices in I, there is no edge connecting the two. <br>       ---->>code:https://github.com/aayush4vedi/MyCompetitiveCoding/blob/master/Graph_Coloring/find_independent_sets_in_graph_by_graph_coloring.cpp
                                                              --------------- <br>
                                                      </details> 
                                            </details>                                       
                                            <details>
                                                    <summary>------------(.) Uses:<summary>
                                                             <br>-- Making schedule/timetables
                                                             <br>-- sudoku
                                                              <br>-- Bipartite Graph
                                                              <br>-- Four coloring problem: code- https://github.com/okaydemir/4-color-theorem/blob/master/four_color.cpp
                                            </details>     
                                      </details>     
                                    <details>
                                            <summary>------------(.) Traveling Salesman Problem</summary>
                                      </details>      
                                    <details>
                                            <summary>------------(.) Subset-sum Problem</summary>
                                      </details>  
                                    <details>
                                            <summary>------------(.) </summary>
                                      </details> 
                                    <details>
                                            <summary>------------(.) </summary>
                                      </details>  
                                    <details>
                                            <summary>------------(.) </summary>
                                    </details>    
                         </details>   
                         <details>
                                  <summary>------->>> Problems</summary>
                                   <details>
                                             <summary>-----------Problem</summary>
                                  </details>
                                   <details>
                                             <summary>-----------Problem</summary>
                                  </details>
                                   <details>
                                             <summary>-----------Problem</summary>
                                  </details>                           
                        </details>
                </details>                
                <br>  
                <details>
                        <summary>---Binary and Ternary Search</summary>
                </details>
                <br>
                <details>
                        <summary>---String ALgo<summary>
                </details>
</details>
<br><br>
<details open>
<summary>Game Theory</summary>

</details>
<br><br>
<details open>
    <summary>Maths</summary><br>
    <details>
    <summary>---Number Theory</summary>
    </details><br>
    <details>
    <summary>---Combinotrics</summary>
    </details><br>
    <details>
    <summary>---Geomatry</summary>
    </details><br>
</details>
<br><br><br>
