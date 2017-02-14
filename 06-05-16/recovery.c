/**
 * recover.c
 *
 * Computer Science 50
 * Problem Set 4
 *
 * Recovers JPEGs from a forensic image.
 */
#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    // TODO
    FILE* file;
    int f = 0;
    unsigned char block[512];
    bool isFile = false;
    char name [8];

    //buffer:
    
    //open file
    file = fopen("card.raw", "r");

    if (!file)//(file == NULL)
    {
        printf("ERROR: Cant open card.raw\n");
        return 1;
    }
    //FILE* img =  fopen(title, "a");
    FILE* img =  fopen(title, "a");
    //if (fread(&) == 1);//check for EOF
    //fgetc();
    while (fread(&block, sizeof(block), 1, inptr));//(file == EOF ) //write untill eof
    {
        // find start (0xff 0xd8 0xff) and read 512 
        if (&block == 0xff && &block == 0xd8 && &block == 0xff && ( &block == 0xe0 || &block == 0xe1 ))
        {
            //check if file already create
            if(isFile == true)
            {
                //if create close current jpg and open new one
                fclose(img);
                //create and write name 
                //sprintf();
                sprintf(title, "%3d.jpg", f);
                img = fopen(name, "w");
                isFile = true;
                //return number of size (sizeof) were be read
                f++; 
            }
            else
            {   
                //create and write name 
                //sprintf();
                sprintf(title, "%3d.jpg", f);
                img = fopen(name, "w");
                isFile = true;
                //or return what read succesfuly 
                f++;
            }
        }
        //check if buffer created
        //if not write to same  buffer file
        if (isFile == true)
        {   
            //write file
            fwrite(&block, sizeof(block), 1, outptr);  

        }
    }
    //if not dont have jpg dont write
    //end of file&
    fclose(img);
    fclose(file);
}
