
//read an integet one byte at time 

union intParts
{
	int theInt;
	char bytes[sizeof(int)];
};

// look each byte individually

union intParts parts;

parts.theInt = 5968145;

printf("The int is %i\nThe bytes are[%i, %i, %i, %i]\n",
	parts.theInt, parts.bytes[0], parts.bytes[1], parts.bytes[2],parts.bytes[3]);

// vs

int theInt = parts.theInt;
printf("The int is %i\nThe bytes are[%i, %i, %i, %i]\n",
theInt, *((char*)&theInt + 0), *((char*)&theInt + 1), *((char*)&theInt + 2), *((char*)&theInt + 3);


// or with array syntax

printf("The int is %i\nThe bytes are[%i, %i, %i, %i]\n",
theInt, ((char*)&theInt[0], ((char*)&theInt[1], ((char*)&theInt[2], ((char*)&theInt[3];


// number struct

struct operator
	{
		int intNum;
		float floarNum;
		int type;
		double doubleNum;
	};

// use this

struct operator {
	int type;
	union {
		int intNum;
		float floarNum;
		double doubleNum;
	}types;
};	

//

operator op;
op.type = 0; // int better as an enum
op.types.intNum = 352;

// with out name

struct operator
{
	int type;
	union {
		int intNum;
		float floarNum;
		double doubleNum;
	}; // no name!
};

operator op;
op.type = 0; //int
// intNum
op.intNum = 352;

//for 

union Coins {
	struct 
	{
		int quarter;
		int dime;
		int nikel;
		int penny;
	}; // anonymous struct

	int Coins[4];
}
union Coins change;

for (int i = 0; i < sizeof(change) / sizeof(int); ++i)
{
	/* code */
	scanf("%i", change.coins + 1); // BAD CODE
}

printf("There are %i quaters, %i dimes, %i nikels, and %i pennies\n", change.quarter, change.dime, change nikel, change penny);


