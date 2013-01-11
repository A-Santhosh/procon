#!/usr/bin/perl --

=pod
tyama_poetry.pl 070702
TUD Programming Contest 2001
http://tud-pc.informatik.tu-darmstadt.de/archive/Darmstadt2001/web/html/
5. Automatic Poetry

regex�ق����ȁ[�B
�Ƃ����킯�ŁA�����C(++)�ɂ͈ڐA�ł��܂���̂ŉ𓚂��Ǝv��Ȃ�����w

#Java�ɂ�java.util.regex������炵���ł����B�B�B�܂��ڂ��ڂ���

[in]
5
ein <r>eisender braucht <sch>uhe
ein ...
kentucky <f>reit <sch>icken
...
darf ich sie an die <t>heke <b>itten
darf ich sie an ...
<><>
...
a<a>a<a>
a...

[out]
ein reisender braucht schuhe
ein scheisender braucht ruhe
kentucky freit schicken
schreit ficken
darf ich sie an die theke bitten
darf ich sie an bheke titten


aaaa
aaaa

#�����������o�͂Ȃ�Ŏ��s���Ԃ͓��R0.00�b��
=cut

$n = <>;
while($n--){
$s = <>;
$s =~ /(.*)\<(.*)\>(.*)\<(.*)\>(.*)/;
($s1, $s2, $s3, $s4, $s5) = ($1, $2, $3, $4, $5);
$s = <>;
$s =~ /(.*)\s?\.\.\./;
print <<"EOM";
$s1$s2$s3$s4$s5
$1$s4$s3$s2$s5
EOM
}
exit;