<?php
$array_win=array('02','25','50');
$array_lose=array('05','52','20');
$win=$lose=0;
for($i=0;$i<strlen($player);$i++){
	$s=substr($player,$i,1).substr($rival,$i,1);
	if(array_search($s,$array_win)!==FALSE)$win++;
	if(array_search($s,$array_lose)!==FALSE)$lose++;
}
?>