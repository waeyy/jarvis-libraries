//
// Date.cpp for  in /home/soidik_d/perso/jarvis/core/time
// 
// Made by SOIDIKI Djamil
// Login   <soidik_d@epitech.net>
// 
// Started on  Sun Jan 22 23:56:56 2017 SOIDIKI Djamil
// Last update Mon Jan 23 13:40:32 2017 SOIDIKI Djamil
//

#include	"Date.hh"

using namespace core::timestamp;

Date::Date()
{
  std::vector<std::string>	tmp;
  time_t			timestamp;
  struct tm			datetime;
  char				format[32];
 
  time(&timestamp);
  datetime = *localtime(&timestamp);
 
  strftime(format, 32, "%Y-%m-%d", &datetime);
 
  tmp = split(std::string(format), '-');
  this->_year = atoi(tmp[0].data());
  this->_month = atoi(tmp[1].data());
  this->_day = atoi(tmp[2].data());
}

Date::Date(unsigned int year, unsigned int month, unsigned int day) : 
  _year(year), _month(month), _day(day)
{
}

Date::~Date()
{
}

unsigned int	Date::getYear() const 
{
  return (this->_year);
}

unsigned int	Date::getMonth() const 
{
  return (this->_month);
}
unsigned int	Date::getDay() const 
{
  return (this->_day);
}

bool		Date::operator==(const Date & other) const
{
  if (other._year == this->_year &&
      other._month == this->_month &&
      other._day == this->_day)
    return (true);
  return (false);
}

bool		Date::operator<(const Date & other) const
{
  if (this->_year < other._year)
    return (true);
  
  if (this->_year == other._year)
    {
      if (this->_month < other._month)
	return (true);
    }

  if (this->_year == other._year)
    {
      if (this->_month == other._month)
	{
	  if (this->_day < other._day)
	    return (true);
	}
    }
  
  return (false);
}

bool		Date::operator>(const Date & other) const
{
  if (this->_year > other._year)
    return (true);
  
  if (this->_year == other._year)
    {
      if (this->_month > other._month)
	return (true);
    }

  if (this->_year == other._year)
    {
      if (this->_month == other._month)
	{
	  if (this->_day > other._day)
	    return (true);
	}
    }
  
  return (false);
}

std::ostream& core::timestamp::operator<<(std::ostream & flux, 
					  const core::timestamp::Date& p_date)
{
  flux << p_date.getYear() << "/"
       << p_date.getMonth() << "/"
       << p_date.getDay();
  return (flux);
}
