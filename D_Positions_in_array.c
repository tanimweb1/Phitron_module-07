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