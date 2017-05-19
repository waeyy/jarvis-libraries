//
// Date.hh for  in /home/soidik_d/perso/jarvis/core/time
// 
// Made by SOIDIKI Djamil
// Login   <soidik_d@epitech.net>
// 
// Started on  Sun Jan 22 23:49:26 2017 SOIDIKI Djamil
// Last update Mon Jan 23 13:45:16 2017 SOIDIKI Djamil
//

#ifndef		_DATE_HH_
#define		_DATE_HH_

#include	<vector>
#include	<string>
#include	<fstream>
#include	<sstream>
#include	"Hour.hh"

namespace	core {
  namespace	timestamp {
  
    /*!
     * \class Date
     * \brief This class represents a date.
     */
    class		Date {
      
    private:
      unsigned int	_year;
      unsigned int	_month;
      unsigned int	_day;
      
    public:
      Date();
      Date(unsigned int year, unsigned int month, unsigned int day);
      ~Date();
      
      // Getters
      unsigned int	getYear() const;
      unsigned int	getMonth() const;
      unsigned int	getDay() const;
      
      bool		operator==(const Date& other) const;
      bool		operator<(const Date& other) const;
      bool		operator>(const Date& other) const;
    };
    
    std::ostream& operator<<(std::ostream& flux, const Date& p_date);
    
  } /* ::timestamp */
} /* ::core */

#endif		/* _DATE_HH_ */
  
