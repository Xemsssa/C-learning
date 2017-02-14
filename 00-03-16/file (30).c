#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

int main (void)
{
    char card_name[3];
    //int count = 0;
    
    while ( card_name[0] == 'X')
    {
    
    puts("Enter name of card: ");
    scanf("%2s", card_name);
    int val = 0;
    switch (card_name[0]) {
    	case'K':
        case'Q':
        case'J':
        	val = 10;
        	break;
        case'A':
        	val = 11;
        	break;
        case'X':
            break;
        	
        default:
        	val = atoi(card_name);
        	if ( card_name[0] < 1 && card_name[0] > 11 )
        	{
        	    continue;
        	}
    }
    } 
}
    // if (card_name[0] == 'k') 
    // {
    //     val = 10;
    // }
    // else if (card_name[0] == 'Q')
    // {
    //     val = 10;
    // }
    // else if (card_name[0] == 'J')
    // {
    //     val = 10;
    // }
    // else if (card_name[0] == 'A')
    // {
    //     val = 11;
    // }
    // else 
    // {
    //     val = atoi(card_name);
    // }
    
    // if ((val >= 3) && (val <= 6))
    // {
    //     printf("Count Up\n");
    //     //count++;
    // }
    
    // else if (val == 10)
    // {
    //     printf("Count Down\n");
    //     //count--;
    // }
    
    // //printf("Value of card: %i\n", val);
    
    // return 0;
    