#include<stdio.h>
int main(){

    //Take an array from input and print all the even numbers of that array.

    int n;
    scanf("%d",&n);

    int array[n];

    for(int i = 0;i<n;i++){
        scanf("%d",&array[i]);
    }

    for(int i = 0;i<n;i++){
        if(array[i]%2==0){
            printf("%d ",array[i]);
        }
    }

return 0;
}






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

