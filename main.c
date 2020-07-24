/*
 * This program is made to evaluate face values.
 * Released under Vegas Public License.
 * (c)2014 The College Blackjack Team.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{

    char cardName[3];
    puts("Enter the card name: ");
    scanf("%2s", cardName);
    int val = 0;

    switch(cardName[0])
    {
    case 'K':
    case 'Q':
    case 'J':
        val = 10;
        break;
    case 'A':
        val = 11;
        break;
    default:
        val = atoi(cardName);
        break;
    }

    if(val < 7 && val > 2)
        puts("The count has gone up.");
    else if( val == 10 )
        puts("The count has gone down.");

    return 0;
}
