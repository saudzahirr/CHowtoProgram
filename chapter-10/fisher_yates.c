/*
 * Author  : Saud Zahir
 * Date    : October 16, 2024
 * Contact : m.saud.zahir@gmail.com
 * 
 * 
 * Topic: Fisher-Yates Algorithm
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CARDS 52
#define FACES 13

// card structure definition
struct card {
    const char *face; // define pointer face
    const char *suit; // define pointer suit
};

typedef struct card Card; // new type name for struct card

// prototypes
void fillDeck(Card *const wDeck,
              const char *wFace[],
              const char *wSuit[]);
void fisher_yates_shuffle(Card *const wDeck);
void deal(const Card *const wDeck);

int main(void) {
    Card deck[CARDS]; // define array of Cards

    // initialize array of pointers
    const char *face[] = {"Ace", "Deuce", "Three", "Four", "Five",
                          "Six", "Seven", "Eight", "Nine", "Ten",
                          "Jack", "Queen", "King"};
    // initialize array of pointers
    const char *suit[] = {"Hearts", "Diamonds", "Clubs", "Spades"};

    srand(time(NULL));          // randomize
    fillDeck(deck, face, suit); // load the deck with Cards
    fisher_yates_shuffle(deck);              // put Cards in random order
    deal(deck);                 // deal all 52 Cards
}

// place strings into Card structures
void fillDeck(Card *const wDeck,
              const char *wFace[],
              const char *wSuit[]) {
    // loop through wDeck
    for (size_t i = 0; i < CARDS; ++i) {
        wDeck[i].face = wFace[i % FACES];
        wDeck[i].suit = wSuit[i / FACES];
    }
}

// shuffle cards
void fisher_yates_shuffle(Card *const wDeck) {
    // loop through wDeck randomly swapping Cards
    for (size_t i = 0; i < CARDS; ++i) {
        // size_t j = rand() % CARDS;
        size_t j = rand() % (i + 1);
        Card temp = wDeck[i];
        wDeck[i] = wDeck[j];
        wDeck[j] = temp;
    }
}

// deal cards
void deal(const Card *const wDeck) {
    // loop through wDeck
    for (size_t i = 0; i < CARDS; ++i) {
        printf("%5s of %-8s%s", wDeck[i].face,
                wDeck[i].suit, (i + 1) % 4 ? " " : "\n");
    }
}
