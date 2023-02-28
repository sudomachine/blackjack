#include "Deck.h"

#include <stdexcept>

namespace blackjack {

const size_t SUIT_COUNT = 4;
const size_t VALUE_COUNT = 14;

Deck::Deck()
{
    for (size_t suit = 1; suit <= SUIT_COUNT; ++suit)
    {
        for (size_t value = 2; value <= VALUE_COUNT; ++value)
        {
            deck_.push_back(Card(static_cast<Card::SUIT>(suit),
                                 static_cast<Card::VALUE>(value),
                                 Card::VISIBILITY::HIDDEN));
        }
    }
}

size_t Deck::size() const
{
    return deck_.size();
}

Card Deck::getCard()
{
    if (deck_.empty())
        throw std::runtime_error("Empty deck");

    return *deck_.erase(deck_.begin());
}

void Deck::putCard(Card&& card, PUT_POS put_pos, size_t pos)
{
    switch (put_pos) {
    case BEGIN:
        deck_.insert(deck_.begin(), card);
        break;
    case END:
        deck_.insert(deck_.end(), card);
        break;
    case POSITION:
        if (pos > deck_.size())
            throw std::out_of_range("Deck has " + std::to_string(deck_.size()) + " card(s)");
        deck_.insert(deck_.begin() + pos, card);
        break;
    case RANDOM:

        break;
    default:
        break;
    }
}

bool Deck::empty() const
{
    return deck_.empty();
}

} // blackjack
