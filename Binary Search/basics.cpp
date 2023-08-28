#include <iostream>
using namespace std;

int binary_search(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid =(start+end)/2;
    while(start<=end){
        if (key==mid)
        {
            return mid;
        }
        if(key>arr[mid])
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
        mid=(start+end)/2;
        
        
    }
    return -1;
}

int main() {
    int arr[]={3,5,5,5,11,13};
    cout<<binary_search(arr,6,13);
    
}
