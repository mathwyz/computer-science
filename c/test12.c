/* 函数Crealink的功能是: */
/* 创建带头结点的单向链表，并为各接节点数据域赋0到m-1的值域。 */

#include<stdio.h>
#include<stdlib.h>

typedef struct aa{
  int data;
  struct aa * next;
}NODE;

NODE *Creatlink(int n,int m){
  NODE *h=NULL,*p,*s;
  int i;
  p=(NODE *)malloc(sizeof(NODE));
  h=p;
  p->next=NULL;
  for(i=1;i<=n;i++){
    s=(NODE *)malloc(sizeof(NODE));
    s->data=rand()%m;
    s->next=p->next;
    p->next=s;
    p=p->next;
  }
  return h;
}

int outlink(NODE *h){
  NODE *p;
  p=h->next;
  printf("\n\n THE LIST:\n\nHEAD");
  while(p)
    {
      printf("->%d",p->data);
      p=p->next;
    }
 printf("\n");
}

int mian()
{
  NODE *head;
  head=Creatlink(8,22);
  outlink(head);
}
