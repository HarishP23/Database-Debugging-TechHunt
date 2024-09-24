// COUNT INVERSIONS:
/*
Given an array of integers. Find the Inversion Count in the array.  Two elements arr[i] and arr[j] form an inversion if arr[i] > arr[j] and i < j.

Inversion Count: For an array, inversion count indicates how far (or close) the array is from being sorted. If the array is already sorted then the inversion count is 0.
If an array is sorted in the reverse order then the inversion count is the maximum. */

// C++:

#include <bits/stdc++.h>
using namespace std;

// This function merges two sorted subarrays
// arr[l...m] and arr[m+1 .. r] and also counts
// inversions in the whole subarray arr[l..r]
long long countAndMerge(vector<long long> &arr, int l, int m, int r)
{
    // Counts in two subarrays
    int n1 = m - l + 1, n2 = r - m;

    // Set up two vectors for left and right halves
    vector<long long> left(n1), right(n2);
    for (int i = 0; i < n1; i++)
        left[i] = arr[i + l];
    for (int j = 0; j < n2; j++)
        right[j] = arr[m + 1 + j];

    // Initialize inversion count (or result)
    // and merge two halves
    long long res = 0;
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2)
    {

        // No increment in inversion count
        // if left[] has a smaller or equal element
        if (left[i] <= right[j])
        {
            arr[k++] = left[i++];
        }
        // If right is smaller, then it
        // is smaller than n1-i elements
        // because left[] is sorted
        else
        {
            arr[k++] = right[j++];
            res += (n1 - i);
        }
    }

    // Merge remaining elements
    while (i < n1)
        arr[k++] = left[i++];
    while (j < n2)
        arr[k++] = right[j++];

    return res;
}

// Function to count inversions in the array
long long countInv(vector<long long> &arr, int l, int r)
{
    long long res = 0;
    if (l < r)
    {
        int m = (r + l) / 2;

        // Recursively count inversions
        // in the left and right halves
        res += countInv(arr, l, m);
        res += countInv(arr, m + 1, r);

        // Count inversions such that greater
        // element is in the left half and
        // smaller in the right half
        res += countAndMerge(arr, l, m, r);
    }
    return res;
}

int main()
{
    vector<long long> arr = {4, 3, 2, 1};
    int n = arr.size();
    cout << countInv(arr, 0, n - 1);
    return 0;
}

// C:

#include <stdio.h>
#include <stdlib.h>

long long count = 0;

// Merge two subarrays and count inversions
void merge(long long arr[], long long left, long long middle, long long right)
{
    long long a1 = middle - left + 1;
    long long a2 = right - middle;
    long long i, j, k;

    // Create temporary subarrays
    long long *arr1 = (long long *)malloc(a1 * sizeof(long long));
    long long *arr2 = (long long *)malloc(a2 * sizeof(long long));

    // Copy data to temporary arrays
    for (i = 0; i < a1; i++)
        arr1[i] = arr[left + i];
    for (j = 0; j < a2; j++)
        arr2[j] = arr[middle + 1 + j];

    i = 0;
    j = 0;
    k = left;

    // Merge the two halves and count inversions
    while (i < a1 && j < a2)
    {
        if (arr1[i] <= arr2[j])
        {
            arr[k] = arr1[i];
            i++;
        }
        else
        {
            arr[k] = arr2[j];
            j++;
            count += (a1 - i); // Count inversions
        }
        k++;
    }

    // Copy remaining elements of arr1
    while (i < a1)
    {
        arr[k] = arr1[i];
        i++;
        k++;
    }

    // Copy remaining elements of arr2
    while (j < a2)
    {
        arr[k] = arr2[j];
        j++;
        k++;
    }

    free(arr1);
    free(arr2);
}

// Recursive divide function
void mergeSort(long long arr[], long long left, long long right)
{
    if (left < right)
    {
        long long middle = left + (right - left) / 2;
        mergeSort(arr, left, middle);
        mergeSort(arr, middle + 1, right);
        merge(arr, left, middle, right);
    }
}

// Function to count inversions in the array
long long inversionCount(long long arr[], long long n)
{
    count = 0; // Reset count
    mergeSort(arr, 0, n - 1);
    return count;
}

// Main function for testing
int main()
{
    long long arr[] = {5, 3, 2, 4, 1};
    long long n = sizeof(arr) / sizeof(arr[0]);

    printf("Number of inversions: %lld\n", inversionCount(arr, n));
    return 0;
}

// java:

import java.util.*;

class MergeSort
{
    long count = 0;

    // Merge two subarrays and count inversions
    void merge(long[] arr, int left, int middle, int right)
    {
        int a1 = middle - left + 1;
        int a2 = right - middle;

        // Create temporary subarrays
        long[] arr1 = new long[a1];
        long[] arr2 = new long[a2];

        // Copy data to temporary arrays
        System.arraycopy(arr, left, arr1, 0, a1);
        System.arraycopy(arr, middle + 1, arr2, 0, a2);

        int i = 0, j = 0, k = left;

        // Merge the two halves and count inversions
        while (i < a1 && j < a2)
        {
            if (arr1[i] <= arr2[j])
            {
                arr[k] = arr1[i];
                i++;
            }
            else
            {
                arr[k] = arr2[j];
                j++;
                count += (a1 - i); // Count inversions
            }
            k++;
        }

        // Copy remaining elements of arr1
        while (i < a1)
        {
            arr[k] = arr1[i];
            i++;
            k++;
        }

        // Copy remaining elements of arr2
        while (j < a2)
        {
            arr[k] = arr2[j];
            j++;
            k++;
        }
    }

    // Recursive divide function
    void mergeSort(long[] arr, int left, int right)
    {
        if (left < right)
        {
            int middle = left + (right - left) / 2;
            mergeSort(arr, left, middle);
            mergeSort(arr, middle + 1, right);
            merge(arr, left, middle, right);
        }
    }

    // Function to count inversions in the array
    long inversionCount(long[] arr)
    {
        count = 0; // Reset count
        mergeSort(arr, 0, arr.length - 1);
        return count;
    }
}

public class Solution
{
public
    static void main(String[] args)
    {
        long[] arr = {5, 3, 2, 4, 1};
        MergeSort ms = new MergeSort();
        System.out.println("Number of inversions: " + ms.inversionCount(arr));
    }
}

// PYHON:
class MergeSort : def
                  __init__(self) : self.count = 0

    def merge(self, arr, left, middle, right) :
#Create temporary subarrays
                                                arr1 = arr [left:middle + 1] arr2 = arr [middle + 1:right + 1]

                                                i = j = 0 k = left

#Merge the two halves and count inversions
                                                                  while i < len(arr1) and
                                                              j < len(arr2) : if arr1[i] <= arr2[j] : arr[k] = arr1[i] i
                                                += 1 else : arr[k] = arr2[j] j += 1 self.count += (len(arr1) - i) #Count inversions
                                                            k
                                                            += 1

#Copy remaining elements of arr1
                                                               while i < len(arr1) : arr[k] = arr1[i] i
                                                            += 1 k
                                                            += 1

#Copy remaining elements of arr2
                                                               while j < len(arr2) : arr[k] = arr2[j] j
                                                            += 1 k
                                                            += 1

                                                               def merge_sort(self, arr, left, right) : if left < right : middle = left + (right - left) // 2
                                                                                                                                          self.merge_sort(arr, left, middle)
                                                                                                                                              self.merge_sort(arr, middle + 1, right)
                                                                                                                                                  self.merge(arr, left, middle, right)

                                                                                                                                                      def inversion_count(self, arr) : self.count = 0 #Reset count
                                                                                                                                                                                                    self.merge_sort(arr, 0, len(arr) - 1) return self.count

#Main function for testing
                                                                                                                                                                                                    if __name__
                                                                                                                                                                                                    == "__main__" : arr = [ 5, 3, 2, 4, 1 ] ms = MergeSort()
                                                                                                                                                                                                        print(f "Number of inversions: {ms.inversion_count(arr)}")
