#ifndef MAINWINDOW_H
#define MAINWINDOW_H

//#include <QMainWindow>

//namespace Ui {
//class MainWindow;
//}

//class MainWindow : public QMainWindow
//{
//    Q_OBJECT

//public:
//    explicit MainWindow(QWidget *parent = 0);
//    ~MainWindow();

//private:
//    Ui::MainWindow *ui;
//};

#include "cell.h"
#include <QHash>
#include <QList>
#include <QMainWindow>


class QCheckBox;
class QGraphicsEllipseItem;
class QGraphicsScene;
class QGraphicsView;
class QLabel;
class QLCDNumber;
class QPushButton;
class QSpinBox;


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent=0);

protected:
    void closeEvent(QCloseEvent *event);

private slots:
    void start();
    void pauseOrResume();
    void stop();
    void doOneIteration();
    void showIds(bool show);

private:
    enum SimulationState {Stopped, Running, Paused};

    void createWidgets();
    void createProxyWidgets();
    void createLayout();
    void createCentralWidget();
    void createConnections();

    QGraphicsView *view;
    QGraphicsScene *scene;
    QGraphicsEllipseItem *dishItem;
    QPushButton *startButton;
    QPushButton *pauseOrResumeButton;
    QPushButton *stopButton;
    QPushButton *quitButton;
    QLabel *initialCountLabel;
    QSpinBox *initialCountSpinBox;
    QLabel *currentCountLabel;
    QLCDNumber *currentCountLCD;
    QLabel *iterationsLabel;
    QLCDNumber *iterationsLCD;
    QCheckBox *showIdsCheckBox;
    QHash<QString, QGraphicsProxyWidget*> proxyForName;

    QList<Cell*> cells;
    SimulationState simulationState;
    int iterations;
};


#endif // MAINWINDOW_H
