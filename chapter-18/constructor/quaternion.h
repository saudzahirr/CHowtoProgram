/*
 * Author  : Saud Zahir
 * Date    : November 26, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Default & Copy Constructor
 */

#ifndef QUATERNION_H
#define QUATERNION_H

class Quaternion {
    public:
        /**
         * Constructor
         */
        Quaternion(int = 1, int = 1, int = 1, int = 1); // default constructor
        Quaternion(const Quaternion&); // copy constructor
        // delete default constructor
        Quaternion() = delete;

        /**
         * Destructor
         */
        ~Quaternion();

        /**
         * Public Member Functions
         */
        // Mutators
        void setQ(int, int, int, int);
        void setX(int);
        void setY(int);
        void setZ(int);
        void setW(int);

        // Accessors
        int getX() const;
        int getY() const;
        int getZ() const;
        int getW() const;

        void show() const;

        // Unary Operator Overloading
        // prefix
        Quaternion& operator++();
        Quaternion& operator--();
        // postfix
        Quaternion operator++(int);
        Quaternion operator--(int);

        Quaternion& operator=(const Quaternion&); // assignment operator
        bool operator==(const Quaternion&) const;
        bool operator!=(const Quaternion &q) const {
            return ! (*this == q);
        }

        int& operator[](int);
        int operator[](int) const; // for const Quaternion object

        /**
         * Friend Function
         */
        // Binary Operator Overloading
        friend Quaternion operator+(const Quaternion&, const Quaternion&);
        friend Quaternion operator*(const Quaternion&, const Quaternion&);


    private:
        int x;
        int y;
        int z;
        int w;
};

#endif
