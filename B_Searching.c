#include<stdio.h>
int main(){

//B. Searching

    int n;
    scanf("%d",&n);
int array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
int x,index=-1;
scanf("%d",&x);

for(int i = 0;i<n;i++){
    if(array[i]==x){
index = i;
break;
    }
   

}

printf("%d",index);
return 0;
}