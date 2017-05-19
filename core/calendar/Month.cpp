//
// Month.cpp for  in /home/soidik_d/perso/jarvis/core/calendar
// 
// Made by SOIDIKI Djamil
// Login   <soidik_d@epitech.net>
// 
// Started on  Wed Jan 25 23:38:44 2017 SOIDIKI Djamil
// Last update Thu Jan 26 00:53:36 2017 SOIDIKI Djamil
//

#include	"Month.hh"

using namespace	core::calendar;

Month::Month(unsigned int id, std::string name, unsigned int year, bool leap) :
  _id(id), _year(year), _name(name)
{
  if (id <= 6)
    {
      if (id % 2 == 0 && id != 2)
	feed(30);
      else if (id == 2)
	if (leap)
	  feed(29);
	else
	  feed(28);
      else
	feed(31);
    }
  else 
    {
      if (id % 2 == 0 || id == 7)
	feed(31);
      else
	feed(30);
    }
}

Month::~Month()
{

}

void		Month::feed(unsigned int nbDays)
{
  unsigned int	inc = 0;
  
  while (++inc <= nbDays)
    this->_days.push_back(new Day(inc, this->_id, this->_name, this->_year));
}

std::vector<Day*>	Month::getDays() const
{
  return (this->_days);
}
