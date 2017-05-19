//
// Day.cpp for  in /home/soidik_d/perso/jarvis/core/calendar
// 
// Made by SOIDIKI Djamil
// Login   <soidik_d@epitech.net>
// 
// Started on  Thu Jan 26 00:09:22 2017 SOIDIKI Djamil
// Last update Thu Jan 26 00:57:02 2017 SOIDIKI Djamil
//

#include	"Day.hh"

using namespace	core::calendar;

Day::Day(unsigned int id, unsigned int month, 
	 std::string nameMonth, unsigned int year) : 
  _id(id), _nameMonth(nameMonth), _year(year)
{
  if (this->getDayOfTheWeek(year, month, id) == 0)
    this->_name = "Dimanche";
  else if (this->getDayOfTheWeek(year, month, id) == 1)
    this->_name = "Lundi";
  else if (this->getDayOfTheWeek(year, month, id) == 2)
    this->_name = "Mardi";
  else if (this->getDayOfTheWeek(year, month, id) == 3)
    this->_name = "Mercredi";
  else if (this->getDayOfTheWeek(year, month, id) == 4)
    this->_name = "Jeudi";
  else if (this->getDayOfTheWeek(year, month, id) == 5)
    this->_name = "Vendredi";
  else if (this->getDayOfTheWeek(year, month, id) == 6)
    this->_name = "Samedi";
}

Day::~Day()
{

}

unsigned int	Day::getDayOfTheWeek(unsigned int y, unsigned int m, 
				     unsigned int d)
{
  int		t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
  
  y -= m < 3;
  return (y + y/4 - y/100 + y/400 + t[m-1] + d) % 7;
}

unsigned int	Day::getId() const
{
  return (this->_id);
}

std::string	Day::getName() const
{
  return (this->_name);
}

unsigned int	Day::getMonth() const
{
  return (this->_month);
}

std::string	Day::getNameMonth() const
{
  return (this->_nameMonth);
}

unsigned int	Day::getYear() const
{
  return (this->_year);
}

void		Day::print()
{
  std::cout << this->getName() << " "
	    << this->getId() << " "
	    << this->getNameMonth() << " "
	    << this->getYear() << std::endl;
}

std::ostream&	core::calendar::operator<<(std::ostream& flux, 
					   const core::calendar::Day& p_day)
{
  flux << p_day.getName() << " "
       << p_day.getId() << " "
       << p_day.getNameMonth() << " "
       << p_day.getYear();
  return (flux);
}
