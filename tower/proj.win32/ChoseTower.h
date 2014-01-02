#pragma once
#include "d:\program files\cocos2d-x-2.2.1\cocos2d-x-2.2.1\cocos2dx\base_nodes\ccnode.h"
#include "cocos2d.h"
USING_NS_CC;

extern class GameLayer;

class ChoseTower :
	public CCNode
{
public:
	ChoseTower(void);
	~ChoseTower(void);
	bool init(GameLayer *gamelayer,CCPoint position);
	void chosetower1(CCObject *pSender);
	void chosetower2(CCObject *pSender);
	void chosetower3(CCObject *pSender);
public:
	GameLayer *_gamelayer;
	CCMenu *_chostower;
	CCMenuItemImage *_choseTowerOne;
	CCMenuItemImage *_choseTowerTwo;
	CCMenuItemImage *_choseTowerThree;
	CCSpriteBatchNode *_towerInLuobo;
	CCPoint _clickPosition;


};

