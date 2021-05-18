#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=Cygwin-Windows
CND_DLIB_EXT=dll
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/_ext/18beae6e/Menu.o \
	${OBJECTDIR}/_ext/18beae6e/Problem1.o \
	${OBJECTDIR}/_ext/18beae6e/Problem2.o \
	${OBJECTDIR}/_ext/18beae6e/Problem4.o \
	${OBJECTDIR}/_ext/18beae6e/Problem5.o \
	${OBJECTDIR}/_ext/18beae6e/Problem6.o \
	${OBJECTDIR}/_ext/18beae6e/Problem7.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/testprogram.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/testprogram.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.c} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/testprogram ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/_ext/18beae6e/Menu.o: ../../../../Grades/Spring2021/CSC17a/Midterm/anciramikayla_40879_6323947_Midterm_CSC17A_MikaylaAncira/Midterm/Menu.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/18beae6e
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/18beae6e/Menu.o ../../../../Grades/Spring2021/CSC17a/Midterm/anciramikayla_40879_6323947_Midterm_CSC17A_MikaylaAncira/Midterm/Menu.cpp

${OBJECTDIR}/_ext/18beae6e/Problem1.o: ../../../../Grades/Spring2021/CSC17a/Midterm/anciramikayla_40879_6323947_Midterm_CSC17A_MikaylaAncira/Midterm/Problem1.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/18beae6e
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/18beae6e/Problem1.o ../../../../Grades/Spring2021/CSC17a/Midterm/anciramikayla_40879_6323947_Midterm_CSC17A_MikaylaAncira/Midterm/Problem1.cpp

${OBJECTDIR}/_ext/18beae6e/Problem2.o: ../../../../Grades/Spring2021/CSC17a/Midterm/anciramikayla_40879_6323947_Midterm_CSC17A_MikaylaAncira/Midterm/Problem2.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/18beae6e
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/18beae6e/Problem2.o ../../../../Grades/Spring2021/CSC17a/Midterm/anciramikayla_40879_6323947_Midterm_CSC17A_MikaylaAncira/Midterm/Problem2.cpp

${OBJECTDIR}/_ext/18beae6e/Problem4.o: ../../../../Grades/Spring2021/CSC17a/Midterm/anciramikayla_40879_6323947_Midterm_CSC17A_MikaylaAncira/Midterm/Problem4.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/18beae6e
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/18beae6e/Problem4.o ../../../../Grades/Spring2021/CSC17a/Midterm/anciramikayla_40879_6323947_Midterm_CSC17A_MikaylaAncira/Midterm/Problem4.cpp

${OBJECTDIR}/_ext/18beae6e/Problem5.o: ../../../../Grades/Spring2021/CSC17a/Midterm/anciramikayla_40879_6323947_Midterm_CSC17A_MikaylaAncira/Midterm/Problem5.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/18beae6e
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/18beae6e/Problem5.o ../../../../Grades/Spring2021/CSC17a/Midterm/anciramikayla_40879_6323947_Midterm_CSC17A_MikaylaAncira/Midterm/Problem5.cpp

${OBJECTDIR}/_ext/18beae6e/Problem6.o: ../../../../Grades/Spring2021/CSC17a/Midterm/anciramikayla_40879_6323947_Midterm_CSC17A_MikaylaAncira/Midterm/Problem6.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/18beae6e
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/18beae6e/Problem6.o ../../../../Grades/Spring2021/CSC17a/Midterm/anciramikayla_40879_6323947_Midterm_CSC17A_MikaylaAncira/Midterm/Problem6.cpp

${OBJECTDIR}/_ext/18beae6e/Problem7.o: ../../../../Grades/Spring2021/CSC17a/Midterm/anciramikayla_40879_6323947_Midterm_CSC17A_MikaylaAncira/Midterm/Problem7.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/18beae6e
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/18beae6e/Problem7.o ../../../../Grades/Spring2021/CSC17a/Midterm/anciramikayla_40879_6323947_Midterm_CSC17A_MikaylaAncira/Midterm/Problem7.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
