#include <stdio.h>
#include <math.h>
#include <windows.h>
int calc_frequency(int octave, int inx);
int main(void)
{
	int index[]={0, 2, 4, 5, 7, 9, 11, 12}; // ���� �� ������ ���� �ʱⰪ ����. 
//	int abc[]={7,7,9,9,7,7,4,7,7,4,4,2,7,7,9,9,7,7,4,7,4,2,4,0};
	int abc[]= {5,5, 6,6,5,5,3,5, 5,3, 3, 2,5, 5, 6, 6, 5, 5,3, 5, 3, 2, 3, 1};
	int freq[8];
	int i;
	for(i=0;i<8;i++)
		freq[i]=calc_frequency(4, index[i]);
		// freq : �� �� �� �� �� �� �� ��, �� 8�� �� �� ���� 
	for(i=0;i<=24;i++)
		Beep(freq[abc[i]],300);
	// Beep �� �����Ҷ� ���� ���ڰ��� �����̰�. 
	return 0;

//	�ֶּ�� �ַѹ� �ּ� �̷̹� 5 5 6 6 5 5 3 5 5 3 3 2
//	�ֶּ�� �ֹּ� �׹̷��̵�. 5 5 6 6 5 5 3 5 3 2 3 1
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

