#include <iostream>
using namespace std;

class Point {
private:
    int verx;
    int niz;
    int void1(int a, int b) {
        while (b != 0) {
            int t = b;
            b = a % b;
            a = t;
        }
        return a;
    }
public:
    Point() : verx(0), niz(1) {}
    Point(int verxnum, int niznum) : verx(verxnum), niz(niznum) {
        if (niznum == 0) {
            cout << "Ошибка" << endl;

        }

    }
    void input() {
        cout << "Введите дробь ";
        cin >> verx >> niz;
        if (niz == 0) {
            cout << "Ошибка " << endl;
        }

    }
    void show() {
        cout << verx << "/" << niz << endl;
    }

    Point cloz(Point)
    {
        int verxnum = verx * niz + verx * niz;
        int niznum = niz * niz;
        return Point(verxnum, niznum);
    }
    Point vih(Point)
    {
        int verxnum = verx * niz - verx * niz;
        int niznum = niz * niz;
        return Point(verxnum, niznum);
    }
    Point umn(Point)
    {
        int verxnum = verx * verx;
        int niznum = niz * niz;
        return Point(verxnum, niznum);
    }
    Point del(Point)
    {
        int verxnum = verx * niz;
        int niznum = niz * verx;
        return Point(verxnum, niznum);
    }
};

int main() {
    Point a, b, res;
    int c;
    a.input();
    cout << "Первая: ";
    a.show();
    b.input();
    cout << "Вторая: ";
    b.show();
    cout << "Выберите действие:\n";
    cout << "1- Прибавить" << endl;
    cout << "2- Отнять" << endl;
    cout << "3- Умножить" << endl;
    cout << "4- Поделить" << endl;
    cin >> c;
    if (c == 1) {

        res = a.cloz(b);
        cout << "Это будет: ";
        res.show();
    }
    else if (c == 2) {
        res = a.vih(b);
        cout << "Это будет: ";
        res.show();
    }
    else if (c == 3) {
        res = a.umn(b);
        cout << "Это будет: ";
        res.show();
    }
    else if (c == 4) {
        res = a.del(b);
        cout << "Это будет: ";
        res.show();
    }
}