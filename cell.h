#ifndef CELL_H
#define CELL_H


#include <QBrush>
#include <QGraphicsItem>


class QPainter;
class QStyleOptionGraphicsItem;


class Cell : public QGraphicsItem
{
public:
    enum {Type = UserType + 1};
    enum CellState {Live, Die};

    explicit Cell(int id, QGraphicsItem *parent=0);

    QRectF boundingRect() const { return m_path.boundingRect(); }
    QPainterPath shape() const { return m_path; }
    void paint(QPainter *painter,
            const QStyleOptionGraphicsItem *option, QWidget *widget);
    int type() const { return Type; }

    CellState shrinkOrGrow();
    int id() const { return m_id; }

    static bool showIds() { return s_showIds; }
    static void setShowIds(bool show) { s_showIds = show; }

private:
    static bool s_showIds;

    QBrush m_brush;
    QPainterPath m_path;
    const int m_id;
    qreal m_size;
};

#endif // CELL_H
