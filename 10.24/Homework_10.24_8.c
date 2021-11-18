#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main() {

	int a = 1;
	int b = 100;
	int times = 3;
	int i = 0;
	for (i = a; i <= b; i++) { //也可以从3开始每次加3
		if (i % times == 0) {
			printf("%d ",i);
		}
	}

	return 0;
}

