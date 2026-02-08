/*
Quick Sort Template (C++)
Approach:
- Choose first element as pivot.
- Place pivot at correct index by counting smaller/equal elements.
- Partition remaining elements around pivot, then recurse.

Time Complexity: O(n log n) average, O(n^2) worst
Space Complexity: O(log n) average recursion stack
*/
#include <bits/stdc++.h>
using namespace std;

int partitionArr(vector<int>& a, int s, int e){
    int pivot = a[s];
    int cnt = 0;

    for(int i = s + 1; i <= e; i++){
        if(a[i] <= pivot) cnt++;
    }

    int pivotIndex = s + cnt;
    swap(a[s], a[pivotIndex]);

    int i = s, j = e;
    while(i < pivotIndex && j > pivotIndex){
        while(a[i] <= pivot) i++;
        while(a[j] > pivot) j--;
        if(i < pivotIndex && j > pivotIndex){
            swap(a[i++], a[j--]);
        }
    }

    return pivotIndex;
}

void quickSort(vector<int>& a, int s, int e){
    if(s >= e) return;

    int p = partitionArr(a, s, e);
    quickSort(a, s, p - 1);
    quickSort(a, p + 1, e);
}
