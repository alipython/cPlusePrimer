#include <iostream>
int main(){
	int sum=0,start = 50,stop=100;
	while(start <= stop){
		sum += start;
		start++;
	}
	std::cout << "Sum 50 to 100 is "
		<< sum << std::endl;
	return 0;
}
