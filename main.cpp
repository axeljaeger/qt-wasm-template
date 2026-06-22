#include <QApplication>
#include <QLabel>
#include <QVBoxLayout>
#include <QWidget>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QWidget window;
    window.setWindowTitle(QStringLiteral("Qt WebAssembly Hello World"));
    window.resize(640, 360);

    auto *layout = new QVBoxLayout(&window);
    auto *label = new QLabel(QStringLiteral("Hello World from Qt WebAssembly!"));
    label->setAlignment(Qt::AlignCenter);
    label->setStyleSheet(QStringLiteral("font-size: 28px; padding: 24px;"));
    layout->addWidget(label);

    window.show();
    return app.exec();
}

