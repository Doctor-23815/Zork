#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QListWidget>
#include "ZorkUL.h"
#include "surroundings.h"

//QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
//QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
    friend class Room;
// explicit
public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_north_pushButton_clicked();

    void on_south_pushButton_clicked();

    void on_east_pushButton_clicked();

    void on_west_pushButton_clicked();

    void on_teleport_pushButton_clicked();

    void on_info_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    ZorkUL *zork = new ZorkUL();
    void goRoom(string direction);
};
#endif // MAINWINDOW_H
