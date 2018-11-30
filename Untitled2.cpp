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
}
