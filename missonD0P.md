# A dynamic list of GfG problems-interview rounds :neckbeard:

# Plan: #
* 1st Iteration(15- 29 July)
    - Enlisting
* 2nd Iteration(1-15 Aug)
    - likh-likh ke(each) & !lite_this_time
* 3rd Iteration(16-30 Aug)
    - code each
* do from GfG itself
    - update list & outsider view

## TODO's :
    - [ ] Write complexities in front of each line
    - [ ] Directi's coding questions 
    - [ ]
    - [ ] Keep updating list(the list is not even 50% of GfG)
    - [ ] [pointers and memory](https://www.youtube.com/watch?v=CpjVucvAc3g&index=7&list=PL2_aWCzGMAwLZp6LMUKI3cc7pgGsasm2_)
    - tuples in c++//return multiple values from function

## Notes: 
```diff
-only valid when #Interviewer_gets_em#
- Respect every Question & they will respect you
+stack of implementaion helps heaps in recursion(GfG BIT videos)
-Directi == DP( do as much as can)
+ itna ki, koi sote mei utha ke puche toh bhi(cz that's gonna happen YOU KNOW THAT)
- make notes in copy
+ [ ]:undone, [x]:done, [-]time_waste
```


<details>
    <summary>Data Structures</summary>
    <details>
            <summary>Priority Queues</summary>
            <details>
                    <summary>1.About</summary>
                    --is an extesion of QUEUES: O(n)<br>
                    --every item has a priority associated with it.<br>
                    --heigher priority -> dequeued earlier<br>
                    --if same priority -> dequeued acc to their number in queue<br>
                    --Eg: Bihari ji mandir ki line
            </details>       
            <details>
                    <summary>2.Implementation</summary>
                    -- priority_queue<int> pq;<br>
                    -- pq.push : O(1)<br>
                    -- pq.size()<br>
                    -- pq.top() : O(n)<br>
                    -- pq.pop()
            </details>    
            <details>
                    <summary>3.Applications</summary>
                    --Heap<br>
                    --Dijkstra's<br>
                    --Prims'<br>
                    --Huffman coding
            </details>                                       
    </details>
    <details>
        <summary>DSU</summary>
        --come to help when no-one does T_T //hamesha maat khilwata hai
    </details>
    <details>
        <summary>BST</summary>
            <details>
                <summary>1.Intro</summary>
                    1.1 [x]Declare<br>
                    1.2 [x]Insert<br>
                    1.3 [x]search(key 'x')<br>
                    1.4.1 [x]Delete a node<br>
                    1.4.2 [x]Delete a tree<br>
                    1.5.1 [ ]Array to BST<br>
                    1.5.2 [ ]BST to array<br>
            </details> 
            <details>
                <summary>2.Traversal</summary>
                    2.1.1 [x]DFS-recursion<br>
                    2.1.2 [x]DFS-1 stack<br>
                    2.1.3 [ ]DFS-2 stack<br>
                    2.1.4 [ ]DFS-w/o recursion,w/o stack:Morris Traversal<br>
                    2.2 [x]BFS<br>
                    2.3 [x]Line By Line BFS<br>
                    2.4 Diagonal BFS<br>
                    2.5 Spiral BFS<br>
                    2.6 Rerse BFS<br>
            </details>     
            <details>
                <summary>3.Const & Conv</summary>
                    3.1 Construct a tree from:<br>
                        3.1.1 [ ]preO & postO(has to be full BT)<br>
                        3.1.2 inO & preO<br>
                        3.1.3 inO & post<br>
                        3.1.4 [ ]preO & postO of Mirror Tree<br>
                        3.1.5 Linked List Rep(complete)<br>
                    3.2 Convert a BST to:<br>
                        3.2.1 [ ]Double Linked list(all 4 sets)<br>
                        3.2.2 Sum Tree<br>
                    3.3 Flip the tree<br>
                    3.4 Min swaps to convert BT to BST<br>
            </details> 
            <details>
                <summary>4.Check & Print</summary>
                    4.1 Check:<br>
                        4.1.1 isMirror?<br>
                        4.1.2 isFoldale?<br>
                        4.1.3 isSumTree?<br>
                        4.1.4 has children sum property?<br>
                        4.1.5 cousins?<br>
                        4.1.6 all leaves at same level?<br>
                        4.1.7 if preO, postO, inO are of same tree?<br>
                        4.1.8 prefect tree?<br>
                        4.1.9 full BT?<br>
                        4.1.10 complete tree?<br>
                        4.1.11 is height balanced/Red-Black tree?<br>
                        4.1.12 is subset of another BST?<br>
                        4.1.13 are Mirror?<br>
                        4.1.14 are Identical?<br>
                    4.2 Print:<br>
                        4.2.1 cousins of each node<br>
                        4.2.2.1 print all root to leaf paths- recursion<br>
                        4.2.2.2 print all root to leaf paths- w/orecursion<br>
                        4.2.3 nodes at odd levels<br>
            </details>      
            <details>
                <summary>5.Summation</summary>
                    5.1 sum of all nodes<br>
                    5.2 sum of all parent nodes having child node x<br>
                    5.3 sum of all leaf nodes<br>
                    5.4 diagonal sum<br>
                    5.5 is there a leaf such that, sum(root->leaf) == root<br>
                    5.6 sum of nodes on longest path <br>
                    5.7 max sum such that no 2 nodes are adjacent<br>
                    5.8 find largest sum<br>
                    5.9 print all k-sum paths<br>
                    5.10 sum(root-> leaf) k<br>
            </details>     
            <details>
                <summary>6.LCA</summary>
                    6.1 LCA(all 3 sets)<br>
                    6.2 find dist b/w 2 nodes<br>
                    6.3 print ancestor of a node<br>
                    6.4 print k-th ancestor<br>
            </details> 
            <details>
                <summary>7.Misc</summary>
                    7.1 succinct encoding of BST<br>
                    7.2 custom tree<br>
                    7.3 tree isomorphism <br>
                    7.4 ways to color differently<br>
                    7.5 size of tree<br>
                    7.6 height/ depth of tree<br>
                    7.7 find deepest node<br>
                    7.8 max widht<br>
                    7.9 min depth<br>
                    7.10 vertical widht<br>
                    7.11 bottom view<br>
                    7.12 const leaf nodes<br>
                    7.13 connect nodes at same level(all 4)<br>
                    7.14 level with max no of nodes<br>
                    7.15 swap nodes at level k<br>
                    7.16 tilt of BST<br>
                    7.16 number of iterations to pass infor into all nodes<br>
            </details>                        
    </details>
    <details>
        <summary>Special Trees</summary>
        <details>
            <summary>1.Segment Tree</summary>
            <details>
                <summary>1.1 Const</summary>
            </details>   
            <details>
                <summary>1.2 getSum</summary>
            </details>   
            <details>
                <summary>1.3 Update</summary>
            </details>   
            <details>
                <summary>1.4 RMQ</summary>
            </details>   
            <details>
                <summary>1.5 Lazy Prop</summary>
            </details>                                                                  
        </details>  
        <details>
            <summary>2.Trie/prefix tree </summary>
            <details>
                    <summary>2.1 Const</summary>
            </details>  
            <details>
                    <summary>2.2 Insert</summary>
            </details>                
             <details>
                    <summary>2.3 Search</summary>
            </details>          
            <details>
                    <summary>2.4 Delete</summary>
            </details> 
             <details>
                    <summary>2.5 Longest Prefix</summary>
            </details>          
            <details>
                    <summary>2.6 Unque rows in boolean matrix</summary>
            </details>                                             
        </details>  
        <details>
            <summary>3.Balanced BT</summary>
            <details>
                <summary>3.1 AVL/BIT</summary>
                <details>
                        <summary>3.1.1 Declare </summary>
                </details>                      
                <details>
                        <summary>3.1.2 Insertion </summary>
                </details>          
                <details>
                        <summary>3.1.3 Deletion </summary>
                </details>                   
            </details>   
            <details>
                <summary>3.2 Red-Black Tree</summary>
                <details>
                        <summary>3.2.1 Declare </summary>
                </details>                      
                <details>
                        <summary>3.2.2 Insertion </summary>
                </details>          
                <details>
                        <summary>3.2.3 Deletion </summary>
                </details>                      
            </details>                    
        </details> 
        <details>
            <summary>4.Heap</summary>
            <details>
                <summary>4.0 stl implementation</summary>
                -- min Heap: priority_queue <int, vector<int>, greater<int> > pq;<br>
                ---- vector: max Heap: make_heap(v.begin(),v.end());<br>
                ---- v.pb(x);<br>
                ---- push_heap(all(v));<br>
                ---- v.front;//max ele<br>
                ---- pop_heap(all(v));<br>
                -- Heap sort: sort_heap(all(v));<br>
            </details>
            <details>
                <summary>4.1 Binary Heap</summary>
                <details>
                    <summary>4.1.1 construct-heapify</summary>
                </details>      
                <details>
                    <summary>4.1.2 Insert key</summary>
                </details>      
                <details>
                    <summary>4.1.3 Delete</summary>
                </details>      
                <details>
                    <summary>4.1.3 Decrease key</summary>
                </details>      
                <details>
                    <summary>4.1.4 get Min</summary>
                </details>
            </details> 
            <details>
                <summary>4.2 Binomial Heap</summary>
                <details>
                    <summary>4.2.1 construct-heapify</summary>
                </details>      
                <details>
                    <summary>4.2.2 Insert key</summary>
                </details>      
                <details>
                    <summary>4.2.3 Delete</summary>
                </details>      
                <details>
                    <summary>4.2.3 Decrease key</summary>
                </details>      
                <details>
                    <summary>4.2.4 get Min</summary>
                </details>  
                <details>
                    <summary>4.2.5 Merge</summary>
                </details>                                
            </details>      
            <details>
                <summary>4.3 Fibonacci Heap</summary>
                <details>
                    <summary>4.2.1 construct-heapify</summary>
                </details>      
                <details>
                    <summary>4.2.2 Insert key</summary>
                </details>      
                <details>
                    <summary>4.2.3 Delete</summary>
                </details>      
                <details>
                    <summary>4.2.3 Decrease key</summary>
                </details>      
                <details>
                    <summary>4.2.4 get Min</summary>
                </details>  
                <details>
                    <summary>4.2.5 Merge</summary>
                </details>                    
            </details>      
            <details>
                <summary>4.4 Leftist Heap</summary>
                <details>
                    <summary>4.2.1 construct-heapify</summary>
                </details>      
                <details>
                    <summary>4.2.2 Insert key</summary>
                </details>      
                <details>
                    <summary>4.2.3 Delete</summary>
                </details>      
                <details>
                    <summary>4.2.3 Decrease key</summary>
                </details>      
                <details>
                    <summary>4.2.4 get Min</summary>
                </details>  
                <details>
                    <summary>4.2.5 Merge</summary>
                </details>                    
            </details>      
            <details>
                <summary>4.5 K-ary Heap</summary>
                <details>
                    <summary>4.2.1 construct-heapify</summary>
                </details>      
                <details>
                    <summary>4.2.2 Insert key</summary>
                </details>      
                <details>
                    <summary>4.2.3 Delete</summary>
                </details>      
                <details>
                    <summary>4.2.3 Decrease key</summary>
                </details>      
                <details>
                    <summary>4.2.4 get Min</summary>
                </details>  
                <details>
                    <summary>4.2.5 Merge</summary>
                </details>                    
            </details>      
            <details>
                <summary>4.6 Heap Sort(~| iterative)</summary>
            </details>      
            <details>
                <summary>4.7 How to check if a given array represents a Binary Heap?</summary>
            </details>      
            <details>
                <summary>4.8 K’th Largest Element in an array</summary>
            </details>      
            <details>
                <summary>4.9 K’th Smallest/Largest Element in Unsorted Array(both sets)</summary>
            </details>      
            <details>
                <summary>4.10 Sort an almost sorted array</summary>
            </details>  
            <details>
                <summary>4.11 Tournament Tree (Winner Tree) and Binary Heap
</summary>
            </details> 
            <details>
                <summary>4.12 Check if a given Binary Tree is Heap
</summary>
            </details>      
            <details>
                <summary>4.13 Connect n ropes with minimum cost
</summary>
            </details>      
            <details>
                <summary>4.14 Sort a nearly sorted (or K sorted) array
</summary>
            </details>      
            <details>
                <summary>4.14 Merge k sorted arrays(both sets)</summary>
            </details>      
            <details>
                <summary>4.14 Sort numbers stored on different machines
</summary>
            </details>      
            <details>
                <summary>4.15 Largest Derangement of a Sequence
</summary>
            </details>      
            <details>
                <summary>4.16 K maximum sum combinations from two arrays
</summary>
            </details>      
            <details>
                <summary>4.17 Maximum distinct elements after removing k elements
</summary>
            </details>      
            <details>
                <summary>4.18 Maximum difference between two subsets of m elements
</summary>
            </details>  
            <details>
                <summary>4.19 Height of a complete binary tree (or Heap) with N nodes
</summary>
            </details> 
            <details>
                <summary>4.20 Median of Stream of Running Integers using STL
</summary>
            </details>      
            <details>
                <summary>4.21 Largest triplet product in a stream
</summary>
            </details>      
            <details>
                <summary>4.22 Find k numbers with most occurrences in the given array
</summary>
            </details>      
            <details>
                <summary>4.23 Convert BST to Min Heap
</summary>
            </details>      
            <details>
                <summary>4.24 Merge two binary Max Heaps
</summary>
            </details>      
            <details>
                <summary>4.25 K-th Largest Sum Contiguous Subarray
</summary>
            </details>      
            <details>
                <summary>4.26 Convert min Heap to max Heap
</summary>
            </details>      
            <details>
                <summary>4.27 Array Representation Of Binary Heap
</summary>
            </details>      
            <details>
                <summary>4.28 Sum of all elements between k1’th and k2’th smallest elements
</summary>
            </details>   
            <details>
                <summary>4.29 K’th largest element in a stream
</summary>
            </details>                                                    
        </details>  
        <details>
            <summary>5.Splay Tree</summary>
                <details>
                        <summary>5.1.1 Declare </summary>
                </details>  
                <details>
                        <summary>5.1.2 Rotation </summary>
                </details>                                      
                <details>
                        <summary>5.1.3 Search </summary>
                </details>                        
                <details>
                        <summary>5.1.4 Insertion </summary>
                </details>          
                <details>
                        <summary>5.1.5 Deletion </summary>
                </details>                  
        </details>  
        <details>
            <summary>6.Fenwick Tree</summary>
                <details>
                        <summary>6.1 construct </summary>
                </details>  
                <details>
                        <summary>6.2 getSum </summary>
                </details>                                      
                <details>
                        <summary>6.3 Update </summary>
                </details>                        
                <details>
                        <summary>6.4 Applications </summary>
                         <details>
                                <summary>6.4.1 Count inversions in an array </summary>
                        </details>  
                        <details>
                                <summary>6.4.2 Counting Triangles in a Rectangular space using BIT </summary>
                        </details>                                      
                </details>    
                <details>
                        <summary>6.5 2-D BIT/Fenwick Tree </summary>
                </details>                  
        </details>    
        <details>
            <summary>7.suffix tree</summary>
            <details>
                <summary>7.1 Build</summary>
            </details> 
            <details>
                <summary>7.2 pattern search</summary>
            </details>      
            <details>
                <summary>7.3 Suffix Array nLogn Algorithm
</summary>
            </details>      
            <details>
                <summary>7.4 kasai’s Algorithm for Construction of LCP array from Suffix Array
</summary>
            </details>      
            <details>
                <summary>7.5 Ukkonen’s Suffix Tree Construction(all 5 parts)</summary>
            </details>      
            <details>
                <summary>7.6 Application:</summary>
                <details>
                    <summary>7.6.1 Substring Check
</summary>
                </details>      
                <details>
                    <summary>7.6.2 Searching All Patterns
</summary>
                </details>      
                <details>
                    <summary>7.6.3 Longest Repeated Substring</summary>
                </details>      
                <details>
                    <summary>7.6.4 Longest Common Substring</summary>
                </details>  
                <details>
                    <summary>7.6.4 Longest Palindromic Substring</summary>
                </details>                            
            </details>      
        </details>  
        <details>
            <summary>9.B-Tree</summary>
                <details>
                    <summary>9.1 Into</summary>
                </details>   
                <details>
                    <summary>9.2 Insert</summary>
                </details>    
                <details>
                    <summary>9.3 Delete</summary>
                </details>            
        </details>   
        <details>
            <summary>10. KD Tree</summary>
                <details>
                    <summary>10.1 Into</summary>
                </details>   
                <details>
                    <summary>10.2 Search & Insert</summary>
                </details>    
                <details>
                    <summary>10.3 Delete</summary>
                </details>              
        </details>    
        <details>
            <summary>11.Treap</summary>
                <details>
                    <summary>11.1 Rotate</summary>
                </details>   
                <details>
                    <summary>11.2 Search </summary>
                </details>    
                <details>
                    <summary>11.3 Insert</summary>
                </details> 
                <details>
                    <summary>11.4 Delete</summary>
                </details>   
                <details>
                    <summary>11.5 Traversal </summary>
                </details>    
        </details>
    </details>
    <details>
        <summary>Graphs</summary>
        <details>
            <summary>1.Intro & Traversal</summary>
            <details>
                <summary>1.1 [x] Rep(stl and class)</summary>
            </details>   
            <details>
                <summary>1.2 [x] BFS</summary>
                --: O(V+E)-adjList, O(v^2)-adjMatrrix
                -- https://stackoverflow.com/questions/26549140/breadth-first-search-time-complexity-analysis
            </details>   
            <details>
                <summary>1.2.1 [ ] 0-1 BFS</summary>
                --- it's 'deque' & not 'dequeue'
            </details>               
            <details>
                <summary>1.3 [x] DFS</summary>
            </details>     
            <details>
                <summary>1.4 [[ ]]Find Mother Vertex</summary>
            </details>   
            <details>
                <summary>1.5 [[ ]]Watet-jug Prob(BFS)</summary>
                --[ ]Euclid's GCD<br>
                --[ ]BFS<br>
                --DP
            </details>   
            <details>
                <summary>1.6 [[x]]Count #trees in forest</summary>
            </details>          
            <details>
                <summary>1.7 [x]level of each node</summary>
            </details>   
            <details>
                <summary>1.8 Print All paths</summary>
                --[ ] using BFS<br>
                --[ ] using DFS
            </details>   
            <details>
                <summary>1.9 [ ]Min #edges b/w 2 vertices</summary>
            </details>     
            <details>
                <summary>1.10 [ ]Count #nodes at dist k</summary>
            </details>   
            <details>
                <summary>1.11 [-]BFS for disconnected</summary>
            </details>   
            <details>
                <summary>1.12 [[ ]]Min #moves by knight to reach target</summary>
            </details>  
            <details>
                <summary>1.13 Check if 2 nodes are in same path </summary>
            </details> 
            <details>
                <summary>1.14 [[ ]]Minimum number of operation required to convert number x into y </summary>
            </details>                                        https://www.spoj.com/problems/SHOP/                                    
        </details>   
        <details>
            <summary>2.Cycle</summary>
            <details>
                <summary>2.1 [ ]Detect Cycle in Directed Graph</summary>
            </details>             
            <details>
                <summary>2.2 [ ]Detect Cycle in Un-Directed Graph</summary>
            </details>             
            <details>
                <summary>2.3 Detect Cycle in Directed Grap Using Colors</summary>
            </details>       
           <details>
                <summary>2.4 Detect -ve cycle: Bellman Ford</summary>
            </details>             
            <details>
                <summary>2.5 Detect -ve cycle: Floyd Warshall</summary>
            </details>             
            <details>
                <summary>2.6 Union Find Algo</summary>
            </details>
            <details>
                <summary>2.6 Magical Indices in Array</summary>
            </details>                                                           
        </details>   
        <details>
            <summary>3.Topological Sort</summary>
            <details>
                <summary>3.1 About</summary>
            </details> 
            <details>
                <summary>3.2 All Top sort of directed connected graph</summary>
            </details>      
            <details>
                <summary>3.3 Kahn's algo</summary>
            </details>      
            <details>
                <summary>3.4 Longest Path(all 3)</summary>
            </details>                  
        </details>  
        <details>
            <summary>4.MSP</summary>
            <details>
                <summary>4.1 [ ]Prims algo(also STL, adjc list)</summary>
            </details> 
            <details>
                <summary>4.2 Kruskal's(also stl)</summary>
            </details>      
            <details>
                <summary>4.3 Boruvka</summary>
            </details>      
            <details>
                <summary>4.4 Total #spanning trees</summary>
            </details>  
        </details>   
        <details>
            <summary>5.Back-Track</summary>
            <details>
                <summary>5.1 if path of length >= k exists?</summary>
            </details> 
            <details>
                <summary>5.2 Tug of war</summary>
            </details>      
            <details>
                <summary>5.3 Knight tour</summary>
            </details>      
            <details>
                <summary>5.4 Rat in maze</summary>
            </details>      
            <details>
                <summary>5.5 n-Queen</summary>
            </details>      
            <details>
                <summary>5.6 m-coloring</summary>
            </details>      
            <details>
                <summary>5.7 HAMILTONIAN CYCLE</summary>
            </details>                 
        </details>   
        <details>
            <summary>6.Shortest Path</summary>
            <details>
                <summary>6.1 [ ]Dijkstra's(also stl & linked list)</summary>
            </details>      
            <details>
                <summary>6.2 printning all paths in Dijkstra</summary>
            </details>      
            <details>
                <summary>6.3 [ ] Bellman Ford</summary>
            </details>      
            <details>
                <summary>6.4 [ ]Floyd Warshall</summary>
            </details>      
            <details>
                <summary>6.5 Johnson</summary>
            </details>      
            <details>
                <summary>6.6 Dial's</summary>
            </details>      
            <details>
                <summary>6.7 shortest path in directed acyclic graph</summary>
            </details>      
            <details>
                <summary>6.8 Karp's</summary>
            </details>      
            <details>
                <summary>6.9 0-1 BFS</summary>
            </details>                       
        </details>  
        <details>
            <summary>7.Connectivity</summary>
            <details>
                <summary>7.1 connectivity in directed graph</summary>
            </details>      
            <details>
                <summary>7.2 is path exists?</summary>
            </details>      
            <details>
                <summary>7.3 Articulation Points</summary>
            </details>      
            <details>
                <summary>7.4 Biconnected components</summary>
            </details>      
            <details>
                <summary>7.5 Biconnected Graph</summary>
            </details>      
            <details>
                <summary>7.6 Bridges</summary>
            </details>      
            <details>
                <summary>7.7 Eulerian Paths</summary>
            </details>        
            <details>
                <summary>7.8 Fleury's</summary>
            </details>      
            <details>
                <summary>7.9 Strongly Connected</summary>
            </details>      
            <details>
                <summary>7.10 Taragn's</summary>
            </details>      
            <details>
                <summary>7.11 # non-reachable nvertices</summary>
            </details>      
            <details>
                <summary>7.12 check if graph is tree?</summary>
            </details>      
        </details>   
        <details>
            <summary>8.Max Flow</summary>
            <details>
                <summary>8.1 Ford-Fulkerson</summary>
            </details> 
            <details>
                <summary>8.2 #edge-disjoint paths b/w 2 vertices</summary>
            </details>      
            <details>
                <summary>8.3 Min s-t cut flow</summary>
            </details>      
            <details>
                <summary>8.4 Max bipartite matching</summary>
            </details>      
            <details>
                <summary>8.5 Karger's </summary>
            </details>      
            <details>
                <summary>8.6 Dinic's</summary>
            </details>                  
        </details>   
        <details>
            <summary>9.Hard</summary>
            <details>
                <summary>9.1 Graph Coloring</summary>
            </details> 
            <details>
                <summary>9.2 TSP(travelling slaseman)</summary>
            </details>                  
        </details>                                      
    </details> 
    <details>
        <summary>Linked List</summary>
        <details>
            <summary>1.Singly Linked List</summary>
            <details>
                <summary>1.1 [x]Declaration</summary>
                --node name cannot be 'new' :P
            </details> 
            <details>
                <summary>1.2 [x]Traversal</summary>
            </details>      
            <details>
                <summary>1.3 [x]Insertion</summary>
                --rat liya bhai rat liya
            </details>      
            <details>
                <summary>1.4 [x]Deletion</summary>
                --[x]delete key<br>
                --[x]delete at given position
            </details>      
            <details>
                <summary>1.5 [x]Delete a ll</summary>
            </details>      
            <details>
                <summary>1.6 [x]Search</summary>
            </details>      
            <details>
                <summary>1.7 [x]Nth node from end</summary>
                --recursion<br>
                --2 pointers
            </details>      
            <details>
                <summary>1.8 [x]Print middle ele</summary>
            </details>      
            <details>
                <summary>1.9 [x]detect loop</summary>
            </details>      
            <details>
                <summary>1.10 [x]Find length of loop</summary>
            </details>  
            <details>
                <summary>1.10.0 [ ]Reverse a LL</summary>
                --[x]iterative : that GIF though<br>
                --[ ]recursive
            </details>                
            <details>
                <summary>1.11 [x]isPalindrome?</summary>
            </details>   
            <details>
                <summary>1.12 [x]Remove Duplicates from(sorted and unsorted)</summary>
            </details>    
            <details>
                <summary>1.13 [ ]Swap nodes</summary>
            </details>    
            <details>
                <summary>1.14 move last element to front</summary>
            </details>   
            <details>
                <summary>1.15 intersection of 2 ll</summary>
            </details>    
            <details>
                <summary>1.16.1 [[ ]]quicksort</summary>
            </details>    
            <details>
                <summary>1.16.2 [[ ]]insertion sort</summary>
            </details> 
            <details>
                <summary>1.16.3 [[ ]]merge sort</summary>
            </details>                            
            <details>
                <summary>1.18 Merge 2 ll</summary>
            </details>   
            <details>
                <summary>1.19 Alternate odd and even nodes print</summary>
            </details>    
            <details>
                <summary>1.20 [[ ]]add 2 numbers rep by ll(both sets)</summary>
            </details>  
            <details>
                <summary>1.21 Rotate ll</summary>
            </details>   
            <details>
                <summary>1.22 flatten ll</summary>
            </details> 
            <details>
                <summary>1.23 Three sum</summary>
            </details>   
            <details>
                <summary>1.24 sort a ll of 0s,1s,2s</summary>
            </details> 
            <details>
                <summary>1.25 [[ ]]add 1 to a number</summary>
            </details>   
        </details> 
        <details>
            <summary>2. [ ]Circular Linked List</summary>
        </details>      
        <details>
            <summary>3.[ ]Doubly Linked List</summary>
        </details>             
    </details>
    <details>
        <summary>Hash</summary>
        <details>
            <summary>1. Basics</summary>
            <details>
                    <summary>1.1 Intro</summary>
                </details>      
                <details>
                    <summary>1.2 Trivial Hashing</summary>
                </details>      
                <details>
                    <summary>1.3 Separate Chaining</summary>
                </details>      
                <details>
                    <summary>1.4 Open Addressing</summary>
                </details>      
                <details>
                    <summary>1.5 Double Hasing</summary>
                </details>             
        </details> 
        <details>
            <summary>2. Easy</summary>
            <details>
                <summary> 2.1 Print a Binary Tree in Vertical Order</summary>
            </details> 
            <details>
                <summary> 2.2 Find whether an array is subset of another array
</summary>
            </details>      
            <details>
                <summary> 2.3 Union and Intersection of two linked lists
</summary>
            </details>      
            <details>
                <summary> 2.4 Given an array A[] and a number x, check for pair in A[] with sum as x
</summary>
            </details>      
            <details>
                <summary> 2.5 Minimum delete operations to make all elements of array same
</summary>
            </details>      
            <details>
                <summary> 2.6 Minimum operation to make all elements equal in array
</summary>
            </details>      
            <details>
                <summary> 2.7 Maximum distance between two occurrences of same element in array
</summary>
            </details>      
            <details>
                <summary> 2.8 Count maximum points on same line
</summary>
            </details>      
            <details>
                <summary> 2.9 Check if a given array contains duplicate elements within k distance from each other
</summary>
            </details>      
            <details>
                <summary> 2.10 Find duplicates in a given array when elements are not limited to a range
</summary>
            </details>         
            <details>
                <summary> 2.11 Find top k (or most frequent) numbers in a stream
</summary>
            </details> 
            <details>
                <summary> 2.12 Most frequent element in an array
</summary>
            </details>      
            <details>
                <summary> 2.13 Smallest subarray with all occurrences of a most frequent element
</summary>
            </details>      
            <details>
                <summary> 2.14 First element occurring k times in an array
</summary>
            </details>      
            <details>
                <summary> 2.15 Given an array of pairs, find all symmetric pairs in it
</summary>
            </details>      
            <details>
                <summary> 2.16 Find the only repetitive element between 1 to n-1
</summary>
            </details>      
            <details>
                <summary> 2.17 Find any one of the multiple repeating elements in read only array
</summary>
            </details>      
            <details>
                <summary> 2.18 Find top three repeated in array
</summary>
            </details>      
            <details>
                <summary> 2.19 Group multiple occurrence of array elements ordered by first occurrence
</summary>
            </details>      
            <details>
                <summary> 2.20 How to check if two given sets are disjoint?
</summary>
            </details>         
            <details>
                <summary> 2.21 Non-overlapping sum of two sets
</summary>
            </details> 
            <details>
                <summary> 2.22 Find elements which are present in first array and not in second
</summary>
            </details>      
            <details>
                <summary> 2.23 Check if two arrays are equal or not
</summary>
            </details>      
            <details>
                <summary> 2.24 Pair with given sum and maximum shortest distance from end
</summary>
            </details>      
            <details>
                <summary> 2.25 Find missing elements of a range
</summary>
            </details>      
            <details>
                <summary> 2.26 k-th missing element in increasing sequence which is not present in a given sequence
</summary>
            </details>      
            <details>
                <summary> 2.27 Find pair with greatest product in array
</summary>
            </details>      
            <details>
                <summary> 2.28 Minimum number of subsets with distinct elements
</summary>
            </details>      
            <details>
                <summary> 2.29 Remove minimum number of elements such that no common element exist in both array</summary>
            </details>      
            <details>
                <summary> 2.30 Count items common to both the lists but with different prices
</summary>
            </details>         
            <details>
                <summary> 2.31 Minimum Index Sum for Common Elements of Two Lists
</summary>
            </details> 
            <details>
                <summary> 2.32 Find pairs with given sum such that elements of pair are in different rows
</summary>
            </details>      
            <details>
                <summary> 2.33 Common elements in all rows of a given matrix
</summary>
            </details>      
            <details>
                <summary> 2.34 Find distinct elements common to all rows of a matrix
</summary>
            </details>      
            <details>
                <summary> 2.35 Find all permuted rows of a given row in a matrix
</summary>
            </details>      
            <details>
                <summary> 2.36 Change the array into a permutation of numbers from 1 to n
</summary>
            </details>      
            <details>
                <summary> 2.37 Count pairs with given sum
</summary>
            </details>      
            <details>
                <summary> 2.38 Count pairs from two sorted arrays whose sum is equal to a given value x
</summary>
            </details>      
            <details>
                <summary> 2.39 Count pairs from two linked lists whose sum is equal to a given value
</summary>
            </details>      
            <details>
                <summary> 2.40 Count quadruples from four sorted arrays whose sum is equal to a given value x
</summary>
            </details> 
            <details>
                <summary> 2.41 Number of subarrays having sum exactly equal to k
</summary>
            </details>      
            <details>
                <summary> 2.42 Count pairs whose products exist in array
</summary>
            </details>      
            <details>
                <summary> 2.43 Given two unsorted arrays, find all pairs whose sum is x
</summary>
            </details>      
            <details>
                <summary> 2.44 Frequency of each element in an unsorted array
</summary>
            </details>      
            <details>
                <summary> 2.45 Sort elements by frequency
</summary>
            </details>         
            <details>
                <summary> 2.46 Find pairs in array whose sums already exist in array
</summary>
            </details> 
            <details>
                <summary> 2.47 Find all pairs (a, b) in an array such that a % b = k
</summary>
            </details>      
            <details>
                <summary> 2.47 Convert an array to reduced form | Set 1 (Simple and Hashing)
</summary>
            </details>      
            <details>
                <summary> 2.48 Return maximum occurring character in an input string
</summary>
            </details>      
            <details>
                <summary> 2.49 Group words with same set of characters
</summary>
            </details>      
            <details>
                <summary> 2.50 Second most repeated word in a sequence
</summary>
            </details>      
            <details>
                <summary> 2.51 Smallest element repeated exactly ‘k’ times (not limited to small range)
</summary>
            </details>      
            <details>
                <summary> 2.52 Numbers with prime frequencies greater than or equal to k
</summary>
            </details>      
            <details>
                <summary> 2.53 Find k numbers with most occurrences in the given array
</summary>
            </details>      
            <details>
                <summary> 2.54 Find the first repeating element in an array of integers
</summary>
            </details>   
            <details>
                <summary> 2.55 Find sum of non-repeating (distinct) elements in an array
</summary>
            </details>      
            <details>
                <summary> 2.56 Non-Repeating Element
</summary>
            </details>      
            <details>
                <summary> 2.57 k-th distinct (or non-repeating) element in an array.
</summary>
            </details>      
            <details>
                <summary> 2.58 Print All Distinct Elements of a given integer array
</summary>
            </details>      
            <details>
                <summary> 2.59 Only integer with positive value in positive negative value in array
</summary>
            </details>      
            <details>
                <summary> 2.60 Pairs of Positive Negative values in an array
</summary>
            </details>                                                 
        </details>      
        <details>
            <summary>3. Intermediate</summary>
            <details>
                <summary> 3.1 Find Itinerary from a given list of tickets</summary>
            </details>      
            <details>
                <summary> 3.2 Find number of Employees Under every Employee
</summary>
            </details>      
            <details>
                <summary> 3.3 Count divisible pairs in an array
</summary>
            </details>    
            <details>
                <summary> 3.4 Check if an array can be divided into pairs whose sum is divisible by k
</summary>
            </details>      
            <details>
                <summary> 3.5 Longest subarray with sum divisible by k
</summary>
            </details>      
            <details>
                <summary> 3.6 Subarray with no pair sum divisible by K
</summary>
            </details> 
            <details>
                <summary> 3.7 Print array elements that are divisible by at-least one other
</summary>
            </details>      
            <details>
                <summary> 3.8 Find three element from different three arrays such that that a + b + c = sum
</summary>
            </details>      
            <details>
                <summary> 3.9 Find four elements a, b, c and d in an array such that a+b = c+d
</summary>
            </details>    
            <details>
                <summary> 3.10 Find the largest subarray with 0 sum
</summary>
            </details>      
            <details>
                <summary> 3.11 Printing longest Increasing consecutive subsequence
</summary>
            </details>      
            <details>
                <summary> 3.12 Longest Increasing consecutive subsequence
</summary>
            </details>   
            <details>
                <summary> 3.13 Longest subsequence such that difference between adjacents is one | Set 2
</summary>
            </details>      
            <details>
                <summary> 3.14 Longest Consecutive Subsequence
</summary>
            </details>      
            <details>
                <summary> 3.15 Largest increasing subsequence of consecutive integers
</summary>
            </details>    
            <details>
                <summary> 3.16 Count subsets having distinct even numbers
</summary>
            </details>      
            <details>
                <summary> 3.17 Count distinct elements in every window of size k
</summary>
            </details>      
            <details>
                <summary> 3.18 Maximum possible sum of a window in an array such that elements of same window in other array are unique</summary>
            </details> 
            <details>
                <summary> 3.19 Distributing items when a person cannot take more than two items of same type
</summary>
            </details>      
            <details>
                <summary> 3.20 Design a data structure that supports insert, delete, search and getRandom in constant time
</summary>
            </details>      
            <details>
                <summary> 3.21 Check if array contains contiguous integers with duplicates allowed
</summary>
            </details>    
            <details>
                <summary> 3.22 Length of the largest subarray with contiguous elements
</summary>
            </details>      
            <details>
                <summary> 3.23 Find if there is a subarray with 0 sum
</summary>
            </details>      
            <details>
                <summary> 3.24 Print all subarrays with 0 sum
</summary>
            </details> 
            <details>
                <summary> 3.25 Find subarray with given sum | Set 2 (Handles Negative Numbers)
</summary>
            </details>    
            <details>
                <summary> 3.26 Find four elements that sum to a given value</summary>
            </details>      
            <details>
                <summary> 3.27 Implementing own Hash Table with Open Addressing Linear Probing in C++</summary>
            </details>      
            <details>
                <summary> 3.28 Vertical Sum in a given Binary Tree</summary>
            </details> 
            <details>
                <summary> 3.29 Group Shifted String
</summary>
            </details>      
            <details>
                <summary> 3.30 Minimum insertions to form a palindrome with permutations allowed
</summary>
            </details>      
            <details>
                <summary> 3.31 Check for Palindrome after every character replacement Query
</summary>
            </details>    
            <details>
                <summary> 3.32 Maximum length subsequence with difference between adjacent elements as either 0 or 1 | Set 2
</summary>
            </details>      
            <details>
                <summary> 3.33 Maximum difference between frequency of two elements such that element having greater frequency is also greater
</summary>
            </details>      
            <details>
                <summary> 3.34 Difference between highest and least frequencies in an array
</summary>
            </details>  
            <details>
                <summary> 3.35 Maximum difference between first and last indexes of an element in array
</summary>
            </details>      
            <details>
                <summary> 3.36 Maximum possible difference of two subsets of an array
</summary>
            </details>      
            <details>
                <summary> 3.37 Sorting using trivial hash function</summary>
            </details> 
            <details>
                <summary> 3.38 Smallest subarray with k distinct numbers
</summary>
            </details>      
            <details>
                <summary> 3.39 Longest subarray not having more then K distinct elements
</summary>
            </details>      
            <details>
                <summary> 3.40 Sum of f(a[i], a[j]) over all pairs in an array of n integers
</summary>
            </details>    
            <details>
                <summary> 3.41 Find number of pairs in an array such that their XOR is 0
</summary>
            </details>      
            <details>
                <summary> 3.42 Maximize elements using another array</summary>
            </details>                                                                             
        </details>      
        <details>
            <summary>4. Hard</summary>
            <details>
                <summary> 4.1 Clone a Binary Tree with Random Pointers
</summary>
            </details>     
            <details>
                <summary> 4.2 Largest subarray with equal number of 0s and 1s
</summary>
            </details>   
            <details>
                <summary> 4.3 Longest subarray having count of 1s one more than count of 0s
</summary>
            </details>     
            <details>
                <summary> 4.4 Count Substrings with equal number of 0s, 1s and 2s
</summary>
            </details>    
            <details>
                <summary> 4.5 Print all triplets in sorted array that form AP
</summary>
            </details>     
            <details>
                <summary> 4.6 All unique triplets that sum up to a given value
</summary>
            </details>   
            <details>
                <summary> 4.7 Find all triplets with zero sum
</summary>
            </details>     
            <details>
                <summary> 4.8 Count number of triplets with product equal to given number
</summary>
            </details>    
            <details>
                <summary> 4.9 Count of index pairs with equal elements in an array
</summary>
            </details>     
            <details>
                <summary> 4.10 Palindrome Substring Queries</summary>
            </details>   
            <details>
                <summary> 4.11 Find smallest range containing elements from k lists</summary>
            </details>     
            <details>
                <summary> 4.12 Range Queries for Frequencies of array elements</summary>
            </details>    
            <details>
                <summary> 4.13 Elements to be added so that all elements of a range are present in array</summary>
            </details>     
            <details>
                <summary> 4.14 Cckoo Hashing – Worst case O(1) Lookup!</summary>
            </details>   
            <details>
                <summary> 4.15 Subarrays with distinct elements</summary>
            </details>     
            <details>
                <summary> 4.16 Count subarrays having total distinct elements same as original array
</summary>
            </details>  
            <details>
                <summary> 4.17 Count subarrays with same even and odd elements
</summary>
            </details>     
            <details>
                <summary> 4.18 Minimum number of distinct elements after removing m items
</summary>
            </details>    
            <details>
                <summary> 4.19 Distributing items when a person cannot take more than two items of same type</summary>
            </details>     
            <details>
                <summary> 4.20 Maximum consecutive numbers present in an array</summary>
            </details>   
            <details>
                <summary> 4.21 Maximum array from two given arrays keeping order same</summary>
            </details>     
            <details>
                <summary> 4.22 Maximum number of chocolates to be distributed equally among k students</summary>
            </details>                                                                           
        </details>      
    </details>
    <details>
        <summary>Array</summary>
    <details>
        <summary>1. Rotations</summary>
        <details>
            <summary>1.1 Rotate by d(all 3)</summary>
        </details> 
        <details>
            <summary>1.2 reversal algo for arr rot</summary>
        </details>      
        <details>
            <summary>1.3 block swap algo</summary>
        </details>      
        <details>
            <summary>1.4 cyclically rotate arr</summary>
        </details>      
        <details>
            <summary>1.5 Search ele in sorted and rotated arr</summary>
        </details>      
        <details>
            <summary>1.6 given sorted & rotated arr, find 2 sum</summary>
        </details>      
        <details>
            <summary>1.7 find rotation count in rotated sorted arr</summary>
        </details>      
        <details>
            <summary>1.8 find min in rot-sorted arr</summary>
        </details>      
    </details> 
    <details>
        <summary>2. Arr-Rearr</summary>
        <details>
            <summary>2.1 rearr such that arr[i]=i</summary>
        </details> 
        <details>
            <summary>2.2 reverse arr</summary>
        </details>      
        <details>
            <summary>2.3 Rearrange array such that arr[i] >= arr[j] if i is even and arr[i]<=arr[j] if i is odd and j < i</summary>
        </details>      
        <details>
            <summary>2.4 Rearrange positive and negative numbers</summary>
        </details>      
        <details>
            <summary>2.5 Move all zeroes to end of array
(both sets)</summary>
        </details>      
        <details>
            <summary>2.6 Minimum swaps required to bring all elements less than or equal to k together</summary>
        </details>      
        <details>
            <summary>2.7 Rearrange array such that even positioned are greater than odd</summary>
        </details>      
        <details>
            <summary>2.8 Rearrange an array in order – smallest, largest, 2nd smallest, 2nd largest, ..
</summary>
        </details>      
        <details>
            <summary>2.9 Arrange given numbers to form the biggest number</summary>
        </details>      
        <details>
            <summary>2.10 
Rearrange an array in maximum minimum form(both sets)</summary>
        </details>   
        <details>
            <summary>2.11 Move all negative numbers to beginning and positive to end(both sets)</summary>
        </details> 
        <details>
            <summary>2.12 Rearrange array such that even index elements are smaller and odd index elements are greater
</summary>
        </details>      
        <details>
            <summary>2.13 Positive elements at even and negative at odd positions</summary>
        </details>      
        <details>
            <summary>2.14 Segregate 0s and 1s in an array</summary>
        </details>      
        <details>
            <summary>2.15 Longest Bitonic Subsequence
</summary>
        </details>      
        <details>
            <summary>2.16 Largest subarray with equal number of 0s and 1s</summary>
        </details>      
        <details>
            <summary>2.17 Maximum Product Sub-array
</summary>
        </details>      
        <details>
            <summary>2.18 Replace every element with the greatest element on right side
</summary>
        </details>  
        <details>
            <summary>2.19 Construction of Longest Increasing Subsequenc</summary>
        </details> 
        <details>
            <summary>2.19 
Sort elements by frequenc</summary>
        </details>      
        <details>
            <summary>2.20 Three way partitioning</summary>
        </details>      
        <details>
            <summary>2.21 Convert array into Zig-Zag fashion</summary>
        </details>      
        <details>
            <summary>2.22 Minimum number of swaps required for arranging pairs adjacent to each other</summary>
        </details>                                  
    </details>      
    <details>
        <summary>3. Order statistics </summary>
        <details>
            <summary>3.1 K’th Smallest/Largest Element in Unsorted Array(all 3 sets & stl & heap)</summary>
        </details> 
        <details>
            <summary>3.2 Kth smallest element in a row-wise and column-wise sorted 2D arra(all 2 sets)</summary>
        </details>      
        <details>
            <summary>3.3 Largest ele</summary>
        </details>      
        <details>
            <summary>3.4 Largest 3 ele's</summary>
        </details>      
        <details>
            <summary>3.5 Mean and median of an unsorted array</summary>
        </details>      
        <details>
            <summary>3.6 Median of Stream of Running Integers</summary>
        </details>      
        <details>
            <summary>3.7 Minimum product of k integers in an array of positive Integers</summary>
        </details>      
        <details>
            <summary>3.8 K-th Largest Sum Contiguous Subarray
</summary>
        </details>      
        <details>
            <summary>3.9 K maximum sum combinations from two arrays</summary>
        </details>      
        <details>
            <summary>3.10 K maximum sums of overlapping contiguous sub-arrays</summary>
        </details>          
        <details>
            <summary>3.11 K maximum sums of non-overlapping contiguous sub-arrays</summary>
        </details>   
        <details>
            <summary>3.12 Find k pairs with smallest sums in two arrays</summary>
        </details>          
        <details>
            <summary>3.13 Second largest element in an array</summary>
        </details>   
        <details>
            <summary>3.14 k-th smallest absolute difference of two elements in an array
</summary>
        </details>          
        <details>
            <summary>3.15 Find the smallest missing number</summary>
        </details>   
        <details>
            <summary>3.16 Maximum sum such that no two elements are adjacent</summary>
        </details>   
        <details>
            <summary>3.17 Next Greater Element</summary>
        </details>   
        <details>
            <summary>3.1</summary>
        </details>   
        <details>
            <summary>3.1</summary>
        </details>                                                                          
    </details>      
    <details>
        <summary>4. Range Queries</summary>
    </details>      
    <details>
        <summary>6. Optimization</summary>
    </details>                  
    <details>
        <summary>7. Matrix</summary>
    </details> 
    <details>
        <summary>8. Misc</summary>
    </details>          
    </details>
    <details>
        <summary>Strings</summary>
    </details>    
 
</details>
<details>
    <summary>Algo</summary>
    <details>
        <summary>1. Searching & Sorting</summary>
            #why sorting algo faster than O(nlogn) is not possible : https://www.youtube.com/watch?v=4Q72kbwyEmk
            <details>
                <summary>1.1 [x] Search for key</summary>
                 <details>
                    <summary>1.1.1 Linear</summary>
                </details> 
                <details>
                    <summary>1.1.2 Binary</summary>
                </details>      
                <details>
                    <summary>1.1.3 Ternary</summary>
                </details>      
                <details>
                    <summary>1.1.4 Jump</summary>
                </details>      
                <details>
                    <summary>1.1.5 Interpolation</summary>
                </details>      
                <details>
                    <summary>1.1.6 Exponantial</summary>
                </details>                     
            </details>     
            <details>
                <summary>1.2 [x]Search for pattern</summary>
                <details>
                    <summary>1.2.1 [ ]KMP [link](https://www.quora.com/What-is-the-best-resource-to-learn-KMP-Algorithm)</summary>
                </details> 
                <details>
                    <summary>1.2.2 [ ]Rabin_karp</summary>
                </details>  
            </details>  
            <details>
                <summary>1.2 Sort</summary>
                <details>
                    <summary>1.2.1 Selection(betterment and stability)</summary>
                </details> 
                <details>
                    <summary>1.2.2 Bubble(betterment) </summary>
                </details>      
                <details>
                    <summary>1.2.3 Insertion(recursion)</summary>
                </details>      
                <details>
                    <summary>1.2.4 Quick(recursion)</summary>
                </details>      
                <details>
                    <summary>1.2.5 [ ]Merge</summary>
                </details>      
                <details>
                    <summary>1.2.6 [ ]Heap</summary>
                </details>      
                <details>
                    <summary>1.2.7 [ ]Counting</summary>
                </details>      
                <details>
                    <summary>1.2.8 [ ]Bucket</summary>
                </details> 
            </details>                           
    </details>  
    <details>
        <summary>2. [ ]Bakctrack</summary>
        <details>
            <summary>2.1 Knight's Tour</summary>
        </details> 
        <details>
            <summary>2.2 Rat in maze( || multiple jumps allowed)</summary>
        </details>      
        <details>
            <summary>2/3 N-Queen Prob( || in O(n)space)</summary>
        </details>      
        <details>
            <summary>2.4 Subset Sum</summary>
        </details>      
        <details>
            <summary>2.5 m-coloring prob</summary>
        </details>      
        <details>
            <summary>2.6 Hamiltonian Cycle</summary>
        </details>      
        <details>
            <summary>2.7 Sudoku</summary>
        </details>      
        <details>
            <summary>2.8 Cryptarithmetic Puzzle( ||stl)</summary>
        </details>      
        <details>
            <summary>2.9 Magnet Puzzle</summary>
        </details>      
        <details>
            <summary>2.10 Boggle ( || using Trie)</summary>
        </details>  
        <details>
            <summary>2.11 Remove invalid parentheses</summary>
        </details> 
        <details>
            <summary>2.12 Print all permutations of string</summary>
        </details>      
        <details>
            <summary>2.13 Tug Of War</summary>
        </details>      
        <details>
            <summary>2.14 8-queen problem</summary>
        </details>      
        <details>
            <summary>2.15 combinational Sum</summary>
        </details>      
        <details>
            <summary>2.16 Backtrack to find all subsets</summary>
        </details>  
        <details>
            <summary>2.17 Count all possible paths between 2 vertices</summary>
        </details> 
        <details>
            <summary>2.18 FInd all distinct subsets of given set</summary>
        </details>      
    </details> 
    <details>
        <summary>3.DP</summary>
        <details>
            <summary>3.1 Concepts</summary>
            <details>
                <summary>3.1.1 Tabulation vs Memoization</summary>
                --(DO)tabulation = bottom up(start from ground & become expert)<br>
                --(ADD)memoization = top down(keep on breaking down bigger problems into smaller one)
            </details>      
            <details>
                <summary>3.1.2 Optimal Substructure Property</summary>
            </details>  
            <details>
                <summary>3.1.3 Overlapping Subproblems Property</summary>
            </details>      
            <details>
                <summary>3.1.4 How to solve DP</summary>
            </details>              
        </details> 
        <details>
            <summary>3.2 [ ]Adv Concepts</summary>
            <details>
                <summary>3.2.1 [[[ ]]]Bitmasking -1D</summary>
            </details>      
            <details>
                <summary>3.2.2 [[ ]]Bitmasking -2D</summary>
            </details>      
            <details>
                <summary>3.2.3 [[ ]]Digit DP</summary>
            </details>                 
        </details> 
        <details>
            <summary>3.3 Basic Prob</summary>
            <details>
                <summary>3.3.1 Ugly Numbers</summary>
            </details> 
            <details>
                <summary>3.3.2 Fibonacci Numbers</summary>
                --[x]O(n),O(n)<br>
                --[ ]O(1),O(n)<br>
                --[ ]O(logn),O(logn)
            </details>  
            <details>
                <summary>3.3.3 nth Catalan number</summary>
                --[x]O(n^2)-recursive formula<br>
                --[ ]O(n)-binomial coeff
            </details> 
            <details>
                <summary>3.3.3.2 [x]Bell numbers(#ways to partiton a set)</summary>
            </details>   
            <details>
                <summary>3.3.4 [x]Binomial Coeff</summary>
            </details> 
            <details>
                <summary>3.3.5 [x]Tiling Prob</summary>
            </details>  
            <details>
                <summary>3.3.5.2 [[ ]]old Mine Prob</summary>
            </details> 
            <details>
                <summary>3.3.6 [[x]]Coin Change Prob</summary>
            </details>                                        
            <details>
                <summary>3.3.7 [x]Friends Pairing Prob</summary>
            </details> 
            <details>
                <summary>3.3.8 [x]Subset Sum Prob( || in O(sum)space)</summary>
            </details>  
            <details>
                <summary>3.3.9 [ ]subsets with sum divisible by m</summary>
            </details> 
            <details>
                <summary>3.3.10 [ ]Largest divisible pairs subset</summary>
            </details>   
            <details>
                <summary>3.3.11 [ ]Perfect Sum prob(print all subsets with given sum)</summary>
            </details> 
            <details>
                <summary>3.3.12 [ ]nCr</summary>
            </details>  
            <details>
                <summary>3.3.13 [ ]Cutting a rod</summary>
            </details> 
            <details>
                <summary>3.3.14 [ ]Tiling with Dominos</summary>
            </details>   
            <details>
                <summary>3.3.14.2 [ ]Painting Fence Algorithm</summary>
            </details>                    
            <details>
                <summary>3.3.15 [-]Print Fibonacci series in reverse order</summary>
            </details>      
            <details>
                <summary>3.3.16 [ ]Longest common subsequence(|| space optimised sol)</summary>
            </details>        
            <details>
                <summary>3.3.17 [ ]Longest Repeated Subsequence</summary>
            </details>      
            <details>
                <summary>3.3.18 Find n-th element from Stern’s Diatomic Series</summary>
            </details>        
            <details>
                <summary>3.3.19 Find maximum possible stolen value from houses
</summary>
            </details>   
            <details>
                <summary>3.3.20 Find number of solutions of a linear equation of n variables</summary>
            </details>        
            <details>
                <summary>3.3.21 Count number of ways to reach a given score in a game</summary>
            </details>      
            <details>
                <summary>3.3.22 Count ways to reach the nth stair using step 1, 2 or 3</summary>
            </details>        
            <details>
                <summary>3.3.23 Counts paths from a point to reach Origin
</summary>
            </details>   
            <details>
                <summary>3.3.23 Count number of ways to cover a distance
</summary>
            </details>        
            <details>
                <summary>3.3.24 Count ways to divide circle using N non-intersecting chords
</summary>
            </details>   
            <details>
                <summary>3.3.25 Count the number of ways to tile the floor of size n x m using 1 x m size tiles</summary>
            </details>        
            <details>
                <summary>3.3.26 Count all possible paths from top left to bottom right of a mXn matrix</summary>
            </details>   
            <details>
                <summary>3.3.27 Unique paths in a Grid with Obstacles</summary>
            </details>        
            <details>
                <summary>3.3.28 Number of n-digits non-decreasing integers</summary>
            </details>      
            <details>
                <summary>3.3.29 Number of decimal numbers of length k, that are strict monotone</summary>
            </details>        
            <details>
                <summary>3.3.30 Different ways to sum n using numbers greater than or equal to m</summary>
            </details>  
            <details>
                <summary>3.3..........100</summary>
            </details>                  
        </details>      
        <details>
            <summary>3.4 Intermediate Prob</summary>
            <details>
                <summary>3.4.1 Lobb number</summary>
            </details>     
            <details>
                <summary>3.4.2 Eulerian number</summary>
            </details> 
            <details>
                <summary>3.4.3 Delannoy number</summary>
            </details>     
            <details>
                <summary>3.4.4 Rencontres number</summary>
            </details>  
            <details>
                <summary>3.4.5 Super ugly numbers(Number whose prime factors are in given set)</summary>
            </details>     
            <details>
                <summary>3.4.6 Jacobsthal and Jacobsthal-Lucas numbers</summary>
            </details> 
            <details>
                <summary>3.4.7 [ ]0-1 Knapsack Problem</summary>
            </details>     
            <details>
                <summary>3.4.8 [ ]Printing Items in 0/1 Knapsack</summary>
            </details>   
            <details>
                <summary>3.4.9 [ ]Unbounded Knapsack (Repetition of items allowed)
</summary>
            </details>     
            <details>
                <summary>3.5.6 A Space Optimized DP solution for 0-1 Knapsack Problem
</summary>            
            <details>
                <summary>3.4.10 Floyd Warshall Algorithm
</summary>
            </details> 
            <details>
                <summary>3.4.11 Bellman–Ford Algorithm
</summary>
            </details>     
            <details>
                <summary>3.4.12 [ ]Egg Dropping Puzzle
</summary>
            </details>  
            <details>
                <summary>3.4.13 Min Cost Path
</summary>
            </details>          
            <details>
                <summary>3.4.14 Min cost path
</summary>
            </details>                  
            <details>
                <summary>3.4.13 Temple Offerings</summary>
            </details>     
            <details>
                <summary>3.4.14 [ ]Dice Throw Problem</summary>
            </details> 
            <details>
                <summary>3.4.15 Word Break Prob</summary>
            </details>     
            <details>
                <summary>3.4.16 Word Break Problem</summary>
            </details>   
            <details>
                <summary>3.4.17 Vertex Cover Problem</summary>
            </details> 
            <details>
                <summary>3.4.18 Tile Stacking Problem</summary>
            </details>     
            <details>
                <summary>3.4.19 Box-Stacking Problem
</summary>
            </details>   
            <details>
                <summary>3.4.20 Highway Billboard Problem</summary>
            </details> 
            <details>
                <summary>3.4.21 Partition Problem
(all 3 sets)</summary>
            </details>     
            <details>
                <summary>3.4.22 High-effort vs. Low-effort Tasks Problem</summary>
            </details>   
            <details>
                <summary>3.4.23 Longest Bitonic Subsequence
</summary>
            </details> 
            <details>
                <summary>3.4.24 Longest Palindromic Subsequence
(|| with O(n))</summary>
            </details>     
            <details>
                <summary>3.4.25 Count All Palindromic Subsequence in a given String</summary>
            </details>  
            <details>
                <summary>3.4.26 Number of palindromic subsequences of length k
</summary>
            </details> 
            <details>
                <summary>3.4.27 Shortest Common Supersequence
</summary>
            </details>     
            <details>
                <summary>3.4.28 Longest Repeating Subsequence</summary>
            </details>   
            <details>
                <summary>3.4.29 Count Distinct Subsequences</summary>
            </details> 
            <details>
                <summary>3.4.30 Longest Zig-Zag Subsequence</summary>
            </details>     
            <details>
                <summary>3.4.31 Largest sum Zigzag sequence in a matrix
</summary>
            </details>   
            <details>
                <summary>3.4.32 Weighted job scheduling(all 3 sets)</summary>
            </details> 
            <details>
                <summary>3.4.33 Number of paths with exactly k coins
</summary>
            </details>     
            <details>
                <summary>3.4.34 Count Possible Decodings of a given Digit Sequence</summary>
            </details>   
            <details>
                <summary>3.4.35 Count number of ways to partition a set into k subsets</summary>
            </details> 
            <details>
                <summary>3.4.36 Count of n digit numbers whose sum of digits equals to given sum
</summary>
            </details>     
            <details>
                <summary>3.4.37 
Count ways to assign unique cap to every person</summary>
            </details>     
            <details>
                <summary>3.4.38 Length of the longest substring without repeating characters</summary>
            </details>     
            <details>
                <summary>3.4.  Travelling Salesman Problem | Set 1 (Naive and Dynamic Programming)</summary>
            </details>     
            <details>
                <summary>3.4..........100</summary>
            </details>                                                                                                                 
        </details>      
        <details>
            <summary>3.5 Hard Prob</summary>
            <details>
                <summary>3.5.1 Palindrome Partitioning </summary>
            </details>  
            <details>
                <summary>3.5.2 Word-wrap Problem</summary>
            </details>  
            <details>
                <summary>3.5.3 Painters problem</summary>
            </details>  
            <details>
                <summary>3.5.4 Boolean Parenthesization Problem
</summary>
            </details>  
            <details>
                <summary>3.5.5 Program for Bridge and Torch problem</summary>
            </details>  
            <details>
                <summary>3.5.6 A Space Optimized DP solution for 0-1 Knapsack Problem
</summary>
            </details>   
            <details>
                <summary>3.5.7 Matrix Chain Multiplication</summary>                                                          
            </details>
            <details>
                <summary>3.5.8 Printing brackets in Matrix Chain Multiplication Problem</summary>                                                          
            </details>
            <details>
                <summary>3.5.9 Number of palindromic paths in a matrix
</summary>                                                          
            </details>
            <details>
                <summary>3.5.10 Largest rectangular sub-matrix whose sum is 0
</summary>                                                          
            </details>
            <details>
                <summary>3.5.11 Largest rectangular sub-matrix having sum divisible by k
</summary>                                                          
            </details>
            <details>
                <summary>3.5.12 Largest area rectangular sub-matrix with equal number of 1’s and 0’s
            </summary> 
             <details>
            <details>
                <summary>3.5.13 Maximum sum bitonic subarray</summary>
            </details> 
            <details>
                <summary>3.5.14 Maximum sum rectangle in a 2D matrix</summary>
            </details>      
            <details>
                <summary>3.5.15 Maximum Subarray Sum Excluding Certain Elements</summary>
            </details>      
            <details>
                <summary>3.5.16 Maximum weight transformation of a given string
</summary>
            </details>                   
            </details>                                    
                <summary>3.4..........100</summary>
            </details>                             
        </details>  
    </details>              
    </details>      
    <details>
        <summary>4.Greedy</summary>
        <details>
            <summary>4.1 Standard algos</summary>
            <details>
                <summary>4.1.1 Activity Selection Prob</summary>
                --[x]
            </details> 
            <details>
                <summary>4.1.2 Egyptian Fraction</summary>
                --[x]
            </details>      
            <details>
                <summary>4.1.3 Job Sequencing Problem
(~||disjoint sets || loss minimisation-1||loss minimisation -2)</summary>
            1. No-loss & all acitivies take unit time, maximise profit:<br>
            1.1. [x] Greedy(O(n2))<br>
            2.1. [x] Disjoint Sets{create(O(n),find(O(n),O(n2)-worst, O(n)-av))}<br>
            2.All activities take diff time, minimise loss:<br>
            2.1. [x] using stable sort(O(nlogn))<br>
            2.1. [ ] Heapify
            </details>      
            <details>
                <summary>4.1.4 Huffman Coding(~||for sorted input)</summary>
                ---[ ]
            </details>  
            <details>
                <summary>4.1.5 Huffman Decoding</summary>
                ---[ ]
            </details> 
            <details>
                <summary>4.1.6 Water Connection Prob</summary>
                ---[x]<br>
                -----------dfs for forest, amazing!
            </details>      
            <details>
                <summary>4.1.7 Policeman catch thieves</summary>
                ---[x]<br>
                -----------your's : O(n*k), GfG's : O(n)
            </details>      
            <details>
                <summary>4.1.8 Minimum Swaps for Bracket Balancing</summary>
                ---[x]
            </details>      
           <details>
                <summary>4.1.9 Fitting Shelves Problem
</summary>
                ---[x]
            </details>      
           <details>
                <summary>4.1.10 Assign Mice to Holes
</summary>
                ---[x]
            </details>                                                   
        </details> 
        <details>
            <summary>4.2 [ ] Greedy in Graph</summary>
            <details>
                <summary>4.2.1 Kruskal's MSP</summary>
            </details> 
            <details>
                <summary>4.2.2 Prim's MSP</summary>
            </details>      
            <details>
                <summary>4.2.3 Boruvka's MSP</summary>
            </details>      
            <details>
                <summary>4.2.3 Dijkstra's shortest path</summary>
            </details>      
            <details>
                <summary>4.2.4 Dial's</summary>
            </details>      
            <details>
                <summary>4.2.5 Min cost</summary>
            </details>      
            <details>
                <summary>4.2.6 Max flow</summary>
            </details>      
            <details>
                <summary>4.2.7 #single cycle components in undirected graph</summary>
            </details>      
        </details>      
        <details>
            <summary>4.3 Greedy in arrays</summary>
            <details>
                <summary>4.3.1 Min product subset</summary>
                ---[x]
            </details> 
            <details>
                <summary>4.3.2 Max product subset</summary>
                ---[x]
            </details>      
            <details>
                <summary>4.3.3 Maximize array sum after k-negations(both sets)</summary>
                ---[x] [ ]
            </details>      
            <details>
                <summary>4.3.4 Maximize the sum of arr[i]*i
</summary>
                ---[x]
            </details>      
            <details>
                <summary>4.3.5 Maximum sum of increasing order elements from n arrays
</summary>
                ---[x]
            </details>      
            <details>
                <summary>4.3.6 Maximum sum of absolute difference of an array</summary>
                ---[x]
            </details>      
            <details>
                <summary>4.3.7 Maximize sum of consecutive differences in a circular array</summary>
                --[-]
            </details>      
            <details>
                <summary>4.3.8 Maximum height pyramid from the given array of objects
</summary>
                ---[x]
            </details>      
            <details>
                <summary>4.3.9 Partition into two subarrays of lengths k and (N – k) such that the difference of sums is maximum
</summary>
                ---[-]
            </details>      
            <details>
                <summary>4.3.10 Minimum sum of product of two arrays</summary>
                ---[-]
            </details>     
            <details>
                <summary>4.3.11 Minimum sum by choosing minimum of pairs from array
</summary>
                ---[-]
            </details> 
            <details>
                <summary>4.3.12 Minimum sum of absolute difference of pairs of two arrays
</summary>
                ---[-]
            </details>      
            <details>
                <summary>4.3.13 Minimum operations to make GCD of array a multiple of k
</summary>
                ---[-]
            </details>      
            <details>
                <summary>4.3.14 Minimum sum of absolute difference of pairs of two arrays
</summary>
            </details>      
            <details>
                <summary>4.3.15 Minimum sum of two numbers formed from digits of an array
</summary>
            ---[x] - simple sort: O(logn)<br>
            ---[x] - min heap   :O(n)
            </details>      
            <details>
                <summary>4.3.16 Minimum increment/decrement to make array non-Increasing</summary>
                ---[[x]] : min_heap
            </details>      
            <details>
                <summary>4.3.17 Minimize sum of product of two arrays with permutation allowed</summary>
            </details>      
            <details>
                <summary>4.3.18 Sorting array with reverse around middle
</summary>
            </details>      
            <details>
                <summary>4.3.19 Sum of Areas of Rectangles possible for an array
</summary>
            </details>      
            <details>
                <summary>4.3.20 Array element moved by k using single moves</summary>
            </details>           
            <details>
                <summary>4.3.21 Find if k bookings possible with given arrival and departure times
</summary>
            </details>           
            <details>
                <summary>4.3.22 Lexicographically smallest array after at-most K consecutive swaps
</summary>
            </details> 
            <details>
                <summary>4.3.23 Largest lexicographic array with at-most K consecutive swaps
</summary>
            </details>                                                            
        </details>      
        <details>
            <summary>4.4 Greedy in OS</summary>
            <details>
                <summary>4.4.1 First Fit algorithm in Memory Management</summary>
            </details> 
            <details>
                <summary>4.4.2 Best Fit algorithm in Memory Management
</summary>
            </details>      
            <details>
                <summary>4.4.3 Worst Fit algorithm in Memory Management</summary>
            </details>      
            <details>
                <summary>4.4.4 Operating System | Program for Next Fit algorithm in Memory Management
</summary>
            </details>      
            <details>
                <summary>4.4.5 Shortest Job First Scheduling
</summary>
            </details>      
            <details>
                <summary>4.4.6 Program for Shortest Job First (SJF) scheduling | Set 2 (Preemptive)
</summary>
            </details>      
            <details>
                <summary>4.4.7 Schedule jobs so that each server gets equal load
</summary>
            </details>      
            <details>
                <summary>4.4.8 Job Scheduling with two jobs allowed at a time</summary>
            </details>      
            <details>
                <summary>4.4.9 Scheduling priority tasks in limited time and minimizing loss
</summary>
            </details>      
            <details>
                <summary>4.4.10 Page Replacement (~|| LRU || FIFO)</summary>
            </details>                      
        </details>      
        <details>
            <summary>4.5 Apporx Greedy for NP-complete probs</summary>
        </details>      
        <details>
            <summary>4.6 Misc</summary>
            <details>
                <summary>4.6.1 Split n into maximum composite numbers</summary>
                ---[x]
            </details> 
            <details>
                <summary>4.6.2 Maximum trains for which stoppage can be provided</summary>
                --[[ ]]
            </details>      
            <details>
                <summary>4.6.3 Buy Maximum Stocks if i stocks can be bought on i-th day
</summary>
                --[x] same algo but nice implementation-O(nlogn)
            </details>      
            <details>
                <summary>4.6.4 Find the minimum and maximum amount to buy all N candies
</summary>
                --[x]
            </details>      
            <details>
                <summary>4.6.5 Maximum sum possible equal to sum of three stacks
</summary>
                --[x]
            </details>      
            <details>
                <summary>4.6.6 Maximum elements that can be made equal with k updates
</summary>
                --[[ ]]
            </details>      
            <details>
                <summary>4.6.7 Divide cuboid into cubes such that sum of volumes is maximum
</summary>
                --[-]
            </details>      
            <details>
                <summary>4.6.8 Maximum number of customers that can be satisfied with given quantity
</summary>
            </details>      
            <details>
                <summary>4.6.9 Minimum Fibonacci terms with sum equal to K
</summary>
                --[-]
            </details>      
            <details>
                <summary>4.6.10 Divide 1 to n into two groups with minimum sum difference
</summary>
            </details>  
            <details>
                <summary>4.6.11 Minimize cash flow among friends
</summary>
            </details> 
            <details>
                <summary>4.6.12 Minimum rotations to unlock a circular lock
</summary>
            </details>      
            <details>
                <summary>4.6.13 Paper cut into minimum number of squares
</summary>
            </details>      
            <details>
                <summary>4.6.14 Minimum difference between groups of size two
</summary>
            </details>      
            <details>
                <summary>4.6.15 Minimum rooms for m events of n batches with given schedule
</summary>
            </details>      
            <details>
                <summary>4.6.16 Connect n ropes with minimum cost
</summary>
            </details>      
            <details>
                <summary>4.6.17 Minimum Cost to cut a board into squares
</summary>
            </details>      
            <details>
                <summary>4.6.18 Minimum cost to process m tasks where switching costs
</summary>
            </details>      
            <details>
                <summary>4.6.19 Minimum cost to make array size 1 by removing larger of pairs
</summary>
            </details>      
            <details>
                <summary>4.6.20 Minimum cost for acquiring all coins with k extra coins allowed with every coin</summary>
            </details>   
            <details>
                <summary>4.6.21 Minimum time to finish all jobs with given constraints </summary>
            </details> 
            <details>
                <summary>4.6.22 Minimum number of Platforms required for a railway/bus station
</summary>
            </details>      
            <details>
                <summary>4.6.23 Minimize the maximum difference between the heights of towers
</summary>
            </details>      
            <details>
                <summary>4.6.24 Minimum increment by k operations to make all elements equal</summary>
            </details>      
            <details>
                <summary>4.6.25 Minimum edges to reverse to make path from a source to a destination</summary>
            </details>      
            <details>
                <summary>4.6.26 Find minimum number of currency notes and values that sum to given amount</summary>
            </details>      
            <details>
                <summary>4.6.27 Minimum initial vertices to traverse whole matrix with given conditions</summary>
            </details>      
            <details>
                <summary>4.6.28 Find the Largest Cube formed by Deleting minimum Digits from a number</summary>
            </details>      
            <details>
                <summary>4.6.29 Check if it is possible to survive on Island
</summary>
            </details>      
            <details>
                <summary>4.6.30 Largest palindromic number by permuting digits
</summary>
            </details>   
            <details>
                <summary>4.6.31 Smallest number with sum of digits as N and divisible by 10^N</summary>
            </details> 
            <details>
                <summary>4.6.32 Find Smallest number with given number of digits and digits sum
</summary>
            </details>      
            <details>
                <summary>4.6.33 Rearrange characters in a string such that no two adjacent are same
</summary>
            </details>      
            <details>
                <summary>4.6.34 Rearrange a string so that all same characters become d distance away
</summary>
            </details>      
            <details>
                <summary>4.6.35 Print a closest string that does not contain adjacent duplicates
</summary>
            </details>      
            <details>
                <summary>4.6.36 Smallest subset with sum greater than all other elements</summary>
            </details>      
            <details>
                <summary>4.6.37 Lexicographically largest subsequence such that every character occurs at least k times</summary>
            </details>      
        </details>      
        <details>
            <summary>4.7 Greedy for special cases of DP probs</summary>
            <details>
                <summary>4.7.1 Set Cover Prob</summary>
            </details> 
            <details>
                <summary>4.7.2 Bin Packing Prob</summary>
            </details>      
            <details>
                <summary>4.7.3 Graph Coloring</summary>
            </details>      
            <details>
                <summary>4.7.4 K-centre Prob</summary>
            </details>      
            <details>
                <summary>4.7.5 Shortest superstring</summary>
            </details>      
            <details>
                <summary>4.7.6 TSP(naive-dry || MST)</summary>
            </details>               
        </details>        
    </details>      
    <details>
        <summary>5.Bitwise</summary>
        <details>
            <summary>5.1 Basic</summary>
            <details>
                <summary>5.1.1 Find the element that appears once</summary>
            </details> 
            <details>
                <summary>5.1.2 Detect if two integers have opposite signs
</summary>
            </details>      
            <details>
                <summary>5.1.3 Add 1 to a given number</summary>
            </details>      
            <details>
                <summary>5.1.4 Multiply a given Integer with 3.5
</summary>
            </details>      
            <details>
                <summary>5.1.5 Turn off the rightmost set bit</summary>
            </details>      
            <details>
                <summary>5.1.6 Find whether a given number is a power of 4 or not
</summary>
            </details>      
            <details>
                <summary>5.1.7 Compute modulus division by a power-of-2-number</summary>
            </details>      
            <details>
                <summary>5.1.8 Rotate bits of a number
</summary>
            </details>      
            <details>
                <summary>5.1.9 Find the Number Occurring Odd Number of Times
</summary>
            </details>      
            <details>
                <summary>5.1.10 Check for Integer Overflow
</summary>
            </details>   
            <details>
                <summary>5.1.11 Count set bits in an integer
</summary>
            </details> 
            <details>
                <summary>5.1.12 Count number of bits to be flipped to convert A to B
</summary>
            </details>      
            <details>
                <summary>5.1.13 Efficient way to multiply with 7</summary>
            </details>      
            <details>
                <summary>5.1.14 Program to find whether a no is power of two</summary>
            </details>      
            <details>
                <summary>5.1.15 Position of rightmost set bit
</summary>
            </details>      
            <details>
                <summary>5.1.16 Binary representation of a given number</summary>
            </details>      
            <details>
                <summary>5.1.17 Find position of the only set bit
</summary>
            </details>      
            <details>
                <summary>5.1.18 How to swap two numbers without using a temporary variable?
</summary>
            </details>      
            <details>
                <summary>5.1.19 Swap two nibbles in a byte</summary>
            </details>      
            <details>
                <summary>5.1.20 How to turn off a particular bit in a number?
</summary>
            </details>   
            <details>
                <summary>5.1.21 Russian Peasant (Multiply two numbers using bitwise operators)
</summary>
            </details> 
            <details>
                <summary>5.1.22 Add two bit strings
</summary>
            </details>      
            <details>
                <summary>5.1.23 Write your own strcmp that ignores cases</summary>
            </details>      
            <details>
                <summary>5.1.24 Check if two numbers are equal without using arithmetic and comparison operators
</summary>
            </details>      
            <details>
                <summary>5.1.25 Find XOR of two number without using XOR operator</summary>
            </details>      
            <details>
                <summary>5.1.26 Calculate XOR from 1 to n</summary>
            </details>      
            <details>
                <summary>5.1.27 Count minimum bits to flip such that XOR of A and B equal to C</summary>
            </details>      
            <details>
                <summary>5.1.28 Efficient method for 2’s complement of a binary string</summary>
            </details>      
            <details>
                <summary>5.1.29 Toggling k-th bit of a number</summary>
            </details>      
            <details>
                <summary>5.1.30 Convert decimal fraction to binary number
</summary>
            </details>   
            <details>
                <summary>5.1.31 Set the rightmost unset bit
</summary>
            </details> 
            <details>
                <summary>5.1.32 Convert a binary number to octal</summary>
            </details>      
            <details>
                <summary>5.1.33 Toggle bits in the given range</summary>
            </details>      
            <details>
                <summary>5.1.34 Toggle the last m bits
</summary>
            </details>      
            <details>
                <summary>5.1.........100</summary>
            </details>      
        </details> 
        <details>
            <summary>5.2 Intermediate</summary>
            <details>
                <summary>5.2.1 Swap bits in a given number</summary>
            </details> 
            <details>
                <summary>5.2.2 Little and Big Endian Mystery
</summary>
            </details>      
            <details>
                <summary>5.2.3 Smallest of three integers without comparison operators</summary>
            </details>      
            <details>
                <summary>5.2.4 A Boolean Array Puzzle
</summary>
            </details>      
            <details>
                <summary>5.2.5 Compute the integer absolute value (abs) without branching
</summary>
            </details>      
            <details>
                <summary>5.2.6 Compute the minimum or maximum of two integers without branching</summary>
            </details>      
            <details>
                <summary>5.2.7 Find the two non-repeating elements in an array of repeating elements</summary>
            </details>      
            <details>
                <summary>5.2.8 Write an Efficient C Program to Reverse Bits of a Number
</summary>
            </details>      
            <details>
                <summary>5.2.9 Smallest power of 2 greater than or equal to n
</summary>
            </details>    
            <details>
                <summary>5.2.10 find the parity of an unsigned integer</summary>
            </details> 
            <details>
                <summary>5.2.11 Swap all odd and even bits
</summary>
            </details>      
            <details>
                <summary>5.2.12 Check if binary representation of a number is palindrome
</summary>
            </details>      
            <details>
                <summary>5.2.13 Generate n-bit Gray Codes
</summary>
            </details>      
            <details>
                <summary>5.2.14 Check if a given number is sparse or not
</summary>
            </details>      
            <details>
                <summary>5.2.15 Euclid’s Algorithm when % and / operations are costly
</summary>
            </details>      
            <details>
                <summary>5.2.16 Find nth Magic Number
</summary>
            </details>      
            <details>
                <summary>5.2.17 How to swap two bits in a given integer?
</summary>
            </details>      
            <details>
                <summary>5.2.18 Calculate square of a number without using *, / and pow()</summary>
            </details>      
            <details>
                <summary>5.2.19 enerate 0 and 1 with 25% and 75% probability</summary>
            </details>            
            <details>
                <summary>5.2.20 Find even occurring elements in an array of limited range</summary>
            </details> 
            <details>
                <summary>5.2.21 Cyclic Redundancy Check and Modulo-2 Division</summary>
            </details>      
            <details>
                <summary>5.2.22 Copy set bits in a range</summary>
            </details>      
            <details>
                <summary>5.2.23 Check if a number is Bleak
</summary>
            </details>      
            <details>
                <summary>5.2.24 Count strings with consecutive 1’s
</summary>
            </details>    
            <details>
                <summary>5.2.25 Gray to Binary and Binary to Gray conversion
</summary>
            </details>                                      
            <details>
                <summary>5.2......100</summary>
            </details>                  
        </details>      
        <details>
            <summary>5.3 Hard</summary>
            <details>
                <summary>5.3.1 Count total set bits in all numbers from 1 to n
</summary>
            </details> 
            <details>
                <summary>5.3.2 Program to count number of set bits in an (big) array
</summary>
            </details>      
            <details>
                <summary>5.3.3 Next higher number with same number of set bits</summary>
            </details>      
            <details>
                <summary>5.3.4 Karatsuba algorithm for fast multiplication</summary>
            </details>      
            <details>
                <summary>5.3.5 Find the maximum subarray XOR in a given array
</summary>
            </details>      
            <details>
                <summary>5.3.6 Inserting m into n such that m starts at bit j and ends at bit i</summary>
            </details>      
            <details>
                <summary>5.3.7 Find Duplicates of array using bit array
</summary>
            </details>      
            <details>
                <summary>5.3.8 Find longest sequence of 1’s in binary representation with one flip</summary>
            </details>      
            <details>
                <summary>5.3.9 Closest (or Next) smaller and greater numbers with same number of set bits
</summary>
            </details>      
            <details>
                <summary>5.3.10 Bitmasking and Dynamic Programming | Set-2 (TSP)</summary>
            </details>   
            <details>
                <summary>5.3.11 Compute the parity of a number using XOR and table look-up
</summary>
            </details> 
            <details>
                <summary>5.3.12 XOR Encryption by Shifting Plaintext</summary>
            </details>      
            <details>
                <summary>5.3.13 Count pairs in an array which have at least one digit common
</summary>
            </details>      
            <details>
                <summary>5.3.14 Levelwise Alternating OR and XOR operations in Segment Tree</summary>
            </details>      
            <details>
                <summary>5.3.15 Booth’s Multiplication Algorithm</summary>
            </details>      
            <details>
                <summary>5.3.16 Leftover element after performing alternate Bitwise OR and Bitwise XOR operations on adjacent pairs</summary>
            </details>      
            <details>
                <summary>5.3.17 Number of pairs with Pandigital Concatenation
</summary>
            </details>      
            <details>
                <summary>5.3.18 Find the n-th number whose binary representation is a palindrome</summary>
            </details>      
            <details>
                <summary>5.3.........100</summary>
            </details>                        
        </details>       
        <details>
            <summary>5.4 Misc</summary>
        </details>            
    </details>      
    <details>
        <summary>6.Geometry/Maths</summary>
        <details>
            <summary>6.1 Geo</summary>
            <details>
                <summary>6.1.1 Lines</summary>
                <details>
                    <summary>6.1.1.1 How to check if two given line segments intersect?</summary>
                </details> 
                <details>
                    <summary>6.1.1.2 Given n line segments, find if any two segments intersect</summary>
                </details>      
                <details>
                    <summary>6.1.1.3 Klee’s Algorithm (Length Of Union Of Segments of a line)
</summary>
                </details>      
                <details>
                    <summary>6.1.1.4 Count maximum points on same line
</summary>
                </details>      
                <details>
                    <summary>6.1.1.5 Find an Integer point on a line segment with given two ends</summary>
                </details>      
                <details>
                    <summary>6.1.1.6 Minimum lines to cover all points
</summary>
                </details>      
                <details>
                    <summary>6.1.1.7 Minimum block jumps to reach destination</summary>
                </details>      
                <details>
                    <summary>6.1.1.8 Program for Point of Intersection of Two Lines</summary>
                </details>      
                <details>
                    <summary>6.1.1.9 Represent a given set of points by the best possible straight line</summary>
                </details>      
                <details>
                    <summary>6.1.1.10 Program to find line passing through 2 Points</summary>
                </details>    
                <details>
                    <summary>6.1.1.11 Reflection of a point about a line in C++
</summary>
                </details> 
                <details>
                    <summary>6.1.1.12 Find points at a given distance on a line of given slope
</summary>
                </details>      
                <details>
                    <summary>6.1.1.13 Number of ordered points pair satisfying line equation</summary>
                </details>      
                <details>
                    <summary>6.1.1.14 Check if a line passes through the origin
</summary>
                </details>      
                <details>
                    <summary>6.1.1.15 Count of different straight lines with total n points with m collinear
</summary>
                </details>      
                <details>
                    <summary>6.1.1.16 Number of horizontal or vertical line segments to connect 3 points
</summary>
                </details>      
                <details>
                    <summary>6.1.1.17 Program to find the mid-point of a line</summary>
                </details>      
                <details>
                    <summary>6.1.1.18 Section formula (Point that divides a line in given ratio)</summary>
                </details>      
                <details>
                    <summary>6.1.1.19 Sum of Manhattan distances between all pairs of points</summary>
                </details>      
                <details>
                    <summary>6.1.1.20 Minimum number of points to be removed to get remaining points on one side of axis
</summary>
                </details> 
                <details>
                    <summary>6.1.1.21 Program to find slope of a line
</summary>
                </details>      
                <details>
                    <summary>6.1.1.22 Maximum integral co-ordinates with non-integer distances
</summary>
                </details>      
                <details>
                    <summary>6.1.1.23 Direction of a Point from a Line Segment
</summary>
                </details>    
                <details>
                    <summary>6.1.1.24 Find intersection point of lines inside a section
</summary>
                </details>    
                <details>
                    <summary>6.1.1.25 Program to check if three points are collinear</summary>
                </details>                                                                                     
            </details> 
            <details>
                <summary>6.1.2 Triangles</summary>
                <details>
                    <summary>6.1.2.1 Check whether a given point lies inside a triangle or not
</summary>
                </details> 
                <details>
                    <summary>6.1.2.2 C program to find area of a triangle
</summary>
                </details>      
                <details>
                    <summary>6.1.2.3 Count Integral points inside a Triangle
</summary>
                </details>      
                <details>
                    <summary>6.1.2.4 Classify a triangle
</summary>
                </details>      
                <details>
                    <summary>6.1.2.5 Maximum height when coins are arranged in a triangle</summary>
                </details>      
                <details>
                    <summary>6.1.2.6 Find all sides of a right angled triangle from given hypotenuse and area | Set 1</summary>
                </details>      
                <details>
                    <summary>6.1.2.7 Maximum number of 2×2 squares that can be fit inside a right isosceles triangle
</summary>
                </details>      
                <details>
                    <summary>6.1.2.8 Check if right triangle possible from given area and hypotenuse
</summary>
                </details>      
                <details>
                    <summary>6.1.2.9 Triangle with no point inside
</summary>
                </details>      
                <details>
                    <summary>6.1.2.10 Find all angles of a given triangle</summary>
                </details> 
                <details>
                    <summary>6.1.2.11 Program to find Circumcenter of a Triangle</summary>
                </details> 
                <details>
                    <summary>6.1.2.12 Number of Triangles that can be formed given a set of lines in Euclidean Plane</summary>
                </details>      
                <details>
                    <summary>6.1.2.13 Triangular Matchstick Number</summary>
                </details>      
                <details>
                    <summary>6.1.2.14 Number of jump required of given length to reach a point of form (d, 0) from origin in 2D plane
</summary>
                </details>      
                <details>
                    <summary>6.1.2.15 Program to calculate area of Circumcircle of an Equilateral Triangle</summary>
                </details>      
                <details>
                    <summary>6.1.2.16 Check whether triangle is valid or not if sides are given</summary>
                </details>      
                <details>
                    <summary>6.1.2.17 Program to find third side of triangle using law of cosines</summary>
                </details>      
                <details>
                    <summary>6.1.2.18 Find the dimensions of Right angled triangle
</summary>
                </details>      
                <details>
                    <summary>6.1.2.19 Program to calculate area and perimeter of equilateral triangle
</summary>
                </details>      
                <details>
                    <summary>6.1.2.20 Count of acute, obtuse and right triangles with given sides</summary>
                </details>  
                <details>
                    <summary>6.1.2.21 Minimum height of a triangle with given base and area
</summary>
                </details>  
                <details>
                    <summary>6.1.2.22 Maximum number of squares that can fit in a right angle isosceles triangle
</summary>
                </details>                                                                
            </details>      
            <details>
                <summary>6.1.3 Rect|Sq|Circle</summary>
                <details>
                    <summary>6.1.3.1 Rect</summary>
                    <details>
                        <summary>6.1.3.1.1 Find if two rectangles overlap</summary>
                    </details> 
                    <details>
                        <summary>6.1.3.1.2 Check if four segments form a rectangle</summary>
                    </details>      
                    <details>
                        <summary>6.1.3.1.3 Check whether a given point lies inside a rectangle or not</summary>
                    </details>      
                    <details>
                        <summary>6.1.3.1.4 Minimum Perimeter of n blocks
</summary>
                    </details>      
                    <details>
                        <summary>6.1.3.1.5 Number of rectangles in N*M grid</summary>
                    </details>      
                    <details>
                        <summary>6.1.3.1.6 Find Corners of Rectangle using mid points</summary>
                    </details>      
                    <details>
                        <summary>6.1.3.1.7 Coordinates of rectangle with given points lie inside</summary>
                    </details>      
                    <details>
                        <summary>6.1.3.1.8 Total area of two overlapping rectangles</summary>
                    </details>      
                    <details>
                        <summary>6.1.3.1.9 Program for Area And Perimeter Of Rectangle</summary>
                    </details>                                                               
                </details>  
                <details>
                    <summary>6.1.3.2 Sq</summary>
                    <details>
                        <summary>6.1.3.2.1 Program to find Perimeter / Circumference of Square and Rectangle</summary>
                    </details>   
                    <details>
                        <summary>6.1.3.2.2 
Program for Area Of Square</summary>
                    </details>      
                    <details>
                        <summary>6.1.3.2.3 Number of unique rectangles formed using N unit squares</summary>
                    </details>   
                    <details>
                        <summary>6.1.3.2.4 How to check if given four points form a square</summary>
                    </details>      
                    <details>
                        <summary>6.1.3.2.5 Paper Cut into Minimum Number of Squares</summary>
                    </details>                                                                                          
                </details>   
                <details>
                    <summary>6.1.3.3 Circle</summary>
                    <details>
                        <summary>6.1.3.3.1 Program to find area of a circle
</summary>
                    </details>   
                    <details>
                        <summary>6.1.3.3.2 Non-crossing lines to connect points in a circle</summary>
                    </details>   
                    <details>
                        <summary>6.1.3.3.3 Circle and Lattice Points</summary>
                    </details>  
                    <details>
                        <summary>6.1.3.3.4 Queries on count of points lie inside a circle
</summary>
                    </details>   
                    <details>
                        <summary>6.1.3.3.5 Check whether a point exists in circle sector or not</summary>
                    </details>   
                    <details>
                        <summary>6.1.3.3.6 Pizza cut problem (Or Circle Division by Lines)
</summary>
                    </details>   
                    <details>
                        <summary>6.1.3.3.7 Minimum revolutions to move center of a circle to a target</summary>
                    </details>   
                    <details>
                        <summary>6.1.3.3.8 Angular Sweep (Maximum points that can be enclosed in a circle of given radius)
</summary>
                    </details>   
                    <details>
                        <summary>6.1.3.3.9 Check if a line touches or intersects a circle
</summary>
                    </details>  
                    <details>
                        <summary>6.1.3.3.10 Check if a given circle lies completely inside the ring formed by two concentric circles
</summary>
                    </details>   
                    <details>
                        <summary>6.1.3.3.11 Area of a Circumscribed Circle of a Square
</summary>
                    </details>   
                    <details>
                        <summary>6.1.3.3.12 Path in a Rectangle with Circles</summary>
                    </details>   
                    <details>
                        <summary>6.1.3.3.13 Area of square Circumscribed by Circle</summary>
                    </details>   
                    <details>
                        <summary>6.1.3.3.14 Count ways to divide circle using N non-intersecting chords
</summary>
                    </details>   
                    <details>
                        <summary>6.1.3.3.15 Find the center of the circle using endpoints of diameter
</summary>
                    </details>  
                    <details>
                        <summary>6.1.3.3.16 Program to find area of a Circular Segment</summary>
                    </details>   
                    <details>
                        <summary>6.1.3.3.17 Program to find smallest difference of angles of two parts of a given circle</summary>
                    </details>   
                    <details>
                        <summary>6.1.3.3.18 Arc length from given Angle</summary>
                    </details>      
                    <details>
                        <summary>6.1.3.3.19 Area of a Circular Sector</summary>
                    </details>   
                    <details>
                        <summary>6.1.3.3.20 Find minimum radius such that atleast k point lie inside the circle</summary>
                    </details>                                     <details>
                        <summary>6.1.3.3.21 Program to find Circumference of a Circle</summary>
                    </details>   
                    <details>
                        <summary>6.1.3.3.22 Check whether given circle resides in boundary maintained by two other circles</summary>
                    </details>  
                    <details>
                        <summary>6.1.3.3.23 Check if two given circles touch or intersect each other</summary>
                    </details>   
                    <details>
                        <summary>6.1.3.3.24 Count of obtuse angles in a circle with ‘k’ equidistant points between 2 given points</summary>
                    </details>                                                                                 
                </details>                                              
            </details>      
            <details>
                <summary>6.1.4 3D obj</summary>
                <details>
                    <summary> 6.1.4.1 Find the perimeter of a cylinder</summary>
                </details> 
                <details>
                    <summary> 6.1.4.2 Find the Surface area of a 3D figure
</summary>
                </details>      
                <details>
                    <summary> 6.1.4.3 Program for distance between two points on earth
</summary>
                </details>      
                <details>
                    <summary> 6.1.4.4 Calculate Volume of Dodecahedron
</summary>
                </details>      
                <details>
                    <summary> 6.1.4.5 Program for Volume and Surface area of Frustum of Cone</summary>
                </details>      
                <details>
                    <summary> 6.1.4.6 Program for volume of Pyramid</summary>
                </details>      
                <details>
                    <summary> 6.1.4.7 Pythagorean Quadruple</summary>
                </details>      
            </details>      
            <details>
                <summary>6.1.5 Quadilateral</summary>
                <details>
                    <summary> 6.1.5.1 Number of parallelograms when n horizontal parallel lines intersect m vertical parallellines</summary>
                </details> 
                <details>
                    <summary> 6.1.5.2 Program for Circumference of a Parallelogram
</summary>
                </details>      
                <details>
                    <summary> 6.1.5.3 Program to calculate area and perimeter of Trapezium
</summary>
                </details>      
                <details>
                    <summary></summary>
                </details>      
                <details>
                    <summary></summary>
                </details>      
                <details>
                    <summary></summary>
                </details>      
                <details>
                    <summary></summary>
                </details>      
                <details>
                    <summary></summary>
                </details>      
                <details>
                    <summary></summary>
                </details>      
                <details>
                    <summary></summary>
                </details>                      
            </details>      
            <details>
                <summary>6.1.6 Polygon & Convex Hull</summary>
                <details>
                    <summary> 6.1.6.1 How to check if a given point lies inside or outside a polygon?</summary>
                </details> 
                <details>
                    <summary> 6.1.6.2 Find number of diagonals in n sided convex polygon</summary>
                </details>      
                <details>
                    <summary> 6.1.6.3 Convex Hull | Set 1 (Jarvis’s Algorithm or Wrapping)</summary>
                </details>      
                <details>
                    <summary> 6.1.6.4 Convex Hull | Set 2 (Graham Scan)
</summary>
                </details>      
                <details>
                    <summary> 6.1.6.5  Quickhull Algorithm for Convex Hull
</summary>
                </details>      
                <details>
                    <summary> 6.1.6.6 Convex Hull (Simple Divide and Conquer Algorithm)
</summary>
                </details>                   
            </details>      
            <details>
                <summary>6.1.7 Misc</summary>
            </details>                  
        </details> 
        <details>
            <summary>6.2 Maths</summary>
            <details>
                <summary>6.2.1 GCD & LCM</summary>
                <details>
                    <summary> 6.2.1.1 GCD & LCM</summary>
                    --[]
                </details> 
                <details>
                    <summary> 6.2.1.2 LCM of array</summary>
                    --[-]
                </details>      
                <details>
                    <summary> 6.2.1.3 GCD of Array</summary>
                </details>    
                    --[-]  
                <details>
                    <summary> 6.2.1.4 Basic and Extended Euclidean algorithms
</summary>
                    --[x]
                </details>      
                <details>
                    <summary> 6.2.1.5 Product of given N fractions in reduced form</summary>
                </details>      
                <details>
                    <summary> 6.2.1.6 GCD of two numbers when one of them can be very large
</summary>
                </details>      
                <details>
                    <summary> 6.2.1.7 Stein’s Algorithm for finding GCD
</summary>
                </details>      
                <details>
                    <summary> 6.2.1.8 GCD of two numbers formed by n repeating x and y times</summary>
                </details>      
                <details>
                    <summary> 6.2.1.9 Count number of pairs (A <= N, B <= N) such that gcd (A , B) is B
</summary>
                </details>      
                <details>
                    <summary> 6.2.1.10 First N natural can be divided into two sets with given difference and co-prime sums</summary>
                </details>  
                <details>
                    <summary> 6.2.1.11 Minimum gcd operations to make all array elements one
</summary>
                </details> 
                <details>
                    <summary> 6.2.1.12 GCD of floating point numbers
</summary>
                </details>      
                <details>
                    <summary> 6.2.1.13 GCD of digits of a given number
</summary>
                </details>      
                <details>
                    <summary> 6.2.1.14 Minimum operations to make GCD of array a multiple of k
</summary>
                </details>      
                <details>
                    <summary> 6.2.1.15 Given GCD G and LCM L, find number of possible pairs (a, b)</summary>
                </details>      
                <details>
                    <summary> 6.2.1...........100</summary>
                </details>      
            </details> 
            <details>
                <summary>6.2.2 Factorisation</summary>
                <details>
                    <summary> 6.2.2.1 Prime factors
</summary>
                </details> 
                <details>
                    <summary> 6.2.2.2 Smith Numbers
</summary>
                </details>      
                <details>
                    <summary> 6.2.2.3 Sphenic Number
</summary>
                </details>      
                <details>
                    <summary> 6.2.2.4 Hoax Number
</summary>
                </details>      
                <details>
                    <summary> 6.2.2.5 k-th prime factor of a given number
</summary>
                </details>      
                <details>
                    <summary> 6.2.2.6 Prime Factorization using Sieve O(log n) for multiple queries
</summary>
                </details>      
                <details>
                    <summary> 6.2.2.7 Find politeness of a number
</summary>
                </details>      
                <details>
                    <summary> 6.2.2.8 Find sum of even factors of a number
</summary>
                </details>      
                <details>
                    <summary> 6.2.2.9 Find largest prime factor of a number
</summary>
                </details>      
                <details>
                    <summary> 6.2.2.10 Finding power of prime number p in n!
</summary>
                </details>   
                <details>
                    <summary> 6.2.2.11 Find all divisors of a natural number
(all 3 sets)</summary>
                </details> 
                <details>
                    <summary> 6.2.2.12 Find numbers with n-divisors in a given range
</summary>
                </details>      
                <details>
                    <summary> 6.2.2.13 Find minimum number to be divided to make a number a perfect square
</summary>
                </details>      
                <details>
                    <summary> 6.2.2.14 Sum of all proper divisors of a natural number
</summary>
                </details>      
                <details>
                    <summary> 6.2.2.15 Sum of largest prime factor of each number less than equal to n
</summary>
                </details>      
                <details>
                    <summary> 6.2.2.........100</summary>
                </details>                                      
            </details>      
            <details>
                <summary>6.2.3Fibonacci Numbers</summary>
                <details>
                    <summary> 6.2.3.1 Fibonacci Numbers
</summary> 
                --[x] [ ] [ ] [ ] [ ]
                </details> 
                <details>
                    <summary> 6.2.3.2 How to check if a given number is Fibonacci number?
</summary>
                </details>      
                <details>
                    <summary> 6.2.3.3 Zeckendorf’s Theorem (Non-Neighbouring Fibonacci Representation)
</summary>
                </details>      
                <details>
                    <summary> 6.2.3.4 Finding nth Fibonacci Number using Golden Ratio
</summary>
                </details>      
                <details>
                    <summary> 6.2.3.5 Matrix Exponentiation
</summary>
                </details>      
                <details>
                    <summary> 6.2.3.6 Fibonacci Coding
</summary>
                </details>      
                <details>
                    <summary> 6.2.3.7 n’th multiple of a number in Fibonacci Series
</summary>
                </details>      
                <details>
                    <summary> 6.2.3.8 GCD and Fibonacci Numbers
</summary>
                </details>      
                <details>
                    <summary> 6.2.3.9 Cassini’s Identity
</summary>
                </details>      
                <details>
                    <summary> 6.2.3.10 N-bonacci Numbers
</summary>
                </details>  
                <details>
                    <summary> 6.2.3.11 The Magic of Fibonacci Numbers</summary>
                </details> 
                <details>
                    <summary> 6.2.3.12 Program to print Fibonacci Triangle
</summary>
                </details>      
                <details>
                    <summary> 6.2.3.13 Space efficient iterative method to Fibonacci number
</summary>
                </details>      
                <details>
                    <summary> 6.2.3.14 Factorial of each element in Fibonacci series
</summary>
                </details>      
                <details>
                    <summary> 6.2.3.15 Hosoya’s Triangle
</summary>
                </details>      
                <details>
                    <summary> 6.2.3.16 Prime numbers and Fibonacci
</summary>
                </details>      
                <details>
                    <summary> 6.2.3.17 Leonardo Number
</summary>
                </details>      
                <details>
                    <summary> 6.2.3.18 Fibonacci number in an array
</summary>
                </details>      
                <details>
                    <summary> 6.2.3.......100</summary>
                </details>                                  
            </details>      
            <details>
                <summary>6.2.4 Modular arithmetic</summary>
                <details>
                    <summary> 6.2.4.1 Modular Exponantiation</summary>
                </details> 
                <details>
                    <summary> 6.2.4.2 Modular multiplicative inverse</summary>
                </details>      
                <details>
                    <summary> 6.2.4.3 Modular Division
</summary>
                </details>      
                <details>
                    <summary> 6.2.4.4 Multiplicative order
</summary>
                </details>      
                <details>
                    <summary> 6.2.4.5 Find Square Root under Modulo p(both sets)</summary>
                </details>      
                <details>
                    <summary> 6.2.4.6 Euler’s criterion (Check if square root under modulo p exists)
</summary>
                </details>      
                <details>
                    <summary> 6.2.4.7 Multiply large integers under large modulo
</summary>
                </details>      
                <details>
                    <summary> 6.2.4.8 Find sum of modulo K of first N natural number
</summary>
                </details>      
                <details>
                    <summary> 6.2.4.9 How to compute mod of a big number?</summary>
                </details>      
                <details>
                    <summary> 6.2.4.10 Modulo 10^9+7 (1000000007)</summary>
                </details>   
                <details>
                    <summary> 6.2.4.11 Find (a^b)%m where ‘a’ is very large
</summary>
                </details> 
                <details>
                    <summary> 6.2.4.12 Number of solutions to Modular Equations
</summary>
                </details>      
                <details>
                    <summary> 6.2.4.13 Recursive sum of digits of a number formed by repeated appends
</summary>
                </details>      
                <details>
                    <summary> 6.2.4.14 Find value of y mod (2 raised to power x)
</summary>
                </details>      
                <details>
                    <summary> 6.2.4.15 Modular multiplicative inverse from 1 to n
</summary>
                </details>      
                <details>
                    <summary> 6.2.4.16 Find unit digit of x raised to power y
</summary>
                </details>      
                <details>
                    <summary> 6.2.4.17 Given two numbers a and b find all x such that a % x = b
</summary>
                </details>      
                <details>
                    <summary> 6.2.4.18 Exponential Squaring (Fast Modulo Multiplication)
</summary>
                </details>      
                <details>
                    <summary> 6.2.4.19 Trick for modular division ( (x1 * x2 …. xn) / b ) mod (m)
</summary>
                </details>      
                <details>
                    <summary> 6.2.4.20 Count number of solutions of x^2 = 1 (mod p) in given range
</summary>
                </details>   
                <details>
                    <summary> 6.2.4.21 Breaking an Integer to get Maximum Product
</summary>
                </details> 
                <details>
                    <summary> 6.2.4......100</summary>
                </details>      
            </details>      
            <details>
                <summary>6.2.5 Catalan numbers</summary>
                <details>
                    <summary> 6.2.5.1 Catalan numbers
</summary>
                </details> 
                <details>
                    <summary> 6.2.5.2 Applications of Catalan Numbers
</summary>
                </details>      
                <details>
                    <summary> 6.2.5.3 Program for nth Catalan Number
</summary>
                </details>      
                <details>
                    <summary> 6.2.5.4 Dyck path
</summary>
                </details>      
                <details>
                    <summary> 6.2.5.5 Non-crossing lines to connect points in a circle
</summary>
                </details>      
                <details>
                    <summary> 6.2.5.6 Succinct Encoding of Binary Tree
</summary>
                </details>      
                <details>
                    <summary> 6.2.5.7 Find the number of valid parentheses expressions of given length
</summary>
                </details>      
                <details>
                    <summary> 6.2.5.....100</summary>
                </details>                   
            </details>      
            <details>
                <summary>6.2.6 Eular Totient Function</summary>
                <details>
                    <summary> 6.2.6.1 Euler’s Totient Function
</summary>
                </details> 
                <details>
                    <summary> 6.2.6.2 Optimized Euler Totient Function for Multiple Evaluations
</summary>
                </details>      
                <details>
                    <summary> 6.2.6.3 Euler’s Totient function for all numbers smaller than or equal to n
</summary>
                </details>      
                <details>
                    <summary> 6.2.6.4 Primitive root of a prime number n modulo n
</summary>
                </details>      
                <details>
                    <summary> 6.2.6.5 Euler’s Four Square Identity
</summary>
                </details>                
            </details>      
            <details>
                <summary> 6.2.6.6.2.7 nCr's</summary>
                <details>
                    <summary> 6.2.6.1 Binomial Coefficient
</summary>
                </details> 
                <details>
                    <summary> 6.2.6.2 Compute nCr%p (DP || Lucas thm || Fermat Little thm)</summary>
                </details>      
                <details>
                    <summary> 6.2.6.3 Probability for three randomly chosen numbers to be in AP
</summary>
                </details>      
                <details>
                    <summary> 6.2.6.4 Rencontres Number (Counting partial derangements)
</summary>
                </details>      
                <details>
                    <summary> 6.2.6.5 Sum of squares of binomial coefficients
</summary>
                </details>      
                <details>
                    <summary> 6.2.6.6 Find sum of even index binomial coefficients
</summary>
                </details>      
                <details>
                    <summary> 6.2.6.7 Maximum binomial coefficient term value
</summary>
                </details>      
                <details>
                    <summary> 6.2.6.8 Program for Binomial Coefficients table
</summary>
                </details>      
                <details>
                    <summary> 6.2.6.9 Sum of Binomial coefficients
</summary>
                </details>      
                <details>
                    <summary> 6.2.6.10 Space and time efficient Binomial Coefficient
</summary>
                </details> 
                <details>
                    <summary> 6.2.6.11 Count ways to express even number ‘n’ as sum of even integers
</summary>
                </details> 
                <details>
                    <summary> 6.2.6.12 Maximum points of intersection n circles
</summary>
                </details>      
                <details>
                    <summary> 6.2.6.13 Horner’s Method for Polynomial Evaluation
</summary>
                </details>      
                <details>
                    <summary> 6.2.6.14 Print all possible combinations of r elements in a given array of size n
</summary>
                </details>      
                <details>
                    <summary> 6.2.6.15 Program to find the Volume of a Triangular Prism
</summary>
                </details>      
                <details>
                    <summary> 6.2.6.16 Significance of Pascal’s Identity
</summary>
                </details>      
                <details>
                    <summary>17 Sum of all elements up to Nth row in a Pascal triangle
</summary>
                </details>      
            </details>      
            <details>
                <summary>6.2.8 Chinese Reminder thm</summary>
                <details>
                    <summary> 6.2.8.1 Intro</summary>
                </details> 
                <details>
                    <summary> 6.2.8.2 Inverse Modulo based Implementation</summary>
                </details>      
                <details>
                    <summary> 6.2.8.3 Cyclic Redundancy Check and Modulo-2 Division
</summary>
                </details>      
                <details>
                    <summary> 6.2.8.4 Using Chinese Remainder Theorem to Combine Modular equations
</summary>
                </details>                 
            </details>      
            <details>
                <summary> 6.2.8.6.2.9 Factorial</summary>
                <details>
                    <summary> 6.2.8.1 basic</summary>
                </details> 
                <details>
                    <summary> 6.2.8.2 Legendre’s formula (Given p and n, find the largest x such that p^x divides n!)
</summary>
                </details>      
                <details>
                    <summary> 6.2.8.3 Sum of divisors of factorial of a number
</summary>
                </details>      
                <details>
                    <summary> 6.2.8.4 Count Divisors of Factorial
</summary>
                </details>      
                <details>
                    <summary> 6.2.8.5 Compute n! under modulo p
</summary>
                </details>      
                <details>
                    <summary> 6.2.8.6 Double factorial
</summary>
                </details>      
                <details>
                    <summary> 6.2.8.7 Count trailing zeroes in factorial of a number
</summary>
                </details>      
                <details>
                    <summary> 6.2.8.8 Factorial of a large number
</summary>
                </details>      
                <details>
                    <summary> 6.2.8.9 Primorial of a number
</summary>
                </details>      
                <details>
                    <summary> 6.2.8.10 Find the first natural number whose factorial is divisible by x
</summary>
                </details>   
                <details>
                    <summary> 6.2.8.11 Count numbers formed by given two digit with sum having given digits
</summary>
                </details> 
                <details>
                    <summary> 6.2.8.12 Generate a list of n consecutive composite numbers</summary>
                </details>      
                <details>
                    <summary> 6.2.8.13 Expressing factorial n as sum of consecutive numbers
</summary>
                </details>      
                <details>
                    <summary> 6.2.8.14 Find maximum power of a number that divides a factorial
</summary>
                </details>      
                <details>
                    <summary> 6.2.8.15 Trailing number of 0s in product of two factorials
</summary>
                </details>      
                <details>
                    <summary> 6.2.8.16 Print factorials of a range in right aligned format
</summary>
                </details>      
                <details>
                    <summary> 6.2.8.17 GCD of factorials of two numbers
</summary>
                </details>      
                <details>
                    <summary> 6.2.8.18 Largest power of k in n! (factorial) where k may not be prime
</summary>
                </details>      
                <details>
                    <summary> 6.2.8.19 One line function for factorial of a number
</summary>
                </details>      
                <details>
                    <summary> 6.2.8.20 Find all factorial numbers less than or equal to n
</summary>
                </details>    
                <details>
                    <summary> 6.2.8.21 Find the last digit when factorial of A divides factorial of B
</summary>
                </details> 
                <details>
                    <summary> 6.2.8.22 An interesting solution to get all prime numbers smaller than n
</summary>
                </details>      
                <details>
                    <summary> 6.2.8.23 Calculating Factorials using Stirling Approximation
</summary>
                </details>      
                <details>
                    <summary> 6.2.8.24 Check if a number is a Krishnamurthy Number or not
</summary>
                </details>      
                <details>
                    <summary> 6.2.8.25 Count digits in a factorial(both sets)</summary>
                </details>      
                <details>
                    <summary> 6.2.8.26 No of Factors of n!</summary>
                </details>      
                <details>
                    <summary> 6.2.8.....100</summary>
                </details>                                  
            </details>      
            <details>
                <summary>6.2.10 Primes</summary>
                <details>
                    <summary> 6.2.10.1 Basic</summary>
                </details> 
                <details>
                    <summary> 6.2.10.2 Special prime numbers
</summary>
                </details>      
                <details>
                    <summary> 6.2.10.3 Prime numbers and Fibonacci
</summary>
                </details>      
                <details>
                    <summary> 6.2.10.4 Left-Truncatable Prime
</summary>
                </details>      
                <details>
                    <summary> 6.2.10.5 Mersenne Prime
</summary>
                </details>      
                <details>
                    <summary> 6.2.10.6 Super Prime
</summary>
                </details>      
                <details>
                    <summary> 6.2.10.7 Palindromic Primes
</summary>
                </details>      
                <details>
                    <summary> 6.2.10.8 Prime Triplet
</summary>
                </details>      
                <details>
                    <summary> 6.2.10.9 Hardy-Ramanujan Theorem
</summary>
                </details>      
                <details>
                    <summary> 6.2.10.10 Rosser’s Theorem
</summary>
                </details> 
                <details>
                    <summary> 6.2.10.11 Fermat’s little theorem
</summary>
                </details> 
                <details>
                    <summary> 6.2.10.12 Composite Number
</summary>
                </details>      
                <details>
                    <summary> 6.2.10.13 Euclid Euler Theorem
</summary>
                </details>      
                <details>
                    <summary> 6.2.10.14 Euclid’s Lemma
</summary>
                </details>      
                <details>
                    <summary> 6.2.10.15 Primality Test(school thm| Fermat's thm | Miller-Rabin | Solovay-Strassen | Lucas-Lehmer|Vantieghems | AKS)</summary>
                </details>      
                <details>
                    <summary> 6.2.10.16 2^x + 1 and Prime</summary>
                </details>      
                <details>
                    <summary> 6.2.10.17 Recursive program for prime number
</summary>
                </details>      
                <details>
                    <summary> 6.2.10.18 Circular primes less than n
</summary>
                </details>      
            </details>  
            <details>
                <summary>6.2.11 Set theory</summary>
                <details>
                    <summary> 6.2.11.1 Minimize the absolute difference of sum of two subsets
</summary>
                </details> 
                <details>
                    <summary> 6.2.11.2 Sum of all subsets of a set formed by first n natural numbers
</summary>
                </details>      
                <details>
                    <summary> 6.2.11.3 Sum of average of all subsets
</summary>
                </details>      
                <details>
                    <summary> 6.2.11.4 Bell Numbers (Number of ways to Partition a Set)
</summary>
                </details>      
                <details>
                    <summary> 6.2.11.5 Power Set
</summary>
                </details>                    
            </details> 
            <details>
                <summary>6.2.12 Sieve</summary>
                <details>
                    <summary> 6.2.12.1 Sieve of Eratosthenes
</summary>
                </details> 
                <details>
                    <summary> 6.2.12.2 Segmented Sieve</summary>
                </details>      
                <details>
                    <summary> 6.2.12.3 Sieve of Atkin
</summary>
                </details>      
                <details>
                    <summary> 6.2.12.4 Sieve of Sundaram to print all primes smaller than n
</summary>
                </details>      
                <details>
                    <summary> 6.2.12.5 Sieve of Eratosthenes in 0(n) time complexity
</summary>
                </details>      
                <details>
                    <summary> 6.2.12.6 Arithmetic Number
</summary>
                </details>      
            </details>      
            <details>
                <summary>6.2.13 Divisibility</summary>
                <details>
                    <summary> 6.2.13.1 Check if a large number is divisible by 3 or not</summary>
                </details> 
                <details>
                    <summary> 6.2.13.2 Number of digits to be removed to make a number divisible by 3</summary>
                </details>      
                <details>
                    <summary> 6.2.13.3 Find whether a given integer is a power of 3 or not
</summary>
                </details>      
                <details>
                    <summary> 6.2.13.4 Check if a large number is divisible by 4 or not
</summary>
                </details>      
                <details>
                    <summary> 6.2.13.5 Count rotations divisible by 4
</summary>
                </details>      
                <details>
                    <summary> 6.2.13.6 Number of substrings divisible by 4 in a string of integers
</summary>
                </details>      
                <details>
                    <summary> 6.2.13.7 Check if a large number is divisible by 6 or not
</summary>
                </details>      
                <details>
                    <summary> 6.2.13.8 Prove that atleast one of three consecutive even numbers is divisible by 6
</summary>
                </details>      
                <details>
                    <summary> 6.2.13.9 Sum of all numbers divisible by 6 in a given range
</summary>
                </details>      
                <details>
                    <summary> 6.2.13.10 Number of substrings divisible by 6 in a string of integers
</summary>
                </details>   
                <details>
                    <summary> 6.2.13.11 Print digit’s position to be removed to make a number divisible by 6
</summary>
                </details> 
                <details>
                    <summary> 6.2.13.12 Check divisibility by 7
</summary>
                </details>      
                <details>
                    <summary> 6.2.13.13 To check whether a large number is divisible by 7
</summary>
                </details>      
                <details>
                    <summary> 6.2.13.14 Remainder with 7 for large numbers
</summary>
                </details>      
                <details>
                    <summary> 6.2.13.15 Count rotations divisible by 8
</summary>
                </details>      
                <details>
                    <summary>.....100</summary>
                </details>      
            </details>      
            <details>
                <summary>6.2.14 Algebra</summary>
                <details>
                    <summary> 6.2.14.1 Find x and y satisfying ax + by = n
</summary>
                </details> 
                <details>
                    <summary> 6.2.14.2 Calculate the Discriminant Value
</summary>
                </details>      
                <details>
                    <summary> 6.2.14.3 Program for dot product and cross product of two vectors
</summary>
                </details>      
                <details>
                    <summary> 6.2.14.4 Iterated Logarithm log*(n)
</summary>
                </details>      
                <details>
                    <summary> 6.2.14.5 Program to find correlation coefficient
</summary>
                </details>      
                <details>
                    <summary> 6.2.14.6 Program for Muller Method
</summary>
                </details>      
                <details>
                    <summary> 6.2.14.7 Number of sextuplets (or six values) that satisfy an equation
</summary>
                </details>      
                <details>
                    <summary> 6.2.14.8 Complete the sequence generated by a polynomial
</summary>
                </details>      
                <details>
                    <summary> 6.2.14.9 Find the minimum value of m that satisfies ax + by = m and all values after m also satisfy
</summary>
                </details>      
                <details>
                    <summary> 6.2.14.10 Roots of Unity
</summary>
                </details>  
                <details>
                    <summary> 6.2.14.11 Number of non-negative integral solutions of a + b + c = n
</summary>
                </details> 
                <details>
                    <summary> 6.2.14.12 Roots of quadratic equation
</summary>
                </details>      
                <details>
                    <summary> 6.2.14.13 Find smallest values of x and y such that ax – by = 0
</summary>
                </details>      
                <details>
                    <summary> 6.2.14.14 Generate Pythagorean Triplets
</summary>
                </details>      
                <details>
                    <summary> 6.2.14.15 Square root of an integer
</summary>
                </details>      
                <details>
                    <summary> 6.2.14.16 Find number of solutions of a linear equation of n variables
</summary>
                </details>      
                <details>
                    <summary> 6.2.14.17 Write an iterative O(Log y) function for pow(x, y)
</summary>
                </details>      
                <details>
                    <summary> 6.2.14.18 Program to add two polynomials
</summary>
                </details>      
                <details>
                    <summary> 6.2.14.19 Multiply two polynomials
</summary>
                </details>      
                <details>
                    <summary> 6.2.14.20 Efficient program to calculate e^x
</summary>
                </details>                  
            </details>      
            <details>
                <summary>6.2.15 Number Systems conversions</summary>
                <details>
                    <summary> 6.2.15.1 Exponential notation of a decimal number
</summary>
                </details> 
                <details>
                    <summary> 6.2.15.2 Check if a number is power of k using base changing method
</summary>
                </details>      
                <details>
                    <summary> 6.2.15.3 Check if number is palindrome or not in Octal
</summary>
                </details>      
                <details>
                    <summary> 6.2.15.4 Check if a number N starts with 1 in b-base
</summary>
                </details>      
                <details>
                    <summary> 6.2.15.5 Convert a binary number to hexadecimal number
</summary>
                </details>      
                <details>
                    <summary> 6.2.15.6 Program for decimal to hexadecimal conversion
</summary>
                </details>      
                <details>
                    <summary> 6.2.15.7 Converting a Real Number (between 0 and 1) to Binary String
</summary>
                </details>      
                <details>
                    <summary> 6.2.15.8 Count of Binary Digit numbers smaller than N
</summary>
                </details>      
                <details>
                    <summary> 6.2.15.9 Write a program to add two numbers in base 14
</summary>
                </details>      
                <details>
                    <summary> 6.2.15.10 Convert from any base to decimal and vice versa
</summary>
                </details>                
            </details>      
            <details>
                <summary>6.2.16 Misc</summary>
                <details>
                    <summary> 6.2.16.1 Tau</summary>
                </details> 
                <details>
                    <summary> 6.2.16.2 Interquartile Range (IQR)
</summary>
                </details>      
                <details>
                    <summary> 6.2.16.3 Simulated Annealing
</summary>
                </details>      
                <details>
                    <summary> 6.2.16.4 Break the number into three parts
</summary>
                </details>      
                <details>
                    <summary> 6.2.16.5 Pseudo Random Number Generator (PRNG)
</summary>
                </details>      
                <details>
                    <summary> 6.2.16.6 Square root of a number using log
</summary>
                </details>      
                <details>
                    <summary> 6.2.16.7 Find ways an Integer can be expressed as sum of n-th power of unique natural numbers
</summary>
                </details>      
                <details>
                    <summary> 6.2.16.8 N’th palindrome of K digits
</summary>
                </details>      
                <details>
                    <summary> 6.2.16.9 N-th root of a number
</summary>
                </details>      
                <details>
                    <summary> 6.2.16.10 Find the minimum difference between Shifted tables of two numbers
</summary>
                </details>      
                <details>
                    <summary> 6.2.16.11 Check if a number is a power of another number
</summary>
                </details> 
                <details>
                    <summary> 6.2.16.12 Check perfect square using addition/subtraction
</summary>
                </details>      
                <details>
                    <summary> 6.2.16.13 Number of perfect squares between two given numbers
</summary>
                </details>      
                <details>
                    <summary> 6.2.16.14 Count Derangements (Permutation such that no element appears in its original position)
</summary>
                </details>      
                <details>
                    <summary> 6.2.16.15 Program to evaluate simple expressions
</summary>
                </details>      
                <details>
                    <summary> 6.2.16.16 Generate all unique partitions of an integer
</summary>
                </details>      
                <details>
                    <summary> 6.2.16.17 Program to convert a given number to words
</summary>
                </details>      
                <details>
                    <summary> 6.2.16.18 Make a fair coin from a biased coin
</summary>
                </details>      
                <details>
                    <summary> 6.2.16.19 Generate integer from 1 to 7 with equal probability
</summary>
                </details>      
                <details>
                    <summary> 6.2.16.20 Implement *, – and / operations using only + arithmetic operator
</summary>
                </details>                      
            </details>      
        </details>           
    </details>      
    <details>
        <summary>6.Div & Conq</summary>
        ----@TOBE: find non-repeating probs
    </details>    
</details>     
<!-- demo -->
<!-- 
<details>
    <summary></summary>
</details> 
<details>
    <summary></summary>
</details>      
<details>
    <summary></summary>
</details>      
<details>
    <summary></summary>
</details>      
<details>
    <summary></summary>
</details>      
<details>
    <summary></summary>
</details>      
<details>
    <summary></summary>
</details>      
<details>
    <summary></summary>
</details>      
<details>
    <summary></summary>
</details>      
<details>
    <summary></summary>
</details>          
  -->
