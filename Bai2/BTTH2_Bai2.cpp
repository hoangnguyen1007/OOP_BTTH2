#include "PhanSo.h"
#include <iostream>
using namespace std;
int main()
{
	PhanSo p1, p2;
	cout << "Nhap phan so 1: "<<endl;
	p1.Nhap();
	cout << "Nhap phan so 2: "<<endl;
	p2.Nhap();
	cout << "Phan So 1 sau khi rut gon: ";
	p1.RutGon();
	p1.Xuat();
	cout << "\nPhan So 2 sau khi rut gon: ";
	p2.RutGon();
	p2.Xuat();
	cout << endl;
	p1.Xuat(); cout << " + "; p2.Xuat(); cout << " = "; p1.Tong(p2).Xuat(); cout << endl;
	p1.Xuat(); cout << " - "; p2.Xuat(); cout << " = "; p1.Hieu(p2).Xuat(); cout << endl;
	p1.Xuat(); cout << " * "; p2.Xuat(); cout << " = "; p1.Tich(p2).Xuat(); cout << endl;
	if (p1.getITu() == 0 || p2.getITu() == 0)
	{
		cout << "Phep chia khong xac dinh!";
	}
	else
	{
		p1.Xuat(); cout << " / "; p2.Xuat(); cout << " = "; p1.Thuong(p2).Xuat();
	}
	cout << endl;
	if (p1.SoSanh(p2) == 1)
	{
		p1.Xuat(); cout << " > "; p2.Xuat();
	}
	else if(p1.SoSanh(p2) == -1)
	{
		p1.Xuat(); cout << " < "; p2.Xuat();
	}
	else
	{
		p1.Xuat(); cout << " = "; p2.Xuat();
	}
}