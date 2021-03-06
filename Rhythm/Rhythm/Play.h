#pragma once
#pragma once
#include "IO.h"
#include "TimeSync.h"
#include "Collision.h"

//extern const int WIN_WIDTH;
const int WIN_WIDTH = 810;
extern const int WIN_HEIGHT;

#define LANE_NUM 4 //レーンの数
#define BAR_NUM 20 //(画面に)同時に存在できる1レーンあたりのbarの最大数

class Scene
{
public:
	Scene(int NomalNoteGraphHandle, int CursorGraphHandle);
	void GameStart();

private:
	Input input;
	TimeSync time_sync;
	Collision collision;

	void MakeObject();
	void UpdateObject();
	void DrawObject();
	void Clump_Point();

private:
	//System
	int counter;
	int MouseX;
	int C_MouseX = 0;
	unsigned int count;

	//Sounds
	double BPM;
	double speed;

	//images
	bool flag[200];
	double PosY[200];
	double bar_PosY[BAR_NUM];

	int Cursor;
	int NomalNote;
	int Background;
};