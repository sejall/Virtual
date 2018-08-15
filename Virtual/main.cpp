#include <iostream>

using namespace std;
class base
{
public:
    virtual ~base()=0;
};
base::~base()
    {
        cout<<"base dest"<<endl;
    }

    class derived: public base
    {
    public:
    ~derived()
    {
        cout<<"derived destructor";
    }
    };

int main()
{
    base *b= new derived;
    delete b;
    return 0;
}
