dnl  This file is part of libpar2 (a PAR 2.0 compatible file verification and
dnl  repair library). See http://parchive.sourceforge.net for details of PAR 2.0.
dnl
dnl  Copyright (c) 2005 Francois Lesueur
dnl  Copyright (c) 2003 Peter Brian Clements
dnl
dnl  par2cmdline is free software; you can redistribute it and/or modify
dnl  it under the terms of the GNU General Public License as published by
dnl  the Free Software Foundation; either version 2 of the License, or
dnl  (at your option) any later version.
dnl
dnl  par2cmdline is distributed in the hope that it will be useful,
dnl  but WITHOUT ANY WARRANTY; without even the implied warranty of
dnl  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
dnl  GNU General Public License for more details.
dnl
dnl  You should have received a copy of the GNU General Public License
dnl  along with this program; if not, write to the Free Software
dnl  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
dnl                                               -*- Autoconf -*-
dnl Process this file with autoconf to produce a configure script.

AC_PREREQ(2.58a)
AC_INIT([libpar2], [0.2], [flesueur@users.sourceforge.net])
AC_CONFIG_SRCDIR([par2cmdline.cpp])

AC_CANONICAL_HOST

AM_CONFIG_HEADER(config.h)
AM_INIT_AUTOMAKE(libpar2,0.2)


dnl Checks for programs.
AC_PROG_CXX
AC_LANG_CPLUSPLUS
AC_PROG_INSTALL

dnl Checks for libraries.
AC_PROG_LIBTOOL
AM_PROG_LIBTOOL
AC_CHECK_LIB(stdc++, main,,AC_MSG_ERROR(You need libstdc++))
AC_CHECK_LIB(sigc-2.0, main,,AC_MSG_ERROR(You need libsigc++))

dnl Checks for header files.
AC_HEADER_DIRENT
AC_HEADER_STDBOOL
AC_HEADER_STDC
AC_CHECK_HEADERS([stdio.h] [endian.h])
AC_CHECK_HEADERS([getopt.h])
PKG_CHECK_MODULES(SIGC, sigc++-2.0 )
dnl AC_CHECK_HEADERS([sigc++-2.0/sigc++/sigc++.h],[],AC_MSG_ERROR(You need libsigc++ headers))

dnl Checks for typedefs, structures, and compiler characteristics.
AC_TYPE_SIZE_T
AC_C_BIGENDIAN
AC_C_CONST
AC_C_INLINE
AC_SYS_LARGEFILE
AC_FUNC_FSEEKO

dnl Checks for library functions.
AC_FUNC_MEMCMP
AC_CHECK_FUNCS([stricmp] [strcasecmp])
AC_CHECK_FUNCS([strchr] [memcpy])

AC_CHECK_FUNCS([getopt] [getopt_long])


AC_CONFIG_FILES([Makefile])
AC_OUTPUT

