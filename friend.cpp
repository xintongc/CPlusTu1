class Boy;     //向前引用  
class Girl  
{  
    private:  
    int age;  
    char name[25];  
  
    public:  
    Girl(int age,char name[])  
    {  
        this->age = age;  
        strcpy(this->name,name);  
    }  
    friend void Print(const Girl *a,const Boy *b);  
};  
  
class Boy  
{  
    private:  
    int age;  
    char name[25];  
  
    public:  
    Boy(int age,char name[])  
    {  
        this->age = age;  
        strcpy(this->name,name);  
    }  
    friend void Print(const Girl *a,const Boy *b);  
};  
  
void Print(const Girl *a,const Boy *b)  
{  
    cout<<a->name<<" "<<a->age<<endl;  
    cout<<b->name<<" "<<b->age<<endl;  
}  
  
int main()  
{  
    Girl *a = new Girl(18,"Lisa");  
    Boy  *b = new Boy(20,"Jimi");  
    Print(a,b);  
    return 0;  
}  
