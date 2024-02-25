#include <iostream>
#include "Lcg.cpp"



int main ( ) {
	LoLib::Lcg generator;
	unsigned int level, guess;
	cout<<endl;
	cout<< "Welcome to a random number guessing game." << endl;
	cout<< "You will have a set amount of atempts to guess the number." << endl;
	cout<<endl;
	cout<< "There are 3 difficulty levels." << endl;
	cout<< "Please choose your difficulty from 1-3." <<endl;
	cout<< "Easy (1), Medium (2), and Hard (3) :"<< endl;
	cin>> level;
	
	
	int status = 0;
	int atempts = 4*level;
	int min = 1;
	int max = 10*level;
	int randy = generator.next(min, max);
	
	while (status == 0) {
		if( atempts != 0) {	
			cout<< "Please make a guess between " << min << " - " << max << ".  Atempts left: " <<atempts <<endl;
			cout << "Players guess : ";
			cin >> guess;
			if( guess == randy){
				status = 1;
			} else {
				if(guess >= randy){
					cout<<"                                "<< guess << " is too high." <<endl;
				}else{
					if(guess <= randy){
						cout<<"                            " <<guess << " is too low. " <<endl;
					};
				};
				atempts= atempts-1;
			};
		} else {
			status = 2;
		};
	};
	if (status == 1) {
		cout<<endl;
		cout<< "Congratulations!! You Win!!" << endl;
		cout<<endl;
		return 0; 
	}	else {
		cout<<endl;
		cout<< "Sorry! You did not win this time. Please try again" << endl;
		cout<<endl;
		return 0;
	};
	
	//cout<<"status ="<<status <<"  atempts = "     <<atempts     << " number to guess = "    <<randy;
	
};