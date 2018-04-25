#include <iostream>
using namespace std;

class Li
{
    friend class LaoWang;
public:
    Li(): name(1), m_home(2), m_wife(3) {}
    ~Li(){ }

public:
    int name;
protected:
    int m_home;
private:
    int m_wife;
};

class LiSon: public Li
{
public:
    LiSon():trueFather(4){}
private:
    int trueFather;
};

class LaoWang
{
public:
    virtual void look(const Li& li) {
        cout << "LaoWang know Li's "
             << endl;
        cout << "name: " << li.name
             << " home: " << li.m_home
             << " wife: " << li.m_wife
             << "." << endl;
    }
};

class LaoWangSon: public LaoWang
{
public:
    void look(const Li& uncleLi) {
        //! cout << "name: " << uncleLi.name << " home: " << uncleLi.m_home << " wife: " << uncleLi.m_wife<< endl;
        cout << "LaoWang's son know" << endl;
        this->LaoWang::look(uncleLi);
    }

};

int main(int, char**)
{
    Li li;
    LaoWang laoWang;

    laoWang.look(li);
    cout << "========" << endl;

    LaoWangSon laoWangSon;
    laoWangSon.look(li);
    cout << "========" << endl;

    cout << "LaoWang only know LiSon's father's ." << endl;
    LiSon liSon;
    laoWang.look(liSon);

    cout << "========"
         << "oh! the firend mean the LaoWang."
         << endl;

    return 0;
}
