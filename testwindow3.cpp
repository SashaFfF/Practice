#include "testwindow3.h"
#include "ui_testwindow3.h"

TestWindow3::TestWindow3(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TestWindow3)
{
    ui->setupUi(this);
    QPixmap pixmap(":/pract/backgroundTest3.png");
    QPalette palette;
    palette.setBrush(backgroundRole(), QBrush(pixmap));
    setPalette(palette);
}

TestWindow3::~TestWindow3()
{
    delete ui;
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
}

