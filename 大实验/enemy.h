#ifndef enemy1
#define enemy1

#include"gamesettings.h"
class enemy :public object
{
public:
	virtual void enemy_action() = 0;
	enemy();
	void enemy_dead();
	bool is_dead();  //trueΪ��ʧ��falseΪ���
protected:
	bool fade;//trueΪ��ʧ��falseΪ���
	static int num;
};


class normalenemy :public enemy
{
public:
	normalenemy();
	void enemy_action();
	friend void init_enemy(normalenemy& d);
};


class special_enemy :public enemy
{
public:
	position position_value();
	special_enemy();
	void enemy_action();
	friend void init_enemy(special_enemy& d);
};

#endif 