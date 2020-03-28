




class AbstractCalculator
{
public:
    int m_Val_1;
    int m_Vla_2;
    virtual int get_Result() = 0; //纯虚函数写法
};

class Add : public AbstractCalculator
{
public:
    Add(int a,int b)
    {
        this->m_Val_1 = a;
        this->m_Vla_2 = b;
    }
    int get_Result()
    {
        return m_Val_1 + m_Vla_2;
    }

};
class Minus : public AbstractCalculator
{
public:
    Minus(int a,int b)
    {
        this->m_Val_1 = a;
        this->m_Vla_2 = b;
    }
    int get_Result()
    {
        return m_Val_1 - m_Vla_2;
    }
};
class Mul : public AbstractCalculator
{
public:
    Mul(int a,int b)
    {
        this->m_Val_1 = a;
        this->m_Vla_2 = b;
    }
    int get_Result()
    {
        return m_Val_1 * m_Vla_2;
    }
};
