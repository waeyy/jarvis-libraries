PROJECT		=	J.A.R.V.I.S

CC              =	g++
PRJCFLAGS       =	-g
LD              =	g++
LDFLAGS         =
AR              =	ar
ARFLAGS         =	rc
RANLIB          =	ranlib
RM              =	rm
ECHO            =	echo

SHELL           =	/bin/sh

DIRLIBS		=	/home/soidik_d/perso/jarvis/libraries

KNRM            =       \033[0m
KRED            =       \033[0;31m
KGRN            =       \033[0;32m
LYLW            =       \033[0;33m
LCYN            =       \033[0;36m

SULYLW            =       \033[7;33m

SUKGRN            =       \033[7;32m
SOKGRN            =       \033[4;32m

CLCYN		  =       \033[5;36m
SULCYN            =       \033[7;36m
SOLCYN            =       \033[4;36m

ECHO            =       echo -e

SUCCESS         =       $(ECHO) "$(KGRN)"
WARNING         =       $(ECHO) "$(LYLW)"
NORMALT         =       $(ECHO) "$(KNRM)"
INFO		=	$(ECHO) "$(LCYN)"

SUINFO		=	$(ECHO) "$(SULCYN)"


MSG_START	=	"You are running Makefile.\nLoading makefile repositories with package information\nUpdating all dependencies of $(KRED)$(PROJECT)$(KNRM)"

MSG_UPDATE	=	"\nUpdating dependencies into $(SOLCYN)$(NAMESPACE)$(KNRM)"

MSG_INSTALL	=	" - Installing $(LYLW)'$(NAME)'$(KNRM)"

MSG_END		=	"\nAll dependencies have been updated !"

.SILENT :
