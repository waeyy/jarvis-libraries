##
## Makefile for  in /home/soidik_d/perso/jarvis/core/time
## 
## Made by SOIDIKI Djamil
## Login   <soidik_d@epitech.net>
## 
## Started on  Sun Jan 22 21:20:09 2017 SOIDIKI Djamil
## Last update Mon Jan 23 12:56:36 2017 SOIDIKI Djamil
##

include			../../Makefile.inc

NAMESPACE	=	/core/time
NAME		=	time
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
