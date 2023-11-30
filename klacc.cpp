#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Lab4
{
public:
    float x, y;
    float lab1(float x)
    {
        if (x >= -4 && x < 0)
            y = (-0.5 * x);
        else if (x >= 0 && x < 2)
            y = 2 - sqrt(4 - (pow(x, 2)));
        else if (x >= 2 && x < 4)
            y = sqrt(4 - pow(x - 2, 2));
        else if (x >= 4 && x <= 5)
            y = (-x + 4);
        if (x < -4 || x > 5)
            cout << "error";
        return y;
    }

    void lab11()
    {
        lab1(x);
        cout << "y = " << y << endl;
    }

    void lab2()
    {
        srand(time(0));
        int *a, max, n, s_max;
        cout << "razmer massiva:";
        cin >> n;
        a = new int[n];
        for (int i = 0; i < n; i++)
        {
            a[i] = i + 1;
            std::cout << a[i] << " "  << endl;
        }
        delete[] a;
    }

    void lab3()
    {
        ifstream in("file3.txt");
        ofstream out("file3.txt");

        string text1;
        string text2;
        cout << "vvod: ";
        cin >> text1;
        out << text1;
        out.close();

        getline(in, text2);
        cout << "vivod: " << text2 << endl;
        in.close();
    }

    void lab32()
    {

        ifstream fin("file.txt");  // чтение с файла
        ofstream fout("file.txt"); // запись в файл
        string b;
        float x, y;
       int l = 0;
        for (int x = -4; x < 5; x++)
        {

            if (x >= -4 && x < 0)
                y = (-0.5 * x);
            else if (x >= 0 && x < 2)
                y = 2 - sqrt(4 - (pow(x, 2)));
            else if (x >= 2 && x < 4)
                y = sqrt(4 - pow(x - 2, 2));
            else if (x >= 4 && x <= 5)
                y = (-x + 4);
            if (x < -4 || x > 5)
                cout << "error";
            else
             
            fout << y << endl;
        }

        fout.close();
        float *data = new float[l];
        l = 0;
        while (getline(fin, b))
        {
            data[l] = stof(b);
            l++;
        }
        for (int i = 0; i < l; i++)
            cout << data[i] << "\n";
        fin.close();
    }
};

int main()
{
    Lab4 lab;
    cout << "vvedi x: ";
    cin >> lab.x;
    lab.lab11();
    lab.lab2();
    lab.lab3();
    lab.lab32();
}