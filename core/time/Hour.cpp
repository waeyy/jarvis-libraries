//
// auxiliaires.cpp for  in /home/soidik_d/ULaval/TP1-Algo/Sujet/rendu
// 
// Made by SOIDIKI Djamil
// Login   <soidik_d@epitech.net>
// 
// Started on  Wed Oct  5 19:18:31 2016 SOIDIKI Djamil
// Last update Mon Jan 23 00:43:56 2017 SOIDIKI Djamil
//

#include	"Hour.hh"

Hour::Hour()
{
  std::vector<std::string>	tmp;
  time_t			temps;
  struct tm			datetime;
  char				format[32];

  time(&temps);
  datetime = *localtime(&temps);

  strftime(format, 32, "%H:%M:%S", &datetime);

  tmp = split(std::string(format), ':');
  this->_hour = atoi(tmp[0].data());
  this->_min = atoi(tmp[1].data());
  this->_sec = atoi(tmp[2].data());
}

Hour::Hour(unsigned int hour, unsigned int min, unsigned int sec)
{
  this->_hour = hour;
  this->_min = min;
  this->_sec = sec;
}

Hour::~Hour()
{
}

Hour		Hour::add_secondes(unsigned int secs) const
{
  Hour		nouvelleHour(this->_hour, 
			      this->_min,
			      this->_sec + secs);
  return (nouvelleHour);
}

bool		Hour::operator==(const Hour & other) const
{
  if (other._hour == this->_hour &&
      other._min == this->_min &&
      other._sec == this->_sec)
    return (true);
  return (false);
}

bool            Hour::operator<(const Hour & other) const
{ 
  if (this->_hour < other._hour)
    return (true);
  
  if (this->_hour == other._hour)
    {
      if (this->_min < other._min)
	return (true);
    }

  if (this->_hour == other._hour)
    {
      if (this->_min == other._min)
	{
	  if (this->_sec < other._sec)
	    return (true);
	}
    }
  
  return (false);
}

bool            Hour::operator>(const Hour & other) const
{
  if (this->_hour > other._hour)
    return (true);

  if (this->_hour == other._hour)
    {
      if (this->_min > other._min)
        return (true);
    }

  if (this->_hour == other._hour)
    {
      if (this->_min == other._min)
        {
          if (this->_sec > other._sec)
            return (true);
        }
    }

  return (false);
}

bool            Hour::operator<=(const Hour & other) const
{
  if (this->_hour <= other._hour)
    return (true);

  if (this->_hour == other._hour)
    {
      if (this->_min <= other._min)
        return (true);
    }

  if (this->_hour == other._hour)
    {
      if (this->_min == other._min)
        {
          if (this->_sec <= other._sec)
            return (true);
        }
    }

  return (false);
}

bool            Hour::operator>=(const Hour & other) const
{
  if (this->_hour >= other._hour)
    return (true);

  if (this->_hour == other._hour)
    {
      if (this->_min >= other._min)
        return (true);
    }

  if (this->_hour == other._hour)
    {
      if (this->_min == other._min)
        {
          if (this->_sec >= other._sec)
            return (true);
        }
    }

  return (false);
}

int		Hour::operator-(const Hour & other) const
{
  int		diffHour;
  int		diffMin;
  int		diffSec;

  diffHour = (this->_hour - other._hour) * 3600;
  diffMin = (this->_min - other._min) * 60;
  diffSec = this->_sec - other._sec;

  return (diffHour + diffMin + diffSec);
}

std::ostream&	operator<<(std::ostream & flux, const Hour& p_heure)
{
  flux << p_heure._hour << ":"
       << p_heure._min << ":"
       << p_heure._sec;
  return (flux);
}

std::vector<std::string>        split(const std::string &s, char delim)
{
  std::vector<std::string>    tokenVector;
  std::istringstream          stream(s);
  std::string                 elem;

  while (std::getline(stream, elem, delim))
    tokenVector.push_back(elem);
  return (tokenVector);
}
