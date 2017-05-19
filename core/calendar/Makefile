##
## Makefile for  in /home/soidik_d/perso/jarvis/core/calendar
## 
## Made by SOIDIKI Djamil
## Login   <soidik_d@epitech.net>
## 
## Started on  Mon Jan 23 21:15:57 2017 SOIDIKI Djamil
## Last update Mon Jan 23 21:16:17 2017 SOIDIKI Djamil
##

include			../../Makefile.inc

NAMESPACE	=	/core/calendar
NAME		=	calendar
EXE		=	lib$(NAME).a
SRCS		=	$(wildcard *.cpp)
OBJS		=	$(SRCS:.cpp=.o)
TEMP		=	*~
CXXFLAGS 	=	-Wall -Wextra -Werror -std=c++11

all:			$(EXE)

$(EXE):			$(OBJS)
			$(ECHO) $(MSG_UPDATE)
			$(ECHO) $(MSG_INSTALL)
			$(AR) $(ARFLAGS) $(EXE) $(OBJS)
			$(RANLIB) $(EXE)
			cp $(EXE) $(DIRLIBS)
			$(SUCCESS) "  [$(NAME)] is ok.$(KNRM)"

clean:
			$(INFO) "\n cleaning $(SULCYN)$(NAME)$(LCYN) in $(SOLCYN)$(NAMESPACE)$(LCYN) start$(KNRM)"
			$(RM) -f $(OBJS) $(TEMP)
			$(SUCCESS) "cleaning $(SUKGRN)$(NAME)$(KGRN) in $(SOKGRN)$(NAMESPACE)$(KGRN) done$(KNRM)"

fclean:
			$(INFO) "\n cleaning executable $(SULCYN)$(EXE)$(LCYN) in $(SOLCYN)$(NAMESPACE)$(LCYN) start$(KNRM)"
			$(RM) -f $(EXE)
			$(SUCCESS) "cleaning executable $(SUKGRN)$(EXE)$(KGRN) in $(SOKGRN)$(NAMESPACE)$(KGRN) done$(KNRM)"


re:			fclean all

norm:
			$(RM) -f $(OBJS)
