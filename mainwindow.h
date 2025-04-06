#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    double round(double value);
    void updateResult(double res);
private slots:
    void on_button_sum_clicked();
    void on_button_sub_clicked();
    void on_button_mul_clicked();
    void on_button_div_clicked();

    void on_button_sin_clicked();
    void on_button_cos_clicked();
    void on_button_tan_clicked();
    void on_button_cotan_clicked();
    void on_button_arcsin_clicked();
    void on_button_arccos_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
