
#include <cstdlib>
#include <ctime>
#include "DeckOfCards.h"
using namespace std;

DeckOfCards::DeckOfCards()
{
   currentCard = 0;
   for ( int i = 0; i < Card::totalFaces * Card::totalSuits; ++i )
   {
      Card card( i % Card::totalFaces, i / Card::totalFaces );
      deck.push_back( card );
   }

   srand( time( 0 ) );
}

void DeckOfCards::shuffle()
{

   currentCard = 0;
   for ( unsigned first = 0; first < deck.size(); ++first )
   {

      unsigned second = rand() % deck.size();

      Card temp = deck[ first ];
      deck[ first ] = deck[ second ];
      deck[ second ] = temp;
   }
}

Card DeckOfCards::dealCard()
{
   return deck[ currentCard++ ];
}

bool DeckOfCards::moreCards() const
{
   return currentCard < deck.size();
}
