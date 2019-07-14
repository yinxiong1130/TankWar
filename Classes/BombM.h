#pragma once
#include "cocos2d.h"
#include "Bomb.h"

USING_NS_CC;

/* ��ը������ */
class BombM : public Layer
{
public:
	BombM();
	~BombM();
	CREATE_FUNC(BombM);

	//type ��ը����
	//pos ��ըλ��
	//score ��ը����ʾ�ķ���
    //������ը
	void createBomb(BombType type, Vec2 pos, int score = 0);
	//��ͣ��Ϸ����ͣ�������б�ը������
	void pauseGame();
	//������Ϸ�������������б�ը����)
	void resumeGame();
};