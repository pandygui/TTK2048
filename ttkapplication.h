#ifndef TTKAPPLICATION_H
#define TTKAPPLICATION_H

/* =================================================
 * This file is part of the TTK 2048 project
 * Copyright (c) 2017 - 2017 Greedysky Studio
 * All rights reserved!
 * Redistribution and use of the source code or any derivative
 * works are strictly forbiden.
   =================================================*/

#include <QWidget>

#define MAINWINDOW_HEIGHT       350
#define MAIMWINDOW_WIDTH		350
#define GRID_HEIGHT				75
#define GRID_WIDTH				75
#define VICTORY					2048
#define COORY					4
#define COORX					4

namespace Ui {
class TTKApplication;
}

class TTKApplication : public QWidget
{
    Q_OBJECT
public:
    enum CheckStatus
    {
        CS_WIN,
        CS_LOSE,
        CS_NULL
    };

    enum Direction
    {
        DR_UP,
        DR_DOWN,
        DR_LEFT,
        DR_RIGHT
    };

    explicit TTKApplication(QWidget *parent = 0);
    ~TTKApplication();

private Q_SLOTS:
    void startButtonClicked();

private:
    virtual void paintEvent(QPaintEvent *event) override;
    virtual void keyPressEvent(QKeyEvent *event) override;

    void initEachGrid();
    int getEmptyGridNumber();
    void randBlockNumber();
    QString getBlockColor(int number);
    CheckStatus checkBlockNumber();
    void calcBlocks(int dir);

    Ui::TTKApplication *m_ui;
    int m_block[COORX][COORY];
    bool m_canGetKeyToMove;
    int m_score;

};

#endif // TTKAPPLICATION_H
