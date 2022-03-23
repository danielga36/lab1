#include<stdio.h>

int str_compare(char[],char[]);

int main()
{
char str1[10],str2[10];
int comp_res;

                // Accept two strings to compare
    printf("\nEnter two strings for string compare :");
    scanf("%s %s",str1,str2);                      
        
    comp_res=str_compare(str1,str2);  //invoking 
    if (comp_res < 0)
    {
    printf("String \"%s\" is less than string \"%s\"\n",str1,str2);
    }
    else if (comp_res == 0)
    {
    printf("String \"%s\" is same as string \"%s\"\n",str1,str2);
    }
    else
    {
    printf("String \"%s\" is greater than string \"%s\"\n", str1,str2);
    }

}

// user defind function for compare 
int str_compare(char s1[], char s2[])
    {
        int i,j;
        for(i=0,j=0;(s1[i] != '\0' && s2[j] != '\0');i++,j++)// begins for loop upto null character 
        {
            if (s1[i] != s2[j]) 
            {
            return (s1[i] - s2[j]);  //returns this if strings are not equal
            }
        }
            if (s1[i] == '\0' && s2[j] == '\0')
            {
            return 0;  //
            }
        else if(s1[i] == '\0' || s2[i] == '\0')
        {
        return (s1[i] - s2[i]);
        }
    }