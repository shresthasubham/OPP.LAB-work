//LAB 2 Q3 //
/* Define two namespaces: Square and Cube. In the both namespaces, define an integer variable named"num" and function named"fun".
The "fun" function in Square namesspace,should return the awuare of integer while fun function in Cube namespace should return
the cube of the integer. in the main function set integer variables,then compute and print the result using respective namespace.*/
#include<iostream>
namespace square{
    int num;
    int fun(int n){ return n*n;}
}
namespace cube{
    int num;
    int fun(int n){ return n*n*n;}
}
int main(){
    square::num=3;
    cube::num=4;
    std::cout<<square::fun(cube::num)
    <<"\n"<<cube::fun(square::num);
    return 0;
}

