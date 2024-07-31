#include "RPN.hpp"

RPN::RPN()
{
}

RPN::RPN(const RPN &to_copy)
{
    *this = to_copy;
}

RPN& RPN::operator=(const RPN &to_copy)
{
	(void)to_copy;
    return *this;
}

RPN::~RPN()
{
}

bool RPN::validation(const std::string& expr)
{
    if (expr.find_first_not_of("0123456789+-/* ") == std::string::npos)
    {
	    return (true);
    }
    std::cerr << "Error" << std::endl;
	return (false);
}

bool is_operator(const std::string &token)
{
    return token == "+" || token == "-" || token == "*" || token == "/";
}

float perform_operation(const std::string &operation, float a, float b)
{
    if (operation == "+")
        return a + b;
    if (operation == "-")
        return a - b;
    if (operation == "*")
        return a * b;
    if (operation == "/")
    {
        if (b == 0)
            throw std::runtime_error("Error: Division by zero");
        return a / b;
    }
    throw std::runtime_error("Error: Invalid operation");
}

long long RPN::calculate(const std::string& expression)
{
    std::istringstream tokens(expression);
    std::stack<float> stack;
    std::string token;

    while (tokens >> token)
    {
        if (is_operator(token))
        {
            if (stack.size() < 2)
                throw std::runtime_error("Error: Invalid expression");

            float b = stack.top();
            stack.pop();
            float a = stack.top();
            stack.pop();
            stack.push(perform_operation(token, a, b));
        }
        else
        {
            char *end;
            float number = std::strtof(token.c_str(), &end);
            if (*end != '\0')
                throw std::runtime_error("Error: Invalid number");
            stack.push(number);
        }
    }

    if (stack.size() != 1)
        throw std::runtime_error("Error: Invalid expression");

    return stack.top();
}
