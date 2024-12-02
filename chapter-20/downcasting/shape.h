/*
 * Author  : Saud Zahir
 * Date    : December 02, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Runtime Type Information with Downcasting, dynamic_cast, typeid and type_info
 */

#ifndef SHAPE_H
#define SHAPE_H

#include <vector>

struct Coordinate {
    double x;
    double y;
    double z;
};

/**
 * Abstract Base Class
 */
class Shape {
    public:
        /**
         * Constructor
         */
        Shape(unsigned int);

        /**
         * Default Constructor
         */
        Shape() = default;

        /**
         * Copy Constructor
         */
        Shape(Shape&) = delete;

        /**
         * Virtual Destructor
         */
        virtual ~Shape();

        /**
         * Virtual Public Member Function
         */
        virtual void draw() const = 0; // pure virtual functions
        virtual void create() const = 0;

        virtual unsigned int getDimension() const final;

    protected:
        /**
         * Protected Data Members
         */
        unsigned int edges;
        unsigned int vertices;
        std::vector<Coordinate> xyz;

        /**
         * Protected Member Functions
         */
        double square(double);

    private:
        /**
         * Private Data Members
         */
        unsigned int dim;
};

#endif
