rosalind:
mgap/need are broken.

1.
mjudge_old is: http://judge.maximum.vc/
mjudge is: http://m-judge.maximum.vc/
ljudge is: http://www.edu.ics.saitama-u.ac.jp/~s06dm003/problemset/
Possibly mjudge(new)-8 is removed when moving from ljudge.

2.
HNU��C���R���p�C������ꍇ��return 0;���K�v�ł��B
�܂��A%lld�ł͂Ȃ�%I64d���g���K�v������܂�(msvcrt�̎d�l)�B

3.
aizu��C���R���p�C������ꍇreturn 0;���K�v�ł��B
�܂��A�w�b�_�t�@�C����#include���Ȃ��ƒʂ�܂���B�����炭
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
�ő��v���Ǝv���܂��B -- Fixed on 090710

4.
����Fortran�R�[�h��g95(http://ftp.g95.org/)�p�ł��B���̏؋��Ƃ��Ċg���q��.f95�ɂȂ��Ă���܂��B
(�g���q��f�ɂ��Ă��܂���Fortran77(�Œ�)�`���Ƃ��ăR���p�C�����悤�Ƃ��Ď��s���܂�)�B
�]���܂��āAg77�ŃR���p�C������ɂ͎��̊֐���ʂ��ē���ȏo�͂�����K�v������܂��B�܂��e�s6�����󂯂�K�v������܂�(�Œ�`��)

      integer function output(n)
        integer::n
        if(n.ge.1000000000) then
        write(*,"(i10)"),n
        elseif(n.ge.100000000) then
        write(*,"(i9)"),n
        elseif(n.ge.10000000) then
        write(*,"(i8)"),n
        elseif(n.ge.1000000) then
        write(*,"(i7)"),n
        elseif(n.ge.100000) then
        write(*,"(i6)"),n
        elseif(n.ge.10000) then
        write(*,"(i5)"),n
        elseif(n.ge.1000) then
        write(*,"(i4)"),n
        elseif(n.ge.100) then
        write(*,"(i3)"),n
        elseif(n.ge.10) then
        write(*,"(i2)"),n
        else
        write(*,"(i1)"),n
        endif
        output=0
        return
      end