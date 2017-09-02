# Topics and Resources #

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
 * **[0-1 Knapsack problem](http://www.geeksforgeeks.org/knapsack-problem/)**
     short [video](https://www.youtube.com/watch?v=8LusJS5-AGo&list=PLrmLmBdmIlpsHaNTPP_jHHDx_os9ItYXr) to understand how to form a DP table.Implementation:
    ```cpp
    int knapsack(int n, int wmax, int val[], int wt[]){
       if(n==0 || wmax ==0){
       return 0;
       }
       else if(wt[n-1] > wmax) return knapsack(n-1, wmax, val, wt);
       else return max(val[n-1]+ knapsack(n-1, wmax- wt[n-1],val, wt), knapsack(n-1, wmax,val, wt));
    }
    ```
 


* ## Strings
  
