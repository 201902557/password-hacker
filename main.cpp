#include<iostream>
#include<cmath>
#include<windows.h>
using namespace std;
string search_password, search_password1, search_password2, search_password3, temp, temp1, password, x = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%&*()_+=-/?.>,<:;", x1 = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%&*()_+=-/?.>,<:;", x2 = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%&*()_+=-/?.>,<:;";
void one_word_password(int logic, int counter, int pm)
{
    for(int i = 0; i < 83; i++)
    {
        search_password = x[i];
        cout<<"\n\n\t\t\t\t\t\t Time Lapse: " << counter/10 <<" seconds                                 Combinations: "<< pm <<"\n"<<endl;
        cout<<"\n\n\t\t\t\t\t\t 1st Double Generator: "<<search_password<<endl;
        if(search_password == password)
        {
            system("color c");
            cout<<"\n\n\t\t\t\t\t\t<< PASSWORD FOUND IN "<<counter/10<<" seconds!!!!!! >>"<<endl;
            cout<<"\n\t\t\t\t\t\t<< PASSWORD IS : "<<search_password<<" >>\n\n"<<endl;
            break;
            system("PAUSE");
            system("CLS");
        }
        int j = 82 - i;
        search_password = x[j];
        cout<<"\n\n\t\t\t\t\t\t 2nd Double Generator: "<<search_password<<endl;
        if(search_password == password)
        {
            system("color c");
            cout<<"\n\n\t\t\t\t\t\t<< PASSWORD FOUND IN "<<counter/10<<" seconds!!!!!! >>"<<endl;
            cout<<"\n\t\t\t\t\t\t<< PASSWORD IS : "<<search_password<<" >>\n\n"<<endl;
            break;
            system("CLS");
            system("PAUSE");
        }
        system("CLS");
        counter++;
    }
}
void two_word_password(int logic, int counter, int pm)
{
    for(int i = 0; i < 43; i++)
    {
        int j = 82 - i;
        for(int i1 = 0; i1 < 43; i1++)
        {
            int j1 = 82 - i1;
            cout<<"\n\n\t\t\t\t\t\t Time Lapse: " << counter/10 <<" seconds                                 Combinations: "<< pm <<"\n"<<endl;
            search_password = search_password + x[i] + x[i1];
            cout<<"\n\n\t\t\t\t\t\t 1st QUADRO Generator: "<<search_password<<endl;
            search_password1 = search_password1 + x1[j] + x1[j1];
            cout<<"\n\n\t\t\t\t\t\t 2nd QUADRO Generator: "<<search_password1<<endl;
            if(search_password == password)
            {
                system("color c");
                cout<<"\n\n\t\t\t\t\t\t<< PASSWORD FOUND IN "<<counter/10<<" seconds!!!!!! >>"<<endl;
                cout<<"\n\t\t\t\t\t\t<< PASSWORD IS : "<<search_password<<" >>\n\n"<<endl;
                system("PAUSE");
                system("CLS");
                logic = 1;
                i1 = 43;
                break;
            }
            search_password = "";
            search_password = search_password + x[i] + x[j1];
            cout<<"\n\n\t\t\t\t\t\t 3rd QUADRO Generator: "<<search_password<<endl;
            if(search_password == password)
            {
                system("color c");
                cout<<"\n\n\t\t\t\t\t\t<< PASSWORD FOUND IN "<<counter/10<<" seconds!!!!!! >>"<<endl;
                cout<<"\n\t\t\t\t\t\t<< PASSWORD IS : "<<search_password<<" >>\n\n"<<endl;
                system("PAUSE");
                system("CLS");
                logic = 1;
                i1 = 43;
                break;
            }
            if(search_password1 == password)
            {
                system("color c");
                cout<<"\n\n\t\t\t\t\t\t<< PASSWORD FOUND IN "<<counter/10<<" seconds!!!!!! >>"<<endl;
                cout<<"\n\t\t\t\t\t\t<< PASSWORD IS : "<<search_password1<<" >>\n\n"<<endl;
                system("PAUSE");
                system("CLS");
                logic = 1;
                i1 = 43;
                break;
            }
            search_password1 = "";
            search_password1 = search_password1 + x1[j] + x1[i1];
            cout<<"\n\n\t\t\t\t\t\t 4th QUADRO Generator: "<<search_password1<<endl;
            if(search_password1 == password)
            {
                system("color c");
                cout<<"\n\n\t\t\t\t\t\t<< PASSWORD FOUND IN "<<counter/10<<" seconds!!!!!! >>"<<endl;
                cout<<"\n\t\t\t\t\t\t<< PASSWORD IS : "<<search_password1<<" >>\n\n"<<endl;
                system("PAUSE");
                system("CLS");
                logic = 1;
                i1 = 43;
                break;
            }
            if(logic == 0)
            {
                search_password = "";
                search_password1 = "";
            }
            system("CLS");
            counter++;
        }
        counter++;
        if(logic == 1)
            i = 43;
    }
    if(logic == 0)
    {
        cout<<"\n\n\t\t\t\t\t\t<< PASSWORD NOT FOUND!!!!!! IN "<<counter/10<<" seconds!!!!!! >>"<<endl;
        system("PAUSE");
        system("CLS");
    }
}
void three_word_password(int logic, int counter, int pm)
{
    for(int i = 0; i < 24; i++)
    {
        int j = 43 - i;
        int k = 43 + i;
        int z = 82 - i;
        for(int i1 = 0; i1 < 24; i1++)
        {
            int j1 = 43 - i1;
            int k1 = 43 + i1;
            int z1 = 82 - i1;
            for(int i2 = 0; i2 < 24; i2++)
            {
                int j2 = 43 - i2;
                int k2 = 43 + i2;
                int z2 = 82 - i2;
                cout<<"\n\n\t\t\t\t\t\t Time Lapse: " << counter/10 <<" seconds                                 Combinations: "<< pm <<"\n"<<endl;
                search_password = search_password + x[i] + x[i1] + x[i2];
                cout<<"\n\n\t\t\t\t\t\t 1st QUADRO Generator: "<<search_password<<endl;
                search_password1 = search_password1 + x1[j] + x1[j1] + x1[j2];
                cout<<"\n\n\t\t\t\t\t\t 2nd QUADRO Generator: "<<search_password1<<endl;
                if(search_password == password)
                {
                    system("color c");
                    cout<<"\n\n\t\t\t\t\t\t<< PASSWORD FOUND IN "<<counter/10<<" seconds!!!!!! >>"<<endl;
                    cout<<"\n\t\t\t\t\t\t<< PASSWORD IS : "<<search_password<<" >>\n\n"<<endl;
                    system("PAUSE");
                    system("CLS");
                    logic = 1;
                    i2 = 24;
                    break;
                }
                search_password = "";
                search_password = search_password + x[i] + x[i1] + x[j2];
                cout<<"\n\n\t\t\t\t\t\t 3rd QUADRO Generator: "<<search_password<<endl;
                if(search_password == password)
                {
                    system("color c");
                    cout<<"\n\n\t\t\t\t\t\t<< PASSWORD FOUND IN "<<counter/10<<" seconds!!!!!! >>"<<endl;
                    cout<<"\n\t\t\t\t\t\t<< PASSWORD IS : "<<search_password<<" >>\n\n"<<endl;
                    system("PAUSE");
                    system("CLS");
                    logic = 1;
                    i2 = 24;
                    break;
                }
                if(search_password1 == password)
                {
                    system("color c");
                    cout<<"\n\n\t\t\t\t\t\t<< PASSWORD FOUND IN "<<counter/10<<" seconds!!!!!! >>"<<endl;
                    cout<<"\n\t\t\t\t\t\t<< PASSWORD IS : "<<search_password1<<" >>\n\n"<<endl;
                    system("PAUSE");
                    system("CLS");
                    logic = 1;
                    i2 = 24;
                    break;
                }
                search_password1 = "";
                search_password1 = search_password1 + x1[j] + x1[j1] + x1[i2];
                cout<<"\n\n\t\t\t\t\t\t 4th QUADRO Generator: "<<search_password1<<endl;
                if(search_password1 == password)
                {
                    system("color c");
                    cout<<"\n\n\t\t\t\t\t\t<< PASSWORD FOUND IN "<<counter/10<<" seconds!!!!!! >>"<<endl;
                    cout<<"\n\t\t\t\t\t\t<< PASSWORD IS : "<<search_password1<<" >>\n\n"<<endl;
                    system("PAUSE");
                    system("CLS");
                    logic = 1;
                    i2 = 24;
                    break;
                }
                search_password2 = search_password2 + x2[k] + x2[k1] + x2[k2];
                cout<<"\n\n\t\t\t\t\t\t 5th QUADRO Generator: "<<search_password2<<endl;
                search_password3 = search_password3 + x2[z] + x2[z1] + x2[z2];
                cout<<"\n\n\t\t\t\t\t\t 6th QUADRO Generator: "<<search_password3<<endl;
                if(search_password2 == password)
                {
                    system("color c");
                    cout<<"\n\n\t\t\t\t\t\t<< PASSWORD FOUND IN "<<counter/10<<" seconds!!!!!! >>"<<endl;
                    cout<<"\n\t\t\t\t\t\t<< PASSWORD IS : "<<search_password2<<" >>\n\n"<<endl;
                    system("PAUSE");
                    system("CLS");
                    logic = 1;
                    i2 = 24;
                    break;
                }
                search_password2 = "";
                search_password2 = search_password2 + x1[k] + x1[k1] + x1[z2];
                cout<<"\n\n\t\t\t\t\t\t 7th QUADRO Generator: "<<search_password2<<endl;
                if(search_password2 == password)
                {
                    system("color c");
                    cout<<"\n\n\t\t\t\t\t\t<< PASSWORD FOUND IN "<<counter/10<<" seconds!!!!!! >>"<<endl;
                    cout<<"\n\t\t\t\t\t\t<< PASSWORD IS : "<<search_password2<<" >>\n\n"<<endl;
                    system("PAUSE");
                    system("CLS");
                    logic = 1;
                    i2 = 24;
                    break;
                }
                if(search_password3 == password)
                {
                    system("color c");
                    cout<<"\n\n\t\t\t\t\t\t<< PASSWORD FOUND IN "<<counter/10<<" seconds!!!!!! >>"<<endl;
                    cout<<"\n\t\t\t\t\t\t<< PASSWORD IS : "<<search_password3<<" >>\n\n"<<endl;
                    system("PAUSE");
                    system("CLS");
                    logic = 1;
                    i2 = 24;
                    break;
                }
                search_password3 = "";
                search_password3 = search_password3 + x1[z] + x1[z1] + x1[k2];
                cout<<"\n\n\t\t\t\t\t\t 8th QUADRO Generator: "<<search_password3<<endl;
                if(search_password3 == password)
                {
                    system("color c");
                    cout<<"\n\n\t\t\t\t\t\t<< PASSWORD FOUND IN "<<counter/10<<" seconds!!!!!! >>"<<endl;
                    cout<<"\n\t\t\t\t\t\t<< PASSWORD IS : "<<search_password3<<" >>\n\n"<<endl;
                    system("PAUSE");
                    system("CLS");
                    logic = 1;
                    i2 = 24;
                    break;
                }
                if(logic == 0)
                {
                    search_password = "";
                    search_password1 = "";
                    search_password2 = "";
                    search_password3 = "";
                }
                system("CLS");
                counter++;
            }
            counter++;
            if(logic == 1)
                i = i1 = 43;
        }
    }
    if(logic == 0)
    {
        cout<<"\n\n\t\t\t\t\t\t<< PASSWORD NOT FOUND!!!!!! IN "<<counter/10<<" seconds!!!!!! >>"<<endl;
        system("PAUSE");
        system("CLS");
    }
}
void four_word_password(int logic, int counter, int pm)
{
    for(int i = 0; i < 43; i++)
    {
        int j = 82 - i;
        for(int i1 = 0; i1 < 43; i1++)
        {
            int j1 = 82 - i1;
            for(int i2 = 0; i2 < 43; i2++)
            {
                int j2 = 82 - i2;
                for(int i3 = 0; i3 < 43; i3++)
                {
                    int j3 = 82 - i3;
                    cout<<"\n\n\t\t\t\t\t\t Time Lapse: " << counter/10 <<" seconds                                 Combinations: "<< pm <<"\n"<<endl;
                    search_password = search_password + x[i] + x[i1] + x[i2] + x[i3];
                    cout<<"\n\n\t\t\t\t\t\t 1st QUADRO Generator: "<<search_password<<endl;
                    search_password1 = search_password1 + x1[j] + x1[j1] + x1[j2] + x1[j3];
                    cout<<"\n\n\t\t\t\t\t\t 2nd QUADRO Generator: "<<search_password1<<endl;
                    if(search_password == password)
                    {
                        system("color c");
                        cout<<"\n\n\t\t\t\t\t\t<< PASSWORD FOUND IN "<<counter/10<<" seconds!!!!!! >>"<<endl;
                        cout<<"\n\t\t\t\t\t\t<< PASSWORD IS : "<<search_password<<" >>\n\n"<<endl;
                        system("PAUSE");
                        system("CLS");
                        logic = 1;
                        i3 = 43;
                        break;
                    }
                    search_password = "";
                    search_password = search_password + x[i] + x[i1] + x[i2] + x[i3];
                    cout<<"\n\n\t\t\t\t\t\t 3rd QUADRO Generator: "<<search_password<<endl;
                    if(search_password == password)
                    {
                        system("color c");
                        cout<<"\n\n\t\t\t\t\t\t<< PASSWORD FOUND IN "<<counter/10<<" seconds!!!!!! >>"<<endl;
                        cout<<"\n\t\t\t\t\t\t<< PASSWORD IS : "<<search_password<<" >>\n\n"<<endl;
                        system("PAUSE");
                        system("CLS");
                        logic = 1;
                        i3 = 43;
                        break;
                    }
                    if(search_password1 == password)
                    {
                        system("color c");
                        cout<<"\n\n\t\t\t\t\t\t<< PASSWORD FOUND IN "<<counter/10<<" seconds!!!!!! >>"<<endl;
                        cout<<"\n\t\t\t\t\t\t<< PASSWORD IS : "<<search_password1<<" >>\n\n"<<endl;
                        system("PAUSE");
                        system("CLS");
                        logic = 1;
                        i3 = 43;
                        break;
                    }
                    search_password1 = "";
                    search_password1 = search_password1 + x1[j] + x1[j1] + x1[j2] + x1[j3];
                    cout<<"\n\n\t\t\t\t\t\t 4th QUADRO Generator: "<<search_password1<<endl;
                    if(search_password1 == password)
                    {
                        system("color c");
                        cout<<"\n\n\t\t\t\t\t\t<< PASSWORD FOUND IN "<<counter/10<<" seconds!!!!!! >>"<<endl;
                        cout<<"\n\t\t\t\t\t\t<< PASSWORD IS : "<<search_password1<<" >>\n\n"<<endl;
                        system("PAUSE");
                        system("CLS");
                        logic = 1;
                        i3 = 43;
                        break;
                    }
                    if(logic == 0)
                    {
                    search_password = "";
                    search_password1 = "";
                    }
                    system("CLS");
                    counter++;
                }
                counter++;
                if(logic == 1)
                    i = i1 = i2 = 43;
            }
        }
    }
    if(logic == 0)
    {
        cout<<"\n\n\t\t\t\t\t\t<< PASSWORD NOT FOUND!!!!!! IN "<<counter/10<<" seconds!!!!!! >>"<<endl;
        system("PAUSE");
        system("CLS");
    }
}
void five_word_password(int logic, int counter, int pm)
{
    for(int i = 0; i < 43; i++)
    {
        int j = 82 - i;
        for(int i1 = 0; i1 < 43; i1++)
        {
            int j1 = 82 - i1;
            for(int i2 = 0; i2 < 43; i2++)
            {
                int j2 = 82 - i2;
                for(int i3 = 0; i3 < 43; i3++)
                {
                    int j3 = 82 - i3;
                    for(int i4 = 0; i4 < 43; i4++)
                    {
                        int j4 = 82 - i4;
                        cout<<"\n\n\t\t\t\t\t\t Time Lapse: " << counter/10 <<" seconds                                 Combinations: "<< pm <<"\n"<<endl;
                        search_password = search_password + x[i] + x[i1] + x[i2] + x[i3] + x[i4];
                        cout<<"\n\n\t\t\t\t\t\t 1st QUADRO Generator: "<<search_password<<endl;
                        search_password1 = search_password1 + x1[j] + x1[j1] + x1[j2] + x1[j3] + x1[j4];
                        cout<<"\n\n\t\t\t\t\t\t 2nd QUADRO Generator: "<<search_password1<<endl;
                        if(search_password == password)
                        {
                            system("color c");
                            cout<<"\n\n\t\t\t\t\t\t<< PASSWORD FOUND IN "<<counter/10<<" seconds!!!!!! >>"<<endl;
                            cout<<"\n\t\t\t\t\t\t<< PASSWORD IS : "<<search_password<<" >>\n\n"<<endl;
                            system("PAUSE");
                            system("CLS");
                            logic = 1;
                            i4 = 43;
                            break;
                        }
                        search_password = "";
                        search_password = search_password + x[i] + x[i1] + x[i2] + x[i3] + x[i4];
                        cout<<"\n\n\t\t\t\t\t\t 3rd QUADRO Generator: "<<search_password<<endl;
                        if(search_password == password)
                        {
                            system("color c");
                            cout<<"\n\n\t\t\t\t\t\t<< PASSWORD FOUND IN "<<counter/10<<" seconds!!!!!! >>"<<endl;
                            cout<<"\n\t\t\t\t\t\t<< PASSWORD IS : "<<search_password<<" >>\n\n"<<endl;
                            system("PAUSE");
                            system("CLS");
                            logic = 1;
                            i4 = 43;
                            break;
                        }
                        if(search_password1 == password)
                        {
                            system("color c");
                            cout<<"\n\n\t\t\t\t\t\t<< PASSWORD FOUND IN "<<counter/10<<" seconds!!!!!! >>"<<endl;
                            cout<<"\n\t\t\t\t\t\t<< PASSWORD IS : "<<search_password1<<" >>\n\n"<<endl;
                            system("PAUSE");
                            system("CLS");
                            logic = 1;
                            i4 = 43;
                            break;
                        }
                        search_password1 = "";
                        search_password1 = search_password1 + x1[j] + x1[j1] + x1[j2] + x1[j3] + x1[j4];
                        cout<<"\n\n\t\t\t\t\t\t 4th QUADRO Generator: "<<search_password1<<endl;
                        if(search_password1 == password)
                        {
                            system("color c");
                            cout<<"\n\n\t\t\t\t\t\t<< PASSWORD FOUND IN "<<counter/10<<" seconds!!!!!! >>"<<endl;
                            cout<<"\n\t\t\t\t\t\t<< PASSWORD IS : "<<search_password1<<" >>\n\n"<<endl;
                            system("PAUSE");
                            system("CLS");
                            logic = 1;
                            i4 = 43;
                            break;
                        }
                        if(logic == 0)
                        {
                            search_password = "";
                            search_password1 = "";
                        }
                        system("CLS");
                        counter++;
                    }
                    counter++;
                    if(logic == 1)
                        i = i1 = i2 = i3 = 43;
                }
            }
        }
    }
    if(logic == 0)
    {
        cout<<"\n\n\t\t\t\t\t\t<< PASSWORD NOT FOUND!!!!!! IN "<<counter/10<<" seconds!!!!!! >>"<<endl;
        system("PAUSE");
        system("CLS");
    }
}
void six_word_password(int logic, int counter, int pm)
{
    for(int i = 0; i < 43; i++)
    {
        int j = 82 - i;
        for(int i1 = 0; i1 < 43; i1++)
        {
            int j1 = 82 - i1;
            for(int i2 = 0; i2 < 43; i2++)
            {
                int j2 = 82 - i2;
                for(int i3 = 0; i3 < 43; i3++)
                {
                    int j3 = 82 - i3;
                    for(int i4 = 0; i4 < 43; i4++)
                    {
                        int j4 = 82 - i4;
                        for(int i5 = 0; i5 < 43; i5++)
                        {
                            int j5 = 82 - i5;
                            cout<<"\n\n\t\t\t\t\t\t Time Lapse: " << counter/10 <<" seconds                                 Combinations: "<< pm <<"\n"<<endl;
                            search_password = search_password + x[i] + x[i1] + x[i2] + x[i3] + x[i4] + x[i5];
                            cout<<"\n\n\t\t\t\t\t\t 1st QUADRO Generator: "<<search_password<<endl;
                            search_password1 = search_password1 + x1[j] + x1[j1] + x1[j2] + x1[j3] + x1[j4] + x1[j5];
                            cout<<"\n\n\t\t\t\t\t\t 2nd QUADRO Generator: "<<search_password1<<endl;
                            if(search_password == password)
                            {
                                system("color c");
                                cout<<"\n\n\t\t\t\t\t\t<< PASSWORD FOUND IN "<<counter/10<<" seconds!!!!!! >>"<<endl;
                                cout<<"\n\t\t\t\t\t\t<< PASSWORD IS : "<<search_password<<" >>\n\n"<<endl;
                                system("PAUSE");
                                system("CLS");
                                logic = 1;
                                i5 = 43;
                                break;
                            }
                            search_password = "";
                            search_password = search_password + x[i] + x[i1] + x[i2] + x[i3] + x[i4] + x[i5];
                            cout<<"\n\n\t\t\t\t\t\t 3rd QUADRO Generator: "<<search_password<<endl;
                            if(search_password == password)
                            {
                                system("color c");
                                cout<<"\n\n\t\t\t\t\t\t<< PASSWORD FOUND IN "<<counter/10<<" seconds!!!!!! >>"<<endl;
                                cout<<"\n\t\t\t\t\t\t<< PASSWORD IS : "<<search_password<<" >>\n\n"<<endl;
                                system("PAUSE");
                                system("CLS");
                                logic = 1;
                                i5 = 43;
                                break;
                            }
                            if(search_password1 == password)
                            {
                                system("color c");
                                cout<<"\n\n\t\t\t\t\t\t<< PASSWORD FOUND IN "<<counter/10<<" seconds!!!!!! >>"<<endl;
                                cout<<"\n\t\t\t\t\t\t<< PASSWORD IS : "<<search_password1<<" >>\n\n"<<endl;
                                system("PAUSE");
                                system("CLS");
                                logic = 1;
                                i5 = 43;
                                break;
                            }
                            search_password1 = "";
                            search_password1 = search_password1 + x1[j] + x1[j1] + x1[j2] + x1[j3] + x1[j4] + x1[j5];
                            cout<<"\n\n\t\t\t\t\t\t 4th QUADRO Generator: "<<search_password1<<endl;
                            if(search_password1 == password)
                            {
                                system("color c");
                                cout<<"\n\n\t\t\t\t\t\t<< PASSWORD FOUND IN "<<counter/10<<" seconds!!!!!! >>"<<endl;
                                cout<<"\n\t\t\t\t\t\t<< PASSWORD IS : "<<search_password1<<" >>\n\n"<<endl;
                                system("PAUSE");
                                system("CLS");
                                logic = 1;
                                i5 = 43;
                                break;
                            }
                            if(logic == 0)
                            {
                                search_password = "";
                                search_password1 = "";
                            }
                            system("CLS");
                            counter++;
                        }
                        counter++;
                        if(logic == 1)
                            i = i1 = i2 = i3 = i4 = 43;
                    }
                }
            }
        }
    }
    if(logic == 0)
    {
        cout<<"\n\n\t\t\t\t\t\t<< PASSWORD NOT FOUND!!!!!! IN "<<counter/10<<" seconds!!!!!! >>"<<endl;
        system("PAUSE");
        system("CLS");
    }
}
void seven_word_password(int logic, int counter, int pm)
{
    for(int i = 0; i < 43; i++)
    {
        int j = 82 - i;
        for(int i1 = 0; i1 < 43; i1++)
        {
            int j1 = 82 - i1;
            for(int i2 = 0; i2 < 43; i2++)
            {
                int j2 = 82 - i2;
                for(int i3 = 0; i3 < 43; i3++)
                {
                    int j3 = 82 - i3;
                    for(int i4 = 0; i4 < 43; i4++)
                    {
                        int j4 = 82 - i4;
                        for(int i5 = 0; i5 < 43; i5++)
                        {
                            int j5 = 82 - i5;
                            for(int i6 = 0; i6 < 43; i6++)
                            {
                                int j6 = 82 - i6;
                                cout<<"\n\n\t\t\t\t\t\t Time Lapse: " << counter/10 <<" seconds                                 Combinations: "<< pm <<"\n"<<endl;
                                search_password = search_password + x[i] + x[i1] + x[i2] + x[i3] + x[i4] + x[i5] + x[i6];
                                cout<<"\n\n\t\t\t\t\t\t 1st QUADRO Generator: "<<search_password<<endl;
                                search_password1 = search_password1 + x1[j] + x1[j1] + x1[j2] + x1[j3] + x1[j4] + x1[j5] + x1[j6];
                                cout<<"\n\n\t\t\t\t\t\t 2nd QUADRO Generator: "<<search_password1<<endl;
                                if(search_password == password)
                                {
                                    system("color c");
                                    cout<<"\n\n\t\t\t\t\t\t<< PASSWORD FOUND IN "<<counter/10<<" seconds!!!!!! >>"<<endl;
                                    cout<<"\n\t\t\t\t\t\t<< PASSWORD IS : "<<search_password<<" >>\n\n"<<endl;
                                    system("PAUSE");
                                    system("CLS");
                                    logic = 1;
                                    i6 = 43;
                                    break;
                                }
                                search_password = "";
                                search_password = search_password + x[i] + x[i1] + x[i2] + x[i3] + x[i4] + x[i5] + x[i6];
                                cout<<"\n\n\t\t\t\t\t\t 3rd QUADRO Generator: "<<search_password<<endl;
                                if(search_password == password)
                                {
                                    system("color c");
                                    cout<<"\n\n\t\t\t\t\t\t<< PASSWORD FOUND IN "<<counter/10<<" seconds!!!!!! >>"<<endl;
                                    cout<<"\n\t\t\t\t\t\t<< PASSWORD IS : "<<search_password<<" >>\n\n"<<endl;
                                    system("PAUSE");
                                    system("CLS");
                                    logic = 1;
                                    i6 = 43;
                                    break;
                                }
                                if(search_password1 == password)
                                {
                                    system("color c");
                                    cout<<"\n\n\t\t\t\t\t\t<< PASSWORD FOUND IN "<<counter/10<<" seconds!!!!!! >>"<<endl;
                                    cout<<"\n\t\t\t\t\t\t<< PASSWORD IS : "<<search_password1<<" >>\n\n"<<endl;
                                    system("PAUSE");
                                    system("CLS");
                                    logic = 1;
                                    i6 = 43;
                                    break;
                                }
                                search_password1 = "";
                                search_password1 = search_password1 + x1[j] + x1[j1] + x1[j2] + x1[j3] + x1[j4] + x1[j5] + x1[j6];
                                cout<<"\n\n\t\t\t\t\t\t 4th QUADRO Generator: "<<search_password1<<endl;
                                if(search_password1 == password)
                                {
                                    system("color c");
                                    cout<<"\n\n\t\t\t\t\t\t<< PASSWORD FOUND IN "<<counter/10<<" seconds!!!!!! >>"<<endl;
                                    cout<<"\n\t\t\t\t\t\t<< PASSWORD IS : "<<search_password1<<" >>\n\n"<<endl;
                                    system("PAUSE");
                                    system("CLS");
                                    logic = 1;
                                    i6 = 43;
                                    break;
                                }
                                if(logic == 0)
                                {
                                    search_password = "";
                                    search_password1 = "";
                                }
                                system("CLS");
                                counter++;
                            }
                            counter++;
                            if(logic == 1)
                                i = i1 = i2 = i3 = i4 = i5 = 43;
                        }
                    }
                }
            }
        }
    }
    if(logic == 0)
    {
        cout<<"\n\n\t\t\t\t\t\t<< PASSWORD NOT FOUND!!!!!! IN "<<counter/10<<" seconds!!!!!! >>"<<endl;
        system("PAUSE");
        system("CLS");
    }
}
void eight_word_password(int logic, int counter, int pm)
{
    for(int i = 0; i < 43; i++)
    {
        int j = 82 - i;
        for(int i1 = 0; i1 < 43; i1++)
        {
            int j1 = 82 - i1;
            for(int i2 = 0; i2 < 43; i2++)
            {
                int j2 = 82 - i2;
                for(int i3 = 0; i3 < 43; i3++)
                {
                    int j3 = 82 - i3;
                    for(int i4 = 0; i4 < 43; i4++)
                    {
                        int j4 = 82 - i4;
                        for(int i5 = 0; i5 < 43; i5++)
                        {
                            int j5 = 82 - i5;
                            for(int i6 = 0; i6 < 43; i6++)
                            {
                                int j6 = 82 - i6;
                                for(int i7 = 0; i7 < 43; i7++)
                                {
                                    int j7 = 82 - i7;
                                    cout<<"\n\n\t\t\t\t\t\t Time Lapse: " << counter/10 <<" seconds                                 Combinations: "<< pm <<"\n"<<endl;
                                    search_password = search_password + x[i] + x[i1] + x[i2] + x[i3] + x[i4] + x[i5] + x[i6] + x[i7];
                                    cout<<"\n\n\t\t\t\t\t\t 1st QUADRO Generator: "<<search_password<<endl;
                                    search_password1 = search_password1 + x1[j] + x1[j1] + x1[j2] + x1[j3] + x1[j4] + x1[j5] + x1[j6] + x1[j7];
                                    cout<<"\n\n\t\t\t\t\t\t 2nd QUADRO Generator: "<<search_password1<<endl;
                                    if(search_password == password)
                                    {
                                        system("color c");
                                        cout<<"\n\n\t\t\t\t\t\t<< PASSWORD FOUND IN "<<counter/10<<" seconds!!!!!! >>"<<endl;
                                        cout<<"\n\t\t\t\t\t\t<< PASSWORD IS : "<<search_password<<" >>\n\n"<<endl;
                                        system("PAUSE");
                                        system("CLS");
                                        logic = 1;
                                        i7 = 43;
                                        break;
                                    }
                                    search_password = "";
                                    search_password = search_password + x[i] + x[i1] + x[i2] + x[i3] + x[i4] + x[i5] + x[i6] + x[i7];
                                    cout<<"\n\n\t\t\t\t\t\t 3rd QUADRO Generator: "<<search_password<<endl;
                                    if(search_password == password)
                                    {
                                        system("color c");
                                        cout<<"\n\n\t\t\t\t\t\t<< PASSWORD FOUND IN "<<counter/10<<" seconds!!!!!! >>"<<endl;
                                        cout<<"\n\t\t\t\t\t\t<< PASSWORD IS : "<<search_password<<" >>\n\n"<<endl;
                                        system("PAUSE");
                                        system("CLS");
                                        logic = 1;
                                        i7 = 43;
                                        break;
                                    }
                                    if(search_password1 == password)
                                    {
                                        system("color c");
                                        cout<<"\n\n\t\t\t\t\t\t<< PASSWORD FOUND IN "<<counter/10<<" seconds!!!!!! >>"<<endl;
                                        cout<<"\n\t\t\t\t\t\t<< PASSWORD IS : "<<search_password1<<" >>\n\n"<<endl;
                                        system("PAUSE");
                                        system("CLS");
                                        logic = 1;
                                        i7 = 43;
                                        break;
                                    }
                                    search_password1 = "";
                                    search_password1 = search_password1 + x1[j] + x1[j1] + x1[j2] + x1[j3] + x1[j4] + x1[j5] + x1[j6] + x1[j7];
                                    cout<<"\n\n\t\t\t\t\t\t 4th QUADRO Generator: "<<search_password1<<endl;
                                    if(search_password1 == password)
                                    {
                                        system("color c");
                                        cout<<"\n\n\t\t\t\t\t\t<< PASSWORD FOUND IN "<<counter/10<<" seconds!!!!!! >>"<<endl;
                                        cout<<"\n\t\t\t\t\t\t<< PASSWORD IS : "<<search_password1<<" >>\n\n"<<endl;
                                        system("PAUSE");
                                        system("CLS");
                                        logic = 1;
                                        i7 = 43;
                                        break;
                                    }
                                    if(logic == 0)
                                    {
                                        search_password = "";
                                        search_password1 = "";
                                    }
                                    system("CLS");
                                    counter++;
                                }
                                counter++;
                                if(logic == 1)
                                    i = i1 = i2 = i3 = i4 = i5 = i6 = 43;
                            }
                        }
                    }
                }
            }
        }
    }
    if(logic == 0)
    {
        cout<<"\n\n\t\t\t\t\t\t<< PASSWORD NOT FOUND!!!!!! IN "<<counter/10<<" seconds!!!!!! >>"<<endl;
        system("PAUSE");
        system("CLS");
    }
}
void nine_word_password(int logic, int counter, int pm)
{
    for(int i = 0; i < 43; i++)
    {
        int j = 82 - i;
        for(int i1 = 0; i1 < 43; i1++)
        {
            int j1 = 82 - i1;
            for(int i2 = 0; i2 < 43; i2++)
            {
                int j2 = 82 - i2;
                for(int i3 = 0; i3 < 43; i3++)
                {
                    int j3 = 82 - i3;
                    for(int i4 = 0; i4 < 43; i4++)
                    {
                        int j4 = 82 - i4;
                        for(int i5 = 0; i5 < 43; i5++)
                        {
                            int j5 = 82 - i5;
                            for(int i6 = 0; i6 < 43; i6++)
                            {
                                int j6 = 82 - i6;
                                for(int i7 = 0; i7 < 43; i7++)
                                {
                                    int j7 = 82 - i7;
                                    for(int i8 = 0; i8 < 43; i8++)
                                    {
                                        int j8 = 82 - i8;
                                        cout<<"\n\n\t\t\t\t\t\t Time Lapse: " << counter/10 <<" seconds                                 Combinations: "<< pm <<"\n"<<endl;
                                        search_password = search_password + x[i] + x[i1] + x[i2] + x[i3] + x[i4] + x[i5] + x[i6] + x[i7] + x[i8];
                                        cout<<"\n\n\t\t\t\t\t\t 1st QUADRO Generator: "<<search_password<<endl;
                                        search_password1 = search_password1 + x1[j] + x1[j1] + x1[j2] + x1[j3] + x1[j4] + x1[j5] + x1[j6] + x1[j7] + x1[j8];
                                        cout<<"\n\n\t\t\t\t\t\t 2nd QUADRO Generator: "<<search_password1<<endl;
                                        if(search_password == password)
                                        {
                                            system("color c");
                                            cout<<"\n\n\t\t\t\t\t\t<< PASSWORD FOUND IN "<<counter/10<<" seconds!!!!!! >>"<<endl;
                                            cout<<"\n\t\t\t\t\t\t<< PASSWORD IS : "<<search_password<<" >>\n\n"<<endl;
                                            system("PAUSE");
                                            system("CLS");
                                            logic = 1;
                                            i8 = 43;
                                            break;
                                        }
                                        search_password = "";
                                        search_password = search_password + x[i] + x[i1] + x[i2] + x[i3] + x[i4] + x[i5] + x[i6] + x[i7] + x[j8];
                                        cout<<"\n\n\t\t\t\t\t\t 3rd QUADRO Generator: "<<search_password<<endl;
                                        if(search_password == password)
                                        {
                                            system("color c");
                                            cout<<"\n\n\t\t\t\t\t\t<< PASSWORD FOUND IN "<<counter/10<<" seconds!!!!!! >>"<<endl;
                                            cout<<"\n\t\t\t\t\t\t<< PASSWORD IS : "<<search_password<<" >>\n\n"<<endl;
                                            system("PAUSE");
                                            system("CLS");
                                            logic = 1;
                                            i8 = 43;
                                            break;
                                        }
                                        if(search_password1 == password)
                                        {
                                            system("color c");
                                            cout<<"\n\n\t\t\t\t\t\t<< PASSWORD FOUND IN "<<counter/10<<" seconds!!!!!! >>"<<endl;
                                            cout<<"\n\t\t\t\t\t\t<< PASSWORD IS : "<<search_password1<<" >>\n\n"<<endl;
                                            system("PAUSE");
                                            system("CLS");
                                            logic = 1;
                                            i8 = 43;
                                            break;
                                        }
                                        search_password1 = "";
                                        search_password1 = search_password1 + x1[j] + x1[j1] + x1[j2] + x1[j3] + x1[j4] + x1[j5] + x1[j6] + x1[j7] + x1[i8];
                                        cout<<"\n\n\t\t\t\t\t\t 4th QUADRO Generator: "<<search_password1<<endl;
                                        if(search_password1 == password)
                                        {
                                            system("color c");
                                            cout<<"\n\n\t\t\t\t\t\t<< PASSWORD FOUND IN "<<counter/10<<" seconds!!!!!! >>"<<endl;
                                            cout<<"\n\t\t\t\t\t\t<< PASSWORD IS : "<<search_password1<<" >>\n\n"<<endl;
                                            system("PAUSE");
                                            system("CLS");
                                            logic = 1;
                                            i8 = 43;
                                            break;
                                        }
                                        if(logic == 0)
                                        {
                                            search_password = "";
                                            search_password1 = "";
                                        }
                                        system("CLS");
                                        counter++;
                                    }
                                    counter++;
                                    if(logic == 1)
                                        i = i1 = i2 = i3 = i4 = i5 = i6 = i7 = 43;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if(logic == 0)
    {
        cout<<"\n\n\t\t\t\t\t\t<< PASSWORD NOT FOUND!!!!!! IN "<<counter/10<<" seconds!!!!!! >>"<<endl;
        system("PAUSE");
        system("CLS");
    }
}
int main()
{
    int n;
    char option;
    while(option != '9')
    {
        int logic = 0, counter = 0;
        system("color b");
        cout<<"\n\n\t\t\t\t\t\t << PASSWORD HACKER FOR ANYTHING >>\n\n"<<endl;
        cout<<"\t\t\t\t\t\t Enter Password to Hack: ";
        cin>>password;
        cout<<"\n"<<endl;
        cout<<"\t\t\t\t\t\t Hacking........... : "<<endl;
        n = password.length();
        unsigned long int pm = pow(83, n)/8;
        temp[n];
        switch(n)
        {
        case 1:
            system("CLS");
            one_word_password(logic, counter, pm);
            break;
        case 2:
            system("CLS");
            two_word_password(logic, counter, pm);
            break;
        case 3:
            system("CLS");
            three_word_password(logic, counter, pm);
            break;
        case 4:
            system("CLS");
            four_word_password(logic, counter, pm);
            break;
        case 5:
            system("CLS");
            five_word_password(logic, counter, pm);
            break;
        case 6:
            system("CLS");
            six_word_password(logic, counter, pm);
            break;
        case 7:
            system("CLS");
            seven_word_password(logic, counter, pm);
            break;
        case 8:
            system("CLS");
            eight_word_password(logic, counter, pm);
            break;
        case 9:
            system("CLS");
            nine_word_password(logic, counter, pm);
            break;
        default:
            system("CLS");
            cout<<"\n\n\t\t\t\t\t ERROR SYSTEM REFRESHING....... \n\n"<<endl;
            break;
        }
        search_password = "";
        cout<<"\n\n\t\t\t\t\t\t DO YOU WANT TO EXIT??"<<endl;
        cout<<"\t\t\t\t\t\t ENTER 9 TO EXIT ANY KEY TO CONTINUE: ";
        cin>>option;
        system("PAUSE");
        system("CLS");
    }
    return 0;
}
