#ifndef SETTING_H
#define SETTING_H

#include <QWidget>
#include <QLabel>
#include <QComboBox>
#include <QPushButton>
#include <QGridLayout>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QPixmap>
#include <QIcon>
#include <QBitmap>
#include <QImage>

class Setting : public QWidget
{
    Q_OBJECT
public:
    Setting(QWidget *parent = 0);
    ~Setting();
    int getColor();
    int getSens();

signals:
    void goPrevious();
    void goSubmit();

public slots:
    void onClick();
    void onSubmit();
    void onPrePress();
    void onPreRelease();
    void onSubPress();
    void onSubRelease();


private:
    QPushButton *preStepButn;
    QPushButton *exitButn;
    QPushButton *commitButn;
    QComboBox *colorBox;
    QComboBox *sensBox;
    QGridLayout *grid;
    QLabel *colorLabel;
    QLabel *sensLabel;
    QHBoxLayout *bottomButnLay;
    QVBoxLayout *vBoxLayout;
    int colorType;
    int sensType;



};

#endif // SETTING_H
