#ifndef TEST_H
#define TEST_H

#include <QtWidgets/QWidget>
#include "ui_test.h"

class test : public QWidget
{
	Q_OBJECT

public:
	test(QWidget *parent = 0);
	~test();

private:
	Ui::testClass ui;
};

#endif // TEST_H
