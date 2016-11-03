#include <iostream>

int main(){
	int start,stop;
	std::cout << "please enter 2 number :" 
		<< std::endl;
	std::cin >> start;
	std::cin >> stop;
	std::cout << "the number from start "
			<< start << " to stop " 
			<< stop << " is :" << std::endl;
	while(start - stop > 0){
		std::cout << start-- << std::endl;
	}
	while(start - stop < 0){
		std::cout << start++ << std::endl;
	}
		std::cout << start << std::endl;
	return 0;
}
	
