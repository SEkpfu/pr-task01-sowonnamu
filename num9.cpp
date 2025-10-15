#include<iostream>
#include <vector>
#include<string>


using namespace std;
int min_el(int n, vector<int> v) {
	int mi = v[0], nomer =0;
	for (int i = 0; i < n; ++i) {
		if (mi > v[i]) {
			mi = v[i];
			nomer = i + 1;
		}
	}
	return nomer;
 }
string max_el(int n, vector<int> v) {
	int ma = v[0], nomer;
	for (int i = 0; i < n; ++i) {
		if (ma < v[i]) {
			ma = v[i];
			nomer = i + 1;
		}
	}
	return to_string(ma) + " " + to_string(nomer);
}
int svoi_el(int n, vector<int> v, int el) {
	int kolvo =0;
	for (int i = 0; i < n; ++i) {
		if (v[i] > el)
			kolvo += 1;
	}
	return kolvo;
}
int summ(int n, vector<int> v) {
	int su = 0;
	for (int i = 0; i < n; ++i)
		su += v[i];
	return su;
}
int main() {
	int el, n;
	cout << "Введите количество элементов." << endl;
	cin >> n;
	vector<int> v(n);
	cout << "Введите элементы массива." << endl;
	for (int i = 0; i < n; ++i) {
		cin >> el;
		v[i] = el;
	}
	cout << "Введите свой элемент для сравнения." << endl;
	cin >> el;
	cout << "номер min el " << min_el(n, v) << endl << "max el и номер" << max_el(n, v) << endl;
	cout << "больше своего числа " << svoi_el(n, v, el) << endl << "сумма " << summ(n, v);




	return 0;
}
