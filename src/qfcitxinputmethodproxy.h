/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -N -p qfcitxinputmethodproxy -c QFcitxInputMethodProxy interfaces/org.fcitx.Fcitx.InputMethod.xml
 *
 * qdbusxml2cpp is Copyright (C) 2012 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef QFCITXINPUTMETHODPROXY_H_1335906469
#define QFCITXINPUTMETHODPROXY_H_1335906469

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

/*
 * Proxy class for interface org.fcitx.Fcitx.InputMethod
 */
class QFcitxInputMethodProxy: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.fcitx.Fcitx.InputMethod"; }

public:
    QFcitxInputMethodProxy(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~QFcitxInputMethodProxy();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<int, bool, uint, uint, uint, uint> CreateICv3(const QString &appname, int pid)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(appname) << QVariant::fromValue(pid);
        return asyncCallWithArgumentList(QLatin1String("CreateICv3"), argumentList);
    }
    inline QDBusReply<int> CreateICv3(const QString &appname, int pid, bool &enabled, uint &keyval1, uint &state1, uint &keyval2, uint &state2)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(appname) << QVariant::fromValue(pid);
        QDBusMessage reply = callWithArgumentList(QDBus::Block, QLatin1String("CreateICv3"), argumentList);
        if (reply.type() == QDBusMessage::ReplyMessage && reply.arguments().count() == 6) {
            enabled = qdbus_cast<bool>(reply.arguments().at(1));
            keyval1 = qdbus_cast<uint>(reply.arguments().at(2));
            state1 = qdbus_cast<uint>(reply.arguments().at(3));
            keyval2 = qdbus_cast<uint>(reply.arguments().at(4));
            state2 = qdbus_cast<uint>(reply.arguments().at(5));
        }
        return reply;
    }

Q_SIGNALS: // SIGNALS
};

#endif
