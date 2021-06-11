#include<iostream>
using namespace std;

int main(){
	int num;
	cin>>num;
	int count =0 ;
	while(num>0){
		num=num/10;
		count++;
	}
	cout<<"Number of Digits is "<<count<<endl;
	return 0;
}
