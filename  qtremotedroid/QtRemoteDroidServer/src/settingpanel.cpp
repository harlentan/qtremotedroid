#include "settingpanel.h"

SettingPanel::SettingPanel()
{
    this->setWindowTitle("QtRemoteDroid Setting");
    QIcon icon = QIcon("./img/icon.png");
    this->setWindowIcon(icon);
}
