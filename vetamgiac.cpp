#include<stdio.h>
void veTamGiacVuong(){
	printf("Nhap vao so dong: ");
	int n;
	scanf("%d", &n);
	int row = 0, column = 0;
	char kyTu = 65;
	for (row = 1; row <= n; row++){
	for (column = 1; column <= row; column++){
	printf("%c\t", kyTu);
	kyTu++;
}
	printf("\n");
}
}
	void veTamGiacCan(){
	printf("Input number of rows: ");
	int n;
	scanf("%d", &n);
	char kyTu = 65;
int row = 0, column = 0;
for (row = 1; row <= n; row++){
for (column = 1; column <= 2*n - 1; column++){
if ((column >= n - row + 1) && (column <= n + row - 1)){
if (n % 2 == 1){
if ((column + row) % 2 == 0){
printf("%c", kyTu);
kyTu++;
}
else{
printf(" ");
}
}
else{
if ((column + row) % 2 == 1){
printf("%c", kyTu);
kyTu++;
}
else{ printf(" ");
}
}
}
else{ printf(" ");
}
}
printf("\n");
}
}
int main(){
	veTamGiacVuong();
	veTamGiacCan();
}
