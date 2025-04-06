#include <QApplication>
#include <QWidget>


int main(int argc, char* argv[]) {
    QApplication app(argc, argv);
    auto window = QWidget();
    window.show();
    return app.exec();
}