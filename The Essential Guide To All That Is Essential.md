# Topics and Resources #

* ## Computational Geometry
  * **Orientation**
     * [To see if 2 lines intersect or not.](http://www.geeksforgeeks.org/check-if-two-given-line-segments-intersect/)Find all the 4 slopes  and check of opposite orientation of both the pairs.
  * **Convex Hull**
     * [Jarvis Algorithm](http://www.geeksforgeeks.org/convex-hull-set-1-jarviss-algorithm-or-wrapping/).
       1. Pick the leftmost point *P*
       2. Repeat until *P* is reached:
          1.Next point *Q* is such that pair *(p,q,r)* is in anticlock [orientataion](http://www.geeksforgeeks.org/orientation-3-ordered-points/).
          2.next[*P*] = *Q*
          3. *P* = *Q*
      Time Complexity: **n^2**
    * [Graham's Algorithm](http://www.geeksforgeeks.org/convex-hull-set-2-graham-scan/). Time Complexity: **nlogn**
       1. Initialize bottom-most(leftmost, if multiple) point *P*.
       2. Sort all points w.r.t *P* to find the closed path.
       3. Move on the path and pick a point if counter-clock rotation found.
       
  
