#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "C:\Users\Lukas\Desktop\EiT\Semestr 9 UAH\Audio\Final\irrKlang-1.4.0\include\irrKlang.h"
#include <QFileDialog>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_buttonChoose_clicked();

    void on_buttonPlay_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::MainWindow *ui;
    QString fileName;
    irrklang::ISoundEngine* engine;
    irrklang::ISound* music;
    irrklang::ISoundEffectControl* fx;

};

#endif // MAINWINDOW_H
