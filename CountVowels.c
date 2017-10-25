#include<stdio.h>

char str[100];

typedef struct
{
	char vowel;
	int count;
}word;
	
word wa={
	.vowel='a',
	.count=0
};
	
word we={
	.vowel='e',
	.count=0
};
	
word wi={
	.vowel='i',
	.count=0
};
	
word wo={
	.vowel='o',
	.count=0
};
	
word wu={
	.vowel='u',
	.count=0
};

void accept(void);
void counting(void);
void counting_each_vowel(void);

void accept()
{
	printf("Enter the string \n");
	gets(str);
	printf("The string is \n %s",str);
}

void counting()
{
	int nov=0;
	
	for(int i=0;i<str[i];i++)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
		{
			nov++;
		}
	}
	printf("\n Vowels count = %d  \n",nov);	
}

void counting_each_vowel(void)
{
	for(int i=0;i<str[i];i++)
	{
		if(str[i]=='a'||str[i]=='A')
		{
			wa.count=wa.count+1;
		}
		if(str[i]=='e'||str[i]=='E')
		{
			we.count=we.count+1;
		}
		if(str[i]=='i'||str[i]=='I')
		{
			wi.count=wi.count+1;
		}
		if(str[i]=='o'||str[i]=='O')
		{
			wo.count=wo.count+1;
		}
		if(str[i]=='u'||str[i]=='U')
		{
			wu.count=wu.count+1;
		}
	}
	printf("a -> %c %d \n",wa.vowel,wa.count);
	printf("e -> %c %d \n",we.vowel,we.count);
	printf("i -> %c %d \n",wi.vowel,wi.count);
	printf("o -> %c %d \n",wo.vowel,wo.count);
	printf("u -> %c %d \n",wu.vowel,wu.count);
}

int main()
{
	int choice;
	accept();
	printf(" Enter your choice \n");
	printf(" 1.Count number of vowels in string \n");
	printf(" 2.Count number of each vowels \n ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
				counting();
					break;
		case 2:
				counting_each_vowel();
					break;
		
	}
	return 0;
}

/*OUTPUT
Tanaya@rohit ~/CPrgms
$ ./CountVowels
Enter the string
aa ee i o uuuu ssdfdsi
The string is
 aa ee i o uuuu ssdfdsi Enter your choice
 1.Count number of vowels
 2.Count number of each vowels
 2
a -> a 2
e -> e 2
i -> i 2
o -> o 1
u -> u 4
*/