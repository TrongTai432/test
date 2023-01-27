#include<iostream>
#define MAX
using namespace std;
void NhapMang(int a[], int &n){
	for(int i=0; i<n;i++){
		cout<<"Nhap vao a[" << i<< "] = ";
		cin>>a[i];
	}
}
void XuatMang(int a[], int n){
	for(int i=0; i<n;i++){
		cout << a[i] << "  ";
	}
}
void Sapxeptangdanmang(int a[],int n){
	for(int i=0; i<n-1; i++){
		for(int j = i+1; j<n; j++){
			if(a[i]> a[j]){
				int temp = a[i];
				a[i] = a[j];
				a[j]= temp;
			}
		}
	}
}
int main(){
	int a[100];
	int n;
	do{
		cout<< "Nhap vao so phan tu cua mang: ";
		cin>>n;
		if(n<0 || n > 100){cout << "So phan tu ko hop le. ";
		}
	} while(n<0 || n > 100);
	NhapMang(a,n);
	XuatMang(a,n);
	Sapxeptangdanmang(a,n);
	cout<< "\nXuat mang: ";
	XuatMang(a,n);
	return 0;
}
