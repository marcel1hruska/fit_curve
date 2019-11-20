#pragma once
namespace cv
{
class Point2d;

class Vec2d
{
public:
	Vec2d();
	Vec2d(double x, double y);
	Vec2d(Point2d vec);
	double x, y;

	double& operator[](size_t pos);
	const double& operator[](size_t pos) const;
	const double dot(const Vec2d& vec) const;
};

Vec2d operator+(const Vec2d& vec1, const Vec2d& vec2);

class Point2d
{
public:
	Point2d();
	Point2d(double x, double y);
	Point2d(Vec2d vec);
	double x, y;
};

Point2d operator-(const Point2d& point);

Point2d operator-(const Point2d& point1, const Point2d& point2);

Point2d operator*(const Point2d& point, double d);

class Point
{
public:
	Point();
	Point(double x, double y);
	Point(Point2d vec);
	double x, y;
};

Vec2d normalize(const Vec2d& vec1, const Vec2d& vec2);

}