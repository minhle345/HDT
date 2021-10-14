#include<iostream>
using namespace std;

void Nhap(int  a[], int& n);
void Xuat(int a[], int n);
template<class T>
T Tong(T a[], T n);
template<class T>
T GTLN(T a[], T n);
template<class T>
T Gia_tri_duong(T a[], T n);
void Swap(int& a, int& b);
void Interchange_Sort(int a[], int n);

int main()
{
	int a[50], n;
	Nhap(a, n);
	Xuat(a, n);
	cout << "\n Tong mang: " << Tong(a, n);
	cout << "\n So lon nhat trong mang: " << GTLN(a, n);
	cout << "\n So luong phan tu duong: " << Gia_tri_duong(a, n);
	cout << "\n Sap mang tang dan: ";
	Interchange_Sort(a, n);
	cout << endl;
	Xuat(a, n);
	cout << endl;
	return 0;
}

void Swap(int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

void Interchange_Sort(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])
				Swap(a[i], a[j]);
		}
	}
}

template<class T>
T Gia_tri_duong(T a[], T n)
{
	int d = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0)
		{
			d++;
		}
	}
	return d;
}

template<class T>
T GTLN(T a[], T n)
{
	int MAX = a[0];
	for (int i = 0; i < n; i++)
	{
		if (a[i] > MAX)
		{
			MAX = a[i];
		}
	}
	return MAX;
}

template<class T>
T Tong(T a[], T n)
{
	int S = 0;
	for (int i = 0; i < n; i++)
	{
		S = S + a[i];
	}
	return S;
}

void Xuat(int a[], int n)
{
	cout << " Mang A = { ";
	for (int i = 0; i < n-1; i++)
	{
		cout << a[i] << " , ";
	}
	cout << a[n - 1];
	cout << " }";
}

void Nhap(int a[], int& n)
{
	do {
		cout << " Nhap so luong phan tu: ";
		cin >> n;
	} while (n < 0);
	for (int i = 0; i < n; i++)
	{
		cout << " Phan tu  [ " << i + 1 << " ]: ";
		cin >> a[i];
	}
}

