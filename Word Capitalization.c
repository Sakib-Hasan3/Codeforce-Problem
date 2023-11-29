/*
Capitalization is writing a word with its first letter as a capital letter. Your task is to capitalize the given word.

Note, that during capitalization all the letters except the first one remains unchanged.

Input
A single line contains a non-empty word. This word consists of lowercase and uppercase English letters. The length of the word will not exceed 103.

Output
Output the given word after capitalization.

Examples

input
ApPLe
output
ApPLe

input
konjac
output
Konjac
*/
#include<stdio.h>
int main()
{
    char a[1001],i,b,c;
    scanf("%s",&a);
     if(b=islower(a[0]))
        {if(b=1)
        a[0]=toupper(a[0]);
        }
    printf("%s",a);
}
