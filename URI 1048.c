#include <stdio.h>
int main(){
	int percent;
	float salary,increase=0;
scanf("%f",&salary);
if((salary >=0) && (salary <=400)){
	increase = (salary* 0.15);
	percent = 15;}
if((salary >800) && (salary <=1200)){
	increase = salary*0.10;
	percent = 10;}
if((salary >1200) && (salary <= 2000)){
	increase = salary*0.07;
	percent = 7;}
if(salary > 2000){
		increase = salary *0.04;
		percent=4;}
printf("Novo salario: %.2f\n",salary + increase);
printf("Reajuste ganho: %.2f\n",increase);
printf("Em percentual: %d %%\n",percent);
}
