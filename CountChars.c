#include<stdio.h>
#include<string.h>

int main()
{
	char str[100];
	int occurencebig[26];
	int occurencesmall[26];
	int i;
	
	printf(" Enter a string to calculate the occurences ");
	 gets(str);
	printf(" The Input string is %s ",str);
	
	for(int i=0;i<26;i++)
	{
		//initialising each element of the array occurence to 0
		occurencebig[i]=0;
	}
	
	for(int j=0;j<26;j++)
	{
		occurencesmall[j]=0;
	}
	
	int length=strlen(str);
	
	for(int i=0;i<length;i++)
	{	
        int ch = str[i];
		//check for upper case 
		if(ch >= 65 && ch <= 90)
		{
		   occurencebig[ch-65]++;
		}	
	}
	
	for(int j=0;j<length;j++)
	{
		int chs = str[j];
		if(chs >= 97 &&  chs <= 122)
		{
		  occurencesmall[chs-97]++;
		}
	}
	
	//getting each character of the string
	for(int i=0;i<26;i++)
	{
		if(occurencebig[i]!=0)//character is present in the string
		{
			printf("\n Character:- %c Occurence:- %d",(i+65),occurencebig[i]);//(i+97) it will give character (lowercase)
		}
	}
	
	for(int j=0;j<26;j++)
	{
		if(occurencesmall[j]!=0)
		{
			printf("\n Character:- %c Occurence:- %d",(j+97),occurencesmall[j]);
		}
	}	
}

/*
Tanaya@rohit ~/CPrgms
$ ./CountChars
 Enter a string to calculate the occurences aaaAAbBBB
 The Input string is aaaAAbBBB
 Character:- A Occurence:- 2
 Character:- B Occurence:- 3
 Character:- a Occurence:- 3
 Character:- b Occurence:- 1


*/