#pragma once

#include <QDialog>

namespace Ui
{
class RunScriptDialog;
}

namespace geometrize
{

namespace dialog
{

/**
 * @brief The RunScriptDialog class models the UI for picking scripts to run, and specifying script options.
 */
class RunScriptDialog : public QDialog
{
    Q_OBJECT

public:
    explicit RunScriptDialog(QWidget* parent = nullptr);
    ~RunScriptDialog();

    QString getScriptFilepath();

private slots:
    void on_scriptFileDialogButton_clicked();
    void on_buttonBox_accepted();

private:
    Ui::RunScriptDialog* ui;
};

}

}
