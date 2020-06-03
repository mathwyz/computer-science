#include<stdio.h>

void main(){
  int a[10],i,j,k,x;
  printf("Input 10 numbers:\n");
  /* 从终端输入10个整数 */
  for (i=0;i<10;i++){
    scanf("%df",&a[i]);
  }
  printf("\n");
  for (i=0;i<10;i++){
    scanf("%d",&a[i]);
  }
  printf("\n");
  for (i=0;i<9;i++){
    /* 开始排序算法 */
    k=i;
    for (j=i+1;j<10;j++){
      if(a[j]<a[k]){
	k=j;
      }
    }
    if(i!=k){
      x=a[i];
      a[i]=a[k];
      a[k]=x;
    }
  }
  printf("the sorted numbers:\n");
    for (i=0;i<10;i++){
      printf("%d",a[i]);
    }
}
