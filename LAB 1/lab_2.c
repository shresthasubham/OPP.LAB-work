/*
Write a program to find the position of the character 'C' in the sentence
 "idea without execution is worthless" using pointer and string.
*/


#include <stdio.h>
#include <conio.h>
#include<string.h

int main(){
    char c[]="idea without execution is worthless";
    int position;

    for(int i=0;i<strlen(c);i++){
        if(*(c+i)=='c' || *(c+i)=='C')
            position=i+1;
    }
    printf("The position of c in given string is:%d",position);

    return 0;
}
