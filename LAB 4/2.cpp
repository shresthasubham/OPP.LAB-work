#include <iostream>

class CharacterArray
{
private:
    char *data;
    int length;

public:
    CharacterArray()
    {
        *data =nullptr;
        length = 0;
    }
    CharacterArray(char *data, int)
    {
     this->setData(data, length);
     }

    ~CharacterArray()
    {
    if (this->data != nullptr)
    {
        delete[] this->data;
    }
    this->length = 0;
    data = nullptr;
}

    void setData(char *data, int)
    {
    this->length = length;
    this->data = new char[length];

    for (int i = 0; i < length; i++)
    {
        this->data[i] = data[i];
    }
}

    void display()
    {
    for (int i = 0; i < this->length; i++)
    {
        std::cout << data[i];
    }
    std::cout << std::endl;
}


    void join(CharacterArray &, CharacterArray &)
    {
    for (int i = 0; i < this->length; i++)
    {
        std::cout << data[i];
    }
    std::cout << std::endl;
}



};

int main()
{
    CharacterArray a, b, c;

    char one[] = {'E', 'n', 'g', 'i', 'n', 'e', 'e', 'r', 's', ' ', 'a', 'r', 'e'};
    char two[] = {' ', 'C', 'r', 'e', 'a', 't', 'u', 'r', 'e', 's', ' ', 'o', 'f', ' ', 'l', 'o', 'g', 'i', 'c'};

    a.setData(one, 13);
    b.setData(two, 19);

    c.join(a, b);

    c.display();

    return 0;
}






