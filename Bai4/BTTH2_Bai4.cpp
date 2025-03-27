#include "GioPhutGiay.h"
#include<iostream>
using namespace std;
int main()
{
	GioPhutGiay x;
	x.Nhap();
	cout << "Thoi gian vua nhap: ";
	x.Xuat();
	cout << "\nThoi gian sau khi cong them 1 giay: ";
	x.TinhCongThemMotGiay();
	x.Xuat();
}

