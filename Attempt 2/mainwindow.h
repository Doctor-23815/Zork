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
    friend class Room; // Implementation of Friendship.

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow(); // Implementation of Destructors and Memory Management.

private slots:
    void on_north_pushButton_clicked();

    void on_south_pushButton_clicked();

    void on_east_pushButton_clicked();

    void on_west_pushButton_clicked();

    void on_teleport_pushButton_clicked();

    void on_info_pushButton_clicked();

    void on_map_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    ZorkUL *zork = new ZorkUL();
    Surroundings *environment = new Surroundings();
    void goRoom(string direction);
    inline void buttonStopper(); // One instance of the implementation of private and the implementation of inline functions.
};
#endif // MAINWINDOW_H
