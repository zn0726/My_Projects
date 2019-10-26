#include "widget.h"
#include <QApplication>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
//    int arr[6] = {1, 2, 3, 4, 5, 6};
//    bool barr[5] = { false };
//    int iarr[5];
//    srand(time(0));
//    int count = 0;
//    while(count < 5)
//    {
//        int val = rand() % 7;
//        if(barr[val] == false)
//        {
//            iarr[count] = arr[val];
//            count++;
//            barr[val] = true;
//        }
//    }
//    for(int i = 0; i < 5; i ++)
//    {
//        cout << iarr[i] << "\t";
//    }

//    return 0;

        QApplication a(argc, argv);
        Widget w;
        w.show();

        return a.exec();
}


