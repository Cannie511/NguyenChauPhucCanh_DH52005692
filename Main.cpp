#include "Header.h"

int main()
{
	int a[MAX];
	nhap(a, 10);
	int tong = tongMang();
	cout<<"\ntong la:"<<tong;
	xuatThongTin();
	return 0;
}
