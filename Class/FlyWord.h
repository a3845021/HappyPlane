#pragma once
#ifndef __FLYWORD_H__
#define __FLYWORD_H__
#include "cocos2d.h"
#include "cocos-ext.h"
USING_NS_CC;
USING_NS_CC_EXT;
class FlyWord : public Node {
public:
	//创建文字飘动,create 和 init 是连在一起的,调用create的时候必然会调用init
	static FlyWord* create(int lab, Point begin);
	//init方法接受3个参数，分别是飘入的字符串，字体大小，从哪里开始飘入,init方法的作用主要是初始化FloatWord内置的Label
	bool init(int lab, Point begin);



	//文字从下到上飘动
	void Flying(float time);
	//文字飘动后删除所有对象
	void Flyend();


private:
	int _fontSize;//字体大小
	Point _begin;//要添加到的怪物的中心点
	Label* m_plabel;//字体类型
	Label *level;

};
#endif // __FLYWORD_H__