#include <iostream>
int main(){
	int sum=0,start = 50,stop=100;
	for(;start <= stop;++start){
		sum += start;
	}
	std::cout << "Sum 50 to 100 is "
		<< sum << std::endl;
	return 0;
}
