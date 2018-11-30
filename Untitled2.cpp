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
}
