#include<iostream>

using namespace std;

int main()
{
	int n = 0;
	for (int i = 0; i < 5; i++) {
		for (int j = i; j < 5; j++) {
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}