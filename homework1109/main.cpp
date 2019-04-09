#include <QCoreApplication>
#include <Package.h>
#include <iostream>
using namespace std;

int main()
{

    cout << "Examples!" << endl;

    Personal_Data sender = {"a", "ShanDongKeJiDaXue", "QingDao", "ShanDong", 266590};
    Personal_Data reseiver  = {"b", "ShanDongKeJiDaXue", "QingDao", "ShanDong", 266590};
    Package       a(sender, reseiver, 100, 20);
    cout << "weigth:" << a.getMyWeight() << endl;
    cout << "unit cost:" << a.getMyUnitPrice() << endl;
    cout << "sum cost:" << a.calculateCost() << endl;
    cout << "***************************************" << endl;


    TwoDayPackage e(sender, reseiver, 100, 20, 7.4);
    cout << "weigth:" << e.getMyWeight() << endl;
    cout << "unit cost:" << e.getMyUnitPrice() << endl;
    cout << "two day cost:" << e.getMyDayPrice() << endl;
    cout << "sum cost:" << e.calculateCost() << endl;
    cout << "***************************************" << endl;


    OverNightPackage f1(sender, reseiver,100, 20, -7.4);
    cout << "weigth:" << f1.getMyWeight() << endl;
    cout << "unit cost:" << f1.getMyUnitPrice() << endl;
    cout << "overnight cost:" << f1.getMyNightPrice() << endl;
    cout << "sum cost:" << f1.calculateCost() << endl;
    return 0;

}
