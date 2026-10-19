// LV04_Paulo_Nomo_Nemi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

Zadatak 1. Paketi u sortirnici
int brojPaketa(int mase[], int N, int L, int D) {
	int dobripaketi = 0;
	for (int i = 0; i < N; i++) {
		if (mase[i] >= L && mase[i] <= D) {
			dobripaketi++;
		}
	}
	return dobripaketi;
}

int main()
{
	int N, L, D;
	int mase[100];

	cout << "N= ";
	cin >> N;
	cout << "L= ";
	cin >> L;
	cout << "D= ";
	cin >> D;
	cout << "mase = \n";

	for (int i = 0; i < N; i++) {
		cin >> mase[i];
	}

	cout << brojPaketa(mase, N, L, D);
	
}
	
Zadatak 2. Senzori nakon oluje
void ispraviMjerenja(int a[], int n) {
	for (int i = 0; i < n; i++) {
		if (a[i] < 0) {
			a[i] = 0;
		}
	}

}

int main()
{
	int n;
	int a[100];
	cout << "n= ";
	cin >> n;
	for (int i = 0; i < n;i++) {
		cin >> a[i];
	}

	ispraviMjerenja(a, n);
	for (int i = 0; i < n;i++) {
		cout << a[i] << " ";
	}

}

int brojIznadPraga(int temp[][6], int redak, int P) {
	int brojiznad = 0;
	for (int i = 0; i < 6;i++) {
		if (temp[redak][i] > P) {
			brojiznad++;
			}
		}
	return brojiznad;
}

int main()
{
	int temp[100][6];
	int redak, P, n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> temp[i][j];
		}
	}
	cin >> redak;
	cin	>> P;

	cout << brojIznadPraga(temp, redak, P);
}