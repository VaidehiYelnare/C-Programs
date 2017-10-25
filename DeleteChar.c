#include<stdio.h>
#include<string.h>

void deleting(char str[],char);


char str[100];
char delch,currch;

int main()
{
	printf("Enter the string \n");
	gets(str);
	printf("\n The string is:- %s \n",str);
	
	printf("Enter the character to delete \n");
	 scanf("%c",&delch);
	 
	 deleting(str,delch);
		return 0;

}

void deleting(char str[],char delch)
{
	char newstr[100]="";//if not given shows junk value at the end
	int i,j;
	int length=strlen(str);
	
	for(int i=0;i<length;i++)
	{	
		if(delch!=str[i])
		{
			currch=str[i];
			newstr[j]=currch;
			j++;			
		}
    }
	printf("\n The modified string is:- %s",newstr);
}