#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float avg(int *arr, int size){
    int i; float sum;
    for(i = 0; i < size/sizeof(int); i++) sum += arr[i];
    return sum / (size/sizeof(int));
}

void copy(int *arr1, int *arr2, int size){
    int i;
    for(i = 0; i < size/sizeof(int); i++) arr2[i] = arr1[i];
}

int str_size(char *str){
    int len = 0;
    while(*str) {len++; str++;}
    return len;
}

int main(int argc, char const *argv[]) {
    char src[] = "Hello, World!";
    char dst[50];
    char c = '!';
    int a[] = {1,2,3,4,5};
    int b[] = {2,4,6,2,4};
    int i;

    printf("%f\n", avg(a,sizeof(a)));

    copy(a,b, sizeof(a));
    for(i = 0; i < sizeof(b)/sizeof(int); i++)printf("%d ", b[i]);
    printf("\n");

    printf("%d\n", str_size("hello"));

    strcpy(dst, src);
    printf("%s\n", dst);

    strcat(dst, src);
    printf("%s\n", dst);

    printf("%d\n", strcmp(dst, src));

    printf("%p\n", strchr(dst,c));
    printf("%p\n", &(dst[12]));


    return 0;
}
