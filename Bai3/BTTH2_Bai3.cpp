#include "SoPhuc.h"
#include <iostream>
using namespace std;
int main()
{
	SoPhuc p1, p2;
	cout << "Nhap so phuc thu nhat" << endl;
	p1.Nhap();
	cout << "Nhap so phuc thu hai" << endl;
	p2.Nhap();
	cout << "("; p1.Xuat();  cout << ") + ("; p2.Xuat(); cout << ") = "; p1.Tong(p2).Xuat(); cout << endl;
	cout << "("; p1.Xuat();  cout << ") - ("; p2.Xuat(); cout << ") = "; p1.Hieu(p2).Xuat(); cout << endl;
	cout << "("; p1.Xuat();  cout << ") * ("; p2.Xuat(); cout << ") = "; p1.Tich(p2).Xuat(); cout << endl;
	if (p2.getThuc() == 0 && p2.getAo() == 0) cout << "Khong the chia cho so 0!";
	else
	{
		cout << "("; p1.Xuat();  cout << ") / ("; p2.Xuat(); cout << ") = "; cout << p1.Thuong(p2); cout << endl;
	}
}