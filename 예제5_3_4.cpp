#include <stdio.h>
#include <math.h>
#include <windows.h>
int calc_frequency(int octave, int inx);
int main(void)
{
	int index[]={0, 2, 4, 5, 7, 9, 11, 12}; // 음계 값 설정을 위함 초기값 설정. 
//	int abc[]={7,7,9,9,7,7,4,7,7,4,4,2,7,7,9,9,7,7,4,7,4,2,4,0};
	int abc[]= {5,5, 6,6,5,5,3,5, 5,3, 3, 2,5, 5, 6, 6, 5, 5,3, 5, 3, 2, 3, 1};
	int freq[8];
	int i;
	for(i=0;i<8;i++)
		freq[i]=calc_frequency(4, index[i]);
		// freq : 도 레 미 파 솔 라 시 도, 총 8개 음 값 저장 
	for(i=0;i<=24;i++)
		Beep(freq[abc[i]],300);
	// Beep 음 실행할때 뒤의 숫자값은 딜레이값. 
	return 0;

//	솔솔라라 솔롤미 솔솔 미미레 5 5 6 6 5 5 3 5 5 3 3 2
//	솔솔라라 솔솔미 솖미레미도. 5 5 6 6 5 5 3 5 3 2 3 1
}


int calc_frequency(int octave, int inx)
{
	double do_scale=32.7032;
	double ratio=pow(2., 1/12.), temp;
	int i;
	temp=do_scale*pow(2, octave-1);
	for(i=0;i<inx;i++)
	{
		temp=(int)(temp+0.5);
		temp*=ratio;
	}
	return (int) temp;
}

