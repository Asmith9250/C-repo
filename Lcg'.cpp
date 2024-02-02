#include <iostream>
#include <bitset>
#include <cmath>

using namespace std;

namespace LoLib {
	class Lcg {
		unsigned int current, multiplier, increment, modulus;
		
		public:

		Lcg( ) {
			current = (unsigned int)time( 0 );
			multiplier = 75;
			increment = 74;
			modulus = (unsigned int)(pow( 2, 16 ) + 1);
		}
		
		unsigned int next( ) {
			current = (multiplier * current + increment) % modulus;
			return current;
		}
		
		int next( int min, int max ) {
			current = (multiplier * current + increment) % modulus;
			double scaled = (double)current / (double)modulus * (max - min) + min;
			return int( scaled );
		}
    };
};

int main( ) {
    LoLib::Lcg randy;

    for( int i = 0; i < 10; ++i ) cout << randy.next( -10, 10 ) << endl;

    return 0;
}