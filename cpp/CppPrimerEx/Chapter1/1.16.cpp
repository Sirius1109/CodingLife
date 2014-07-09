#include <iostream>

int main(void)
{
	int val=0,sum=0;
	while( std::cin >> val){
		sum += val;
	}
	std::cout << "Sum is: " << sum <<std::endl;
	return 0;
}
