#include "Card.h"

using namespace blackjack;


Card::Card(const Card& rhs)
{
    suit_ = rhs.suit_;
    value_ = rhs.value_;
    visibility_ = rhs.visibility_;
}

Card::Card(SUIT suit, VALUE value, VISIBILITY visibility):
    suit_(suit), value_(value), visibility_(visibility)
{
}

Card Card::operator=(const Card& rhs)
{
    return Card(rhs.suit_, rhs.value_, rhs.visibility_);
}
