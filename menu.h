#ifndef MENU_H
#define MENU_H

#include <QMainWindow>

namespace Ui {
class menu;
}

class menu : public QMainWindow
{
    Q_OBJECT

public:
    explicit menu(QWidget *parent = nullptr);
    ~menu();

private slots:
    void on_actionSalir_triggered();

    void on_actionGeneral_triggered();

    void on_actionEspecialista_triggered();

private:
    Ui::menu *ui;
};

#endif // MENU_H
