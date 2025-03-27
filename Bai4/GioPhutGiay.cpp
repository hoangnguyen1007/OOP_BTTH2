#include "GioPhutGiay.h"
#include<iostream>
using namespace std;
//Ham nhap va kiem tra dieu kien
void GioPhutGiay::Nhap()
{
	cout << "Nhap gio: ";
	cin >> iGio;
	while (cin.fail() || iGio < 0 || iGio > 23)
	{
		cin.clear();
		cin.ignore();
		cout << "Vui long nhap lai!" << endl;
		cout << "Nhap gio: ";
		cin >> iGio;
	}
	cout << "Nhap phut: ";
	cin >> iPhut;
	while (cin.fail() || iPhut < 0 || iPhut > 60)
	{
		cin.clear();
		cin.ignore();
		cout << "Vui long nhap lai!" << endl;
		cout << "Nhap phut: ";
		cin >> iPhut;
	}
	cout << "Nhap giay: ";
	cin >> iGiay;
	while (cin.fail() || iGiay < 0 || iGiay > 60)
	{
		cin.clear();
		cin.ignore();
		cout << "Vui long nhap lai!" << endl;
		cout << "Nhap gio: ";
		cin >> iGiay;
	}
}
//Ham xuat gio phut giay dung chuan
void GioPhutGiay::Xuat()
{
	if (iGio < 10) cout << 0;
	cout << iGio << ":";
	if (iPhut < 10) cout << 0;
	cout << iPhut << ":";
	if (iGiay < 10) cout << 0;
	cout << iGiay;
}
//Ham cong them 1 giay va thay doi gio phut neu can
void GioPhutGiay::TinhCongThemMotGiay()
{
	iGiay++;
	if (iGiay == 60)
	{
		iGiay = 0;
		iPhut++;
		if (iPhut == 60)
		{
			iGio++;
			iPhut = 0;
			if (iGio == 24)
			{
				iGio = 0;
			}
		}
	}
}