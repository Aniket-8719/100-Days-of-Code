#include<bits/stdc++.h>
using namespace std;
void insertionSort(int n, vector<int> &arr){
    // Write your code here.
    for(int i = 0; i<n; i++){
        int temp = arr[i];
        int j = i-1;
        while(j>=0 && temp<=arr[j]){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    vector<int> nums; 
    nums.push_back(2);
    nums.push_back(1);
    nums.push_back(4);
    nums.push_back(3);
    nums.push_back(7);
 
    insertionSort(nums.size(), nums);
    return 0;
}