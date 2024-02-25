#include <iostream>

using namespace std;

int main( ) {
	double input = 0;
	double guessCompare = 0;
	double guess = 0;
	double high = 100000000;
	double low = 0;

	cout << "                  What number would you like to find the square root of?" << endl;
	cout << "                                      "; cin >> input;
	
	
	 guess = ((high - low) / 2) + low;
	 guessCompare = guess * guess;
	 
	 //cout << guess << ","<< guessCompare << ","<< high << ","<< low << ","<< input << endl;
		while (input != guessCompare) {
							
				if (guessCompare > input) {
					high = guess;
					guess = ((high - low) / 2) + low;
					guessCompare = guess * guess;
					//cout << guess << ","<< guessCompare << ","<< high << ","<< low << ","<< input << endl;
				}else { 
					low = guess;
					guess = ((high - low) / 2) +low;
					guessCompare = guess * guess;
					//cout << guess << ","<< guessCompare << ","<< high << ","<< low << ","<< input << endl;	
				}
			}
	//cout << "is this working" << endl;
			cout << "                              The Answer is " << guess <<endl;
			return 0; 	
			}



//Users\andyj\C++\CSCS1320S24