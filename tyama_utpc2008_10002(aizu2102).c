/*
R��G��B�ɕ����A���ꂼ��̐F�̖�����3�̔{���łȂ�������0
�e�F�ɂ��āA
�E1�̖�����3�ȏ�Ȃ�3�Ŋ��������܂�ɂ���
��1�̖�����3�Ƃ����̂́A1 1 1�̃Z�b�g��1 2 3�̈ꕔ�Ƃ���2�ʂ�̉��߂����邪�A
�@1 2 3 1 2 3 1 2 3��1 1 1 2 2 2 3 3 3�Ƃ����߂ł��邽��1 1 1�Ƃ��Ă悢�B
�E�����1�̖�����1��2�Ȃ�A���̕�����2�̖��������3�̖����������->�����Ȃ����0
�E�ȉ�2-9�����l
��2��3������̂�2 2 2�Ȃ̂�1 2 3�̈ꕔ�Ȃ̂�2 3 4�̈ꕔ�Ȃ̂����f�ł��Ȃ����A�ŏ���1 2 3�������邾�������Ă������Ƃ�
�@1�̂Ƃ��Ɠ��l�ɏ����ł���
*/

int check(char a[12]){
  int i=1;
  for(;i<10;i++){
    if(a[i]<0)return 0;
    a[i]%=3;
    if(a[i]>0){
      if(a[i+1]-a[i]<0 || a[i+2]-a[i]<0)return 0;
      a[i+1]-=a[i];a[i+2]-=a[i];a[i]=0;
    }
  }
  return 1;
}

int rummy(){
  char x[256][12];
  int hai[9];
  char color[9],c[256];
  int i;

  memset(x['R'],0,sizeof(x['R']));
  memset(x['G'],0,sizeof(x['G']));
  memset(x['B'],0,sizeof(x['B']));
  memset(hai,0,sizeof(hai));
  memset(color,0,sizeof(color));
  memset(c,0,sizeof(c));

  { //input
    for(i=0;i<9;i++)scanf("%d",hai+i); //ghaa! %d cannot be used with char array; hai has to be int array! What a shame!!! Thx K.Inaba.
    for(i=0;i<9;i++)scanf(" %c",color+i);
    for(i=0;i<9;i++){
      x[color[i]][hai[i]]++;
      c[color[i]]++;
    }
    if(c['R']%3!=0 || c['G']%3!=0 || c['B']%3!=0)return 0;
  }

  return check(x['R']) & check(x['G']) & check(x['B']);
}

int main(){
  int i=0,n,x;
  scanf("%d",&n);
  for(;i<n;i++){
    x=rummy();
    printf(x ? "1\n" : "0\n");
  }
  return 0;
}