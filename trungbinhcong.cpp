#include<iostream>
using namespace std;
int A[100];
int main (){
	int n;
	cin >> n;
	for(int i=0; i<n;i++){
		cin>> A[i];
	}
	int dem=0, sum=0, mean;
	for(int i=0; i<n;i++){
		if(A[i]%2!=0){
			sum=sum+ A[i];
			dem++;
			cout<<A[i]<<" ";
		} i++;
	} mean = sum/dem;
	cout<< sum <<" \n"<< dem;
	cout<<"trung binh cong:" << mean;
	return 0;
	}
