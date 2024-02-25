#include <iostream>

int main( ) {
	int number = 0;
	int sum = 0;
	
	
	while (number <1001) {
		if((number % 3) == 0) {
			sum = sum + number; 
			number++;
		}else {
			if ((number % 5) == 0) {
				sum = sum + number; 
				number++;
			}else{
				number++;
			}
		}
	}
	std::cout << "The sum of the two given multiples between 0 and 1000 is " << sum <<std::endl;

return 0; 
}	