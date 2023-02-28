//#include "Game.h"
//#include "Card.h"
#include "Deck.h"

#include <iostream>

using namespace blackjack;

void equal(Card c1, Card c2);
void smaller(Card c1, Card c2);
void smallerOrEqual(Card c1, Card c2);
void bigger(Card c1, Card c2);
void biggerOrEqual(Card c1, Card c2);


int main()
{
    Deck deck;

    std::cout << "deck size " << deck.size() << std::endl;

    Card c1 = deck.getCard();

    std::cout << "deck size " << deck.size() << std::endl;
    std::cout << "card 1 " << c1 << std::endl;

    return 0;
}














void equal(Card c1, Card c2)
{
    char answer[2]; answer[1] = '=';
    answer[0] = (c1 != c2) ? '!' : '=';
    std::cout << c1.value() << " " << c1.suit() ;
    std::cout << " " << answer[0] << answer[1] << " ";
    std::cout << c2.value() << " " << c2.suit()  << std::endl;
}

void smaller(Card c1, Card c2)
{
    char answer = (c1 < c2) ? '<' : '_';
    std::cout << c1.value() << " " << c1.suit() ;
    std::cout << " " << answer << " ";
    std::cout << c2.value() << " " << c2.suit()  << std::endl;
}

void smallerOrEqual(Card c1, Card c2)
{
    char answer[2];
    answer[0] = (c1 <= c2) ? '<' : '_';
    answer[1] = (c1 <= c2) ? '=' : '_';
    std::cout << c1.value() << " " << c1.suit() ;
    std::cout << " " << answer[0] << answer[1] << " ";
    std::cout << c2.value() << " " << c2.suit()  << std::endl;
}

void bigger(Card c1, Card c2)
{
    char answer = (c1 > c2) ? '>' : '_';
    std::cout << c1.value() << " " << c1.suit() ;
    std::cout << " " << answer << " ";
    std::cout << c2.value() << " " << c2.suit()  << std::endl;
}

void biggerOrEqual(Card c1, Card c2)
{
    char answer[2];
    answer[0] = (c1 >= c2) ? '>' : '_';
    answer[1] = (c1 >= c2) ? '=' : '_';
    std::cout << c1.value() << " " << c1.suit() ;
    std::cout << " " << answer[0] << answer[1] << " ";
    std::cout << c2.value() << " " << c2.suit()  << std::endl;
}
