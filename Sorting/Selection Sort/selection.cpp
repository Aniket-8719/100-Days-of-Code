#include<iostream>
using namespace std;
int main()
{
    int arr[5]={5,6,7,1,3};
    for(int i=0; i<5-1; i++ ){
        int minIn = i;
    
    for(int j = i+1; j<5; j++){
      if (arr[minIn] > arr[j]) {
        minIn = j;
      }
     }
     swap(arr[minIn], arr[i]);
    }
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}