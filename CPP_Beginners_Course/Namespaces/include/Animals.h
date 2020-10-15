#ifndef ANIMALS_H
#define ANIMALS_H
#include <iostream>

using namespace std;
namespace spalduing{

    const string CATNAME = "Shadow";
class Cat
{
    public:
        Cat();
        virtual ~Cat();
        void speak();

    protected:

    private:
};

}
#endif // ANIMALS_H
