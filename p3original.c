#include<stdio.h>

int input(){
  int n;
  printf("enter the a composite number");
  scanf("%d",&n);
  return n;
}

int comp(int n){
  float total;
  int composite=0;
  for(int i=1; i<=n; i++){
    total=n/i;
    if (total==0 || total>=1){
      composite=composite+1;
    }
    else{
        return composite;
        }
  }
  printf("%d",composite);
  }


void output(int n,int composite){
  if (composite>2){
    printf("%d is composite number",n);
  }
  else{
    printf("%d is not composite number",n);
  }
}

int main(){
  int n,m;
  n=input();
  m=comp(n);
  output(n,m);
  return 0;
}