#include "GameOpenScene.h"
#include "GameScene.h"
#include "GameSelect.h"
USING_NS_CC;
using namespace ui;

using namespace cocostudio::timeline;

Scene* GameOpen::createScene()
{
	// 'scene' is an autorelease object
	auto scene = Scene::create();

	// 'layer' is an autorelease object
	auto layer = GameOpen::create();

	// add layer as a child to scene
	scene->addChild(layer);

	// return the scene
	return scene;
}

// on "init" you need to initialize your instance
bool GameOpen::init()
{
	
	if (!Layer::init())
	{
		return false;
	}

	auto rootNode = CSLoader::createNode("MainScene.csb");

	addChild(rootNode);

	soundEngine::PreLoadBGM(); //Ԥ���ر�������
	soundEngine::PreLoadSE();  //Ԥ������Ч

	soundEngine::KindsOfBgm(STARTBGM, (double)g_BGpercent / 100);
	auto button1 = (ui::Button*)rootNode->getChildByName("Button_1");//��ʼ��Ϸ
	button1->addTouchEventListener([](Ref* pSender, Widget::TouchEventType type) {
		if (type == Widget::TouchEventType::ENDED) {
			//�����ɿ�ʼ��Ϸ��Ϸ����
			//����StartGame�࣬���������������Ϸ����Ϊ��Ϸ����ʱ�ĳ���
			Director::getInstance()->replaceScene(TransitionSlideInB::create(0.3f,GameSelect::createScene()));
		}
	});
	auto button3 = (ui::Button*)rootNode->getChildByName("Button_2");//��Ϸ����
	button3->addTouchEventListener([=](Ref* pSender, Widget::TouchEventType type) {
		if (type == Widget::TouchEventType::ENDED) {

			soundEngine::StopBGMusic(STARTBGM);
			soundEngine::KindsOfSE(E_ClickOn, (double)g_SEpercent / 100);
			//��������Ϸ���ó���
			this->addChild(settingScene::createScene());
		}
	});
	auto button4 = (ui::Button*)rootNode->getChildByName("Button_3");//������Ϸ
	button4->addTouchEventListener([](Ref* pSender, Widget::TouchEventType type) {
		if (type == Widget::TouchEventType::ENDED) {
			Director::getInstance()->end();
		}
	});


	return true;
}