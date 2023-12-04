/*
Little Petya loves presents. His mum bought him two strings of the same size for his birthday. The strings consist of uppercase and lowercase Latin letters. Now Petya wants to compare those two strings lexicographically. The letters' case does not matter, that is an uppercase letter is considered equivalent to the corresponding lowercase letter. Help Petya perform the comparison.

Input
Each of the first two lines contains a bought string. The strings' lengths range from 1 to 100 inclusive. It is guaranteed that the strings are of the same length and also consist of uppercase and lowercase Latin letters.

Output
If the first string is less than the second one, print "-1". If the second string is less than the first one, print "1". If the strings are equal, print "0". Note that the letters' case is not taken into consideration when the strings are compared.

Examples
inputCopy
aaaa
aaaA
outputCopy
0
inputCopy
abs
Abz
outputCopy
-1
inputCopy
abcdefg
AbCdEfF
outputCopy
1
Note
If you want more formal information about the lexicographical order (also known as the "dictionary order" or "alphabetical order"), you can visit the following site:

*/

#include<stdio.h>
#include<string.h>
int main()
{
    int i,c=0,d;
    char a[200],b[200];
    scanf("%s",a);
    scanf("%s",b);
    strlwr(a);
    strlwr(b);
   /* d=strlen(a);
    for(i=0;i<a[i]!=0;i++)
    {
        if(a[i]>b[i])
        {
            printf("1");
            break;
        }
        else if(a[i]<b[i])
        {
            printf("-1");
            break;
        }
        else{
            c++;
        }
    }
    if(c==d)
    {
        printf("0");
    }*/
 
    d=strcmp(a,b);
    printf("%d",d);
}
