#############################################################################
# Makefile for building: google_api_calendar_clent
# Generated by qmake (2.01a) (Qt 4.8.7) on: Tue Aug 9 20:38:13 2016
# Project:  qt-google-calendar.pro
# Template: app
# Command: /usr/lib64/qt4/bin/qmake -o Makefile qt-google-calendar.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_NO_DEBUG -DQT_WEBKIT_LIB -DQT_GUI_LIB -DQT_NETWORK_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -pipe -O2 -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -pipe -O2 -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I/usr/share/qt4/mkspecs/linux-g++ -I. -I/usr/include/qt4/QtCore -I/usr/include/qt4/QtNetwork -I/usr/include/qt4/QtGui -I/usr/include/qt4/QtWebKit -I/usr/include/qt4 -I../qjson/include -I. -I.
LINK          = g++
LFLAGS        = -Wl,-O1
LIBS          = $(SUBLIBS)  -L/usr/lib64/qt4 ../qjson/build/lib/libqjson.so -lQtWebKit -lQtGui -L/usr/lib64/qt4 -lQtNetwork -lQtCore -lpthread 
AR            = ar cqs
RANLIB        = 
QMAKE         = /usr/lib64/qt4/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
STRIP         = strip
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = main.cpp \
		mainwindow.cpp \
		oauth2.cpp \
		logindialog.cpp \
		form.cpp \
		calendar_data_manager.cpp \
		new_event_dialog.cpp \
		edit_calendar_dialog.cpp moc_mainwindow.cpp \
		moc_oauth2.cpp \
		moc_logindialog.cpp \
		moc_form.cpp \
		moc_calendar_data_manager.cpp \
		moc_new_event_dialog.cpp \
		moc_edit_calendar_dialog.cpp
OBJECTS       = main.o \
		mainwindow.o \
		oauth2.o \
		logindialog.o \
		form.o \
		calendar_data_manager.o \
		new_event_dialog.o \
		edit_calendar_dialog.o \
		moc_mainwindow.o \
		moc_oauth2.o \
		moc_logindialog.o \
		moc_form.o \
		moc_calendar_data_manager.o \
		moc_new_event_dialog.o \
		moc_edit_calendar_dialog.o
DIST          = /usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/common/gcc-base.conf \
		/usr/share/qt4/mkspecs/common/gcc-base-unix.conf \
		/usr/share/qt4/mkspecs/common/g++-base.conf \
		/usr/share/qt4/mkspecs/common/g++-unix.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/release.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/shared.prf \
		/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		qt-google-calendar.pro
QMAKE_TARGET  = google_api_calendar_clent
DESTDIR       = 
TARGET        = google_api_calendar_clent

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: Makefile $(TARGET)

$(TARGET): ui_mainwindow.h ui_logindialog.h ui_form.h ui_new_event_dialog.h ui_edit_calendar_dialog.h $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: qt-google-calendar.pro  /usr/share/qt4/mkspecs/linux-g++/qmake.conf /usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/common/gcc-base.conf \
		/usr/share/qt4/mkspecs/common/gcc-base-unix.conf \
		/usr/share/qt4/mkspecs/common/g++-base.conf \
		/usr/share/qt4/mkspecs/common/g++-unix.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/release.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/shared.prf \
		/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		/usr/lib64/qt4/libQtGui.prl \
		/usr/lib64/qt4/libQtCore.prl \
		/usr/lib64/qt4/libQtNetwork.prl
	$(QMAKE) -o Makefile qt-google-calendar.pro
/usr/share/qt4/mkspecs/common/unix.conf:
/usr/share/qt4/mkspecs/common/linux.conf:
/usr/share/qt4/mkspecs/common/gcc-base.conf:
/usr/share/qt4/mkspecs/common/gcc-base-unix.conf:
/usr/share/qt4/mkspecs/common/g++-base.conf:
/usr/share/qt4/mkspecs/common/g++-unix.conf:
/usr/share/qt4/mkspecs/qconfig.pri:
/usr/share/qt4/mkspecs/features/qt_functions.prf:
/usr/share/qt4/mkspecs/features/qt_config.prf:
/usr/share/qt4/mkspecs/features/exclusive_builds.prf:
/usr/share/qt4/mkspecs/features/default_pre.prf:
/usr/share/qt4/mkspecs/features/release.prf:
/usr/share/qt4/mkspecs/features/default_post.prf:
/usr/share/qt4/mkspecs/features/shared.prf:
/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf:
/usr/share/qt4/mkspecs/features/warn_on.prf:
/usr/share/qt4/mkspecs/features/qt.prf:
/usr/share/qt4/mkspecs/features/unix/thread.prf:
/usr/share/qt4/mkspecs/features/moc.prf:
/usr/share/qt4/mkspecs/features/resources.prf:
/usr/share/qt4/mkspecs/features/uic.prf:
/usr/share/qt4/mkspecs/features/yacc.prf:
/usr/share/qt4/mkspecs/features/lex.prf:
/usr/share/qt4/mkspecs/features/include_source_dir.prf:
/usr/lib64/qt4/libQtGui.prl:
/usr/lib64/qt4/libQtCore.prl:
/usr/lib64/qt4/libQtNetwork.prl:
qmake:  FORCE
	@$(QMAKE) -o Makefile qt-google-calendar.pro

dist: 
	@$(CHK_DIR_EXISTS) .tmp/google_api_calendar_clent1.0.0 || $(MKDIR) .tmp/google_api_calendar_clent1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/google_api_calendar_clent1.0.0/ && $(COPY_FILE) --parents mainwindow.h oauth2.h logindialog.h form.h calendar_data_manager.h new_event_dialog.h edit_calendar_dialog.h .tmp/google_api_calendar_clent1.0.0/ && $(COPY_FILE) --parents main.cpp mainwindow.cpp oauth2.cpp logindialog.cpp form.cpp calendar_data_manager.cpp new_event_dialog.cpp edit_calendar_dialog.cpp .tmp/google_api_calendar_clent1.0.0/ && $(COPY_FILE) --parents mainwindow.ui logindialog.ui form.ui new_event_dialog.ui edit_calendar_dialog.ui .tmp/google_api_calendar_clent1.0.0/ && (cd `dirname .tmp/google_api_calendar_clent1.0.0` && $(TAR) google_api_calendar_clent1.0.0.tar google_api_calendar_clent1.0.0 && $(COMPRESS) google_api_calendar_clent1.0.0.tar) && $(MOVE) `dirname .tmp/google_api_calendar_clent1.0.0`/google_api_calendar_clent1.0.0.tar.gz . && $(DEL_FILE) -r .tmp/google_api_calendar_clent1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


check: first

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: moc_mainwindow.cpp moc_oauth2.cpp moc_logindialog.cpp moc_form.cpp moc_calendar_data_manager.cpp moc_new_event_dialog.cpp moc_edit_calendar_dialog.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_mainwindow.cpp moc_oauth2.cpp moc_logindialog.cpp moc_form.cpp moc_calendar_data_manager.cpp moc_new_event_dialog.cpp moc_edit_calendar_dialog.cpp
moc_mainwindow.cpp: mainwindow.h
	/usr/lib64/qt4/bin/moc $(DEFINES) $(INCPATH) mainwindow.h -o moc_mainwindow.cpp

moc_oauth2.cpp: oauth2.h
	/usr/lib64/qt4/bin/moc $(DEFINES) $(INCPATH) oauth2.h -o moc_oauth2.cpp

moc_logindialog.cpp: logindialog.h
	/usr/lib64/qt4/bin/moc $(DEFINES) $(INCPATH) logindialog.h -o moc_logindialog.cpp

moc_form.cpp: oauth2.h \
		calendar_data_manager.h \
		form.h
	/usr/lib64/qt4/bin/moc $(DEFINES) $(INCPATH) form.h -o moc_form.cpp

moc_calendar_data_manager.cpp: calendar_data_manager.h
	/usr/lib64/qt4/bin/moc $(DEFINES) $(INCPATH) calendar_data_manager.h -o moc_calendar_data_manager.cpp

moc_new_event_dialog.cpp: new_event_dialog.h
	/usr/lib64/qt4/bin/moc $(DEFINES) $(INCPATH) new_event_dialog.h -o moc_new_event_dialog.cpp

moc_edit_calendar_dialog.cpp: edit_calendar_dialog.h
	/usr/lib64/qt4/bin/moc $(DEFINES) $(INCPATH) edit_calendar_dialog.h -o moc_edit_calendar_dialog.cpp

compiler_rcc_make_all:
compiler_rcc_clean:
compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all: ui_mainwindow.h ui_logindialog.h ui_form.h ui_new_event_dialog.h ui_edit_calendar_dialog.h
compiler_uic_clean:
	-$(DEL_FILE) ui_mainwindow.h ui_logindialog.h ui_form.h ui_new_event_dialog.h ui_edit_calendar_dialog.h
ui_mainwindow.h: mainwindow.ui
	/usr/lib64/qt4/bin/uic mainwindow.ui -o ui_mainwindow.h

ui_logindialog.h: logindialog.ui
	/usr/lib64/qt4/bin/uic logindialog.ui -o ui_logindialog.h

ui_form.h: form.ui
	/usr/lib64/qt4/bin/uic form.ui -o ui_form.h

ui_new_event_dialog.h: new_event_dialog.ui
	/usr/lib64/qt4/bin/uic new_event_dialog.ui -o ui_new_event_dialog.h

ui_edit_calendar_dialog.h: edit_calendar_dialog.ui
	/usr/lib64/qt4/bin/uic edit_calendar_dialog.ui -o ui_edit_calendar_dialog.h

compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean compiler_uic_clean 

####### Compile

main.o: main.cpp mainwindow.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o main.cpp

mainwindow.o: mainwindow.cpp mainwindow.h \
		ui_mainwindow.h \
		form.h \
		oauth2.h \
		calendar_data_manager.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o mainwindow.o mainwindow.cpp

oauth2.o: oauth2.cpp oauth2.h \
		logindialog.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o oauth2.o oauth2.cpp

logindialog.o: logindialog.cpp logindialog.h \
		ui_logindialog.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o logindialog.o logindialog.cpp

form.o: form.cpp form.h \
		oauth2.h \
		calendar_data_manager.h \
		ui_form.h \
		new_event_dialog.h \
		edit_calendar_dialog.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o form.o form.cpp

calendar_data_manager.o: calendar_data_manager.cpp calendar_data_manager.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o calendar_data_manager.o calendar_data_manager.cpp

new_event_dialog.o: new_event_dialog.cpp new_event_dialog.h \
		ui_new_event_dialog.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o new_event_dialog.o new_event_dialog.cpp

edit_calendar_dialog.o: edit_calendar_dialog.cpp edit_calendar_dialog.h \
		ui_edit_calendar_dialog.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o edit_calendar_dialog.o edit_calendar_dialog.cpp

moc_mainwindow.o: moc_mainwindow.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_mainwindow.o moc_mainwindow.cpp

moc_oauth2.o: moc_oauth2.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_oauth2.o moc_oauth2.cpp

moc_logindialog.o: moc_logindialog.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_logindialog.o moc_logindialog.cpp

moc_form.o: moc_form.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_form.o moc_form.cpp

moc_calendar_data_manager.o: moc_calendar_data_manager.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_calendar_data_manager.o moc_calendar_data_manager.cpp

moc_new_event_dialog.o: moc_new_event_dialog.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_new_event_dialog.o moc_new_event_dialog.cpp

moc_edit_calendar_dialog.o: moc_edit_calendar_dialog.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_edit_calendar_dialog.o moc_edit_calendar_dialog.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

