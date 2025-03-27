#pragma once
#include<iostream>
using namespace std;
class SoPhuc
{
private:
	int iThuc, iAo;
public:
	int getAo();
	int getThuc();
	void Nhap();
	void Xuat();
	SoPhuc Tong(SoPhuc);
	SoPhuc Hieu(SoPhuc);
	SoPhuc Tich(SoPhuc);
	string Thuong(SoPhuc);
};

