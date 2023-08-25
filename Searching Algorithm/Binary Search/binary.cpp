#include<iostream>
using namespace std;

int BinarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    // int  mid = (start + end)/2;

    //chalaki wala formula
    int mid = start + (end - start)/2;
    while(start <= end){
        if(arr[mid] == key){
            return mid;
        }
        //go to right part
        if(key > arr[mid]){
            start = mid + 1;
        }
        //go to left part
        else{
            end = mid - 1;
        }
        // mid = (start + end )/2 ;
         mid = start + (end - start)/2;
       
    }
    return -1;

}
int main()
{
    int evenArr[6]={2,4,6,8,10,12};
    int oddArr[5]={3,5,7,9,11};
    int evenindex = BinarySearch(evenArr , 6 , 12);
    cout<<"in even array the index of the 12 is "<<evenindex<<endl;
    int oddindex = BinarySearch(oddArr , 5 , 12);
    cout<<"in odd array the index of the 12 is "<<oddindex<<endl;


    //solution of this type of  problem.....
    //  int nullArr[1]={9};
    //  cout<<BinarySearch(nullArr, 1, 9)<<endl;

    return 0;
}