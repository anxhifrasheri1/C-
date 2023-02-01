#include "orario.h"
#include "ui_orario.h"
#include <QDateTime>


Orario::Orario(QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::Orario)
{
    ui->setupUi(this);
    QTime time = QTime::currentTime();
    QString ora = time.toString();
    ui->lblOrario->setText(ora);
}

Orario::~Orario()
{
    delete ui;
}

void Orario::on_btnEsci_clicked()
{
    QApplication::quit();
}
