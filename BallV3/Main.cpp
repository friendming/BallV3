#include<graphics.h>
#include<string>

#include"Button.h"
#include"TrainRail.h"

using namespace std;

void screenSetup();

int main() {

	screenSetup();//��ʼ������
	string teststring1 = "Railway Plan Simulator";
	char s[24];
	strcpy_s(s,teststring1.c_str());
	outtextxy(10, 20, s);
	while (1) {

		while (MouseHit()) {//���ǳ���Ҫ������Ϣʱ���в���������������������
			//����ȡ
		}
	}

	closegraph();          // �رջ�ͼ����

}

void screenSetup() {

	//��ȡ��Ļ��С
	int nScreenWidth, nScreenHeight;
	nScreenWidth = GetSystemMetrics(SM_CXSCREEN);
	nScreenHeight = GetSystemMetrics(SM_CYSCREEN);

	//������ͼ����
	initgraph(nScreenWidth*0.8, nScreenHeight*0.8);

	//���湹��
	setfillcolor(WHITE);

	//��ť����������
	string teststring = "test";
	Button testbutton(50, 50, 100, 30, 1, teststring);
	string get_teststring = testbutton.get_Button_Text();
	char s1[30];
	strcpy_s(s1, get_teststring.c_str());
	outtextxy(10, 50, s1);
	char s2[30];
	strcpy_s(s2, teststring.c_str());
	outtextxy(10, 70, s2);


	//�����������
	Rail testrail;
	testrail.set_Rail_Data(0.2, 0.5, 100, 100, 200, 200);

}