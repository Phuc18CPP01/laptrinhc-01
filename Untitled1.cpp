#include <iostream>

using namespace std;

int main() {
	for(int i = 1; i <= 10; i++) {
		cout << i << endl;
	};

	int i = 1;
	while(i <= 10) {
		cout << "Hello" << endl;
		i++;
	}
	
	int i = 1;
	do{
		cout << "Hello" << endl;
		i++;
	}while(i <= 10);
}
