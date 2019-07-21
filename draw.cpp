#include "draw.h"
#include "algorithm"
#include <random>
#include <chrono>
using namespace std;

//implement the default draw constructor
Draw::Draw() : Deck()
{
}

//implement the draw (deck) constructor
Draw::Draw(vector<Card*> deck) : Deck(deck)
{
}

//implement the draw sortDeck function
void Draw::shuffle()
{	
	//random_shuffle(deckList.begin(), deckList.end()); 
    srand(time(0)); 
 
    for (int i=0; i<deckList.size() ;i++) 
    { 
        // random for remaining positions. 
        int r = i + (rand() % (deckList.size() -i)); 
  
        swap(deckList[i], deckList[r]); 
    } 
}

//implement the draw destructor
Draw::~Draw()
{
}
