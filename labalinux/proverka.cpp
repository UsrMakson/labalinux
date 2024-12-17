#include "Header.h"

int proverka(int* a, int b,int l) {
	int k = 0;
	for (int i = 3; i >=0; i--) {
		if (a[i] == b) {
			if (i == l) {
				return 1;
			}
			else {
				return 0;
			}
		}
		else {
			k++;
		}
	}
	if (k == 4) {
		return 2;
	}
}