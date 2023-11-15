#include "Header.h"
int tong = 0;
void nhap(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}
int tongMang(int a[], int n){
	for(int i = 0; i<n; i++){
		tong += a[i];
	}
	return tong;
}
void xuatThongTin(){
	cout<<"DH52005692| Nguyen Chau Phuc Canh| D20_TH10";
}
