#pragma once
#include "SimpleAudioEngine.h"


#define STARTBGM "music/STARTBGM.mp3"
#define SELECTBGM "music/backMusic.mp3"
#define BATTELBGM "music/battlebgm1.mp3"
#define SETTINGBGM "music/SETTINGBGM.mp3"

#define E_Bullet "music/E_Bullet.mp3"
#define E_Enemy_Bomb "music/E_Enemybomb.wav"
#define E_Hit_Obstacle "music/E_Bullet.mp3"
#define E_Metal "music/E_Bullet.mp3"
#define E_Obstacle_Bomb "music/E_Bullet.mp3"
#define E_Player_Bomb "music/E_Enemybomb.wav"
#define E_ClickOn "music/E_Clickon.mp3"
#define E_MoveBack "music/E_MoveBack.mp3"
#define E_GG "music/E_GG.wav"

using namespace CocosDenshion;

class soundEngine
{

public:

	static void PreLoadBGM(); //Ԥ���ر�������
	static void KindsOfBgm(char * pFilename, double percentage); //�������֣����ż�ȷ����������
	static void SetBGVolume(int percentage); //�������֣����ò�������
	static void PauseBGMusic(); //��ͣ��������
	static void ResumeBGMusic(); //�ָ���������
	static void StopBGMusic(char * pFilename);  //ֹͣ��������

	static void PreLoadSE(); //Ԥ������Ч
	static void KindsOfSE(char * pFilename, double percentage); //��Ч�����ż�ȷ����Ч����
	static void SetSEVolume(int percentage); //��Ч�����ò�������
	static void PauseSE(); //��ͣȫ����Ч
	static void ResumeSE(); //�ָ�ȫ����Ч
	static void StopSEMusic();  //ֹͣȫ����Ч

	friend class HelloWorld;
	friend class settingScene;
};

