#include<iostream>
using namespace std;

class Location {
private:
	int X, Y;
public:
	void init(int initX, int initY) {
		X = initX;
		Y = initY;
	}
	int GetX() {
		return X;
	}
	int GetY() {
		return Y;
	}
};
int main() {
	Location A1;
	A1.init(20, 90);
	Location& rAl = A1;      //����һ��ָ��A1������rA1;
	cout << rAl.GetX() << rAl.GetY();	    //��rA1����Ļ�������������A1�����ݳ�ԱX��Y��ֵ;
		return 0;
}