/*
 * This file is part of the GNOME-keyring signond extension
 *
 * Copyright (C) 2011 Canonical Ltd.
 *
 * Contact: Alberto Mardegan <alberto.mardegan@canonical.com>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public License
 * version 2.1 as published by the Free Software Foundation.
 *
 * This library is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA
 * 02110-1301 USA
 */
#ifndef KEYRING_DEBUG_H
#define KEYRING_DEBUG_H

#include <QDebug>

#ifndef TRACE
#define TRACE() qDebug() << __FILE__ << __LINE__ << __func__ << ":"
#endif

#ifndef BLAME
#define BLAME() qCritical() << __FILE__ << __LINE__ << __func__ << ":"
#endif

#endif // KEYRING_DEBUG_H

