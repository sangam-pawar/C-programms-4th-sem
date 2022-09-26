#include <iostream>
#include <conio.h>
using namespace std;

class Geeks
{
    public:
    string geekname;
    void printname()
    {
        cout<<"Geekman is:"
        <<geekname ;
     }
    
};
 int main()
     {
      Geeks obj1;
      obj1.geekname= "Lord Voldemort";
      obj1.printname();
      return 0;
      getch();
     }
