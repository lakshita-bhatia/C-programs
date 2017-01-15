#include <stdio.h>
#include <stdlib.h>
int n,a[20],b[20],filled_pr, filled_po, filled_in;
void show()
{
  for (int i = 1; i <= n ; i++)
  {
    printf("%d\t", b[i]);
  }
  printf("\n");
}
void preorder(int i)
{
    b[++filled_pr] = a[i];
    if(filled_pr < n && b[i*2] != 0)
      preorder(i*2);
    if(filled_pr < n && b[i*2 + 1] != 0)
      preorder(i*2 +1);
    return;
}
void postorder(int i)
{
    if( filled_po < n && b[2*i] != 0)
      postorder(2*i);
    if( filled_po < n && b[2*i + 1] != 0)
      postorder(2*i + 1);
    b[++filled_po] = a[i];
    return;
}
void inorder(int i)
{
  if( filled_in < n && b[2*i] != 0)
    inorder(2*i);
  b[++filled_in] = a[i];
  if( filled_in < n && b[2*i + 1] != 0)
    inorder(2*i + 1);
  return;
}
int main (void)
{
  int ch;
  printf("Enter the number of nodes:");
  scanf("%d",&n);
  printf("Enter the nodes:\n" );
  for(int i = 1;i <= n;i++)
  {
    scanf("%d",&a[i]);
    b[i] = a[i];
  }
  printf("1.PreOrder 2.PostOrder 3.InOrder\nEnter ur choice:");
  scanf("%d",&ch );
  switch(ch)
  {
    case 1:preorder(1);
           show();
           break;
    case 2:postorder(1);
           show();
           break;
    case 3:inorder(1);
           show();
           break;
    default:
           break;
  }
  return 0;
}
