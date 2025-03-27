#include "SoPhuc.h"
#include <iostream>
#include<string>
using namespace std;
//Ham getter tra ve gia tri cua iAo
int SoPhuc::getAo()
{
	return iAo;
}
//Ham getter tra ve gia tri cua iThuc
int SoPhuc::getThuc()
{
	return iThuc;
}
//Ham nhap va kiem tra dieu kien nhap
void SoPhuc::Nhap()
{
	cout << "Nhap so thuc: ";
	cin >> iThuc;
	while (cin.fail())
	{
		cin.clear();
		cin.ignore();
		cout << "Vui long nhap lai!" << endl;
		cout << "Nhap so thuc: ";
		cin >> iThuc;
	}
	cin >> iAo;
	while (cin.fail())
	{
		cin.clear();
		cin.ignore();
		cout << "Vui long nhap lai!" << endl;
		cout << "Nhap so thuc: ";
		cin >> iAo;
	}
}
//Ham xuat so phuc
void SoPhuc::Xuat()
{
	if (iThuc == 0 && iAo == 0) cout << 0;
	else if (iThuc == 0) cout << iAo << "i";
	else if (iAo < 0) cout << iThuc << " - " << -iAo << "i";
	else if (iAo > 0) cout << iThuc << " + " << iAo << "i";
	else cout << iThuc;
}
//Ham tinh tong 2 so phuc theo cong thuc
SoPhuc SoPhuc::Tong(SoPhuc p)
{
	SoPhuc kq;
	kq.iThuc = this->iThuc + p.iThuc;
	kq.iAo = this->iAo + p.iAo;
	return kq;
}
//Ham tinh hieu 2 so phuc theo cong thuc
SoPhuc SoPhuc::Hieu(SoPhuc p)
{
	SoPhuc kq;
	kq.iThuc = this->iThuc - p.iThuc;
	kq.iAo = this->iAo - p.iAo;
	return kq;
}
//Ham tinh tich 2 so phuc theo cong thuc
SoPhuc SoPhuc::Tich(SoPhuc p)
{
	SoPhuc kq;
	kq.iThuc = this->iThuc * p.iThuc - this->iAo * p.iAo;
	kq.iAo = this->iThuc * p.iAo + p.iThuc * this->iAo;
	return kq;
}
//Ham tinh thuong 2 so phuc theo cong thuc
string SoPhuc::Thuong(SoPhuc p) {
	double mau = p.iThuc * p.iThuc + p.iAo * p.iAo;
	double thuc = (this->iThuc * p.iThuc + this->iAo * p.iAo) / mau;
	double ao = (p.iThuc * this->iAo - this->iThuc * p.iAo) / mau;
	if (ao < 0) return to_string(thuc) + " - " + to_string(-ao) + "i";
	else if (ao > 0) return to_string(thuc) + " + " + to_string(ao) + "i";
	else return to_string(thuc);
}