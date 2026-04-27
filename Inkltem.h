#ifndef INKITEM_H
#define INKITEM_H

#include <QString>
#include <QJsonObject>

class InkItem
{
public:
    QString name;        // название
    QString description; // описание
    QString color;       // цвет
    double inkLevel;     // уровень чернил

    InkItem();

    bool isValid() const;

    QJsonObject toJson() const;
    static InkItem fromJson(const QJsonObject &obj);

    static InkItem fromString(const QString &line);
};

#endif // INKITEM_H