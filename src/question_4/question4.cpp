#include"question4.h"

using std::string; using std::cout;

string decimal_to_binary(int num)
{
    int module_num = 0;
    int int_num = num;
    string binary_num = "";
    while(int_num > 1)
    {
        module_num = int_num % 2;
        binary_num += std::to_string(module_num);
        int_num = int_num / 2;
    }

    binary_num += std::to_string(int_num);
    binary_num = get_reverse_string(binary_num);
    return binary_num.insert(0, 8 - binary_num.length(), '0');
}

string get_reverse_string(std::string dna)
{
    string reverse_result = "";
    for (unsigned int i = 0; i < dna.size(); i++)
    {
        //std::cout << dna[dna.size() - i - 1] << std::endl;
        reverse_result += (dna[dna.size() - i - 1]);
    }

    return reverse_result;
}