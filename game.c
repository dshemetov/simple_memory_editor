/*!
 * *    game.c: A game that detracts one and prints the score every time we hit enter.
 * */
#include <stdio.h>

int main( int argc, char** argv )
{
    int score = 9000;

	while( 1 )
    {
	    getchar( );
    	printf( "score: %d", --score );
	}

    return 0;
}
