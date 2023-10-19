#include <stdio.h>
int main(){
    int array[14],sorting[14];
    for(int index = 0;index < 14;index++){printf("Enter element %d : ",index + 1);scanf("%d",&array[index]);}
    int firstelement = array[0],index_small = 0,index_large = 13;
    for (int index = 1; index < 14; index++) {
        if (array[index] < firstelement) {sorting[index_small] = array[index];index_small++;}
            else {sorting[index_large] = array[index];index_large--;}}
    sorting[index_small] = firstelement;
    for(int index = 0;index < 14;index++){printf("%d ",sorting[index]);}
    return 0;}