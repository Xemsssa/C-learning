#include <std0io.h> //forget library
#include <cs50.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{

	unsigned char block[512];
	char name[8];
	int f = 0;

	FILE* img = fopen("card.raw", "r");//forget ""

	if (img == NULL)
	{
		printf("ERROR: Cant open the card.raw\n");
		return 1;
	}

	FILE* photo == NULL;

	while (fread(&block, sizeof(block), 1, img))
	{
		//&block -> block[0]
		if (block[0] == 0xff && block[1] == 0xd8 && block[2] == 0xff && (block[3] == 0xe0 || block[3] == 0xe1)
		{
			if (photo != NULL)
			{
				fclose(photo);
			}
			sprintf(name, "%03d.jpg", f);//add 0

			photo = fopen(name, "w");
			f++;
		}

		if (photo != NULL)
		{
			fwrite(&block, sizeof(block), 1, photo);//sizeof(&block)
		}
	}

	if (photo != NULL)
	{
		fclose(photo);
	}

	fclose(img);
	return 0;
}