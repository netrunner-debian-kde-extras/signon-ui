/*
 * This file is part of signon-ui
 *
 * Copyright (C) 2012 Canonical Ltd.
 *
 * Contact: Alberto Mardegan <alberto.mardegan@canonical.com>
 *
 * This program is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 3, as published
 * by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranties of
 * MERCHANTABILITY, SATISFACTORY QUALITY, or FITNESS FOR A PARTICULAR
 * PURPOSE.  See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "fake-webcredentials-interface.h"

#include <QDBusMessage>

static ComCanonicalIndicatorsWebcredentialsInterface *m_instance = 0;

ComCanonicalIndicatorsWebcredentialsInterface::
ComCanonicalIndicatorsWebcredentialsInterface(const QString &service,
                                              const QString &path,
                                              const QDBusConnection &connection,
                                              QObject *parent):
    QDBusAbstractInterface(service, path, staticInterfaceName(), connection,
                           parent),
    m_reportFailureCalled(false),
    m_account_id(0)
{
    qDebug() << "ComCanonicalIndicatorsWebcredentialsInterface instantiated";
    m_instance = this;
    QDBusMessage message;
    setReply(QDBusPendingCall::fromCompletedCall(message.createReply()));
}

ComCanonicalIndicatorsWebcredentialsInterface::
~ComCanonicalIndicatorsWebcredentialsInterface()
{
    m_instance = 0;
}

ComCanonicalIndicatorsWebcredentialsInterface *
ComCanonicalIndicatorsWebcredentialsInterface::instance()
{
    return m_instance;
}
