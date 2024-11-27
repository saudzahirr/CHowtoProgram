/*
 * Author  : Saud Zahir
 * Date    : November 24, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Overloading Binary Operators
 */

#ifndef QUATERNION_H
#define QUATERNION_H

class Quaternion {
    public:
        /**
         * Constructor
         */
                Quaternion(int = 1, int = 1, int = 1, int = 1); // default constructor

        /**
         * Destructor
         */
        ~Quaternion();

        /**
         * Public Member Functions
         */
        void setX(int);
        void setY(int);
        void setZ(int);
        void setW(int);

        int getX() const;
        int getY() const;
        int getZ() const;
        int getW() const;

        void show() const;

        /**
         * Friend Function & Binary Operator Overloading
         */
        friend Quaternion operator+(const Quaternion&, const Quaternion&);
        friend Quaternion operator*(const Quaternion&, const Quaternion&);

    private:
        int x;
        int y;
        int z;
        int w;
};

#endif
