#ifndef IWIDGET_HPP
#define IWIDGET_HPP

enum class type_widget {lenta_widget, tv_widget, twitter_widget};

class IWidget
{
public:
    virtual void Display() = 0;
    virtual type_widget GetTypeWidget() = 0;
};


#endif // IWIDGET_HPP
