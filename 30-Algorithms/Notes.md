# Big O Notation

- Means "in the order of", so it is a ball-partk. Linear constants (e.g. + 10) / constant factor (e.g. 2 in 2n) will be omitted.
- O: theoritcal maximum tries needed
- Ω: theortical minimum tries needed
- Θ: meaning the O and Ω is the same regardless (you can't get lucky)

- Examples:
  - Linear Search: O(n), Ω(1)
  - Binary search: O(log n), Ω(1)
  - Counting attendence by counting everyone once: Θ(n)

# Sorting

- Selection sort:

  - Pick the first one, compare with everything in the array, and remember the smallest one
  - Then move the smallest to the start
  - Repeat the above with the remaining unsorted array.
  - Θ(n^2) (n x n-1 x .... x 1; no shortcuts, have to compare all)

- Bubble Sort

  - Compare 1st vs 2nd
  - if 1st one is larger, swap the two, otherwise keep them unchanged
  - Repeat this with the next item until reaching the end; at the end, the largest one will "bubble up" to the top
  - Repeat the above with the remaining unsorted array
  - O(n^2) (n x n-1 x ... x 1), Ω(n) (**If** luckily no swaps are made after comparing everything item once, we instantly know that it is already sorted correctly)

- Merge sort

  - divide into smaller arrays until one item left in each array, then _merge_ two arrays by comparing from the start of both
  - Θ(n log n) (n comparisons at each divide level, totally (log n) divide levels; No shortcuts)

- Visualisation: https://www.cs.usfca.edu/~galles/visualization/ComparisonSort.html
