#include<graphics.h>
#include<string>

#include"Button.h"
#include"TrainRail.h"

using namespace std;

void screenSetup();

int main() {

	screenSetup();//��ʼ������
	string teststring1 = "Railway Plan Simulator";
	strcpy_s(TCHAR s)
	TCHAR s[] = _T("Hello World");
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

	//�����������
	Rail testrail;
	testrail.set_Rail_Data(0.2, 0.5, 100, 100, 200, 200);

}