#include "Point.hpp"
/* http://www.gamedev.net/community/forums/topic.asp?topic_id=295943 */
Fixed sign(Point p1, Point p2, Point p3)
{
    return (p1.get_x() - p3.get_x()) * (p2.get_y() - p3.get_y()) - (p2.get_x() - p3.get_x()) * (p1.get_y() - p3.get_y());
}

bool bsp (Point v1, Point v2, Point v3 , Point pt )
{
    bool has_neg, has_pos;

    Fixed d1 ( sign(pt, v1, v2) );
    Fixed d2 ( sign(pt, v2, v3) );
    Fixed d3 ( sign(pt, v3, v1) );

    has_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
    has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);

    return !(has_neg && has_pos);
}

/* other implementation */
/* bool bsp( Point const a, Point const b, Point const c, Point const point) { */

/* 	Fixed det( (b.get_x() - a.get_x()) * (c.get_y() - a.get_y()) - (b.get_y() - a.get_y()) * (c.get_x() - a.get_x()) ) ; */

/*     return (det * ((b.get_x() - a.get_x()) * (point.get_y() - a.get_y()) - (b.get_y() - a.get_y()) * (point.get_x() - a.get_x())) > 0 && */
/*             det * ((c.get_x() - b.get_x()) * (point.get_y() - b.get_y()) - (c.get_y() - b.get_y()) * (point.get_x() - b.get_x())) > 0 && */
/*             det * ((a.get_x() - c.get_x()) * (point.get_y() - c.get_y()) - (a.get_y() - c.get_y()) * (point.get_x() - c.get_x())) > 0 ); */
/* } */

/* bool bsp(Point p0, Point p1, Point p2, Point p) */
/* { */
/*     Fixed s ( p0.get_y() * p2.get_x() - p0.get_x() * p2.get_y() + (p2.get_y() - p0.get_y()) * p.get_x() + (p0.get_x() - p2.get_x()) * p.get_y() ) ; */
/*     Fixed t (  p0.get_x() * p1.get_y() - p0.get_y() * p1.get_x() + (p0.get_y() - p1.get_y()) * p.get_x() + (p1.get_x() - p0.get_x()) * p.get_y() ) ; */

/*     if ((s < 0) != (t < 0)) */
/*         return false; */

/*     Fixed A ( p1.get_y() * Fixed(-1) * p2.get_x() + p0.get_y() * (p2.get_x() - p1.get_x()) + p0.get_x() * (p1.get_y() - p2.get_y()) + p1.get_x() * p2.get_y() ) ; */

/*     return A < 0 ? (s <= 0 && s + t >= A) : (s >= 0 && s + t <= A); */
/* } */
