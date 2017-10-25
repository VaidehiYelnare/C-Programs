#include<stdio.h>
#include<ctype.h>

/*void reverse(char *,char *);
char *reversing_each_word(char *);*/

void reverse(char* p,char *q)
{
	char temp;
	
	while(p<q)
	{
		temp=*p;
		*p++=*q;
		*q--=temp;		
	}
}

char *reversing_each_word(char *str)
{
	char *p;
	char *q=str;
	while(str)
	{
		p=q;
		while(*p && !isalnum(*p))
		{
			p++;
		}
		
		q=p;
		while(*q && isalnum(*q))
		{
			q++;
		}
	if(*p)
	{
			reverse(p,q-1);
	}
	return str;
   }
}

int main()
{
	char str[]="This is the string to modify";
	printf("INPUT STRING:- \n");
	printf("%s",str);
	printf("\n \n");
	printf("MODIFIED STRING:- \n");
	printf("%s\n", reversing_each_word(str));    
	
	return 0;
}
/*OUTPUT


INPUT STRING:-
This is the string to modify

MODIFIED STRING:-
sihT is the string to modify
*/