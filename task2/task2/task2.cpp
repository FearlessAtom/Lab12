#include <stdio.h>
int main(){
    int sum;
    int arraya[10],arrayb[10];
    for(int index = 0;index < 10;index++){
        printf("The element %d is : ",index + 1);scanf_s("%d",&arraya[index]);}
    for(int index = 0;index < 10;index++){
        sum = 0;
        for(int j = 0;j <= index;j++){
            sum = sum + arraya[j];}
        if(index){sum = sum / (index + 1);}
        arrayb[index] = sum;}
    printf("array B = {");
    for(int index = 0;index < 10;index++){
        printf("%d",arrayb[index]);
        if(index != 9){printf(" , ");}}
    printf("}");
    return 0;}