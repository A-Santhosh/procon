//�s�v�c��for�̎g�������Ă�̂̓V���[�g�R�[�f�B���O�Ȃ�ł�̂����g
main(n,i,r){
  for(;~scanf("%d",&n);printf("%5d -> %d\n",n,r%10))
    for(i=r=1;i<=n;i++,r%=100000)
      for(r*=i;!(r%10);r/=10);
}