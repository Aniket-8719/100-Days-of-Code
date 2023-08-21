#include<iostream>
using namespace std;

//First index of the key 
int  firstOcc(int arr[], int size , int key){
    int s = 0;
    int temp  = 0;
    int e = size - 1;
    int ans = -1;
    int mid = s + (e-s)/2;
    while (e>=s){
        if(arr[mid] == key){
        ans = mid;
        e  = mid - 1;
    }
    else if(key > arr[mid]){ // Right Part
        s = mid + 1;
    }
    else{        //Left Part
        e = mid - 1;
    }
    mid = s + (e-s)/2;
}
return ans;
    
}

//Last index of the key 
int  lastOcc(int arr[], int size , int key){
    int s = 0;
    int temp  = 0;
    int e = size - 1;
    int ans = -1;
    int mid = s + (e-s)/2;
    while (e>=s){
        if(arr[mid]==key){
        ans = mid;
        s  = mid + 1;
    }
    else if(key > arr[mid]){ // Right Part
        s = mid + 1;
    }
    else{        //Left Part
        e = mid - 1;
    }
    mid = s + (e-s)/2;
}
return ans;
    
}

// How many times key is  present in Array 
int  times(int arr[], int size , int key){
   int t  =  (lastOcc(arr, size  , key ) - firstOcc(arr, size  , key )) + 1;
   return t;
}

int main()
{
    int even[10]={2,2,3,3,3,3,3,3,4,5};
    cout<<"The first occurence is " <<firstOcc(even,10,3)<<endl;
    cout<<"The last occurence is " <<lastOcc(even,10,3)<<endl;
    cout<<"How many times 3 is present in array  "<<times(even , 10 , 3);
    
    return 0;
}