#include <iostream>
using namespace std;
int main(){ 
	int a=6; //khoi tao bien a co gia tri la 6
	int *b; //khai bao ra bien con tro co du lieu la int, , nghia la con tro nay chi co the tro den cac bien thuoc kieu int
	b = &a; //cho con tro b tro den bien a, nghia la luc nay con tro b dang giu dia chi cua bien a 
	int *c; //khai bao ra bien con tro c
	c=b; //con tro c dang tro den con tro b
	
	cout <<"\nGia tri cua bien a: "<< a;
	cout <<"\nDia chi cua bien a: "<<&a;
	//a++; // gia tri cua a thay doi thi gia tri cua b cung thay doi
	(*b)++;//thay doi gia tri cua bien b thi bien a cung thay doi theo
	cout <<"\nGia tri cua bien a: "<< a;
	cout <<"\nDia chi cua bien a: "<<&a;
	
	cout << "\n\nGia tri cua bien b: "<< *b;
	cout<<"\nDia chi cua bien b: "<< &b;
	cout<<"\nMien gia tri cua con tro b: "<< b;
	cout << "\n\nGia tri cua bien c: "<< *c;
	cout<<"\nDia chi cua bien c: "<< &c;
	cout<<"\nMien gia tri cua con tro c: "<< c;
	
}
