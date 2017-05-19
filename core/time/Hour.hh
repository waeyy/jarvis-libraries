//
// Heure.hh for  in /home/soidik_d/perso/jarvis/core/time
// 
// Made by SOIDIKI Djamil
// Login   <soidik_d@epitech.net>
// 
// Started on  Mon Jan 23 00:07:11 2017 SOIDIKI Djamil
// Last update Mon Jan 23 13:17:20 2017 SOIDIKI Djamil
//

#ifndef		_HOUR_HH_
#define		_HOUR_HH_

#include	<vector>
#include	<string>
#include	<fstream>
#include	<sstream>

/*!
 * \class Hour
 * \brief This class represents the time of day.
 */
class		Hour {

private:
  unsigned int	_hour;
  unsigned int	_min;
  unsigned int	_sec;

public:
  Hour();
  Hour(unsigned int hour, unsigned int min, unsigned int sec);
  ~Hour();

  Hour		add_secondes(unsigned int secs) const;

  bool		operator==(const Hour& other) const;
  bool		operator<(const Hour& other) const;
  bool		operator>(const Hour& other) const;
  bool		operator<=(const Hour& other) const;
  bool		operator>=(const Hour& other) const;
  int		operator-(const Hour& other) const;
  
  friend std::ostream & operator<<(std::ostream & flux, const Hour& p_hour);
};

std::vector<std::string> split(const std::string &s, char delim);

#endif //RTC_AUXILIAIRES_H
