/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 8; tab-width: 8 -*- */
/* gnome-vfs-cancellation-private.h - Cancellation handling for the GNOME Virtual File
   System access methods.

   Copyright (C) 2003 Red Hat, Inc

   The Gnome Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public License as
   published by the Free Software Foundation; either version 2 of the
   License, or (at your option) any later version.

   The Gnome Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public
   License along with the Gnome Library; see the file COPYING.LIB.  If not,
   write to the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.

   Author: Alexander Larsson <alexl@redhat.com>
*/

#ifndef GNOME_VFS_CANCELLATION_PRIVATE_H
#define GNOME_VFS_CANCELLATION_PRIVATE_H

#include "gnome-vfs-cancellation.h"

G_BEGIN_DECLS

void _gnome_vfs_cancellation_set_handle   (GnomeVFSCancellation *cancellation,
					   gint32 connection, gint32 handle);
void _gnome_vfs_cancellation_unset_handle (GnomeVFSCancellation *cancellation);

G_END_DECLS

#endif /* GNOME_VFS_CANCELLATION_PRIVATE_H */
