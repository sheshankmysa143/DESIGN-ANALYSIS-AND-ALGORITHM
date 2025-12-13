//CH.SC.U4CSE24125
//SHESHANK

#include <stdio.h>
#include <stdlib.h>

void bucketSort(float arr[], int n)
{
    int i, j;
    float *buckets[n];
    int count[n];

    for (i = 0; i < n; i++)
    {
        buckets[i] = (float *)malloc(n * sizeof(float));
        count[i] = 0;
    }

    for (i = 0; i < n; i++)
    {
        int index = n * arr[i];
        buckets[index][count[index]++] = arr[i];
    }

    for (i = 0; i < n; i++)
    {
        for (j = 1; j < count[i]; j++)
        {
            float key = buckets[i][j];
            int k = j - 1;
            while (k >= 0 && buckets[i][k] > key)
            {
                buckets[i][k + 1] = buckets[i][k];
                k--;
            }
            buckets[i][k + 1] = key;
        }
    }

    int idx = 0;
    for (i = 0; i < n; i++)
        for (j = 0; j < count[i]; j++)
            arr[idx++] = buckets[i][j];

    for (i = 0; i < n; i++)
        free(buckets[i]);
}

int main()
{
    float arr[] = {0.42, 0.32, 0.23, 0.52, 0.25, 0.47, 0.51};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i;

    bucketSort(arr, n);

    printf("Sorted array:\n");
    for (i = 0; i < n; i++)
        printf("%.2f ", arr[i]);

    return 0;
}
