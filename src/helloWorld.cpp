//
// Created by FrostEnte on 11/18/21.
//

#include <QApplication>
#include <QPushButton>
#include <QWidget>


int width;
int height;
int buttonwidth;
int buttonheight;
int main(int argc, char** argv)
{
    width = 800;
    height = 600;
    QApplication app(argc, argv);
    QFont font ("Courier");
    QWidget window;
    buttonwidth = width / 2;
    buttonheight = height / 2;
    buttonwidth = buttonwidth - 50;
    QPushButton *button = new QPushButton(&window);
    window.setFixedSize(width,height);
    button ->setGeometry(buttonwidth , buttonheight, 100 ,20);
    button->setText("Create Wallet");
    button->setToolTip("This button creates a Wallet");
    button->setFont(font);
    window.show();
    button->show();
    QIcon Qicon ( const QString &name, const QIcon &fallback = QIcon());
    button->setIcon(QIcon::fromTheme("money"));
    return app.exec();
}