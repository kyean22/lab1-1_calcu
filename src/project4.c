#include<stdio.h>
#include<string.h>
#define N 20
#define L 3
int main(void)
{
	//1. �л� ���� �迭�� �ʱ�ȭ�Ͽ� ����
	char name[][N] = { "Sophia","Olivia", "Riley","Emma","Ava","Isabella","Aria","Amelia","Mia","Liam","Noah","Jackson","Aiden","Elijah","Grayson","Lucas","Oliver","Caden","Mateo","David" };

	int num[20] = { 20220001, 20220010, 20220002, 20220015, 20220009, 20220014, 20220020, 20220005,
					20220016, 20220008, 20220012, 20220004, 20220018, 20220017, 20220003, 20220013, 20220007,
					20220019, 20220011, 20220006 };
	int score[20] = { 98, 96, 88, 77, 82, 93, 84, 79, 90, 80, 89, 99, 78, 83, 92, 71, 72, 68, 95, 76 };

	for (int i = 0;i < 20;i++)
		printf_s("%-8s%8d%8d\n", name[i], num[i], score[i]);
	

	//�л� ���� �迭�� �ʱ�ȭ�Ͽ� ����
	int n;
	printf("1. �̸� �������� ���\t2. �й� �������� ���\n3. ���� �������� ���\t4. �̸� �˻�\n5. ����\n");
	printf("��ȣ�� �����ϼ��� : ");
	scanf_s("%d", &n);

	
	//1. �̸� �������� ���
	/*
	if (n == 1)
	{
		int a, b, c = 0;
		for (a = 0; a < 19; a++)
			for (b = 19; b > a; b--)
				if (strcmp(name[b - 1],name[b]) >0) {
					c = name[b - 1];
					name[b - 1] = name[b];
					name[b] = c;
				}
		for (a = 0; a < 20; a++)
			printf("%s\b\t %d %d\n", name[a], num[a], score[a]);
	}
	*/	

		

	//2. �й� ��������
		
	else if (n == 2)
	{
		int a, b, c = 0;
		for (a = 0; a < 19; a++)
			for (b = 19; b > a; b--)
				if (num[b - 1] > num[b]) {
					c = num[b-1];
					num[b-1] = num[b];
					num[b] = c;
				}
		for (a = 0; a < 20; a++)
			printf("%s\b\t %d %d\n", name[a], num[a], score[a]);
	}
		
		
	//3. ���� �������� ���
	else if (n == 3)
	{
		int i, j, tmp=0;
		for (i = 0; i < 19; i++)
			for (j = 19; j > i; j--)
				if (score[j - 1] < score[j]) {
					tmp = score[j];
					score[j] = score[j-1];
					score[j-1] = tmp;
				}
		for (i = 0; i < 20; i++)
			printf("%s\b\t %d %d\n", name[i],num[i],score[i]);
	}
	
	/*
	else if (n == 4)
	{

	}
}
	else if (n = = 5)
	{

		}*/
}
		