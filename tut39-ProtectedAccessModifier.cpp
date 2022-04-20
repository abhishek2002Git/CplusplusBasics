#include <iostream>
using namespace std;

// protected members = they can be inherited like public members but cannot be accessed directly like private members.

/*
                            public derivation      private derivation     protected derivation
1. private members          not inherited           not inherited           not inherited
2. public members           public                  private                 protected
3. protected members        protected               private                 protected
*/

class Base{
    protected:
    int a;
    private:
    int b;
};

class Derived: protected Base{

};

int main(){
    cout<<"Hello world"<<endl;
    return 0;
}