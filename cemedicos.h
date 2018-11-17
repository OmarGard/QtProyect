#ifndef CEMEDICOS_H
#define CEMEDICOS_H

#include <QWidget>
#include "medico.h"
namespace Ui {
class cemedicos;
}

class cemedicos : public QWidget
{
    Q_OBJECT

public:
    explicit cemedicos(QWidget *parent = nullptr);
    ~cemedicos();
    void cargarMedicos();

private slots:
    void on_t1_textChanged(const QString &arg1);

private:
    Ui::cemedicos *ui;
};

#endif // CEMEDICOS_H
