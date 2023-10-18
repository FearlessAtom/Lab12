#include <stdio.h>
#include <math.h>
int main(){
    int r = 19, sum, something = 0, difference, difference2,first,second;
    int array[10] = {9, 5, 8, 7, 1, 3, 2, 5, 6, 3};
    for (int index = 0; index < 9; index++) {
        sum = array[index] + array[index + 1];
        difference = r - sum;
        difference2 = r - something;
        if (abs(difference) < abs(difference2)) {something = sum;first = array[index];second = array[index + 1];}}
    printf("The sum is : %d\n", something);
    printf("The first one is : %d\n",first);
    printf("The second one is : %d\n",second);
    return 0;}