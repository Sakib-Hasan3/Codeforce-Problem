/*
Ternary numeric notation is quite popular in Berland. To telegraph the ternary number the Borze alphabet is used. Digit 0 is transmitted as «.», 1 as «-.» and 2 as «--». You are to decode the Borze code, i.e. to find out the ternary number given its representation in Borze alphabet.

Input
The first line contains a number in Borze code. The length of the string is between 1 and 200 characters. It's guaranteed that the given string is a valid Borze code of some ternary number (this number can have leading zeroes).

Output
Output the decoded ternary number. It can have leading zeroes.

Examples
inputCopy
.-.--
outputCopy
012
inputCopy
--.
outputCopy
20
inputCopy
-..-.--
outputCopy
1012
*/

#include<stdio.h>
int main()
{
    int i;
    char a[201];
    scanf("%s",&a);
    for(i=0;a[i]!=0;i++)
    {
        if(a[i]=='.')
        {
            printf("0");
        }
        else if(a[i]=='-' && a[i+1]=='.')
        {
            printf("1");
            i++;
        }
        else if(a[i]=='-' && a[i+1]=='-')
        {
            printf("2");
            i++;
        }
    }
 
}
