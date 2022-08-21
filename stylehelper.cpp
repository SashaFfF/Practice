#include "stylehelper.h"


QString StyleHelper::getStartButtonsStyle(QString color, QString press_color, QString hover_color)
{
    return "QPushButton{"
           "  border:none;"
           "  background:none;"
           "  background-color: " + color+
           "  border-radius:19px;"
           "}"
    "QPushButton::hover{"
    "background-color: " + hover_color +
    "}"
    "QPushButton::pressed{"
    "background-color:" + press_color +
            "}";
}

QString StyleHelper::getSmallButtonsStyle(QString background_color, QString border_color)
{
    return "QPushButton{"
            "  background-color: " + background_color +
            "  border-style: outset;"
            "  border-width: 2px;"
            "  border-radius: 15px;"
            "  border-color: " + border_color +
           "}";

}

QString StyleHelper::getStartLineEditStyle(QString color)
{
    return "QLineEdit{"
           "  border: 2px solid gray;"
           "  border-radius: 10px;"
           "  padding: 0 8px;"
           "  background:"+color+
           "}";

}

//QString StyleHelper::getStartButtonsStyle(QString color, QString press_color, QString hover_color)
//{
//    return "QPushButton{"
//           "  border:none;"
//           "  background:none;"
//           "  background-color: qlineargradient(spread:pad, x1:0, y1:0.074, x2:0, y2:1, stop:0 rgba(21, 236, 9, 255), stop:1 rgba(255, 255, 0, 255));"
//           "  border-radius:19px;"
//           "}"
//    "QPushButton::hover{"
//    "background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(83, 201, 76, 255), stop:1 rgba(255, 255, 66, 255));"
//    "}"
//    "QPushButton::pressed{"
//    "background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(18, 201, 8, 255), stop:1 rgba(255, 255, 0, 255));"
//    "}";
//}
