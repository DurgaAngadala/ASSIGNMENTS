/* Write a C program to concatenate two strings and find length of a new string.*/

#include <stdio.h>
#include <string.h>
 
void stringconcatenate(char *s1,char *s2) //using function 
{
	int i;
	int j=strlen(s2); //coverting char to strlengh 
	
    for(i=0;s2[i];i++)   //for iteration loop
    {
    	s1[i+j]=s2[i]; //adding the one length to another 
	}
	s1[i+j]='\0';
    
 	
}
int main()
{
 
    char s1[1000],s2[1000];   
    int length ;
    printf("Enter  string1: ");
    gets(s1);
    printf("Enter  string2: ");
    gets(s2);
    stringconcatenate(s1,s2);
    length = strlen(s1); //calculate the length by lenfunction 
    printf("combined two strings ='%s'\n",s1);
    printf("length of the string  ='%s'\n",s1);
    return 0;
    
}