<<<<<<< HEAD
#include <algorithm>
#include <string>
#include <vector>
#include <iostream>
int ct=0;
template<class T>
void print(const std::vector<T> &vec)
{
    for (typename std::vector<T>::const_iterator i = vec.begin(); i != vec.end(); ++i)
    {
        std::cout << *i;
        if ((i + 1) != vec.end())
            std::cout << ",";
    }
    std::cout << std::endl;
}

int main()
{
    //Permutations for strings
    std::string example("0123456789");
    std::sort(example.begin(), example.end());
    do {
            ct++;
            if(ct==1000000)std::cout << example << '\n';
    } while (std::next_permutation(example.begin(), example.end()));
    return 0;
}
=======
#include <algorithm>
#include <string>
#include <vector>
#include <iostream>
int ct=0;
template<class T>
void print(const std::vector<T> &vec)
{
    for (typename std::vector<T>::const_iterator i = vec.begin(); i != vec.end(); ++i)
    {
        std::cout << *i;
        if ((i + 1) != vec.end())
            std::cout << ",";
    }
    std::cout << std::endl;
}

int main()
{
    //Permutations for strings
    std::string example("0123456789");
    std::sort(example.begin(), example.end());
    do {
            ct++;
            if(ct==1000000)std::cout << example << '\n';
    } while (std::next_permutation(example.begin(), example.end()));
    return 0;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
