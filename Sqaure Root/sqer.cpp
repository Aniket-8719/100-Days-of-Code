#include<iostream>
using namespace std;
long long int floorSqrt(long long int n)
{
    long long int  s = 0;
    long long int e = n;
    long long int mid = s + (e-s)/2;
    long long int ans = -1;
    while(e>=s){
         long long int square = mid*mid;
        if(square == ans){
        return ans;
    }
    if(square > n){
        e = mid -1;
    }
    else{
        s = mid+1;
        ans = mid;
    }
    mid = s + (e-s)/2;
    }
    return ans;

}


int main()
{
    long long int result = floorSqrt(36);
    cout<<result<<" ";
    
    return 0;
}