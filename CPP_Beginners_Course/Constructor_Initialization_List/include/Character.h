#ifndef CHARACTER_H
#define CHARACTER_H
using namespace std;

class Character
{
    private:
        string name;
        string clas;
        int age;

    public:
        Character();
        Character(string name, string clas, int age);
        ~Character();
        string toString();
};

#endif // CHARACTER_H
