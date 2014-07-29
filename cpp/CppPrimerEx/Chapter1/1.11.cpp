#include <iostream>
int main(void)
{
	
	std::cout<<"Enter two numbers!"<<std::endl;
	int num1 , num2;
	std::cin>>num1>>num2;
	while (num1 - 1> num2){
		num2++;
		std::cout<<num2<<std::endl;
	}
	while (num1 < num2 - 1){
		num1++;
		std::cout<<num1<<std::endl;
	}
	return 0;
}
