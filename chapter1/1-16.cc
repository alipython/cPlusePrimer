#include <iostream>

int main(){
	int sum = 0, input =0;

	while(std::cin >> input )
		sum += input;
	
	std::cout << "sum is " <<
			 sum << std::endl;
	return 0;

}

