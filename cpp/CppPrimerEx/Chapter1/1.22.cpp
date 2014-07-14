#include <iostream>
#include "Sales_item.h"
int main(void)
{
	Sales_item item_cur,item_tol;
	if (std::cin >> item_cur)
	while (std::cin >> item_cur)
		item_tol = item_tol + item_cur;
	std::cout << item_tol <<std::endl;
	return 0;
}
