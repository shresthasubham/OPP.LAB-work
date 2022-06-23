//Q N 5
/*Write a program that illustrates the following relationship and comment on them.
 i) const_object.non_const_mem_function
 ii) const_object.const_mem_function
 iii) non_const_object.non_const_mem_function
 iv) non_const_object.const_mem_function */

 #include<iostream>
 class Demo
{
public:
    void konst() const
    {
        std::cout << "Hello from constant function\n";
    }

    void Nkonst()
    {
        std::cout << "Hi from non constant member function\n";
    }
};

int main()
{
    const Demo konst;
    Demo NKonst;
  //konst.Nkonst(); /*This will gives us error*/

    konst.konst();

    NKonst.Nkonst();

    NKonst.konst();

    return 0;
}
