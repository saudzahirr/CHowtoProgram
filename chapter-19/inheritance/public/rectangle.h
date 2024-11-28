/*
 * Author  : Saud Zahir
 * Date    : November 28, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: public Inheritance
 */

#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
    public:
        /**
         * Constructor
         */
        Rectangle(unsigned int, unsigned int);
        /**
         * Destructor
         */
        ~Rectangle();

        Rectangle() = delete; // delete default constructor

        /**
         * Public Member Functions
         */
        void setWidth(unsigned int);
        void setHeight(unsigned int);

        unsigned int getWidth() const;
        unsigned int getHeight() const;
        unsigned int getArea() const;
        unsigned int getPerimeter() const;

        void showRectangleInfo() const;

    protected:
        /**
         * Protected Data Members
         */
        unsigned int area;
        unsigned int perimeter;

        /**
         * Protected Member Functions
         */
        void computeArea();
        void computePerimeter();

    private:
        /**
         * Private Data Members
         */
        unsigned int height;
        unsigned int width;
};

#endif
