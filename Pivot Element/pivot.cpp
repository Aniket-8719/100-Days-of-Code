#include<iostream>
using namespace std;
int main()
{
    int arr[8]={5,6,7,9,10,2,3,4};
    int  s = 0, e=8-1;
    int mid = s + (e-s)/2;
    while(e>s){
        if(arr[mid]>=arr[0]){
            s = mid + 1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    cout<<s<<" ";
    return 0;
}