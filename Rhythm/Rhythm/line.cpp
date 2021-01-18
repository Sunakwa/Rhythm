#include "line.h"
#include "DxLib.h"

line::line(int x) :
    x(x)
{

}

void line::draw()
{
    SetDrawBlendMode(DX_BLENDMODE_ADD, 200);
    DrawGraph(x, WIN_HEIGHT - height, LoadGraph("tap.png"), true);
    SetDrawBlendMode(DX_BLENDMODE_NOBLEND, 255);
}


