#include<iostream>

using namespace std;

void selectionSort(int *arr, int &n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[min]>arr[j]){ //descending order:"if(arr[min]<arr[j])"
                min=j;            
            }
        }
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
}

void print(int arr[], int &n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[]={5,3,9,4,7,1,2,6,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Before Sorting: "<<endl;
    print(arr, n);
    selectionSort(arr, n);
    cout<<"After Selection Sort: "<<endl;
    print(arr, n);
    return 0;
}