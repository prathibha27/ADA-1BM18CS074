#include<stdio.h>
void tower_of_hanoi(int n,char src,char dest,char aux)
{
	if(n>0)
	{
	tower_of_hanoi(n-1,src,aux,dest);
	printf("move disc %d from peg %c to peg %c \n",n,src,dest);
	tower_of_hanoi(n-1,aux,dest,src);
	}
}
int main()
{
int n;
printf("enter the value of n\n");
scanf("%d",&n);
tower_of_hanoi(n,'A','B','C');
return 0;
}
