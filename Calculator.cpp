#include "Calculator.hpp"
#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;



int main(void)
{
    AbstractCalculator *p = new Add(3,7);
    cout << p->m_Val_1 << "+" << p->m_Vla_2 << "=" << p->get_Result() << endl;

    p = new Minus(4,8);
    cout << p->m_Val_1 << "-" << p->m_Vla_2 << "=" << p->get_Result() << endl;

    p = new Mul(10,2);
    cout << p->m_Val_1 << "x" << p->m_Vla_2 << "=" << p->get_Result() << endl;
    delete p;

    cout << "Git test !<<endl";
    cout << "11:02" << endl;
    cout << "branch 20200328" << endl;
    cout << "branch 11:29" << endl;

    system("pause");
    return 0;
}