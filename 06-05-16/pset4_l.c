
// recover.c

// input raw image 

// traking opening 

// write to buffer

// usn char buffer

// sprint to file 

// store and name 

// free memory 

// close file



open file

int f = 0;

uns char block[512];

bool isFile = false;

char name [8];

file* image = fopen;

photo == NULL
	error;

	file* photo = fopen

while fread(&block, sizeof(block), 1, inptr)
	{
		if (&block == 0xff && &block == 0xd8 

		if newfile(block)
		check esli est file

		imya file
		if (isFile)
			fclose(photo);
			sprintf(name, "%3d.jpg", f);

		if (photo == NULL)
		{
			return 1;
		}
		isFile = true;
		f++;

	}

	if (isFile)

bool 

check na whozdenie 0x0


open card file
repeat untill end of card
{
	read 512 to buffer
	start new jpg
	{
		//if  find start (0xff 0xd8 0xff) and read 512 
		yes
		{
			sprintf
			//close old
			//open new one
		}
		no
		{
			//continue to file
		}
	}	
	already found a jpg
	{
		no
		{
			// find start (0xff 0xd8 0xff) and read 512
			//continue search
		}
		yes
		{
			//write open file to folder
		}
	}	
}
close last jpg
close card file	