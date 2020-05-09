#include <QRect>
#include <QDebug>

#include <KWindowSystem>
#include <QApplication>

int main (int argc, char *argv[])
{
    QGuiApplication::setAttribute(Qt::AA_UseHighDpiPixmaps, true);
    QApplication app(argc, argv);

    QRect wa1 = KWindowSystem::workArea();
    qDebug() << "QRect KWindowSystemPrivateX11::workArea(int desktop):" << wa1;

    QRect wa2 = KWindowSystem::workArea(QList<WId>());
    qDebug() << "QRect KWindowSystemPrivateX11::workArea(const QList<WId> &exclude, int desktop):" << wa2;
}
