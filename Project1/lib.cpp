#include "lib.h"
#include <iostream>
// 関数のオーバーロード
void print(int i)
{
	std::cout << i;
}

void print(const char* j)
{
	std::cout << j;
}
