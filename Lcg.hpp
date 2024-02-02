#include <iostream>
#include <bitset>
#include <cmath>

using namespace std;

namespace LoLib {
	class Lcg {
		unsigned int current, multiplier, increment, modulus;
		
		public:
		Lcg( );
		unsigned int next( );
		int next( int min, int max ); 
    };
};