
# DSA Assignment 2 – Question 10

## Sorting Package Weights Using Merge Sort and Quick Sort

### 1. Aim

To implement Merge Sort and Quick Sort in C to sort package weights in ascending order and compare their performance, time complexity, and space complexity.

### 2. Input Data

The package weights are:

20, 15, 20, 10, 15, 20, 25, 10

Number of packages: 8

### 3. Algorithms Implemented

- Merge Sort
- Quick Sort

Both algorithms are implemented in C. The programs are available in:

- `merge_sort.c`
- `quick_sort.c`

### 4. Input and Output Files

- `input.txt` – Input data used for execution.
- `merge_sort_output.txt` – Output of Merge Sort.
- `quick_sort_output.txt` – Output of Quick Sort.

### 5. Complexity Analysis

| Algorithm | Best Case | Average Case | Worst Case | Auxiliary Space |
|---|---|---|---|---|
| Merge Sort | O(n log n) | O(n log n) | O(n log n) | O(n) |
| Quick Sort | O(n log n) | O(n log n) | O(n²) | O(n) for stable implementation |

### 6. Performance Comparison

For the given input:

- Merge Sort performs 15 comparisons.
- Quick Sort performs 20 comparisons.

The comparison results and observations are available in `comparison.txt`.

Detailed complexity analysis is available in `time_complexity.txt`.

### 7. Conclusion

Both algorithms successfully sort the package weights in ascending order.

Merge Sort guarantees O(n log n) time complexity, while Quick Sort has O(n log n) average-case time complexity and O(n²) worst-case time complexity.

Merge Sort is suitable when guaranteed performance and stability are required. Quick Sort is efficient on average.

The final conclusion is available in `conclusion.txt`.
