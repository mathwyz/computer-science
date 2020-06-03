# include<stdio.h>

void main(){
  int a[10],i,j,t;
  printf("Input 10 numbers:\n");
  for( i=0;i<10;i++){
    /* 由终端接受10个数，一般来说是无序的 */
    scanf("%d",&a[i]);
  }
  printf("\n");
  for(i=0;j<9;i++){
    for(j=0;j<9-i;j++){
      /* 从0开始比较,不用比较已经确定位置的大数 */
      if(a[j]>a[j+1]){
	t=a[j];
	a[j]=a[j+1];
	a[j+1]=t;
      }
    }
  }
  for (i=0;i<10;i++){
    printf("%d",a[i]);
  }
}
