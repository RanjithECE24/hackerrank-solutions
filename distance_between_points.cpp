#include <iostream>
#include <vector>
#include <cmath>
#include <array>

struct Point {
    int x;
    int y;
};

int GetDistance(Point const& p1, Point const& p2) noexcept {
    int const x{p2.x-p1.x};
    int const y{p2.y-p1.y};
    int const x_pow_2{std::pow(x, 2)};
    int const y_pow_2{std::pow(y, 2)};
    return std::sqrt((x_pow_2 + y_pow_2));
}

std::array<std::array<Point, 2>, 2> GetShortAndLongDistancePoints(std::vector<Point> const& points) noexcept {
    std::array<Point, 2> minimum_distance_points{};
    std::array<Point, 2> maximum_distance_points{};
    int min_distance{0}, max_distance{0};
    std::size_t const size{points.size()};
    for (std::size_t p1{0}; p1 < size; ++p1) {
        for (std::size_t p2{p1+1}; p2 < size; ++p2) {
            int const calculated_distance{GetDistance(points.at(p1), points.at(p2))};
            if ((min_distance != 0) && (max_distance != 0)) {
                if (calculated_distance < min_distance) {
                    minimum_distance_points[0] = points.at(p1);
                    minimum_distance_points[1] = points.at(p2);
                    min_distance = calculated_distance;
                } else if (calculated_distance > max_distance) {
                    maximum_distance_points[0] = points.at(p1);
                    maximum_distance_points[1] = points.at(p2);
                    max_distance = calculated_distance;
                }
            } else {
                minimum_distance_points[0] = maximum_distance_points[0] = points.at(p1);
                minimum_distance_points[1] = maximum_distance_points[1] = points.at(p2);
                min_distance = max_distance = calculated_distance;
            }
        }
    }
    return {minimum_distance_points, maximum_distance_points};
}

int main() {
    std::vector<Point> const points{{1, 3}, {1, 5}, {6,5}};
    std::array<std::array<Point, 2>, 2> const pts{GetShortAndLongDistancePoints(points)};
    std::cout << " minimum distance points ";
    for (Point const& pt : pts.front()) {
        std::cout << " x = " << pt.x << ", y = " << pt.y;
    }
    std::cout << '\n';
    std::cout << " maximum distance points ";
    for (Point const& pt : pts.back()) {
        std::cout << " x = " << pt.x << ", y = " << pt.y;
    }
    std::cout << '\n';
    return 0;
}