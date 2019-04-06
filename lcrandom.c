// Gabriel de Souza Barreto - GRR 20166812

#include "lcrandom.h"

long _A = 40692, _C = 127, _M = 10000000, xi = 0;

long lcrandom ()
{
	return xi = ( _A * xi + _C ) % _M ;
}

void lcrandom_seed (long s)
{
	xi = s;
}

long lcrandom_max ()
{
	return (_M-1);
}

void lcrandom_parms ( long A, long C, long M)
{
	_A = A;
	_C = C;
	_M = M;
}
