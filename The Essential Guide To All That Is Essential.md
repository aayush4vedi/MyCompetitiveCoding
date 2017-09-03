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
  ### Some cool links:
      * [everythingOnDP-codeforces](http://codeforces.com/blog/entry/43256)
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
 
 *   **[Maximum Sum Rectangular Submatrix in Matrix ](https://www.youtube.com/watch?v=yCQN096CwWM&index=15&list=PLrmLmBdmIlpsHaNTPP_jHHDx_os9ItYXr)**
       Uses [kadane's algorithm](http://www.geeksforgeeks.org/largest-sum-contiguous-subarray/) for 2D array.
 
 *
 *
 *
 *
 *
 ### Problems:
 * **Standard Problems** should be really familiar with these types
  
     - [ ] [Creature Training](https://community.topcoder.com/stat?c=problem_statement&pm=8570&rd=12012&rm=269199&cr=7581406)
          -[editorial](https://community.topcoder.com/tc?module=Static&d1=match_editorials&d2=tco08rd2)
     -  [ ] []
 * **State Space Reduction**
     - [ ]
 
 
 
 
  

* ## Strings
  
