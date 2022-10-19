#include <iostream>
using namespace std;
int main() {
	//series1
	/*double x;
	double sum = 0;
	for (int i = 1; i <= 10; i++) {
		cin >> x;
		sum += x;
	}
	cout << sum << endl;*/
	//series2
	/*int i = 1;
	double x;
	double proizv = 1;
	while (i <= 10) {
		cin >> x;
		proizv *= x;
		i++;
	}
	cout << proizv << endl;*/
	//series3
	/*double x;
	double sum = 0;
	for (int i = 1; i <= 10; i++) {
		cin >> x;
		sum += x;
	}
	sum = sum / 10;
	cout << sum << endl;*/
	//series4
	int sum = 0;
	int proizv = 1;
	int N;
	int i = 1;
	double x;
	cin >> N;
	while (i <= N) {
		cin >> x;
		sum += x;
		proizv *= x;
		i++;
	}
	cout << sum << endl;
	cout << proizv << endl;
}