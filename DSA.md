# DSA topics for Competitive Coding #

<details open>
<summary>Data Structures</summary>
<br>
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
                                          ------------------------------------TIP.To traverse array-REP(i,0,n)cout<<pointer-query(0,n-1,i-1);
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
    <summary>------Graph Theory</summary>
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
