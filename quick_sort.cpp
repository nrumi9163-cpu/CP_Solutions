#include<bits/stdc++.h>
using namespace std;
int partition(int arr[], int start, int end){
    int pivot = arr[start];
    int count = 0;
    for(int i = start+1; i <= end; i++){
        if(arr[i] <= pivot){
            count++;
        }
    }
    int p_index = start + count;
    swap(arr[start], arr[p_index]);

    int i = start;
    int j = end;
    while(i < p_index && j > p_index){
        while(arr[i] < pivot){
            i++;
        }
        while(arr[j] > pivot){
            j--;
        }
        if(i < p_index && j > p_index){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    return p_index;
}
void quick_Sort(int arr[], int start, int end){
    if(start >= end)
        return;
    int pivot = partition(arr, start, end);
    quick_Sort(arr, start, pivot-1);
    quick_Sort(arr, pivot+1, end);
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    quick_Sort(arr, 0, n-1);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}