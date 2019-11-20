#include "cv.h"
#include <cmath>
using namespace cv;

Vec2d::Vec2d() : x(0), y(0) {};
Vec2d::Vec2d(double x, double y) : x(x), y(y) {};
Vec2d::Vec2d(Point2d vec) : x(vec.x), y(vec.y) {};

double& Vec2d::operator[](size_t pos)
{
	return (pos == 0) ? x : y;
}

const double& Vec2d::operator[](size_t pos) const
{
	return (pos == 0) ? x : y;
}

const double Vec2d::dot(const Vec2d& vec) const
{
	return x * vec.x + y * vec.y;
}

Vec2d cv::operator+(const Vec2d& vec1, const Vec2d& vec2)
{
	return Vec2d(vec1.x + vec2.x, vec1.y + vec2.y);
}

Point2d::Point2d() : x(0), y(0) {};
Point2d::Point2d(double x, double y) : x(x), y(y) {};
Point2d::Point2d(Vec2d vec) : x(vec.x), y(vec.y) {};

Point2d cv::operator-(const Point2d& point)
{
	return Point2d(-point.x, -point.y);
}

Point2d cv::operator-(const Point2d& point1, const Point2d& point2)
{
	return Point2d(point1.x - point2.x, point1.y - point2.y);
}

Point2d cv::operator*(const Point2d& point, double d)
{
	return Point2d(d * point.x, d * point.y);
}


Vec2d cv::normalize(const Vec2d& vec1, const Vec2d& vec2)
{
	//normalize 2 vectors?
	auto length = sqrt(vec1.dot(vec1));
	return Vec2d(vec1.x / length, vec2.y / length);
}

Point::Point() : x(0), y(0) {};
Point::Point(double x, double y) : x(x), y(y) {};
Point::Point(Point2d vec) : x(vec.x), y(vec.y) {};