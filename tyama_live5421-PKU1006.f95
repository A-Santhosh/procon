!PKU1006
!x=p(mod23)
!x=e(mod28)
!x=i(mod33)
!�̍ŏ���x0����d�������������o�͂���(������0�̏ꍇ21252(23*28*33)���o��)�B
!
!http://www004.upp.so-net.ne.jp/s_honma/gauss/gauss.htm
!�̕��@��p����B
!�ٍ�Ruby���C�u����(is07kuno)��chinese(������]�藝solver)�ɂ���
!chinese([[5,23],[20,28],[34,33]]) �ɂ�� 5544 14421 1288 ���o�͂��ꂽ�̂ł��̒l���v�Z�Ɏg�p����B
!---�ȉ�235B---
integer p,e,i,d,j
j=0
goto 9
do while(p>=0)
j=j+1
d=mod(p*5544+e*14421+i*1288-d,21252)
if(d<=0)then
d=d+21252
endif
print "(a,i0,a,i0,a)","Case ",j,": the next triple peak occurs in ",d," days."
9 read(*,*)p,e,i,d
enddo
end