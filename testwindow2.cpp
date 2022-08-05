#include "testwindow2.h"
#include "ui_testwindow2.h"

TestWindow2::TestWindow2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TestWindow2)
{
    ui->setupUi(this);
    QPixmap pixmap(":/pract/backgroundTest2.png");
    QPalette palette;
    palette.setBrush(backgroundRole(), QBrush(pixmap));
    setPalette(palette);
    thirdTestWindow = new TestWindow3();
    setInterfaceStyle();
}

TestWindow2::~TestWindow2()
{
    delete ui;
}

void TestWindow2::on_nextPageButton_clicked()
{
    double PAC;
    if(ui->radioButton->isChecked()){
        PAC = 1.2;
    }
    else if(ui->radioButton_2->isChecked()){
        PAC = 1.375;
    }
    else if(ui->radioButton_3->isChecked()){
        PAC = 1.55;
    }
    else if(ui->radioButton_4->isChecked()){
        PAC = 1.7;
    }
    else{
        PAC = 1.9;
    }
    physicalQuestionnaire = new PhysicalQuestionnaire(PAC);
    thirdTestWindow->basicQuestionnaire=this->basicQuestionnaire;
    thirdTestWindow->physicQuestionnaire=this->physicalQuestionnaire;
    thirdTestWindow->show();
    this->close();
}

void TestWindow2::setInterfaceStyle()
{
    QString color = "qlineargradient(spread:pad, x1:0, y1:0, x2:0.015, y2:1, stop:0 rgba(0, 33, 122, 255), stop:1 rgba(9, 9, 227, 255));";
    QString press_color =  "qlineargradient(spread:pad, x1:0, y1:0, x2:0.015, y2:1, stop:0 rgba(0, 33, 122, 255), stop:1 rgba(9, 9, 227, 255));";
    QString hover_color = "qlineargradient(spread:pad, x1:0, y1:0, x2:0.015, y2:1, stop:0 rgba(47, 55, 189, 255), stop:1 rgba(80, 80, 227, 255));";
    ui->nextPageButton->setStyleSheet(StyleHelper::getStartButtonsStyle(color, press_color, hover_color));
}

