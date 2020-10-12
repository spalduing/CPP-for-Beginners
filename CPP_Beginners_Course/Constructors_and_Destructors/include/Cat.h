#ifndef CAT_H
#define CAT_H


class Cat
{
    private:
        bool happy = true;
    public:
        Cat();
        ~Cat();
        void speak();
        void makeHappy();
        void makeSad();

};

#endif // CAT_H
