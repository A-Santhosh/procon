#include <math.h>

//�񐔂̘a�́A1+�u2�ȏ�sqrt(n)�����v�܂ł�n������؂�����i+n/i�̑S�āv+n���������Ȃ�sqrt(n)�A�ŗ^������B
int kan(int n){
  int sum=1,i=2;
  double s=sqrt(n);
  if(n<6)return -1;
  for(;i<s;i++){
    if(n%i==0)sum += i+n/i;
  }
  if(floor(s)==s&&n%(int)s==0)sum+=s;
  return sum-n;
}

int main(){
  int n,r;
  while(1){
    scanf("%d",&n);
    if(n==0)return 0;
    r=kan(n);
    if(r<0)printf("deficient number\n");
    if(r==0)printf("perfect number\n");
    if(r>0)printf("abundant number\n");
  }
}