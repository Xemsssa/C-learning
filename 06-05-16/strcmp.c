#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char s1[100], s2[100];
	gets(s1);
	gets(s2);
	if (strcmp(s1, s2) == 0)
	{
		printf("equal");
	}
	else if (strcmp(s1, s2) < 0)
	{
		printf("s1 less than s2\n");
	}
	else
	{
		printf("s1 grater than s2\n");
	}

	return 0;
}


// int strlen(char s[])
// {
// 	int x;
// 	x = 0;
// 	while(s != '\0')
// 	{
// 		x = x + 1;
// 	}
// 	return x;
// }

// int strlen(char *s)
// {
// 	int x = 0;
// 	while (*s != '\0')
// 	{
// 		x++;
// 		s++;
// 	}
// 	return x;
// }

int strlen(char *s)
{
    int x=0;
    while (*s++)
    {
        x++;
    }
    return(x);
}

// strcpy(char s1[],char s2[])
// {
//     int x;
//     for (x=0; x<=strlen(s2); x++)
//         s1=s2;
// }

// strcpy(char s1[],char s2[])
// {
//     int x,len;
//      len=strlen(s2);
//     for (x=0; x<=len; x++)
//     {
//         s1=s2;
//     }
// }
// strcpy(char* s1, char* s2)
// {
// 	while (*s2 != '\0')
// 	{
// 		*s1 = *s2;
// 		s1++;
// 		S2++;
// 	}
// }

strcpy(char *s1,char *s2)
{
    while (*s2)
        *s1++ = *s2++;
}

while (*s1 ++ = *s2++);