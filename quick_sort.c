
#include <stdio.h>

struct Package {
    int id;
    int weight;
};

int comparisons = 0;

void display(struct Package a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("P%d(%d) ", a[i].id, a[i].weight);
    printf("\n");
}

void quickSort(struct Package a[], int low, int high)
{
    struct Package temp[20];
    struct Package pivot;
    int i, k, pos;

    if (low >= high)
        return;

    pivot = a[high];
    k = low;

    // Stable partition: smaller or equal weights
    for (i = low; i < high; i++) {
        comparisons++;

        if (a[i].weight <= pivot.weight)
            temp[k++] = a[i];
    }

    pos = k;
    temp[k++] = pivot;

    // Stable partition: greater weights
    for (i = low; i < high; i++) {
        if (a[i].weight > pivot.weight)
            temp[k++] = a[i];
    }

    // Copy partition back to original array
    for (i = low; i <= high; i++)
        a[i] = temp[i];

    printf("After partition (pivot %d): ", pivot.weight);
    display(a + low, high - low + 1);

    quickSort(a, low, pos - 1);
    quickSort(a, pos + 1, high);
}

int main()
{
    struct Package a[8] = {
        {1,20}, {2,15}, {3,20}, {4,10},
        {5,15}, {6,20}, {7,25}, {8,10}
    };

    printf("Original packages:\n");
    display(a, 8);

    quickSort(a, 0, 7);

    printf("\nSorted packages using Quick Sort:\n");
    display(a, 8);

    printf("Number of comparisons = %d\n", comparisons);

    return 0;
}
