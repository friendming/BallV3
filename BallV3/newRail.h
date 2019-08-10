#pragma once
#include<graphics.h>
#include<cmath>

//newRail һ���µ����������㷨

class newRail {
private:
	double newRail_stx, newRail_sty, newRail_endx, newRail_endy;
	double newRail_stangle, newRail_endangle;
	void calculate_newRail_Data();

	double result_newRail_angle;
	char result_newRail_type;//������� 0ֱ
	int result_newRail_length;//�������
	double result_newRail_st_end_d;//���յ���
	double result_newRail_r;//�뾶
	int result_newRail_x;
	int result_newRail_y;//Բ��x,y

public:
	newRail();
	void init_newRail_Data(double stx, double sty, double endx, double endy, double stangle, double endangle);
	void show_newRail();
};

inline newRail::newRail(){

}

void newRail::init_newRail_Data(double stx, double sty, double endx, double endy, double stangle, double endangle) {
	newRail_stx = stx;
	newRail_sty = sty;
	newRail_endx = endx;
	newRail_endy = endy;
	newRail_stangle = stangle;
	newRail_endangle = endangle;
}

void newRail::calculate_newRail_Data() {
	result_newRail_angle = fabs(newRail_stangle - newRail_endangle);//����Ƕ�
	if (result_newRail_angle == 1) {//ֱ��
		result_newRail_type = 0;
		result_newRail_length = sqrt(fabs(newRail_endx - newRail_stx)*fabs(newRail_endx - newRail_stx) + fabs(newRail_endy - newRail_sty)*fabs(newRail_endy - newRail_sty));//���㳤��
	}
	else {//���
		result_newRail_type = 1;
		result_newRail_st_end_d = sqrt(fabs(newRail_endx - newRail_stx)*fabs(newRail_endx - newRail_stx) + fabs(newRail_endy - newRail_sty)*fabs(newRail_endy - newRail_sty));//��������յ���
		result_newRail_r = 0.5*result_newRail_st_end_d / sin(0.5 - result_newRail_angle * 0.5);//����뾶
		result_newRail_length = result_newRail_r * 3.1415926 * (1-result_newRail_angle);//���㻡�� ����
	}
}

void newRail::show_newRail() {

}