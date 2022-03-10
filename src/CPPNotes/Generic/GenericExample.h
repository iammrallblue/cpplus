template <class T>
class Arithmetic
{
private:
    /* data members */
    T a; // generic datatype a, b
    T b;

public:
    Arithmetic(T a, T b);
    T add();
    T sub();
    ~Arithmetic();
};
