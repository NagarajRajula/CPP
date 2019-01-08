#include<stdio.h>
#define st 1000
int main()
{	
	int i=4;
	double d=5.0;
	char s[st]="yo bitch";
	i+=8;
    d+=4.0;
    char s1[]="is the best place to learn and practice coding";
    snprintf(s,sizeof(s),"%s",s1);
  //printf("%s\n",s);
    // Read and save an integer, double, and String to your variables.
    
    // Print the sum of both integer variables on a new line.
    
    // Print the sum of the double variables on a new line.
    
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    
    printf("%d\n",i);
    printf("%f\n",d);
    printf("%s",s);
}
