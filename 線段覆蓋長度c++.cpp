#include <iostream>
using namespace std;

int main() {
	int n, min, max, d = 0;
	cout<<"請輸入有幾條線段:\n";
	cin >> n;//有幾條線段
	int arr[100];
	for (int i = 0; i < 100; i++) {
		arr[i] = 0;
		}
	for (int j = 1; j <= n; j++) {
		cout << "請輸入線段的最小值\n";
		cin >> min;
		cout << "請輸入線段的最大值\n";
		cin >> max;
		for (int i = min; i < max; i++) {
				arr[i] = 1;
		}
	}
	for (int j = 0; j < 100; j++) {
		d = d + arr[j];
	}
	cout << "線段覆蓋長度為:"<< d;
}
