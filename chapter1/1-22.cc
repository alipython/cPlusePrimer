#include "1/Sales_item.h"
//complie g++ -std=c++11 source.cc
int main(){
	Sales_item item,itemsum;
	while(std::cin >> item){
		itemsum += item;
	}
	std ::cout << itemsum << std::endl;
	return 0;

}
