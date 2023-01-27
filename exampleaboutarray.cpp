#include <iostream>
using namespace std;
#define MAX 100
void NhapMang(int a[], int &n){
	do{
		cout<< "Nhap vao so phan tu cua mang: ";
		cin>>n;
		if(n<0 || n > MAX){cout << "So phan tu ko hop le. ";
		}
	} while(n<0 || n > MAX);
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
int TimMax(int a[], int n){
	int max= a[0];
	for(int i=0;i<n;i++){
		if(a[i]>max) { max= a[i];
		}
	} return max;
}
void reverse(int* a, int n)
{       for (int i = 0; i < n / 2; ++i) {
        int temp =a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }
}
void show_array(int a[], int n){
    for(int i = 0; i < n; i++)  cout << a[i] <<' ';   
    cout << endl;
}
void Checkopposite(int a[], int n){
    int dem=0;
    for(int i=0;i<n;i++){
        if(a[i]!=a[n-1-i])
            dem++;
    }
    if(dem==0)
        cout<<"\nMang doi xung"<<endl;
    else
        cout<<"\nMang khong doi xung"<<endl;
}
void Socapnghichdao(int a[], int n){
	int dem=0;
	for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(i < j && a[i]> a[j] ) dem++;
        }
}
cout<<dem;}

void DemSoCap(int a[], int n){
	int k,dem=0;
	cin >> k;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==k){
                dem++;
            }
        }
    } cout<< "So cap la: "<< dem;}

void Sophantu(int a[], int n){
	int dem=0;
	for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++)
        if(a[i] >= a[j]) dem++;
        cout << dem<< " ";
        dem = 0;
} 
}
int main(){	
	int a[MAX];
	int n;
	NhapMang(a,n);
	XuatMang(a,n);
	int max = TimMax(a,n);
	cout <<"\nMax= " << max;
//	reverse(a,n);
//	cout<<"\nDay dao nguoc cua a= ";
//	show_array(a,n);
	cout<<"\nKet qua";
    Checkopposite(a,n);
//	DemSoCap(a,n);
	cout<<"\nSo cap nghich dao: ";
	Socapnghichdao(a,n);
	cout<<"\nSo phan tu: ";
	Sophantu(a,n);
	return 0;
}

