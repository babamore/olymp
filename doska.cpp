#include <iostream>
#include <iomanip>


using namespace std;

int main() {
	int n;
	double res;
	cin >> n;
	if (n % 2 == 0) {
		res = n / 2;
	}
	else {
		res = (n + 1) / 2;
	}
	cout << fixed << setprecision(0) << res;
	system("pause");
	return 0;
}
