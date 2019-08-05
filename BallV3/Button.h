#pragma once

//Button

#include<graphics.h>
#include<string>

using namespace std;

class Button {

private:
	string button_text;
	int button_x;
	int button_y;
	int button_width;
	int button_height;
	char button_type;
	char button_visable;
	char button_centered;//1=����

public:
	Button(int x,int y,int width,int height,char visable,string text);	//���캯��
	void set_Button_Text(string in_text);								//���ð�ť����
	string get_Button_Text();											//��ȡ��ť����
	void set_Button_XY(int x, int y);									//���ð�ťλ��
	void set_Button_WH(int width, int height);							//���ð�ť��С
	int get_Button_X();													//��ȡ��ťX
	int get_Button_Y();													//��ȡ��ťY
	int get_Button_Width();												//��ȡ��ť���
	int get_Button_Height();											//��ȡ��ť�߶�
	void set_Button_Visable(char visable);								//�����Ƿ�ɼ�
	//void unshow_Button();												//���ذ�ť
	void show_Button();													//��ʾ��ť
	void set_Button_Type(char type);									//���ð�ť������̬
	void set_Button_Centered(char centered);

};

Button::Button(int x, int y, int width, int height, char visable,string text) {
	button_x = x;
	button_y = y;
	button_width = width;
	button_height = height;
	button_text = "Button";
	button_type = 0;
	button_visable = visable;
	button_text = text;
	button_centered = 1;//��ťĬ�Ͼ���
	show_Button();
}

void Button::set_Button_Text(string text) {
	button_text = text;
}

string Button::get_Button_Text() {
	return button_text;
}

void Button::set_Button_XY(int x, int y) {
	button_x = x;
	button_y = y;
}

void Button::set_Button_WH(int width, int height) {
	button_height = height;
	button_width = width;
}

int Button::get_Button_X() {
	return button_x;
}

int Button::get_Button_Y() {
	return button_y;
}

int Button::get_Button_Height() {
	return button_height;
}

int Button::get_Button_Width() {
	return button_width;
}

void Button::show_Button() {
	if (button_visable == 1) {//�����ť�ɼ�
		//������״
		int result_button_left = button_x + button_width;
		int result_button_bottom = button_y + button_height;
		switch (button_type) {
		case 0:
			rectangle(button_x, button_y, result_button_left, result_button_bottom);
			break;
		case 1:
			break;
		}

		//��������(ֻ��ʾһ�� ��֧�ֻ��� ���ֹ����ᳬ��button��
		switch (button_centered) {
			TCHAR s[30];//���ֳ������30
			strcpy_s(s, button_text.c_str());
		case 0://������
			outtextxy(button_x, button_y, s);
			break;
		case 1://����
			int resule_button_text_x = button_x + textwidth(s)*0.5;
			int result_button_text_y = button_y + textheight(s)*0.5;
			outtextxy(resule_button_text_x, result_button_text_y, s);
		}
	}
}

void Button::set_Button_Visable(char visable) {
	button_visable = visable;
}

void Button::set_Button_Type(char type) {
	if (type >= 0 && type <= 5) {//type������
		button_type = type;
	}
}

void Button::set_Button_Centered(char centered) {
	button_centered = centered;
}
