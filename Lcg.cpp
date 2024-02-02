#include <iostream>
#include <bitset>
#include <cmath>
#include "Lcg.hpp"

namespace LoLib {
	
	Lcg::Lcg( ) {
		current = (unsigned int)time( 0 );
		multiplier = 75;
		increment = 74;
		modulus = (unsigned int)(pow( 2, 16 ) + 1);
	}
	
	unsigned int Lcg::next( ) {
		current = (multiplier * current + increment) % modulus;
		return current;
	}
	
	int Lcg::next( int min, int max ) {
		current = (multiplier * current + increment) % modulus;
		double scaled = (double)current / (double)modulus * (max - min) + min;
		return int( scaled );
	}
};