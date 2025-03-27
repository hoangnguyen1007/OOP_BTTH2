#pragma once
#include<iostream>
class PhanSo
{
private:
	int iTu;
	int iMau;
public:
	int getITu();
	void Nhap();
	void Xuat();
	void RutGon();
	PhanSo Tong(PhanSo);
	PhanSo Hieu(PhanSo);
	PhanSo Tich(PhanSo);
	PhanSo Thuong(PhanSo);
	int SoSanh(PhanSo);
};
int ucln(int a, int b);
