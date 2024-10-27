/*
 * Author  : Saud Zahir
 * Date    : October 27, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Bit Fields
 */

#include <stdio.h>

struct bitCard {
    unsigned int face : 4;
    unsigned int suit : 2;
    unsigned int color : 1;
};

int main(void) {
    struct bitCard card;
    card.face = 12;
    card.suit = 3;
    card.color = 1;

    printf("Face: %u\nSuit: %u\nColor: %u\n",
            card.face, card.suit, card.color);

    return 0;
}

/*
NOTE:
    C enables you to specify the number of bits in which an unsigned or
    signed integral member of a structure or union is stored. This is
    referred to as a bit field. Bit fields enable better memory utilization
    by storing data in the minimum number of bits required. Bit field members
    must be declared as int or unsigned int.

    A bit field is declared by following an unsigned or signed integral
    member name with a colon (:) and an integer constant representing the
    width of the field (i.e., the number of bits in which the member is
    stored). The constant representing the width must be an integer between
    0 and the total number of bits used to store an int on your system, inclusive.

    Member face stores values from 0 (Ace) through 12 (King)—4 bits can store
    values in the range 0–15. Member suit stores values from 0 through 3
    (0 = Hearts, 1 = Diamonds, 2 = Clubs, 3 = Spades)—2 bits can store values
    in the range 0–3. Finally, member color stores either 0 (Red) or 1 (Black)—1
    bit can store either 0 or 1.

    It’s possible to specify an unnamed bit field to be used as padding
    in the structure.

        struct Data {
            unsigned int a : 13;
            unsigned int   : 19;
            unsigned int b : 4;
        };

    uses an unnamed 19-bit field as padding—nothing can be stored in those 19 bits.
    Member b (on our 4-byte-word computer) is stored in another storage unit.
    An unnamed bit field with a zero width is used to align the next bit field
    on a new storage-unit boundary. For example, the structure definition

        struct Data {
            unsigned int a : 13;
            unsigned int   : 0;
            unsigned int b : 4;
        };

    uses an unnamed 0-bit field to skip the remaining bits (as many as there are)
    of the storage unit in which a is stored and to align b on the next storage-unit
    boundary.
*/
