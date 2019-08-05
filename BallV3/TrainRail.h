#pragma once

#include<cmath>
#include<graphics.h>

using namespace std;

//Train Rail
//����

class Rail {
public:
	Rail();
	Rail(int stangle, int endangle, int st_x, int st_y, int end_x, int end_y);
	void set_Rail_Data(int stangle, int endangle, int st_x, int st_y, int end_x, int end_y) { Rail(stangle, endangle, st_x, st_y, end_x, end_y); }
	int get_Rail_Length();
	double get_Rail_Stangle();
	double get_Rail_Endangle();
	int show_Rail();
private:
	double rail_stangle;
	double rail_endangle;
	double rail_st_x;
	double rail_st_y;
	double rail_end_x;
	double rail_end_y;

	double result_rail_angle;			//���컡�ȣ�����֮�������������춼����Բ�����һ���С��1/2��
	int result_rail_left;
	int result_rail_top;
	int result_rail_right;
	int result_rail_bottom;				
	int result_rail_length;				//���쳤��
	double result_rail_r;				//�뾶
	double result_rail_st_end_distance;	//����յ����

	void calculate_Rail_Data();
};

Rail::Rail() {

}

Rail::Rail(int stangle, int endangle, int st_x, int st_y, int end_x, int end_y) {
	rail_stangle = stangle;
	rail_endangle = endangle;
	rail_st_x = st_x;
	rail_st_y = st_y;
	rail_end_x = end_x;
	rail_end_y = end_y;
	calculate_Rail_Data();
}

void Rail::calculate_Rail_Data() {
	result_rail_st_end_distance = sqrt(fabs(rail_end_x - rail_st_x) + fabs(rail_end_y - rail_st_y));//��������յ���
	result_rail_angle = rail_stangle - rail_endangle;//����Ƕ�
	result_rail_r = 0.5*result_rail_st_end_distance / sin(result_rail_angle);//����뾶
	result_rail_length = result_rail_r * 3.1415926 * result_rail_angle;
}

int Rail::get_Rail_Length() {
	return int(result_rail_length);
}

double Rail::get_Rail_Stangle() {
	return rail_endangle;
}

double Rail::get_Rail_Endangle() {
	return rail_stangle;
}

int Rail::show_Rail() {
	if (result_rail_length > 0) {

		return 0;
	}
	else {
		return 1;
	}
}