/* 统计一行字符串中单词的个数，作为函数值返回。 */

# include<string.h>
# include<stdio.h>
# define N 80

int fun(char *s){
  int i,j=0;
  for(i=0;s[i]!='\0';i++)
    if(s[i]!=' '&&(s[i+1]==' '|| s[i+1]=='\0'))
      j++;
  return j;
}

void main()
{
  FILE *wf;
  char line[N];
  int mum =0;
  printf("Enter a string:\n");
  fgets(line);
  num=fun(line);
  printf("The number of word is %d\n\n",num);
  wf=fopen("out.dat","w");
  fprintf(wf,"%d",fun("a big car"));
  fclose(wf);
}
