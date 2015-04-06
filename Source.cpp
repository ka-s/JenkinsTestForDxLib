#include "DxLib.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
    ChangeWindowMode(true);

    if (DxLib_Init() == -1)
    {
        return -1;
    }

    int graph = LoadGraph("Graph/Gyazo.png");

    DrawGraph(0, 0, graph, false);

    DeleteGraph(graph);

    WaitKey();

    DxLib_End();

    return 0; 
}
