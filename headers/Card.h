#ifndef BLACKJACK_CARD_H
#define BLACKJACK_CARD_H

#include <string>

namespace blackjack {
class Card
{
public:

enum SUIT
{
    SPADES = 1,
    HEARTS,
    CLUBS,
    DIAMONDS
};

enum VALUE
{
    TWO = 2,
    THREE,
    FOUR,
    FIVE,
    SIX,
    SEVEN,
    EIGHT,
    NINE,
    TEN,
    JACK,
    QUEEN,
    KING,
    ACE
};

enum VISIBILITY
{
    VISIBLE,
    HIDDEN
};

public:
    Card() = delete;

    Card(SUIT suit, VALUE value, VISIBILITY visibility);

    Card(const Card& other);

    Card(Card&& other);

    Card operator=(const Card& rhs);

    bool operator==(const Card& rhs);
    bool operator!=(const Card& rhs);
    bool operator<(const Card& rhs);
    bool operator<=(const Card& rhs);
    bool operator>(const Card& rhs);
    bool operator>=(const Card& rhs);

    friend std::ostream& operator<<(std::ostream& stream, const Card& card);

    std::string suit() const;
    std::string value() const;
    std::string visibility() const;

private:
    SUIT suit_;
    VALUE value_;
    VISIBILITY visibility_;
};

} // blackjack

#endif // BLACKJACK_CARD_H
