#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main() {

	int all;

	cout << "Vvedit chas v sec";
	cin >> all;

	const int work = 8 * 3600;
	int abg = max(work - all, 0);

	int left_time = max(abg / 3600, 0);

	cout << "zalishilos: " << left_time << "hours" << endl;

	return 0;
}