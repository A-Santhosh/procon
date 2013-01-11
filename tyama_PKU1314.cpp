//tyama_rect.cpp Varient 2

//�Escanf�����������B�����ňꎞ�Ԉ�����������(�T�B)�̂�iostream�ɐ؂�ւ��B
//�E����Ɠ����ɁAC�ł̊ȈՂȎ����ɂ��Ă�����PInt���N���X��^^;
//vector���Ɓu�z�񎩑́v�����Ȃ�����qsort���g���Ȃ���ł����(�T)�B
//�E���Ă����̂͂�߂�std::sort�ɁB
//���ƁA�_�̍��W���r������@���Ƃ��܂������Ȃ����Ƃ��킩����(���)�̂ō��W�ɑ΂��ē_�̂���Ȃ��Ŕ��f���邱�ƂɁB�B�B
//Thx Mr Hisaka.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define MAX_N 50

inline void solve(char *f){
	int i0,i1,j0,j1,i;
	vector<int> p;

	for(i0=0;i0<MAX_N-1;i0++)
		for(i1=i0+1;i1<MAX_N;i1++)
			for(j0=0;j0<MAX_N-1;j0++)
				for(j1=j0+1;j1<MAX_N;j1++)
					if(f[(i0<<8)+j0]&&f[(i0<<8)+j1]&&f[(i1<<8)+j0]&&f[(i1<<8)+j1])
						p.push_back((f[(i0<<8)+j1]<<24)+(f[(i1<<8)+j1]<<16)+(f[(i1<<8)+j0]<<8)+f[(i0<<8)+j0]);

	if(p.size()){
		sort(p.begin(), p.end());
		cout << endl;
		for(i=0;i<p.size();i++){
			cout << " " << (char)(p[i]>>24)  << (char)((p[i]>>16)&0xff) << (char)((p[i]>>8)&0xff) << (char)(p[i]&0xff);
			if(i%10==9&&i!=p.size()-1)cout << endl;
		}
	}else
		cout << " No rectangles";
}
							

int main(){
	int n, i, _count=0, x, y;
	char c;
	char f[65536];
	while(++_count){
		if(_count!=1)cout << endl;

		memset(f,0,65536);
		cin >> n;
		if(!n)return 0;

		for(i=0;i<n;i++){
			cin >> c >> y >> x;
			f[(y<<8)+x]=c;
		}
		cout << "Point set "<< _count << ":";
		solve(f);
	}
}