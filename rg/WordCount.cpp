#include <stdio.h>
#include <string.h>

int main()
{
	//�����ַ���
	char str;

	int flag = 0;
	int chanum = 0,wornum = 0;
	while (str=getchar()) {
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
	
	//�������Ļ��з�
	printf("�ַ���:%d\n",chanum);
	printf("������:%d\n",wornum);
	
    return 0;
}
