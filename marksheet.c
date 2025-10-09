#include<stdio.h>
#include<conio.h>
int main()
{
	printf("\t\t\t\t\t\tBCA-A");
	printf("\n________________________________________________________________________________________________________________________");
	printf("name:ram\t\t\t\t\t\t\t\tregno:19012");
    printf("\n________________________________________________________________________________________________________________________");
    float mark[5]={70,65,83,95,59};
    float total=mark[0]+mark[1]+mark[2]+mark[3]+mark[4];
    float average=total/5;
    printf("\ntamil\t\t\t\t\t\t:%.2f",mark[0]);
    printf("\nenglish\t\t\t\t\t\t:%.2f",mark[1]);
    printf("\nmaths\t\t\t\t\t\t:%.2f",mark[2]);
    printf("\nscience\t\t\t\t\t\t:%.2f",mark[3]);
    printf("\nsocial\t\t\t\t\t\t:%.2f",mark[4]);
    printf("\n________________________________________________________________________________________________________________________");
    printf("\ntotal:%f\t\t\tavg:%f\t\t\t",total,average);
	printf("\n________________________________________________________________________________________________________________________");	
	if(total>250)
	{
	 printf("\nresult=pass");
    } 
	else
	{
	 printf("\nresult=fail");
    }
	getch();
	return 0;
}
