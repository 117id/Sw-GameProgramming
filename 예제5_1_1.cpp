#include <stdio.h>
#include <string.h>
struct trump {
	int order;
	char shape[3];
	int number;
};

void make_card(trump m_card[]);
void display_card(trump m_card[]);

int main(void)
{
	trump card[52];
	make_card(card);
	display_card(card);
	return 0;
}

void make_card(trump m_card[])
{
	int i, j;
	char shape[4][3]={"♠", "◆", "♥", "♣"};
	for(i=0;i<4;i++)
	{
		for(j=i*13;j<i*13+13;j++)
		{
			m_card[j].order=i;
			strcpy(m_card[j].shape, shape[i]); // 해당 숫자값에 모양 부여. 
			m_card[j].number=j%13+1; // 1~13사이의 숫자로 나누기. 
			switch(m_card[j].number)
			{
				// 10 이상이거나 1(A)인 경우는 문자로 표현해주는 역할. 
				case 1:
					m_card[j].number='A';
					break;
				case 11:
					m_card[j].number='J';
					break;
				case 12:
					m_card[j].number='Q';
					break;
				case 13:
					m_card[j].number='K';
					break;
			}
		}
	}
}

void display_card(trump m_card[])
{
	int i, count=0;
	for(i=0;i<52;i++)
	{
		printf("%s", m_card[i].shape);
		if (10<m_card[i].number)
			printf("%-2c  ", m_card[i].number);
		else
			printf("%-2d  ", m_card[i].number);
		count++;
		// -2의 역할은 사이 간격을 일정하게 하기위함. 
		// 좌측,우측 정렬 역할. 
		// http://mwultong.blogspot.com/2007/09/c-printf-right.html
		if (i%13+1==13)
		{
			printf("\n");
			count=0;
		}
	}
}
