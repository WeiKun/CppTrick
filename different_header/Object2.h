class Object
{
public:
    Object()
    {
        hello = 300;
        member = 100;
    }
    
    int hello;
    int member;

    void show();

    static Object instance;
};
