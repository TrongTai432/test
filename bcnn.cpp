#include<bits/stdc++.h>
 
using namespace std;
 
int GCD(int a, int b){
    if(b==0) return a;
    return GCD(b, a%b);
}
 
int main()
{
    int a=7,b=10;
    int c = GCD(a,b);
    cout<<"Uoc chung lon nhat A, B la: "<<c;
    int tich = a*b;
    cout<<"\nBoi chung nho nhat A, B la: "<<tich/c;
}
