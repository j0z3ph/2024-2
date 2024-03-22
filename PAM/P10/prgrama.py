from PyQt6.QtCore import Qt
from Ui_ventana import *
from Ui_login_dialog import *
from PyQt6.QtWidgets import QMainWindow, QDialog, QWidget
import sys

class MainWindow(QMainWindow, Ui_MainWindow):
    def __init__(self, *parent, **flags) -> None:
        super().__init__(*parent, **flags)
        self.setupUi(self)
        
        self.pushButton.clicked.connect(self.showDialog)
        
    def showDialog(self):
        dialogoLogin = DialogoLogin(self, Qt.WindowType.Dialog)
        resp = dialogoLogin.exec()
        print(resp)
        
class DialogoLogin(QDialog, Ui_Dialog):
    def __init__(self, parent: QWidget | None = ..., flags: Qt.WindowType = ...) -> None:
        super().__init__(parent, flags)
        self.setupUi(self)
        
        
if __name__ == "__main__":
    app = QtWidgets.QApplication(sys.argv)
    window = MainWindow()
    window.show()
    sys.exit(app.exec())
    