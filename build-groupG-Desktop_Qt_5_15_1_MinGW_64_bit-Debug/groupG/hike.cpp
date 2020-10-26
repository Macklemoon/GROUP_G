#include "hike.h"

hike::hike()
{

}

hike::hike(QString name, QString park, int open, int close,
     QString distance, QString difficulty, QString address, QString city, QString zipcode,
     QString phone, QString walkOrBike, QString trailType, QString ascent,QString elevation)
{
    name_ = name;
    park_ = park;
    open_ = open;
    close_ = close;
    distance_ = distance;
    difficulty_ = difficulty;
    address_ = address;
    city_ = city;
    zipcode_ = zipcode;
    phone_ = phone;
    walkOrBike_ = walkOrBike;
    trailType_ = trailType;
    ascent_ = ascent;
    elevation_ = elevation;
}
hike hike::operator = (hike const & obj)
{
    name_ = obj.name_;
    park_ = obj.park_;
    open_ = obj.open_;
    close_ = obj.close_;
    distance_ = obj.distance_;
    difficulty_ = obj.difficulty_;
    address_ = obj.address_;
    city_ = obj.city_;
    zipcode_ = obj.zipcode_;
    phone_ = obj.phone_;
    walkOrBike_ = obj.walkOrBike_;
    trailType_ = obj.trailType_;
    ascent_ = obj.ascent_;
    elevation_ = obj.elevation_;
    return *this;
}
void hike::setHike(QString name, QString park, int open, int close,
             QString distance, QString difficulty, QString address, QString city, QString zipcode,
             QString phone, QString walkOrBike, QString trailType, QString ascent,QString elevation )
{
    name_ = name;
    park_ = park;
    open_ = open;
    close_ = close;
    distance_ = distance;
    difficulty_ = difficulty;
    address_ = address;
    city_ = city;
    zipcode_ = zipcode;
    phone_ = phone;
    walkOrBike_ = walkOrBike;
    trailType_ = trailType;
    ascent_ = ascent;
    elevation_ = elevation;
}
void hike::setName(QString n)
{
    name_ = n;
}
void hike::setPark(QString p)
{
    park_ = p;
}
void hike::setOpen(int o)
{
    open_ = o;
}
void hike::setClose(int c)
{
    close_ = c;
}
void hike::setDistance(QString d)
{
    distance_ = d;
}
void hike::setDiff(QString d)
{
    difficulty_ = d;
}
void hike::setAddress(QString a)
{
    address_ = a;
}
void hike::setCity(QString c)
{
    city_ = c;
}
void hike::setZip(QString z)
{
    zipcode_ = z;
}
void hike::setPhone(QString p)
{
     phone_ = p;
}
void hike::setWB(QString w)
{
    walkOrBike_ = w;
}
void hike::setType(QString t)
{
    trailType_ = t;
}
void hike::setAsc(QString a)
{
    ascent_ = a;
}
void hike::setElev(QString e)
{
    elevation_ = e;
}
