#pragma once
#include "cocos2d.h"
#include "Entity.h"

USING_NS_CC;
class bombM;
class TankBase;
class Bullet :public Entity
{
public:
	static Bullet* create(int ID); //�����ӵ�ָ�룬ȷ���������ߣ��������룬�˺�ֵ���ӵ�����
	bool init(int ID); //��ʼ���ӵ�
	void Move(double angle);
	void Move(Point pos);
private:

	CC_SYNTHESIZE(float, m_fDistance, fDistance);
	CC_SYNTHESIZE(float, m_fAngle, fAngle);
	bool collideWithOthers();
	bool RPGcollideWithOthers();
	TankBase* m_Tank;//�ӵ�������̹��
public:
	void setUsed(bool isUsed);
	bool isUsed();
	bool isArrive();
private:
	bool m_isUsed;
	bool m_isArrive;

};