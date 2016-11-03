#include "1/Sales_item.h"
//complie g++ -std=c++11 source.cc
int main(){
	Sales_item total;
	if (std::cin >> total){
		Sales_item trans;

		while(std::cin >> trans){
			if(total.isbn() == trans.isbn())
				total += trans;
			else {
				std::cout << total << std::endl;
				total = trans;
			}
		}	
		std ::cout << total << std::endl;
	}
	else {
		std::cerr << "No Input" << std::endl;
		return -1;
	}
	return 0;

}
