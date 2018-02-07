#include <iostream>
#include <cmath>
 
int number_of_solutions(double a, double b, double c)
{
    double discr = pow(b, 2) - 4*a*c;
	
	if (discr<0)
	{
		return 0;	    
	}
	else if (discr==0)
	{
		return 1;
	}
	else
	{
		return 2;
	}
}
 
double calc_one_solution(double a, double b, double c)
{
	return -b/(2*a);
}
 
double calc_two_solution_plus(double a, double b, double c)
{
	return (-b+sqrt(pow(b,2)-4*a*c))/(2*a);
}
 
double calc_two_solution_minus(double a, double b, double c)
{
    return (-b-sqrt(pow(b,2)-4*a*c))/(2*a);
}
 
int main(){
	    
	double a, b, c;
	
	std::cout << "Welcome to quadratic_equations" << std::endl;
	std::cout << "This program calculates solutions (if possible) for "
		<< "a quadratic equation of the form " << std::endl;
	std::cout << "ax^2 + bx + c = 0" << std::endl;
	
	std::cout << "Please enter a:" << std::endl;
	std::cin >> a;
	
	std::cout << "Please enter b:" << std::endl;
	std::cin >> b;
	
	std::cout << "Please enter c:" << std::endl;
	std::cin >> c;

	if (number_of_solutions(a, b, c)==0)
	{
		std::cout << "There are no real solutions for this equation" 
			<< std::endl;
	}
	
	else if (number_of_solutions(a, b, c)==1)
	{
		std::cout << "There is exactly one real solution and it is" 
			<< std::endl;
		std::cout << calc_one_solution(a, b, c) << std::endl;
	}

	else if (number_of_solutions(a, b, c)==2)
	{
		std::cout << "There are two real solutions and they are" << std::endl;
		std::cout << calc_two_solution_plus(a, b, c) << " and " 
			<< calc_two_solution_minus(a, b, c) << std::endl;
	}

 	return 0;
