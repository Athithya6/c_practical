#include<stdio.h>


char* StrStr(char *str, char *substr)
{
	  while (*str) 
	  {
		    char *Begin = str;
		    char *pattern = substr;
		    
		  
		    while (*str && *pattern && *str == *pattern) 
			{
			      str++;
			      pattern++;
		    }
		   
		    if (!*pattern)
		    	  return Begin;
		    	  
		    str = Begin + 1;	
	  }
	  return NULL;
}
 
int main()
{
	char s1 [] = "Bicycle rickshaw";
   
    printf ("Returned String 1: %s\n", StrStr(s1, "cycle"));
 
	return 0;
}
 
