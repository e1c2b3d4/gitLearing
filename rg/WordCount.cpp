#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	//�����ַ���
	FILE *p = fopen("C:\\git\\Git\\repository\\test\\rg\\Debug\\input.txt","r");

	int flag = 0;
	char str;
	int chanum = 0,wornum = 0;
	while (str=fgetc(p) != EOF) {
		if(str) {
			chanum++;
			flag = 1;
		}
		if((str == ' ' || str ==',') && flag) {
			wornum++;
		}
		//�жϻ��з�ǰ�Ƿ��е���
		if(str == '\n') {
			if(flag) {
				wornum++;
			}
			break;
		}
	}
	fclose(p);
	
	//�������Ļ��з�
	printf("�ַ���:%d\n",chanum+1);
	printf("������:%d\n",wornum);
	
    return 0;
}
