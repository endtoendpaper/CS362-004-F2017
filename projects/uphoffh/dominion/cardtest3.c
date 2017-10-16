#include<stdio.h>
#include<stdlib.h>
#include <assert.h>
#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"

int compare_int( const void* a, const void* b )
{
    if( *(int*)a == *(int*)b ) return 0;
    return *(int*)a < *(int*)b ? -1 : 1;
} 
 
int main() { 
	
	int seed = 1000;
	int numPlayers = 2;
	
	struct gameState game;
	 
	int k[10] = {adventurer, feast, village, minion, mine, cutpurse, sea_hag, tribute, smithy, council_room};
	
	// initialize a game state and player cards
	initializeGame(numPlayers, k, seed, &game);
	
	printf("--------TESTING Council Room card-------------\n\n");
	//If you play it as your action, you can draw 4 extra cards from your draw pile. 
	//You also get one extra buy. 
	//All other players get one more card from their draw pile to play with once it is their turn.
	
	
	
	//printf("Size of deck before shuffle = %zu, expected = %d\n", sizeof(before)/sizeof(before[0]), 10);
	//assert(before[9] == after[9]);
	
	printf("\n--------SUCCESS: Testing complete-------------\n");
  
    return 0;
}
 