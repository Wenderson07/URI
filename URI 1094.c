#include <stdio.h>
int main(){
	
	int i,quantia=0,qntd=0,cobaia=0,totalC=0,totalR=0,totalS=0;
	double pC,pR,pS,num,total=0;
	char coelhos,ratos,sapos;
	
	
	scanf("%d",&quantia);
	for(i=0;i<quantia;i++){
		scanf("%lf %c",&num,&cobaia);
		total+=num;
		if(cobaia =='C'){
			totalC += num;
		}
		if(cobaia =='R'){
			totalR += num;}
		if(cobaia =='S'){
			totalS += num;}	
	
	}
	pC =(totalC*100 ) / total ;
	pR = (totalR *100) /total ;
	pS=	(totalS *100)  / total ;
	
		printf("Total: %.0lf cobaias\n",total);
		printf("Total de coelhos: %d\n",totalC);
		printf("Total de ratos: %d\n",totalR);
	   	printf("Total de sapos: %d\n",totalS);
	   	printf("Percentual de coelhos: %.2lf %%\n",pC);
		printf("Percentual de ratos: %.2lf %%\n",pR);  
		printf("Percentual de sapos: %.2lf %%\n",pS); 
}
