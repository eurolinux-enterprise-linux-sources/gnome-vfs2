SUBDIRS_GNOME=doc schemas

SUBDIRS =					\
	imported				\
	libgnomevfs				\
	modules					\
	daemon					\
	schemas					\
	devel-docs				\
	doc					\
	programs				\
	test					\
	po

EXTRA_DIST =					\
	HACKING					\
	MAINTAINERS 				\
	TODO					\
	autogen.sh				\
	gnome-vfs.spec				\
	gnome-vfs-zip.in			\
	gnome-vfs-2.0.pc.in			\
	gnome-vfs-module-2.0.pc.in		\
	gtk-doc.make				\
	intltool-extract.in			\
	intltool-merge.in			\
	intltool-update.in			\
	xdgmime.win32.diff

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = gnome-vfs-2.0.pc gnome-vfs-module-2.0.pc

DISTCHECK_CONFIGURE_FLAGS = --enable-gtk-doc

DISTCLEANFILES = intltool-extract intltool-merge intltool-update
