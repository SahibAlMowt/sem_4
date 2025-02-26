#include "calc.h"

sam::Calculation::Calculation(double m,  double n)
{	
	a = m;
	b = n;
	sum = a + b;
	dif = a - b;
	mp = a * b;
	dev = a / b;
}

double sam::Calculation::getsum() const
{
	return sum;
}

double sam::Calculation::getdif() const
{
	return dif;
}

double sam::Calculation::getmp() const
{
	return mp;
}

double sam::Calculation::getdev() const
{
    if(b != 0)
    {
        return dev;
    }
    else
    {
        throw std::runtime_error("division na zero! don't do this again\n");
    }
}

double sam::calculator(double a, double b, char c)
{
    sam::Calculation s(a, b);

    switch (c) 
    {
        case '+':
            return s.getsum();
        case '-':
            return s.getdif();
        case '*':
            return s.getmp();
        case '/':
            return s.getdev();
        default:
            throw std::invalid_argument("invalid operator");
    }
}


double sam::proxodka(std::string str)
{
    try
    {
        if(str.back() == '-' || str.back() == '/' || str.back() == '*' || str.back() == '+')
        {
            throw std::invalid_argument("sentence ends with a period\n");
        }
    }
    catch(const std::invalid_argument &e)
    {
        std::cerr << e.what() << '\n';
        return 0;
    }
    
    std::vector<double> num;
    std::vector<char> op;

    std::string t; 
    
    bool point = false;
    bool d_op = false;
    bool m = false;

    if(str[0] == '-')
    {
        t += '-';
    }
    char rem = '\0';
    for (char c: str) 
    {
        if (c <= '9' && c >= '0') 
        {
            t += c;
            d_op = false;
            m = false; 
        }
        else if(c == '.')
        {
			t += c;
			point = true;
            d_op = false;
            m = false;
		}
        else 
        {
            if(!t.empty()) 
            {
                try
                {
                    double n = sam::str_to_int(t);
                    num.push_back(n); 
                    t.clear();
                }
                catch(const std::invalid_argument &e)
                {
                    std::cerr << e.what() << '\n';
                    return 0;
                }
                
                 
            }
            if (c == '+' || c == '-' || c == '*' || c == '/')
            {
                try
                {
                    if(d_op && (c != '-' || rem != '-'))
                {
                    if((rem == '*' || rem == '/' || rem == '+') && c == '-')
                    {
                        t += c;
                        continue;
                    }
                    throw std::invalid_argument("many operators here\n");
                }
                }
                catch(const std::invalid_argument &e)
                {
                    std::cerr << e.what() << '\n';
                    return 0;
                }
                
                try
                {
                    if(m)
                    {
                        throw std::invalid_argument("many minus operators here\n");
                    }
                }
                catch(const std::invalid_argument &e)
                {
                    std::cerr << e.what() << "\n";
                    return 0;
                }

                d_op = true;

                op.push_back(c); 
                if(c == '-' && rem == '-')
                { 
                    m = true;  
                    op.pop_back();
                    op.pop_back();
                    op.push_back('+');
                    
                }   
            }
            else if (c != ' ' && str != "quit") 
            {
                try 
                {
                    throw std::invalid_argument(std::string("not working operator\t") + c);
                }
                catch(const std::invalid_argument &e)
                {
                    std::cerr << e.what() << "\n";
                    return 0;
                }
            }

        }
        rem = c;
    }

    if (!t.empty()) 
    {
		try
		{
			num.push_back(sam::str_to_int(t));
		}
		catch(const std::invalid_argument &e)
		{
			std::cerr << e.what() << "\n";
			return 0;
		}
        
    }

    for (int i = 0; i < op.size(); i++) 
    {
        try
        {
            if (op[i] == '*' || op[i] == '/') 
            {
                double result = sam::calculator(num[i], num[i + 1], op[i]);
                num[i] = result;

                num.erase(num.begin() + i + 1);
                op.erase(op.begin() + i);

                i--;
            }
        }
        catch(const std::exception &e)
        {
            std::cerr << e.what() << '\n';
            return 0;
        }
        
    }

    for (int i = 0; i < op.size(); i++) 
    {
        double result = sam::calculator(num[i], num[i + 1], op[i]);
        num[i] = result;

        num.erase(num.begin() + i + 1);
        op.erase(op.begin() + i);

        i--;
    }

    double result = num[0];

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "result\t" << result << "\n";
    return result;
}

double sam::str_to_int(std::string str)
{ 
    if(str.back() == '.')
    {
        throw std::invalid_argument("it's not a sentence");
    }  
    
    {
        int dot = 0;
        for(char c: str)
        {
            if(c == '.')
            {
                dot++;
            }
        }  
        if(dot > 1)
        {
            throw std::invalid_argument("are you writing Morse code?");
        } 
    }
    

    double t = 0;
    double d = 0;

    bool flag = false;

    if(str[0] == '-')
    {
        str.erase(str.begin());

        flag = true;
    }
    
    for(auto iter = str.begin(); iter != str.end(); iter++)
    {
		
		
		if(*iter == '.')
		{
			for(auto iter2 = iter + 1; iter2 != str.end(); iter2++)
			{
				d = d * 10 + (*iter2 - '0');
			}
			break;
		}
		
        t = t * 10 + (*iter - '0');
	}
	
	int dc;
	dc = d;
	
	
	int count = 0;
	
	while(dc > 0)
	{
		dc /= 10;
		count++;
	}
	
	d = d / pow(10, count);
	
	
	t += d;
 

    if(flag)
    {
        t *= (-1);
    }

    return t;
}

void sam::print(const std::vector<double> &a)
{
    for(auto it = a.begin(); it != a.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << "\n";
}

bool sam::containsspaces(const std::string str, char c)
{
    for(char el: str)
    {
        if(el == c)
        {
            return true;
        }
    }

    return false;
}