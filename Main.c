#include "Header.h"

int main()
{
	int no1 = 0;
	int no2 = 0;
	double dRet = 0.0;
	
	printf("Enter The First no \n");
	scanf("%d",&no1);
	printf("Enter The Second no \n");
	scanf("%d",&no2);
	
	dRet = Division(no1,no2);
	printf("Addition is : %lf", dRet);
	return 0;
}

/*output

D:\ProgramTopicWise\LB\ProblemsOnDigits\Division>gcc Header.h Helper.c Main.c -o myexe

D:\ProgramTopicWise\LB\ProblemsOnDigits\Division>myexe
Enter The First no
10
Enter The Second no
2
Addition is : 5.000000

*/