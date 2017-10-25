#include<stdio.h>
#include<string.h> 
#define MAX 50 // Maximum string size


int main()
{
    char str[MAX];
    char currstr[1] ="";
    int occ, i;
	char opstr[MAX]="";
	char tempstr[MAX];
	//occ=i=0;

    printf("Enter any string : ");
    scanf("%s",str);

    while(str[i]!='\0')
    {	
	    if(str[i] == currstr[1])
        {
            occ++;
        }
        else
        {
			//new char or entering first time  
            if(occ != 0)
            {
		      sprintf(tempstr,"%c%i",currstr[1],occ);//store output on tempstr array
              strcat(opstr,tempstr);
            }
            currstr[1] = str[i];
            occ = 1;
        }      
		i++;
    }
	sprintf(tempstr,"%c%i",currstr[1],occ);
    strcat(opstr,tempstr);
    puts(opstr);
	
	// strncpy (dest,src,size) used to combine string and int input
	
    return 0;
}