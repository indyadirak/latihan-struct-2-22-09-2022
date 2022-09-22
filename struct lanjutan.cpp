#include <iostream>

using namespace std;

struct merek_hp
{
    string nama_hp;
    string type_hp;
};

void proses();
void output();

merek_hp hp_1;
merek_hp hp_2;

int main()
{
    proses();
    output();
}

void proses()
{

    cout<<"data hp ke-1"<<endl<<endl;
    cout<<"masukkan merek hp :";
    cin>>hp_1.nama_hp;
    cout<<"masukkan type hp";
    cin>>hp_1.type_hp;

    cout<<endl<<endl<<endl;
    cout<<"data hp ke-2 \n\n";
    cout<<"masukkan merek hp :";
    cin>>hp_2.nama_hp;
    cout<<"masukkan type hp";
    cin>>hp_2.type_hp;

    

    
}

void output()
{
    cout<<endl<<endl;
    cout<<"===============================";
    cout<<" data hp ke-1\n";
    cout<<"nama :"  <<hp_1.nama_hp <<endl;
    cout<<"type :"  <<hp_1.type_hp <<endl;
    cout<<"data hp ke-2\n";
    cout<<"nama :" <<hp_2.nama_hp<<endl;
    cout<<"type :" <<hp_2.type_hp;
}