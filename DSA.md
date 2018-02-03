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
                                         <summary>---------------5.2.Prim's - O(ElogV)</summary>
                                ---also use Greedy approach<br>---here we grow the spanning tree from a starting position<br>--- Unlike an edge in Kruskal's, we add vertex to the growing spanning tree in Prim's.<br>
code: https://github.com/rabiulcste/Graph-Theory/blob/master/Mst%20Prims%20Algorithm.cpp
                                </details>
                </details>
                <details>
                      <summary>---------6.Flood Fill</summary>
              </details>
                <details>
                      <summary>---------7.Topological Sort</summary>
              </details>
                <details>
                      <summary>1---------</summary>
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
    
  </details>
  <br>
  <details>
  <summary>---Greedy</summary>
    
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
