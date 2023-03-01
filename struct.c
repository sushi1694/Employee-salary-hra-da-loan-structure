#include <stdio.h>
struct employee
{
	char employname[100];
	int employid;
	float employsalary;
	float hra;
	float da;
	float gs;
	int loan;
}d[2];
int main()
{
	int i;
	printf("Enter Employee Information");
	for(i=0;i<2;i++)
	{
	
	printf("Enter Details of Employee %d \n",i+1);
	
	printf("\nEnter Name of Employee:\n ");
	scanf("%s",d[i].employname);
	
	printf("\nEnter Employee ID: \n");
	scanf("%d",&d[i].employid);
	
	printf("\nEnter Employee Salary: \n");
	scanf("%f",&d[i].employsalary);
	
	printf("\nEnter loan amount:");
	scanf("%d",&d[i].loan);
    
    	d[i].hra=d[i].employsalary*(0.2);
    	d[i].da=d[i].employsalary*(0.4);
    	d[i].gs=d[i].employsalary+d[i].hra+d[i].da-d[i].loan;
	
  }

	
	for(i=0;i<2;i++)
	{
	printf("\nDisplaying Employee details %d \n",i+1);
	printf("\nEmployee Name: \n");
	printf("%s",d[i].employname);
	printf("\nEmployee ID: %d\n",d[i].employid);
	printf("\nGross Salary: %.2f\n",d[i].gs);
  }   
	return 0;
	
}
