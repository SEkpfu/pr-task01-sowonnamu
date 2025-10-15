#include<iostream>
using namespace std;


void vvod(int& h, int& st, double& pr, double& n_st, string&f) {
	cout << "Введите фамилию." << endl;
	cin >> f;
	cout << "Введите данные: часы, ставка, премия, процент налога." << endl;
	cin >> h >> st >> pr >> n_st;
}
double zp(int h, int st, double pr){
	int ob_zp = h * st;
	return ob_zp + (ob_zp * pr/100);
}
double nalog(double zp_b, double n_st) {
	return n_st / 100 * zp_b;
 }
double na_ruki(int h, int st, double pr, double n_st) {
	double zp_bez_nal = zp(h, st, pr);
	return zp_bez_nal - nalog(zp_bez_nal, n_st);
}
int main() {
	string f1, f2;
	int h1, st1, h2, st2;
	double pr, zp1, zp2, n_st, nal1, nal2;
	vvod(h1, st1, pr, n_st, f1);
	zp1 = na_ruki(h1, st1, pr, n_st);
	nal1 = nalog(zp(h1, st1, pr), n_st); 
	vvod(h2, st2, pr, n_st, f2);
	zp2 = na_ruki(h2, st2, pr, n_st);
	nal2 = nalog(zp(h2, st2, pr), n_st);
	if (zp1 < 1000) 
		cout << f1 << endl;
	if (zp2 < 1000)
		cout << f2 << endl;
	if (nal1 >  50)
		cout << f1[0] << "-" << f1[f1.size() - 1] << endl;
	if (nal2 > 50)
		cout << f2[0] << "-" << f2[f2.size() - 1] << endl;




	return 0;
}