#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    music = 0;
    ui->setupUi(this);
    engine = irrklang::createIrrKlangDevice();
    fx = 0;
}

MainWindow::~MainWindow()
{
    engine->drop();
    delete ui;
}

void MainWindow::on_buttonChoose_clicked()
{
    fileName = QFileDialog::getOpenFileName(this, tr("Open File"),
                                                     "",
                                                     tr("Files (*.wav)"));

    fileName.replace("/","\\\\");

    ui->lblName->setText( fileName.section('\\', -1));
}

void MainWindow::on_buttonPlay_clicked()
{
   //if(music)
     //  music->stop();
    QByteArray ba;
    ba = fileName.toLatin1();
    const char* fName = ba.data();
    music = engine->play2D(fName,true, false, true, irrklang::ESM_AUTO_DETECT, true);
}

void MainWindow::on_pushButton_clicked()
{
    if(music)
       music->stop();

    QByteArray ba;
    ba = fileName.toLatin1();
    const char* fName = ba.data();
    music = engine->play2D(fName,true, false, true, irrklang::ESM_AUTO_DETECT, true);
    fx = music->getSoundEffectControl();
    fx->enableWavesReverbSoundEffect();
}


void MainWindow::on_pushButton_2_clicked()
{
    if(music)
       music->stop();
    QByteArray ba;
    ba = fileName.toLatin1();
    const char* fName = ba.data();
    music = engine->play2D(fName,true, false, true, irrklang::ESM_AUTO_DETECT, true);
    fx = music->getSoundEffectControl();
    fx->enableDistortionSoundEffect();
}


void MainWindow::on_pushButton_3_clicked()
{
    if(music)
       music->stop();

    QByteArray ba;
    ba = fileName.toLatin1();
    const char* fName = ba.data();
    music = engine->play2D(fName,true, false, true, irrklang::ESM_AUTO_DETECT, true);
    fx = music->getSoundEffectControl();
    fx->enableEchoSoundEffect(50,50,500,500,0);
}

void MainWindow::on_pushButton_4_clicked()
{
    if(music)
        music->stop();
}
