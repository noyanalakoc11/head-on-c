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
    int count = 0;

    while(cardName[0] != 'X')
    {
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
        case 'X':
            continue;
        default:
            val = atoi(cardName);
            if(val < 1 || val > 10)
            {
                puts("I don't understand that value!");
                continue;
            }
        }
        if(val < 7 && val > 2)
            count++;
        else if( val == 10 )
            count--;
        printf("Current count: %d\n", count);
    }


    return 0;
}
