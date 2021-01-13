#include<stdio.h>
#include<conio.h>

int main()
{ 
int s,i,n,ele[i],ele2[i];
float set[i],set2[i],inter[i],inter2[i],uni[i],sum[i];
printf("enter the no of elements:");
scanf("%d",&n);

  for(i=0;i<n;i++)
 {
 	printf("MemberEle for set-(A)&(B):");
 	scanf("%d",&ele[i]);
 	printf("MembershiupValus set A(rang 0-1):");
 	scanf("%f",&set[i]);

 
 	/*printf("MemberEle of set B:");
 	scanf("%d",&ele2[i]);*/
 	printf("MembershiupValus set B(rang 0-1):");
 	scanf("%f",&set2[i]);
     
}
 
 printf("<<<<Enter>>>> \n(1)unian\n(2)intersection\n(3)A_comple ment\n(4)B_complement\n(5)sum(A+B)\n(6)Difference(A-B)\n(7)Disjunctive sum(A(+)B)\n(8)Vector Product\n>");
 scanf("%d",&s);


 /*------------------------------------------------------------------*/
 if(s==1)
 {
 printf("AUB={");
for(i=0;i<n;i++)
 {    	/* for union----------------------------*/
 	if(set[i]>set2[i])
 	uni[i]=set[i];
       if(set[i]<set2[i])
 	uni[i]=set2[i];
 	printf("(%d,%f),",ele[i],uni[i]);
  }
printf("}\n");
}

if(s==2){
  
printf("AnB={");
for(i=0;i<n;i++)
  {    /*for inter section-----------------*/
 	if(set[i]>set2[i])
 	inter[i]=set2[i];
       if(set[i]<set2[i])
 	inter[i]=set[i];
 	printf("(%d,%f),",ele[i],inter[i]);
  }
printf("}\n"); 

}
if(s==3){
	printf("A'_compli={");
       for(i=0;i<n;i++)
     {
	set[i]=1-set[i];
	printf("(%d,%f),",ele[i],set[i]);
     }
	printf("}\n"); 

}
if(s==4){printf("B'_compli={");
	for(i=0;i<n;i++)
     {
	set2[i]=1-set2[i];
	printf("(%d,%f),",ele[i],set2[i]);
     }
       printf("}\n"); 
}

if(s==5){
        printf("sum(A+B)={");
        for(i=0;i<n;i++){
	sum[i]=(set[i]+set2[i])-(set[i]*set2[i]);/*A+B-(A.B)*/
	printf("(%d,%f),",ele[i],sum[i]);
	 }printf("}\n");}


if(s==6){
        printf("Difference(A-B)={");
         for(i=0;i<n;i++){
	set2[i]=1-set2[i];/* B complement*/
	 /*inter section-----------------*/
 	if(set[i]>set2[i])
 	inter[i]=set2[i];
       if(set[i]<set2[i])
 	inter[i]=set[i];
 	printf("(%d,%f),",ele[i],inter[i]);
	 }printf("}\n");}
if(s==7){
        printf("Disjunctive sum(A(+)B)={");
        for(i=0;i<n;i++){
	set[i]=1-set[i];/* A complement*/
	 /*inter section-----------------*/
 	if(set[i]>set2[i])
 	inter[i]=set2[i];
       if(set[i]<set2[i])
 	inter[i]=set[i];/*A'nB*/
 	
 	set2[i]=1-set2[i];/* B complement*/
	 /*inter section-----------------*/
 	if(set[i]>set2[i])
 	inter[i]=set2[i];
       if(set[i]<set2[i])
 	inter2[i]=set[i];/*AnB'*/
 	
 	/* for union---------------------*/
 	if(inter[i]>inter2[i])
 	uni[i]=set[i];
       if(inter[i]<inter2[i])
 	uni[i]=set2[i];
 	printf("(%d,%f),",ele[i],uni[i]);
 	
	 }printf("}\n");}
if(s==8){
        printf("Vector Product(A.B)={");
        for(i=0;i<n;i++){
	sum[i]=(set[i]*set2[i]);/*(A.B)*/
	printf("(%d,%f),",ele[i],sum[i]);
	 }printf("}\n");}


return 0;

}

