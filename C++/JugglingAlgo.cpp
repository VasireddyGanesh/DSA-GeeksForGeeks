#include<iostream>
using namespace std;

int gcd(int a,int b){
    if(b==0) return a;
    else{
        return gcd(b,a%b);
    }
}


int main(){
    int size;
    cout<<"Enter the Size of the Array "<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter Number of positions to rotate :"<<endl;
    int k;
    cin>>k;
    cout<<"Enter Array Elements :"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int gc=gcd(size,k);
    for(int i=0;i<gc;i++){
        int temp=arr[i];
        int inc=0;
        for(int j=i,inc=j;j<((size)/gc)-1;j++){
            arr[inc]=arr[inc+gc];
            inc+=gc;
        }
        arr[size-(k-i)]=temp;
        cout<<i<<" Rotation"<<endl;
        for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
    }
    cout<<"Result"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}