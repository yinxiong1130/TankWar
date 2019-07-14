#pragma once
#include "cocos2d.h"
USING_NS_CC;
class TankController;
class MoveController;
class GameScene : public Layer
{
public:
	GameScene();
	virtual ~GameScene();
public:
	static Scene* createSceneWithLevel(int nLevel);
	CREATE_FUNC(GameScene);
	virtual bool initWithLevel(int nLevel);
	static GameScene* createWithLevel(int nLevel);
private:
	void loadConfig();//���ص�ͼ����Ϸ��������
	void loadController();
	void initData();
	RenderTexture * getrenderTexture();
	int m_nLevel; // ��һ��
	TankController* m_tankCtr;
	MoveController* m_moveCtr;
};

