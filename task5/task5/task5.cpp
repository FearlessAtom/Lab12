#include <stdio.h>
int main(){
    int array[14],sorting[14];
    for(int index = 0;index < 14;index++){printf("Enter element %d : ",index + 1);scanf_s("%d",&array[index]);}
    int firstelement = array[0],small = 0,large = 13;
    for (int index = 1; index < 14; index++) {
        if (array[index] < firstelement) {sorting[small] = array[index];small++;}
            else {sorting[large] = array[index];large--;}}
    sorting[small] = firstelement;
    for(int index = 0;index < 14;index++){printf("%d ",sorting[index]);}
    return 0;}