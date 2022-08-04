#include<stdio.h>

unsigned long long int fun(unsigned long long int now,unsigned long long int  value,unsigned long long int  t){
    if(now>=t){
        if(now == t){
            return value;
        }
        else{
            now = (value/2) -2;
            value/=2;
            while(now<t){
                value--;
                now++;
            }
            return value;
        }
    }
    else if(now<t){
        value = fun(now+value,value*2,t);
    }
    return value;
}
int main(){
    unsigned long long int t,now=1,value=3;
    scanf("%llu",&t);
    printf("%llu",fun(now,value,t));
    return 0;
}
