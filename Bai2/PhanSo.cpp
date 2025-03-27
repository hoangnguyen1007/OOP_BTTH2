#include "PhanSo.h"
#include <iostream>
#include<sstream>
using namespace std;
//Ham nhan vao tu va mau, thuc hien thuat toan tinh ucln va tra ve ucln
int ucln(int a, int b)
{
	if (b == 0) return a;
	return ucln(b, a % b);
}
//Ham getter tra ve gia tri cua tu so
int PhanSo::getITu()
{
	return iTu;
}
//Ham nhap va kiem tra dieu kien nhap
void PhanSo::Nhap()
{
	cout << "Nhap tu so: ";
	cin >> iTu;
	while (cin.fail())
	{
		cin.clear();
		cin.ignore();
		cout << "Vui long nhap lai!" << endl;
		cout << "Nhap tu so: ";
		cin >> iTu;
	}
	cout << "Nhap mau so: ";
	cin >> iMau;
	while (iMau == 0 || cin.fail())
	{
		cin.clear();
		cin.ignore();
		cout << "Vui long nhap lai!" << endl;
		cout << "Nhap mau so: ";
		cin >> iMau;
	}
}
//Ham rut gon va xuat ra phan so tuong ung
void PhanSo::Xuat()
{
	this->RutGon();
	if (iTu % iMau == 0)
	{
		cout << iTu / iMau;
	}
	else if (iMau < 0)
	{
		cout << -iTu << "/" << -iMau;
	}
	else
	{
		cout << iTu << "/" << iMau;
	}

}
//Ham rut gon phan so bang cach chia ca tu va mau cho ucln
void PhanSo::RutGon()
{
	int u = ucln(iTu, iMau);
	iTu /= u;
	iMau /= u;
};
//Ham nhan vao phan so 2, tra ve phan so sau khi cong
PhanSo PhanSo::Tong(PhanSo p)
{
	PhanSo kq;
	kq.iTu = this->iTu * p.iMau + p.iTu * this->iMau;
	kq.iMau = this->iMau * p.iMau;
	return kq;
}
//Ham nhan vao phan so 2, tra ve phan so sau khi tru
PhanSo PhanSo::Hieu(PhanSo p)
{
	PhanSo kq;
	kq.iTu = this->iTu * p.iMau - p.iTu * this->iMau;
	kq.iMau = this->iMau * p.iMau;
	return kq;
}
//Ham nhan vao phan so 2, tra ve phan so sau khi nhan
PhanSo PhanSo::Tich(PhanSo p)
{
	PhanSo kq;
	kq.iTu = this->iTu * p.iTu;
	kq.iMau = this->iMau * p.iMau;
	return kq;
}
//Ham nhan vao phan so 2, tra ve phan so sau khi chia
PhanSo PhanSo::Thuong(PhanSo p)
{
	PhanSo kq;
	kq.iTu = this->iTu * p.iMau;
	kq.iMau = this->iMau * p.iTu;
	return kq;
}
//Ham nhan vao phan so 2, tra ve gia tri tuong ung de so sanh 2 phan so
int PhanSo::SoSanh(PhanSo p)
{
	if ((double)this->iTu / this->iMau > (double)p.iTu / p.iMau) return 1;
	else if ((double)this->iTu / this->iMau < (double)p.iTu / p.iMau) return -1;
	else return 0;
}