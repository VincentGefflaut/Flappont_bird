#include "GEMPage.h"
#include <Imagine/Graphics.h>
#include <Imagine/Images.h>
using namespace Imagine;
#include <cmath>
#include <QImage>
#include <cstdlib>
#include <ctime>
#include<iostream>
#include <string>
using namespace std;

int main()
{
    int dims[2]={2000,1000};
    GEMpage page_test(dims);
    Window win_test = page_test.open();
    setActiveWindow(win_test);
    double pos[2]={300,300};
    double speed[2]={1,1};
    GEMtity wazo(srcPath("Bird.png"),pos,speed,pos);
    page_test.addEntity(&wazo,0);
    GEMtity tuyau(srcPath("Tuyau_Bas.png"),pos,speed,pos);
    page_test.addEntity(&tuyau,-1);

    while(1){
        page_test.refresh();
        page_test.show();
    }


    return 0;
}
