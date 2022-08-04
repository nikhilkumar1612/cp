#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    int _count=0,i,n,temp,t,count[26],ans=0;
    for(i=0;i<26;i++){
        count[i]=0;
    }
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        scanf("%s",str);
        for(i=0;i<n;i++){
            //scanf("%c",str[i]);
            if(str[i]=='_'){
                _count++;
            }
            else{
                temp = str[i] - 65;
                count[temp]++;
            }    
        }

        if(_count == 0){
            for(i=0;i<n;i++){
                temp = str[i];
                if(count[temp - 65] == 1){
                    ans=0;
                    break;
                }

                else if(i==0 && (str[i] != str[i+1])){
                    //if(str[i] != str[i-1]){
                        ans=0;
                        break;
                    //}
                }
                else if(i==n-1 && (str[i] != str[i-1])){
                    //if(str[i] != str[i+1]){
                        ans=0;
                        break;
                    //}
                }
                else if((i!=0) && (i!=n-1) && (str[i-1]!=str[i]) && (str[i+1]!=str[i])){
                    ans=0;
                    break;
                }
                ans = 1;
            }
            if(ans)printf("YES\n");
            else printf("NO\n");   
        }
        else if(_count>0){
            for(i=0;i<n;i++){
                temp = str[i];
                if(temp == 95){
                    ans=1;
                    continue;
                }
                if(count[temp - 65] <= 1){
                    ans=0;
                    break;
                }
                ans=1;
            }
            if(ans)printf("YES\n");
            else printf("NO\n");
        }
        for(i=0;i<26;i++){
            count[i] = 0;
        }
        ans=0;
        _count=0;
    }
}
