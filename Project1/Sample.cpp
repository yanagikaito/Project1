#include <stdio.h>
#include <iostream>
#include "lib.h"
int main() {
	int num;
	// キーボードから入力された情報がnumに記憶される。
	std::cin >> num;
	num = 2;
	std::cout << num << std::endl;
	printf("Hello\n");
    print("Hello");
	print(2);
	return 0;
}