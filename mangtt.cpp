#include<iostream>
using namespace std;
#define MAX 100
int main(){ 
	int arr[MAX];
	int n;
	do {
		cout << "\nNhap so luong phan tu mang: ";
		cin >>n;
		if(n<=0 || n> MAX){
			cout<<"So luong phan tu mang ko hop le ";
			
		}
	}while(n<=0 || n> MAX);
	//nhap gia tri cho tung phan tu
	for(int i=0; i<n;i++){
		cout<< "Nhap phan tu a[ " <<i<< "] = "; 
		cin>> arr[i];
	}
	//vong lap xuat tat ca cac gia tri cua mang
	for(int i=0; i<n;i++){
	cout << arr[i]<< " ";
	}
}
