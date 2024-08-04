#include <stdio.h>
#include <iostream>
#include "lib\lib.cpp"
int main() {
	int i = 0;
	
	while (i < 5) {
		std::cout << i << "\n";
		i++;
		print("š ");
		print(0);
	}
	return 0;
}