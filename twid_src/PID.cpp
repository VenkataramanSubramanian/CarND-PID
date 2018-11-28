#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double kp, double ki, double kd) 
{
	
	Kp=kp;
	Ki=ki;
	Kd=kd;
	
	//Intilazing error values to zero
	p_error=0;
	i_error=0;
	d_error=0;
	t_error=0;
}

void PID::UpdateError(double cte) 
{
	d_error=cte-p_error;
	p_error=cte;
	i_error+=cte;
	
}

double PID::TotalError() 
{
	return -Kp * p_error - Ki * i_error - Kd * d_error;
}

