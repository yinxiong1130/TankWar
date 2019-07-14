#pragma once
#include "cocos2d.h"
USING_NS_CC;

enum BombType			// ��ը���� 
{
	kPlayerTankBomb,	// ���̹�˱�ը 
	kEnemyTankBomb,		// ����̹�˱�ը 
	kHomeBomb,	        // ��Ӫ��ը 
	kBulletBomb			// �ӵ���ը 
};

/* ��ը�� */
class Bomb : public Sprite
{
public:
	Bomb();
	~Bomb();

	//������ը,type ��ը����, score����
	static Bomb* create(BombType type, int score);
	virtual bool init(BombType type, int score);
private:
	BombType _type;
	int _score;
};

