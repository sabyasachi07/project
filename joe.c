#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
       FILE *f,*c;
      char ch,line[200],a;
      int i=0,j=0;
      system("cd");

        c=fopen( "math.txt","r");
        f=fopen("mac.txt","w+");
 
         
    
    int index = 0;
   

    while ((ch = fgetc(c)) != EOF)
    {
        if (ch != '\n')
        {
            line[index] = ch;
            ++index;
        }

        else
        {
            line[index] = '\0';

            if (index >= 20)
            {
                printf("%s\n", line);
            }
            index = 0;
        }
    }

    fclose(c);
    return 0;
}       
                

     

