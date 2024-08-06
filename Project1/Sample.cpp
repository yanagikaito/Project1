#include <stdio.h>
#include <iostream>
#include "lib\lib.cpp"
#define MAX_VALUE (5)
#define DEBUG

int main() {

	// デバッグ開始
#ifdef DEBUG

	int i = 0;

	while (i < MAX_VALUE) {
		std::cout << i << "\n";
		i++;
		print("* ");
		print(0);
	}
	return -1;

	// デバッグ終了
#endif // DEBUG
	
	while (i < MAX_VALUE) {
		std::cout << i << "\n";
		i++;
		print("* ");
		print(0);
	}
	return 0;
}