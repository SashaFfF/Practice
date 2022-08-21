#include "testwindow3.h"
#include "ui_testwindow3.h"

TestWindow3::TestWindow3(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TestWindow3)
{
    ui->setupUi(this);
    QWidget::setAttribute(Qt::WA_DeleteOnClose, true);
    QPixmap pixmap(":/pract/backgroundTest3.png");
    QPalette palette;
    palette.setBrush(backgroundRole(), QBrush(pixmap));
    setPalette(palette);
    fourthWindow = new TestWindow4();
    setInterfaceStyle();
}

TestWindow3::~TestWindow3()
{
    delete foodQuestionnaire;/*
    delete physicQuestionnaire;
    delete basicQuestionnaire;*/
    delete ui;
    qDebug()<<"delete";
}

void TestWindow3::on_nextPageButton_clicked()
{
    Food arr[18];
    int i=0;
    if(ui->checkBox->isChecked()){
        arr[i]=meat;
        i++;
    }
    if(ui->checkBox_2->isChecked()){
        arr[i]=butter;
        i++;
    }
    if(ui->checkBox_3->isChecked()){
        arr[i]=bird;
        i++;
    }
    if(ui->checkBox_4->isChecked()){
        arr[i]=eggs;
        i++;
    }
    if(ui->checkBox_5->isChecked()){
        arr[i]=fish;
        i++;
    }
    if(ui->checkBox_6->isChecked()){
        arr[i]=dairy;
        i++;
    }
    if(ui->checkBox_7->isChecked()){
        arr[i]=oils;
        i++;
    }
    if(ui->checkBox_8->isChecked()){
        arr[i]=beans;
        i++;
    }
    if(ui->checkBox_9->isChecked()){
        arr[i]=nuts;
        i++;
    }
    if(ui->checkBox_10->isChecked()){
        arr[i]=citrus;
        i++;
    }
    if(ui->checkBox_11->isChecked()){
        arr[i]=berries;
        i++;
    }
    if(ui->checkBox_12->isChecked()){
        arr[i]=vegetables;
        i++;
    }
    if(ui->checkBox_13->isChecked()){
        arr[i]=fruits;
        i++;
    }
    if(ui->checkBox_14->isChecked()){
        arr[i]=dried_fruits;
        i++;
    }
    if(ui->checkBox_15->isChecked()){
        arr[i]=bread;
        i++;
    }
    if(ui->checkBox_16->isChecked()){
        arr[i]=rice;
        i++;
    }
    if(ui->checkBox_17->isChecked()){
        arr[i]=cereals;
        i++;
    }
    if(ui->checkBox_18->isChecked()){
        arr[i]=pasta;
        i++;
    }
    foodQuestionnaire = new FoodQuestionnaire(arr);
    fourthWindow->basicQuestionnaire = this->basicQuestionnaire;
    fourthWindow->physicQuestionnaire = this->physicQuestionnaire;
    fourthWindow->foodQuestionnaire=this->foodQuestionnaire;
    fourthWindow->show();
    this->close();
}

void TestWindow3::setInterfaceStyle()
{
    //QString color = "qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(148, 6, 103, 255), stop:0.960976 rgba(255, 38, 38, 255), stop:1 rgba(255, 255, 255, 255));";
    QString color = "qlineargradient(spread:pad, x1:0, y1:0.068, x2:0, y2:1, stop:0 rgba(28, 160, 172, 255), stop:0.97561 rgba(249, 131, 10, 255), stop:1 rgba(249, 193, 48, 255));";
    QString press_color =  "qlineargradient(spread:pad, x1:0, y1:0.068, x2:0, y2:1, stop:0 rgba(0, 158, 172, 255), stop:0.97561 rgba(249, 126, 0, 255), stop:1 rgba(249, 193, 48, 255));";
    QString hover_color = "qlineargradient(spread:pad, x1:0, y1:0.068, x2:0, y2:1, stop:0 rgba(91, 165, 172, 255), stop:0.97561 rgba(249, 148, 45, 255), stop:1 rgba(249, 193, 48, 255));";
    ui->nextPageButton->setStyleSheet(StyleHelper::getStartButtonsStyle(color, press_color, hover_color));
    ui->prevPageButton->setStyleSheet(StyleHelper::getStartButtonsStyle(color, press_color, hover_color));
}

