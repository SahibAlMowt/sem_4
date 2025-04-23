#include <QHBoxLayout>

#include "combobox.h"

ComboBoxEx::ComboBoxEx(QWidget *parent): QWidget(parent)
{
    QStringList faculties = {"app_math", "phys", "psix", "ekonom", "filol", "chem"};

    auto *hbox = new QHBoxLayout(this);

    combo = new QComboBox;

    combo -> addItems(faculties);

    hbox -> addWidget(combo);
    hbox -> addSpacing(15);

    label = new QLabel("app_math", this);

    hbox -> addWidget(label);

    connect(combo, qOverload<const QString&>(&QComboBox::activated), label, &QLabel::setText);
}
