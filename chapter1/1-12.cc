#include <iostream>
/*
 * Caculate from -100 to 100
 * Result = 0
 */
int main(){
	int sum = 0;
	for(int i=-100;i<=100;++i)
		sum+= i;
	std::cout << "sum is " << sum << std::endl;
	return 0;

}
