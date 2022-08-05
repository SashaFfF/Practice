#include "testwindow.h"
#include "ui_testwindow.h"

TestWindow::TestWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TestWindow)
{
    ui->setupUi(this);
    QPixmap pixmap(":/pract/new_backgroundTest.png");
    QPalette palette;
    palette.setBrush(backgroundRole(), QBrush(pixmap));
    setPalette(palette);
    secondTestWindow = new TestWindow2();
    setInterfaceStyle();
}

TestWindow::~TestWindow()
{
    delete ui;
}

void TestWindow::setInterfaceStyle()
{
    QString color = " qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(144, 15, 34, 255), stop:0.985366 rgba(255, 101, 101, 255), stop:1 rgba(255, 255, 255, 255));";
    QString press_color = " qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(118, 31, 39, 255), stop:0.985366 rgba(227, 90, 90, 255), stop:1 rgba(255, 255, 255, 255));";
    QString hover_color = " qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(163, 42, 54, 255), stop:0.985366 rgba(255, 101, 101, 255), stop:1 rgba(255, 255, 255, 255));";
    ui->nextPageButton->setStyleSheet(StyleHelper::getStartButtonsStyle(color, press_color, hover_color));
}


void TestWindow::on_ageHorizontalSlider_valueChanged(int value)
{
    ui->ageLineEdit->setText(QString::number(value));

}


void TestWindow::on_nextPageButton_clicked()
{
    int w  = (ui->weightLineEdit->text()).toInt();
    int h = (ui->heightLineEdit->text()).toInt();
    Gender g = ui->femaleRadioButton->isChecked()?female:male;
    int a = ui->ageHorizontalSlider->value();
    basicQuestionnaire = new Questionnaire(w,h,a,g);
    secondTestWindow->basicQuestionnaire = this->basicQuestionnaire;
    secondTestWindow->show();
    this->close();
}

