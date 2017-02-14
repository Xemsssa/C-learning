/**
 * fifteen.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Implements Game of Fifteen (generalized to d x d).
 *
 * Usage: fifteen d
 *
 * whereby the board's dimensions are to be d x d,
 * where d must be in [DIM_MIN,DIM_MAX]
 *
 * Note that usleep is obsolete, but it offers more granularity than
 * sleep and is simpler to use than nanosleep; `man usleep` for more.
 */
 
#define _XOPEN_SOURCE 500

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// constants
#define DIM_MIN 3
#define DIM_MAX 9

// board
int board[DIM_MAX][DIM_MAX];

// dimensions
int d;

int zero_i = d - 1;
int zero_j = d - 1;
int zero[zero_i][zero_j];   //ask

// prototypes
void clear(void);
void greet(void);
void init(void);
void draw(void);
bool move(int tile);
bool search(int tile);
bool check(int a, int b);   //ask
bool swap(int a, int b);    //ask
bool won(void);

int main(int argc, string argv[])
{
    // ensure proper usage
    if (argc != 2)
    {
        printf("Usage: fifteen d\n");
        return 1;
    }

    // ensure valid dimensions
    d = atoi(argv[1]);
    if (d < DIM_MIN || d > DIM_MAX)
    {
        printf("Board must be between %i x %i and %i x %i, inclusive.\n",
            DIM_MIN, DIM_MIN, DIM_MAX, DIM_MAX);
        return 2;
    }

    // open log
    FILE* file = fopen("log.txt", "w");
    if (file == NULL)
    {
        return 3;
    }

    // greet user with instructions
    greet();

    // initialize the board
    init();

    // accept moves until game is won
    while (true)
    {
        // clear the screen
        clear();

        // draw the current state of the board
        draw();

        // log the current state of the board (for testing)
        for (int i = 0; i < d; i++)
        {
            for (int j = 0; j < d; j++)
            {
                fprintf(file, "%i", board[i][j]);
                if (j < d - 1)
                {
                    fprintf(file, "|");
                }
            }
            fprintf(file, "\n");
        }
        fflush(file);

        // check for win
        if (won())
        {
            printf("ftw!\n");
            break;
        }

        // prompt for move
        printf("Tile to move: ");
        int tile = GetInt();
        
        // quit if user inputs 0 (for testing)
        if (tile == 0)
        {
            break;
        }

        // log move (for testing)
        fprintf(file, "%i\n", tile);
        fflush(file);

        // move if possible, else report illegality
        if (!move(tile))
        {
            printf("\nIllegal move.\n");
            usleep(500000);
        }

        // sleep thread for animation's sake
        usleep(500000);
    }
    
    // close log
    fclose(file);

    // success
    return 0;
}

/**
 * Clears screen using ANSI escape sequences.
 */
void clear(void)
{
    printf("\033[2J");
    printf("\033[%d;%dH", 0, 0);
}

/**
 * Greets player.
 */
void greet(void)
{
    clear();
    printf("WELCOME TO GAME OF FIFTEEN\n");
    usleep(2000000);
}

/**
 * Initializes the game's board with tiles numbered 1 through d*d - 1
 * (i.e., fills 2D array with values but does not actually print them).  
 */
void init(void)
{
    // TODO
    int num = d * d - 1;
    int i, j;
    for (i = 0; i < d; i++ )
    {
        for(j = 0; j < d; j++ )
        {
            board[i][j] = num;
            num--;
            
            if (d % 2 == 0)
            {
                board[d - 1][d - 2] = 2;
                board[d - 1][d - 3] = 1;
            }
        }
    }
}

/**
 * Prints the board in its current state.
 */
void draw(void)
{
    // TODO
    for (int i = 0; i < d; i++)
    {
        for (int j = 0; j < d; j++)
        {
            if (board[i][j] != 0)
            {
                printf(" %2i ", board[i][j]);
                if (j < d - 1)
                {
                    printf(" | ");
                }
                 else 
                {
                    printf("\n");
                }
            }
            else
            {
                printf(" _ ");
            }
        }
    }
    printf("\n");
}

/**
 * If tile borders empty space, moves tile and returns true, else
 * returns false. 
 */
bool move(int tile)
{
    // TODO
    search(int tile);
    
    if (check(int x, int y))
    {
        swap(int x, int y);
    }

    else false;
}

int search(int a)
{

    for (int i = 0; i < d; ++i)
    {
        for (int j = 0; j < d; ++j)
        {
            if (board[i][j] == a)
            {
                //searchTile[2] = tile;
                x = i;
                y = j;
            }
        }
    }
    return board[x][y];
    //printf("%i\n", board[x][y]);
    //return x;
    //return y;
    //printf(" x = %i and y = %i\n", x, y);
}

bool check(int a,  int b)
{
    if ( a == zero_i && b - 1 == zero_j )
    {
        /* move - swap to left */
       return true; 
    }
    else if ( a == zero_i && b + 1 == zero_j )
    {
        /* move - swap to the right */
        return true;
    }
    else if ( a - 1 == zero_i && b == zero_j )
    {
        /* move - swap to the up */
        return true;
    }
    else if ( a + 1 == zero_i && b ==  zero_j)
    {
        /* move swap to the down*/
        return true;
    }
    else
    {
    return false;
    }
}

bool swap(int a,  int b)
    {
    // temp = a; 
    // a = b;
    // b = temp;

    int temp_i = x;
    int temp_j = y;
    int temp = board[x][y];

    board[x][y] = zero[zero_i][zero_j];
    x = zero_i;
    y = zero_j;

    zero[zero_i][zero_j] = temp;
    zero_i = temp_i;
    zero_j = temp_j;

    //printf("%i", );
    return true;  
    }

/**
 * Returns true if game is won (i.e., board is in winning configuration), 
 * else false.
 */
bool won(void)
{
    // TODO
    int count = 1;

    if (count != d)
        {
        for (int i = 0; i < d * d - 1; ++i)
        {
            for (int j = 0; j < d; ++j)
            {
               if (board[i][j] == count)
                {
                    count++;
                } 
            }
        }
           return true;
        }   
    else
    {
        return false;
    }
    
}

