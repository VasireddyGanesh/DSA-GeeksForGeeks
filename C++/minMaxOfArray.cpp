#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"number of Elements in the Array : "<<endl;;
    cin>>n;
    int arr[n];
    cout<<"Enter elements of the Array : "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max,min;
    if(n==1){
        cout<< "Min and Max is "<<arr[0]<<endl;
    }else if(n==2){
        if(arr[0]>arr[1]){
            cout<<"Min is "<<arr[1]<<" and Max is "<<arr[0]<<endl;
        }else{
            cout<<"Min is "<<arr[0]<<" and Max is "<<arr[1]<<endl;
        }
    }else{
        min=max=arr[0];
        for(int i=1;i<n;i++){
            if(max<arr[i]){
                max=arr[i];
            }else if(min>arr[i]){
                min=arr[i];
            }
        }
    }
    cout<<"Min is "<<min<<" and Max is "<<max<<endl;
    return 0;
}