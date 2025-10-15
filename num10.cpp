#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

double PI = 2*acos(0.0);



int main() {
	int h, st, pr = 13, ans1, ans2 = 0, ans3, ans4 = 0, max_zp = 0;
	vector<vector<int>> zp(4, vector<int>(12, 0));
	vector<vector<double>> nal(4, vector<double>(12, 0));
	for (int i{ 0 }; i < 4; ++i) {
		cout << "Введите ставку для работника номер " << i + 1 << endl;
		cin >> st;
		cout << "Введите количество часов за месяц." << endl;
		for (int j{ 0 }; j < 12; ++j) {
			cin >> h;
			zp[i][j] = st * h;
			nal[i][j] = zp[i][j] * pr * 1.0 / 100;
			ans4 += zp[i][j];
		}
	}
	ans1 = zp[0][1] - nal[0][1];
	for (int i{ 0 }; i < 12; ++i) 
		ans2 += nal[2][i];
	for (int i{ 0 }; i < 4; ++i) {
		if (max_zp < zp[i][2]) {
			max_zp = zp[i][2];
			ans3 = i + 1;
		}
	}
	cout << "Сумма полученная 2 работником во втором месяце = " << ans1 << endl;
	cout << "Общая сумма налога у 3 работника за год = " << ans2 << endl;
	cout << "Номер работника с наибольшей зарплатой за 3 месяц = " << ans3 << endl;
	cout <<"Сумма заработанная vsey всей бригадой за год = " << ans4 << endl;
	return 0;
}