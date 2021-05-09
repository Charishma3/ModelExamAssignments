#include "widget.h"
#include<QTextEdit>
#include<QPushButton>
#include<QFont>
#include<QLabel>
#include<QDebug>
#include<QColorDialog>


Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
//To create a font
    QFont labelFont("Times",20,QFont::Bold);
//To create a label
    QLabel *mLabel=new QLabel("This is Charishma",this);
//To set the Font to label
    mLabel->setFont(labelFont);
//Move the label
    mLabel->move(50,25);
//To apply color to label and background color to label
    QPalette label;
    label.setColor(QPalette::Window,Qt::black);
    label.setColor(QPalette::WindowText,Qt::red);
    mLabel->setAutoFillBackground(true);
    mLabel->setPalette(label);
//To create TextEdit using
    QTextEdit *text=new QTextEdit(this);
    text->setMinimumSize(380,25);
    text->move(50,75);
    connect(text,&QTextEdit::textChanged,[=](){qDebug()<<"Text Changed"; });
//To create PushButton for cut button using
    QPushButton *cut=new QPushButton("CUT",this);
    cut->setMinimumSize(100,25);
    cut->move(70,350);
    connect(cut,&QPushButton::clicked,[=](){text->cut();});
//To create PushButton for copy button using
    QPushButton *copy=new QPushButton("COPY",this);
    copy->setMinimumSize(100,25);
    copy->move(190,350);
    connect(copy,&QPushButton::clicked,[=](){text->copy();});
//To create PushButton for paste button using
    QPushButton *paste=new QPushButton("PASTE",this);
    paste->setMinimumSize(100,25);
    paste->move(310,350);
    connect(paste,&QPushButton::clicked,[=](){text->paste();});
//To create PushButton for undo button using
    QPushButton *undo=new QPushButton("UNDO",this);
    undo->setMinimumSize(100,25);
    undo->move(70,380);
    connect(undo,&QPushButton::clicked,[=](){text->undo();});
//To create PushButton for redo button using
    QPushButton *redo=new QPushButton("REDO",this);
    redo->setMinimumSize(100,25);
    redo->move(190,380);
    connect(redo,&QPushButton::clicked,[=](){text->redo();});
//To create PushButton for Html Button
    QPushButton *html=new QPushButton("HTML",this);
    html->setMinimumSize(100,25);
    html->move(310,380);
    connect(html,&QPushButton::clicked,[=](){
        text->setHtml("<h1>MODEL EXAM</h1><p>Questions:<br><ul><li>HackerRank</li><li>Projcet1</li><li>QComboClass</li></ul></p>");
    });



}

Widget::~Widget()
{
}

