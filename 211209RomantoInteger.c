#include<stdio.h>
#include<stdlib.h>

int romanToInt(char*);

int main(void) {
    char r2i[80];
    scanf("%s",r2i);
    printf("%d",romanToInt(r2i));

}
int romanToInt(char * s){
    int count=0;
    for(int i=0;i<sizeof(s);i++) {
        switch(s[i]) {
            case 'M':
                count+=1000; break;
            case 'D':
                count+=500; break;
            case 'C':
                count+=100; break;
            case 'L':
                count+=50; break;
            case 'X':
                count+=10; break;
            case 'V':
                count+=5; break;
            case 'I':
                count+=1; break;

        }
    }
    return count;
}
