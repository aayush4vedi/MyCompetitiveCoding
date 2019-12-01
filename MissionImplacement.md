<p align="center">

<br>
<img src="" data-canonical-src="MiP" />
<br>
<br>
<a href="https://github.com/aayush4vedi/The-Hitchhikers-Guide-to-the-Full-Stack-Developer#i-basic-tools"><img src="https://img.shields.io/badge/Notes-f39f37" alt="Notes"></a>
<a href="https://github.com/aayush4vedi/The-Hitchhikers-Guide-to-the-Full-Stack-Developer#ii-front-end"><img src="https://img.shields.io/badge/Linked List-8FD400" alt="Linked List"></a>
<a href="https://github.com/aayush4vedi/The-Hitchhikers-Guide-to-the-Full-Stack-Developer#iii--back-end"><img src="https://img.shields.io/badge/Trees -FF5050" alt="Trees"></a>
<a href="https://github.com/aayush4vedi/The-Hitchhikers-Guide-to-the-Full-Stack-Developer#iv-database"><img src="https://img.shields.io/badge/Stack&Queue-0081AB" alt="Stack&Queue"></a>
<a href="https://github.com/aayush4vedi/The-Hitchhikers-Guide-to-the-Full-Stack-Developer#v-rest"><img src="https://img.shields.io/badge/Search-FD5240" alt="Search"></a>
<a href="https://github.com/aayush4vedi/The-Hitchhikers-Guide-to-the-Full-Stack-Developer#v-rest"><img src="https://img.shields.io/badge/Sort-614051" alt="Sort"></a>
<a href="https://github.com/aayush4vedi/The-Hitchhikers-Guide-to-the-Full-Stack-Developer#v-rest"><img src="https://img.shields.io/badge/BackTrack-253529" alt="BackTrack"></a>
<a href="https://github.com/aayush4vedi/The-Hitchhikers-Guide-to-the-Full-Stack-Developer#v-rest"><img src="https://img.shields.io/badge/Greedy-4997D0" alt="Greedy"></a>
<a href="https://github.com/aayush4vedi/The-Hitchhikers-Guide-to-the-Full-Stack-Developer#5-task-automation"><img src="https://img.shields.io/badge/DP-719B6A" alt="DP"></a>
<a href="https://github.com/aayush4vedi/The-Hitchhikers-Guide-to-the-Full-Stack-Developer#v-rest"><img src="https://img.shields.io/badge/Graph-4570E6" alt="Graph"></a>
<a href="https://github.com/aayush4vedi/The-Hitchhikers-Guide-to-the-Full-Stack-Developer#iv-database"><img src="https://img.shields.io/badge/Database-0081AB" alt=Array"></a>
<a href="https://github.com/aayush4vedi/The-Hitchhikers-Guide-to-the-Full-Stack-Developer#v-rest"><img src="https://img.shields.io/badge/String-FD5240" alt="String"></a>
<br>
<br>
</p>

# Notes:
- Pointers:
    - `&` => *A(nd)*ddress of
    - `*` => Value@
    >It's easier to give someone your address to find you than a copy of your house.
- Masters's Theorem:<br>
    `T(n) = aT(n/b) + f(n)` , where f(n) = &theta;(n<sup>c</sup>)
    <br>
    (i)     `c` < log<sub>b</sub>a    => `T(n)` = &theta;(n<sup>log<sub>b</sub>a</sup>)    <br>
    (ii)    .. = ........   => `T(n)` = &theta;(`n`<sup>c</sup>log`n`)     <br>
    (iii)   .. = ........   => `T(n)` = &theta;(f`(n)`)

# 1.Linked List:
## (1.0) General
- [ll vs arr](https://www.geeksforgeeks.org/programmers-approach-looking-array-vs-linked-list/) - a programmers' approach
## (1.1) Single LL
- [Insertion](https://www.geeksforgeeks.org/linked-list-set-2-inserting-a-node/)
    - At begin
    - At end
    - After given node
- [Delete a node with value K](https://www.geeksforgeeks.org/delete-a-linked-list-node-at-a-given-position/)
- `*` [Delete a LL](https://www.geeksforgeeks.org/write-a-function-to-delete-a-linked-list/)
- [Nth node from end](https://www.geeksforgeeks.org/write-a-function-to-get-nth-node-in-a-linked-list/)
- Loop:
    - [Detect](https://www.geeksforgeeks.org/detect-loop-in-a-linked-list/)
    - start of loop
    - why? :: v<sub>hair</sub> = v<sub>tort</sub>  => `x = z`
    - [length](https://www.geeksforgeeks.org/find-length-of-loop-in-linked-list/)
- Reverse LL:
    - [iterative](https://www.geeksforgeeks.org/reverse-a-linked-list/)
    - [recursive](https://www.geeksforgeeks.org/recursively-reversing-a-linked-list-a-simple-implementation/) => Don't forget `node->next = NULL;` for every node
    - [reverse in K size](https://www.geeksforgeeks.org/reverse-a-list-in-groups-of-given-size/)
- `*` [Check Palindrome](https://www.geeksforgeeks.org/function-to-check-if-a-singly-linked-list-is-palindrome/)
- [Remove duplicates from *sorted* ll](https://www.geeksforgeeks.org/remove-duplicates-from-a-sorted-linked-list/)  => Don't forget to free the memory too
- [Remove all repeating values](https://www.geeksforgeeks.org/remove-occurrences-duplicates-sorted-linked-list/)
- Uninon-Intersection:
    - [Union](https://www.geeksforgeeks.org/union-and-intersection-of-two-linked-lists/)
    - [Intersection](https://www.geeksforgeeks.org/intersection-of-two-sorted-linked-lists/)
    - [Get intersection point](https://www.geeksforgeeks.org/write-a-function-to-get-the-intersection-point-of-two-linked-lists/)
- Add 1 to LL:
    - [I](https://www.geeksforgeeks.org/add-1-number-represented-linked-list/)
    - II
- Add 2 numbers:
    - [I](https://www.geeksforgeeks.org/add-two-numbers-represented-by-linked-lists/)
    - II
- [Segregate even & odd valued nodes in ll](https://www.geeksforgeeks.org/segregate-even-and-odd-elements-in-a-linked-list/)
- [Alternate Odd & Even valued nodes](https://www.geeksforgeeks.org/segregate-even-and-odd-elements-in-a-linked-list/):
    - Segregate(upar to dekko)
    - Split
    - Merge
- [Rotate ll anti-clock by `k` nodes](https://www.geeksforgeeks.org/rotate-a-linked-list/)
- [Rearrange in Zig-Zag fashion](https://www.geeksforgeeks.org/linked-list-in-zig-zag-fashion/) :: if not-swap adjacents, else-continue
- [Clone LL with next & random pointer](https://www.geeksforgeeks.org/a-linked-list-with-next-and-arbit-pointer/)
- `*` Sorting:
    - [MergeSort](https://www.geeksforgeeks.org/merge-sort-for-linked-list/)  => [Flatten ll](https://www.geeksforgeeks.org/flattening-a-linked-list/)
    - [QuickSort](https://www.geeksforgeeks.org/quicksort-on-singly-linked-list/)
    - [Why Quick Sort preferred for Arrays and Merge Sort for Linked Lists?](https://www.geeksforgeeks.org/why-quick-sort-preferred-for-arrays-and-merge-sort-for-linked-lists/)
        - => ll: merge operation of merge sort can be implemented in O(1)
        - => arr: quicksort is O(1) space & mergesort is O(n) space
## (1.2) * DLL
- [Struct & Insert](https://www.geeksforgeeks.org/doubly-linked-list/)
- [Delete](https://www.geeksforgeeks.org/delete-a-node-in-a-doubly-linked-list/)
- [Reverse](https://www.geeksforgeeks.org/reverse-a-doubly-linked-list/)
- [XOR LL](https://www.geeksforgeeks.org/memory-efficient-doubly-linked-list/) - A memory efficient DLL
