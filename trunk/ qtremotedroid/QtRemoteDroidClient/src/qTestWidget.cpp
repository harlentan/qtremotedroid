#include "qTestWidget.h"
#include <QDebug>


qTestWidget::qTestWidget(QWidget *parent) : QWidget (parent) {
}

qTestWidget::~qTestWidget() {
}

void qTestWidget::mouseMoveEvent(QMouseEvent *e) {
  emit dbl_clicked();
}

void qTestWidget::debugCode() {
qDebug() << "Test Code" ;
}
