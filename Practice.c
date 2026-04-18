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






#include<stdio.h>

int main(){

//A. Summation

    int n;
    scanf("%d",&n);
long long int array[n];
    for(int i = 0; i<n;i++){
        scanf("%lld",&array[i]);
    }
long long int sum=0;
for(int i = 0;i<n;i++){
    sum = sum + array[i];
}
if(sum<0){
    sum = sum*-1;
}

printf("%lld",sum);


return 0;
}





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








#include<stdio.h>
int main(){

//C. Replacement

    int n;
    scanf("%d",&n);
    int array[n];
for(int i = 0;i<n;i++){
    scanf("%d",&array[i]);
}

for(int i = 0;i<n;i++){

    if(array[i]>0){
        array[i] =1;
    }
    else if(array[i]<0){
        array[i]=2;
    }

}
for(int i=0;i<n;i++){
    printf("%d ",array[i]);
}
   


return 0;
}






#include<stdio.h>
int main(){

//D. Positions in array

    int n;
    scanf("%d",&n);
int array[n];
for(int i=0;i<n;i++){
    scanf("%d",&array[i]);
}
int index;
for(int i = 0;i<n;i++){

if(array[i]<=10){
  printf("A[%d] = %d\n",i,array[i]);
}

}


return 0;
}
