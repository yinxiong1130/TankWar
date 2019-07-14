#pragma once
#include "cocos2d.h"
#include "cocostudio/CocoStudio.h"
#include "ui/CocosGUI.h"
#include "EnumEndType.h"
USING_NS_CC;
class GameScene;
class GameOver :
	public cocos2d::LayerColor
{
public:
	GameOver();
	~GameOver();
public:
	/*EndType ����GAMEWIN �� GAMEFAIL��������Ϸ�Ľ�����ʽ���ݲ�ͬ��ֵ*/
	static Scene* createSceneWithLevel(EndType endType, int Level, GameScene* );
	virtual bool initWithLevel(EndType endType, int Level, GameScene*);
	static GameOver* createWithLevel(EndType endType, int nLevel, GameScene*);
	void setMyScene(GameScene*);
	GameScene* m_gameScene;
};

