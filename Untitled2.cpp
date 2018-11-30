#include <iostream>

using namespace std;

int main() {
	//1 -> 100
	for(int i = 1; i <= 100; i++) {
		cout << i << endl;
	}
	//100 -> 1
	for(int i = 100; i >= 1; i--) {
		cout << i << endl;
	}
	//Xuat cac so chan tu 1 -> 100
	for(int i = 2; i <= 100; i+=2) {
		cout << i << "\t";
	}
	//Xuat cac so le tu 1 -> 100
	for(int i = 1; i <= 100; i+=2) {
		cout << i << "\t";
	}
	//Tinh tong cac so tu 1 -> 100
	int sum = 0;
	for(int i = 1; i <= 100; i++) {
		sum += i; //sum = sum + i;
	}
	cout << sum;
	//Tinh tong cac so chan tu 1 -> 100
	int sum = 0;
	for(int i = 2; i <= 100; i+=2) {
		sum += i; //sum = sum + i;
	}
	cout << sum;
	//Tinh tong cac so le tu 1 -> 100
	int sum = 0;
	for(int i = 1; i <= 100; i+=2) {
		sum += i; //sum = sum + i;
	}
	cout << sum;
	//Xuat cac so tu 1 den n va n nhap tu ban 
	//phim	
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++) {
		cout << i << endl;
	}
	//Tinh tong cac so tu 1 den n
	int n, sum = 0;
	cin >> n;
	for(int i = 1; i <= n; i++) {
		sum += i; //sum = sum + i;
	}
	cout << sum;
	//Tinh tong cac so le tu 1 den n
	int n, sum = 0;
	cin >> n;
	for(int i = 1; i <= n; i+=2) {
		sum += i; //sum = sum + i;
	}
	cout << sum;
	//Tinh tong cac so chan tu 1 den n
	int n, sum = 0;
	cin >> n;
	for(int i = 2; i <= n; i+=2) {
		sum += i; //sum = sum + i;
	}
	cout << sum;
	//Tinh tich cac so tu 1 den n
	int n, sum = 1;
	cin >> n;
	for(int i = 1; i <= n; i++) {
		sum *= i; //sum = sum + i;
	}
	cout << sum;
	//Nhap vap 1 so xuat ra bang cuu chuong
	//cua so do
	int n;
	cin >> n;
	cout << "Bang cuu chuong cua " << n << " la: " << endl;
	for(int i = 1; i <= 10; i++) {
		cout << n << " * " << i << " = " << n * i << endl;
	}
}
btvn:
bt1: Tinh S = 1 + 1/2 + 1/3 + ... + 1/n;
bt2: Tinh P = 1 * 1/2 * 1/3 * .... * 1/n;
bt3: Nhap vao 1 so kiem tra so do co phai la so nguyen to
hay khong?
bt4: Xuat ra bang cuu chuong cua cac so tu 1 den 10
