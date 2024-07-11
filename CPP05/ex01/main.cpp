#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{

    try{
        Bureaucrat bureaucrat("ash",2);
        // first int shows the Grade to sign second the Grade to execute. To succed the Grade to execute needs to be better (smaller) than the Grade to sign.
        Form form("randomName", true, 42, 41);
        bureaucrat.signForm(form);
        std::cout << form << std::endl;
    }catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }
    return (0);
}