#include <iostream>
#include <fstream>
#include <string>
using namespace std;
//文件操作
int main()
{
    string a,data;
    int b,c;
    ifstream ifs("E:\\C++filedemo\\CSAPP报名.txt");
    while(getline(ifs,a))
        cout<<a<<endl;
    ifs.close();

    ifstream ifs1("E:\\C++filedemo\\file5.txt");
    while(ifs1>>b>>c)
    {
        cout<<b<<" "<<c<<endl;
    }
    ifs1.close();


    ofstream ofs("E:\\C++filedemo\\file.txt",iostream::app);//文件内容追加

    if(ofs.is_open())
    {
        ofs<<"打开文件成功，这是我加入的内容"<<endl;

    }

    ofs.close();
    return 0;
}
