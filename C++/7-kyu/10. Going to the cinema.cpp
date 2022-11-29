#include <cmath>

class Movie
{
public:
    static int movie(int card, int ticket, double perc)
    {
      int ticketPrice = 0;
      double cardPrice = card;
      int iterator = 0;
      
      while(ceil(cardPrice) >= ticketPrice)
      {
        iterator++;
        ticketPrice += ticket;
        cardPrice += ticket * pow(perc, iterator);
      }
      
      return iterator;
    }
};
