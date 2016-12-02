# Our binary is produced here
bin_PROGRAMS = main test_asan main_no_abort
main_SOURCES = main.cpp
test_asan_SOURCES = test_asan.cpp
main_no_abort_SOURCES = main_no_abort.cpp
# main binary will be installed into the default directory for "bin"s (hence we used the bin
# prefix
noinst_LIBRARIES = libhelper.a
libhelper_a_SOURCES = helper.cpp helper.h
# noinst_ : assures that this library is not installed to the user's computer
# libBLAH.a is a *nix convention. If you noticed, we replaced the . with _ in SOURCES line.
main_LDADD = libhelper.a ../my_inc/libmyadd.a
test_asan_LDADD = libhelper.a ../my_inc/libmyadd.a
main_no_abort_LDADD = libhelper.a ../my_inc/libmyadd.a
# LDADD specifies which libraries to compile into "main". We have two libraries.
# libhelper comes from this directory and libmyadd come from my_inc directory.
