// 4,000,000 sum of the even terms in the fib sequence 

#include <iostream>

using namespace std; 

int termA = 0;
int termB = 1;
int termC = 0;
int sum  = 0;

int main(){
	while(termC < 4000000){
		//find next value for termC
		termC = termA + termB;
		termA = termB;
		termB = termC;
		if ((termC %2) == 0) {
			sum=sum+termC;
		}
	}
	cout << " The answer is " << sum << endl;
	return 0;
}