#include<stdio.h>
#include<stdlib.h>

int romanToInt(char*);

int main(void) {
    char r2i[128];
    scanf("%s",r2i);
    printf("s:%d",romanToInt(r2i));

}
int romanToInt(char * s){
    int count=0;
    for(int i=0;i<strlen(s);i++) {
        switch(s[i]) {
            case 'M':
                if(s[i-1]=='C') {
                    count+=800;
                    printf("count=%d, s[%d]=%c\n",count,i,s[i]);
                    break;
                } else {
                    count+=1000;
                    printf("count=%d, s[%d]=%c\n",count,i,s[i]);
                    break;
                }
            case 'D':
                if(s[i-1]=='C') {
                    count+=300;
                    printf("count=%d, s[%d]=%c\n",count,i,s[i]);
                    break;
                } else {
                    count+=500;
                    printf("count=%d, s[%d]=%c\n",count,i,s[i]);
                    break;
                }
            case 'C':
                if(s[i-1]=='X') {
                    count+=80;
                    printf("count=%d, s[%d]=%c\n",count,i,s[i]);
                    break;
                } else {
                    count+=100;
                    printf("count=%d, s[%d]=%c\n",count,i,s[i]);
                    break;
                }
            case 'L':
                if(s[i-1]=='X') {
                    count+=30;
                    printf("count=%d, s[%d]=%c\n",count,i,s[i]);
                    break;
                } else {
                    count+=50;
                    printf("count=%d, s[%d]=%c\n",count,i,s[i]);
                    break;
                }
            case 'X':
                if(s[i-1]=='I') {
                    count+=8;
                    printf("count=%d, s[%d]=%c\n",count,i,s[i]);
                    break;
                } else {
                    count+=10;
                    printf("count=%d, s[%d]=%c\n",count,i,s[i]);
                    break;
                }
            case 'V':
                if(s[i-1]=='I') {
                    count+=3;
                    printf("count=%d, s[%d]=%c\n",count,i,s[i]);
                    break;
                } else {
                    count+=1;
                    printf("count=%d, s[%d]=%c\n",count,i,s[i]);
                    break;
                }
            case 'I':
                count+=1;
                printf("count=%d, s[%d]=%c\n",count,i,s[i]);
                break;
        }
    }
    return count;
}
