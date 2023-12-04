/*

Mad scientist Mike entertains himself by arranging rows of dominoes. He doesn't need dominoes, though: he uses rectangular magnets instead. Each magnet has two poles, positive (a "plus") and negative (a "minus"). If two magnets are put together at a close distance, then the like poles will repel each other and the opposite poles will attract each other.

Mike starts by laying one magnet horizontally on the table. During each following step Mike adds one more magnet horizontally to the right end of the row. Depending on how Mike puts the magnet on the table, it is either attracted to the previous one (forming a group of multiple magnets linked together) or repelled by it (then Mike lays this magnet at some distance to the right from the previous one). We assume that a sole magnet not linked to others forms a group of its own.


Mike arranged multiple magnets in a row. Determine the number of groups that the magnets formed.

Input
The first line of the input contains an integer n (1 ≤ n ≤ 100000) — the number of magnets. Then n lines follow. The i-th line (1 ≤ i ≤ n) contains either characters "01", if Mike put the i-th magnet in the "plus-minus" position, or characters "10", if Mike put the magnet in the "minus-plus" position.

Output
On the single line of the output print the number of groups of magnets.

Examples
inputCopy
6
10
10
10
01
10
10
outputCopy
3
inputCopy
4
01
01
10
10
outputCopy
2
Note
The first testcase corresponds to the figure. The testcase has three groups consisting of three, one and two magnets.

The second testcase has two groups, each consisting of two magnets.
*/

#include<stdio.h>
 
int main()
{
    int  j,n,c=1,i=0;
    char a[10],d;
    scanf("%d",&n);
    while(n!=0)
    {
            scanf("%s",&a);
        if(i>=1)
        {
            if(d!=a[0])
            {
 
                c=c+0;
            }
            else{
                c++;
            }
        }
        d=a[1];
        n--;
        i++;
    }
    printf("%d",c);
}
