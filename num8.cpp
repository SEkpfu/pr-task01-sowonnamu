#include<iostream>
#include <vector>
#include <string>

using namespace std;

void vvod(int& h, int& st, double& pr, double& n_st, int& i) {
	cout << "Введите данные" << i + 1 << " работника : часы, ставка, премия, процент налога." << endl;
	cin >> h >> st >> pr >> n_st;
}
double zp(int h, int st, double pr){
	int ob_zp = h * st;
	return ob_zp + ob_zp * pr/100;
}
double nalog(double zp_b, double n_st) {
	return n_st / 100 * zp_b;
 }
double na_ruki(int h, int st, double pr, double n_st) {
	double zp_bez_nal = zp(h, st, pr);
	return zp_bez_nal - nalog(zp_bez_nal, n_st);
}
int main() {
	
	int h, st;
	double pr, n_st;
	int kolvo, max_n = 0, min_n = 0, kol50k = 0;
	double max_zp = 0.0, min_zp = 99999999.9, ob_nalog = 0.0;
	string nomer;
	cout << " Введите количество работников." << endl;
	cin >> kolvo;
	vector<double> zarp(kolvo), zp_nr(kolvo), nal(kolvo);
	for (int i = 0; i < kolvo; ++i) {
		vvod(h, st, pr, n_st, i);
		zarp[i] = zp(h, st, pr);
		zp_nr[i] = na_ruki(h, st, pr, n_st);
		nal[i] = nalog(zp_nr[i], n_st);
		if (max_zp < zarp[i]) {
			max_zp = zarp[i];
			max_n = i + 1;
		}
		if (min_zp > zarp[i]) {
			min_zp = zarp[i];
			min_n = i + 1;
		}
		if (zp_nr[i] > 50000) {
			kol50k += 1;
			nomer += " " + to_string(i + 1);
		}
		ob_nalog += nal[i];
	}
	cout << min_n << endl << max_zp << " " << max_n << endl;
	cout << kol50k << nomer << endl << ob_nalog;




	return 0;
}
