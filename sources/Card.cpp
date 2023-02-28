#include "Card.h"

#include <string>
#include <ostream>

namespace blackjack {

Card::Card(const Card& other)
{
    suit_ = other.suit_;
    value_ = other.value_;
    visibility_ = other.visibility_;
}

Card::Card(SUIT suit, VALUE value, VISIBILITY visibility):
    suit_(suit), value_(value), visibility_(visibility)
{
}

Card Card::operator=(const Card& rhs)
{
    return Card(rhs.suit_, rhs.value_, rhs.visibility_);
}

Card::Card(Card&& other)
{
    suit_ = other.suit_;
    value_ = other.value_;
    visibility_ = other.visibility_;
}

bool Card::operator==(const Card& rhs)
{
    if (this == &rhs)
        return true;

    if (this->value_ < TEN && rhs.value_ < TEN)
    {
        if (this->value_ == rhs.value_)
            return true;
        return false;
    }
    else if (this->value_ >= TEN && rhs.value_ >= TEN)
        return true;
    else
        return false;
}

bool Card::operator!=(const Card& rhs)
{
    return !(*this == rhs);
}

bool Card::operator<(const Card& rhs)
{
    if (this == &rhs)
        return false;

    if (this->value_ < TEN && rhs.value_ < TEN)
    {
        if (this->value_ < rhs.value_)
            return true;
        return false;
    }
    else if (this->value_ >= TEN && rhs.value_ >= TEN)
        return false;
    else if (this->value_ < rhs.value_)
        return true;
    else
        return false;
}

bool Card::operator<=(const Card& rhs)
{
    if (*this == rhs || *this < rhs)
        return true;
    return false;
}

bool Card::operator>(const Card& rhs)
{
    if (*this <= rhs)
        return false;
    return true;
}

bool Card::operator>=(const Card& rhs)
{
    if (*this == rhs || *this > rhs)
        return true;
    return false;
}

std::ostream& operator<<(std::ostream& stream, const Card& card)
{
    stream << card.value() << " " << card.suit();
    return stream;
}

std::string Card::suit() const
{
    switch(suit_)
    {
    case SPADES: return "SPADES";
    case HEARTS: return "HEARTS";
    case CLUBS: return "CLUBS";
    case DIAMONDS: return "DIAMONDS";

    default: return "unknown";
    }
}

std::string Card::value() const
{
    switch(value_)
    {
    case TWO: return "TWO";
    case THREE: return "THREE";
    case FOUR: return "FOUR";
    case FIVE: return "FIVE";
    case SIX: return "SIX";
    case SEVEN: return "SEVEN";
    case EIGHT: return "EIGHT";
    case NINE: return "NINE";
    case TEN: return "TEN";
    case JACK: return "JACK";
    case QUEEN: return "QUEEN";
    case KING: return "KING";
    case ACE: return "ACE";

    default: return "unknown";
    }
}

std::string Card::visibility() const
{
    switch(visibility_)
    {
    case VISIBLE: return "VISIBLE";
    case HIDDEN: return "HIDDEN";

    default: return "unknown";
    }
}

} // blackjack
