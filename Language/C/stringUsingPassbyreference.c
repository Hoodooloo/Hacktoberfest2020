/* String funciton using pass-by-reference */

#include <stdio.h>
void concat(char *t, char *s)
{
	while(*t != '\0')
	{
		t++;
	}
	while(*s != '\0')
	{
		*t = *s;
		t++;
		s++;
	}
	*t = '\0';
}

void copystr(char *t, char *s)
{
	while(*s != '\0')
	{
		*t = *s;
		t++;
		s++;
	}
	*t = '\0';
}

int compstr(char *s1, char *s2)
{
	while(*s1 == *s2)
	{
		if(*s1 == '\0' || *s2 == '\0')
			return(0);
		s1++;
		s2++;
	}
	if(*s1 == '\0' && *s2 == '\0')
		return(0);
	return -1;
}

void reverse(char *s)
{
   int len, i;
   char *b, *e, temp;
 
   len = length(s);
   b = s;
   e = s;
 
   for(i=0;i<len-1;i++)
      e++;
 
   for(i=0;i<len/2;i++)
   {        
      temp = *e;
      *e = *b;
      *b = temp;
 
      b++;
      e--;
   }
}
 
int length(char *p)
{
   int i = 0;
 
   while(*(p + i) != '\0')
      i++;
 
   return i;
}

void main()
{
	char s[40], r[20], t[20], a[20];
    gets(s);
    gets(r);
    printf("Enter string to copy: \n");
    gets(a);

    int result = compstr(s,r);
	if(result == 0)
	{
		printf("Both strings are same.\n");
	}
	else{
		printf("Entered strings are not same.\n");
	}

	concat(s,r);
	printf("String after concatenation: \" %s \"\n",s);

	copystr(t,a);
	printf("copied string is \"%s\"\n",t);

	reverse(a);
	printf("Reverse of the string is \"%s\".\n",a);
}
