//SIMPLEST VERSION OF A REPORT CARD//
#include<stdio.h>
int main(){
    char name[50];
    printf("Enter your name:\n");
    gets(name);
    int std,roll_no;
    printf("Std,roll_no:\n");
    scanf("%d %d",&std,&roll_no);
    int marks[8],i,sum=0;
    printf("Enter marks below 25:\n");
    for(i=0;i<8;i++){
        scanf("%d",&marks[i]);
        sum = sum+marks[i];
    }
    printf("\t\t\tREPORT CARD\n");
    printf("Name:%s",name);
    printf("\t\t\t\tStandard:%d",std);
    printf("\nRoll.No:%d\n",roll_no);
    printf("----------------------------------------\n");
    printf("              UNIT TEST - I\n");
    printf("SUBJECT\t\t\t\tMARKS OBTAINED\t\t\MAX.MARKS\n");
    
    
    for(i=0;i<8;i++){
        printf("SUBJECT %d\t\t\t\t%d\t\t\t\t25\n",i+1,marks[i]);}
    printf("\t\t\t\tTOTAL:%d",sum);
    printf("\n\n");
    printf("Signature of Principal\t\t\t\t\t\tSignature of Parent\n");
    return 0;
    
}
