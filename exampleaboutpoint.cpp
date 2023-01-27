#include<iostream>
using namespace std;
struct Hocvien{
	string hoten;
	float diemLT, diemTH;
	Hocvien *next;
};
Hocvien *F=NULL;
void BoSungDau(Hocvien *&F, int n){
	for(int i=0;i<n;i++){
	cin.ignore();
	Hocvien *p = new Hocvien;
	cout<<"Nhap ten hoc vien: ";
	getline(cin, p->hoten);
	cout<<"Nhap diem ly thuyet: ";
	cin>>p->diemLT;
	cout<<"Nhap diem thuc hanh: ";
	cin>>p->diemTH;
	p->next=F;
	F=p;
}
} 
void Xoahocvien(Hocvien *&F){
	Hocvien *q=F;
	for( ; q!=NULL;q=q->next){
		float dtb=(q->diemLT+q->diemTH)/2;
		if(dtb<5){
			Hocvien *t=F;
			for(;t->next!=q;t=t->next);
			t->next=q->next;
			delete q;
			q=t;
		}
	}
}
void Sapxep(Hocvien *&F){
	for(Hocvien *q=F;q->next!=NULL;q=q->next){
		float dtbq=(q->diemLT+q->diemTH)/2;
		for(Hocvien *t=q->next;t!=NULL;t=t->next){
			float dtbt=(t->diemLT+t->diemTH)/2;
			if(dtbt>dtbq){
				Hocvien *temp=q;
				q=t;
				t=temp;
			}
		}
	}
}
void indslk(Hocvien *F){
	cout<<"Du lieu danh sach F la: "<<endl;
	for(Hocvien *q=F;q!=NULL;q=q->next)
	cout<<q->hoten<<"   "<<q->diemLT<<"   "<<q->diemTH<<endl;
}
int main(){
	int n;
	cout<<"Nhap so hoc vien: ";
	cin>>n;
	BoSungDau(*&F,2);
	Xoahocvien(*&F);
	Sapxep(*&F);
	indslk(Hocvien);
	
	
}
