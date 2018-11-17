#ifndef CGMEDICOS_H
#define CGMEDICOS_H

#include <QWidget>

namespace Ui {
class CGMedicos;
}

class CGMedicos : public QWidget
{
    Q_OBJECT

public:
    explicit CGMedicos(QWidget *parent = nullptr);
    ~CGMedicos();
    void cargarMedicos();
private:
    Ui::CGMedicos *ui;
};

#endif // CGMEDICOS_H
