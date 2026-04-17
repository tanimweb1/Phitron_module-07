#include<stdio.h>
#include<limits.h>
int main(){

    //E. Lowest Number

int n;
scanf("%d",&n);
int ary[n];
for(int i = 0 ;i<n;i++){
    scanf("%d",&ary[i]);
}
int mn = INT_MAX;
int position;
for(int i = 0;i<n;i++){
    if(ary[i]<mn){
        mn = ary[i];
    position = i+1;
    }


}
printf("%d %d",mn,position);




return 0;
}