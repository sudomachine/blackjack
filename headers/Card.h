#ifndef BLACKJACK_CARD_H
#define BLACKJACK_CARD_H

//#include <cstddef>

namespace blackjack
{
class Card
{
public:

enum class SUIT
{
    SPADES,
    HEARTS,
    CLUBS,
    DIAMONDS
};

enum class VALUE
{
    ONE = 1,
    TWO,
    THREE,
    FOUR,
    FIVE,
    SIX,
    SEVEN,
    EIGHT,
    NINE,
    TEN,
    JACK = 10,
    QUEEN = 10,
    KING = 10,
    ACE = 10
};

enum class VISIBILITY
{
    VISIBLE,
    HIDDEN
};

public:
    Card() = delete;

    Card(const Card& rhs);

    Card(SUIT suit, VALUE value, VISIBILITY visibility);

    Card operator=(const Card& rhs);

public:
    SUIT suit_;
    VALUE value_;
    VISIBILITY visibility_;
};

} // blackjack

#endif // BLACKJACK_CARD_H
