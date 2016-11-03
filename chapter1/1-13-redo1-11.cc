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
	for(;start - stop > 0;--start){
		std::cout << start << std::endl;
	}
	for(;start - stop < 0;++start){
		std::cout << start << std::endl;
	}
		std::cout << start << std::endl;
	return 0;
}
	
