#include <string>
void test(const std::string &input, const std::string &expect);
void testloader(){ //insert test cases here
/*0*/ test( "x...x/.1.0./..0../.Y.../0..x.", "ghilnqs" );
/*1*/ test( "..Y../...../...../...../.....", "c" );
/*2*/ test( "..x../..Y../...../...../.....", "h" );
/*3*/ test( "..Y.x/..1x0/11.../....0/1..1.", "c" );
/*4*/ test( "....1/....Y/...../...../.....", "ej" );
/*5*/ test( ".10../x.1../x.1x./.Y.1./...0.", "bcghlq" );
/*6*/ test( "0.x10/00..x/x0x.0/....0/...Y1", "deinsx" );
/*7*/ test( "1.01./01Y.1/..1.1/..10./0.0..", "abcfgh" );
/*8*/ test( "x..../x1x../0...0/....Y/.1..0", "klmnot" );
/*9*/ test( "...../..10./.1Y1./.01../.....", "hilmnqr" );
/*10*/ test( "...../..10./x.11./...../..Y..", "hilmnrw" );
/*11*/ test( "...../x.10x/...../x.Y1x/.....", "himnqrs" );
/*12*/ test( "..010/...Y1/..0../0.x../.....", "defghij" );
/*13*/ test( "1.0../...../.0x../Y.1x./..1..", "abcfhkp" );
/*14*/ test( "...../101../0.0../..Y../.....", "fgklmqrv" );
/*15*/ test( "1.0../00.../.x..0/0.Y1./...10", "abcfghmr" );
/*16*/ test( "x101./1..../.Y.x./..01./.00.1", "bcghlmrs" );
/*17*/ test( "x11../x.x../.0.01/..x../...Y.", "bcglmnsx" );
/*18*/ test( "..1.0/x0.x./0.0../x...Y/.10.1", "cdehjmnot" );
/*19*/ test( "..x.0/.0.../1..0x/1..1./Y.00.", "klmnpqrsu" );
/*20*/ test( "0.1.0/.0.xY/0...0/01..1/x00.x", "cdehjmrwx" );
/*21*/ test( "...0./.0.0./..101/...10/..01Y", "mnpqrstwxy" );
/*22*/ test( "10..0/.Y.0./0..1./....x/000..", "abfghiklmn" );
/*23*/ test( "10..1/...../.1010/110.1/x..Yx", "lmnopqrstx" );
/*24*/ test( "110../....1/x1..x/0.0.0/....Y", "bcghlmrsty" );
/*25*/ test( "x.101/1..../..001/010Yx/..1.1", "cdehijmnos" );
/*26*/ test( "x.111/x10../...0./00.1x/x.Y.1", "ghklmnqrsw" );
/*27*/ test( "11.../....0/11..1/1.1../.Y..1", "fghijlmnoqv" );
/*28*/ test( "...x1/.1.0./11.1./.01../Y..x.", "cghiklmnpqru" );
/*29*/ test( ".0.../110x./11..0/01.x./..Y.x", "ghklmnopqrtw" );
/*30*/ test( ".01.0/.110x/0...0/.01Y./x.1x.", "cdeghilmnqrs" );
/*31*/ test( ".1100/..1.0/1.11Y/0..1./.0..0", "hijklmnopqrs" );
/*32*/ test( "1..00/..11./.100./1..Y1/.....", "abcdfhikmnps" );
/*33*/ test( "1.0../.11x0/.00.x/Y.10./.10x0", "abcfghklmpqr" );
/*34*/ test( "11110/11.../.x.../.0111/0.Y0.", "deijnorstwxy" );
/*35*/ test( "...1./.1.0x/10..0/0Y.11/.0.x0", "ghiklmnopqrst" );
/*36*/ test( "...10/x111./0x.11/.0.../0.0Y.", "dehijmnorswxy" );
/*37*/ test( ".1x../.x1.0/0x.x./x11.1/x0Y.1", "hijmoqrstvwxy" );
/*38*/ test( "x.x../x110./1.1.0/0.Y.1/0.00x", "hiklmnopqrstx" );
/*39*/ test( "...0./11.00/10..x/..0.1/Y0.10", "ghiklmnpqsuvwx" );
/*40*/ test( ".110./....0/x..../.0001/11.Y.", "cdfghijmnorstx" );
/*41*/ test( "1.00./....1/.1.../0...0/0..1Y", "abcfhkmpqrstwy" );
/*42*/ test( ".1.01/..x../..100/..Y../...01", "bcdgilmnoqrstvxy" );
/*43*/ test( "1...0/Y..../...../...../0...1", "abcdefjkoptuvwxy" );
/*44*/ test( "x1..0/1..0./.Yx../0...1/.0.1.", "bcdefghijklnopqrstvwx" );
/*45*/ test( "1...0/.1.0./..1../..01./Y0..1", "abcdefghijklmnopqrstuvwxy" );
}
