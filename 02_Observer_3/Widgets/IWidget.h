#ifndef IWIDGET_H
#define IWIDGET_H

enum class type_widget {lenta_widget, tv_widget, twitter_widget};

class IWidget
{
public:
    virtual void Display() = 0;
    virtual type_widget GetTypeWidget() = 0;
};


#endif // IWIDGET_H
