#include<iostream>
using namespace std;
int binarySearch(int arr[] , int tar){
    int st=0 ; 
    int end=arr.size()-1;
    while(st<=end){
        int mid=(st+end)/2;
        if(tar>arr[mid]){
            st=mid+1;
        }
        else if(tar<arr[mid]){
            end=mid-1;
        }
        else{
            return mid;
        }
    }
    return -1;
}
int main(){
    int arr[]={2,5,8,12,16,23,38,56,72,91};
    int tar=23;
    cout<<binarySearch(arr,tar);
}