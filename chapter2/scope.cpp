/*scope:
1) local and block
2) gobal/file
3) class

storage class

storage class                           memory              default                     lifttime                scope
auto                                     Ram                 garbage                     within function        
extern                                   Ram                 zero                        program
static                                   Ram                 zero                        program
register                                 Register            garbage                     within function*/
#include<iostream>
using namespace std;
void check(){
    static int x=10;
    x=x+20;
    cout<<x<<endl;

}
int main(){
    check();
    check();
    return 0;
}