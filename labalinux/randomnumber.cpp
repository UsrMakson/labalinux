#include <ctime>
#include <random>

int randomnumber() {
	srand(time(0));
	int f[]{ 1,2,3,4,5,6,7,8,9 }; int d = 1; int ind = rand() % 9;
	int number = 0;
	for (int i = 0; i < 4; i++) {
		while (f[ind] == 0) {
			ind = rand() % 9;
		}
		number = number + d * f[ind];
		d *= 10;
		f[ind] = 0;
	}
	return number;
}