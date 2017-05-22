#include <stdio.h>

int main(void)
{
  //변수 설정
	int grade[10];
	int i, j, sum, tmp;
	float average;
//성적을 입력받음
	for (int i = 0; i < 10; i++)
	{
		printf("%d 번째 성적을 입력하세요 : ", i);
		scanf("%d", &grade[i]);
	}
//입력받은 데이터 총 합, 평균 구함
	for (i = sum = 0; i < 10; i++)
		sum += grade[i];
	average = sum / 10.0;
	printf("성적평균 : %f\n", average);
//입력 받은 데이터 정렬(버블 정렬 이용)
	for (i = 0; i < 9; i++)
	{
		for(j = 9; j > i; j--)
			if (grade[j - 1] > grade[j])
			{
				tmp = grade[j - 1];
				grade[j - 1] = grade[j];
				grade[j] = tmp;
			}
	}
//정렬된 데이터 출력
	printf("성적순 : ");
	for (i = 0; i < 10; i++)
		printf("%d", grade[i]);
	printf("\n");
	return 0;
}
