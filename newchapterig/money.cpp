#include<iostream>
using namespace std;

class money{
    private:
        int rs, paisa;
    
    public:
        friend istream &operator >>(istream &rakha, money &M);
        friend ostream &operator <<(ostream &dekhau, money &M);

};

istream &operator>>(istream &rakha, money &M)
{
    cout<<"Rupiya kati: ";
    rakha>>M.paisa;
    return rakha;
}

ostream &operator <<(ostream &dekhau, money &M){
    dekhau<<"Rupess="<<M.rs<<endl;
    dekhau<<"paisa= "<<M.paisa<<endl;
    return dekhau;
}

int main(){
    money m;
    cin>>m;
    cout<<m;

    return 0;
}