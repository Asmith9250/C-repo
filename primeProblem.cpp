#include <iostream>

 //600851475143

 
long long nextPrime(long long modulus) {
	
	long long prime = ++modulus;
	long long antiPrime = 2;

	while (antiPrime <= (prime/2)+1){
		if ((prime %antiPrime) == 0){
			prime++;
			antiPrime=2;
		}else{ 
		antiPrime++;
		}
	}	
	//std::cout<< prime <<std::endl;
	return prime;
}
	
int main(){
	//std::cout<<nextPrime(2)<<std::endl;
	//return 0;

	
	long long given = 600851475143;
	long long modulus = 2; 
	long long answer=0;
//std::cout<<given<<"  "<< modulus <<"  "<< answer<<std::endl;
	while (modulus <= (given)+1) {
		if ((given % modulus) == 0){
			answer = modulus;
			given = given/modulus;
			modulus = nextPrime(modulus);
			//std::cout<< modulus <<std::endl;
		}else{ 
			modulus = nextPrime(modulus);
			//std::cout<< modulus <<std::endl;
		}
		//std::cout<< "The answer is " << answer << modulus<< std::endl;
	}
	std::cout<< "The answer is " << answer << std::endl;
	return 0;
}
	
	
	
