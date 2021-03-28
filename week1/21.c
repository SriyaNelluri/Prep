#include<math.h>
int titleToNumber(char * columnTitle){
    int sum=0;
    int lim=strlen(columnTitle);
    int t=0;
    while(columnTitle[t]!='\0'){
    if(columnTitle[t]>='A'&&columnTitle[t]<='Z'){
        sum=sum+(columnTitle[t]-64)*pow(26,lim-1-t);
        } 
        t++;
    }
    return sum;

}
