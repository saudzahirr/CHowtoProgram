/*
 * Author  : Saud Zahir
 * Date    : November 22, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: friend Functions and friend Classes
 */

#ifndef QUATERNION_H
#define QUATERNION_H

// Forward declaration
class QuaternionOperations;

class Quaternion {
    public:
        /**
         * Constructor
         */
        explicit Quaternion(int = 1, int = 1, int = 1, int = 1); // default constructor

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
         * Friend Function
         */
        friend Quaternion add(const Quaternion&, const Quaternion&);

        /**
         * Friend Class
         */
        friend class QuaternionOperations;

    private:
        int x;
        int y;
        int z;
        int w;
};

class QuaternionOperations {
    public:
        /**
         * Public Member Functions
         */
        Quaternion sub(const Quaternion&, const Quaternion&);
        Quaternion mul(const Quaternion&, const Quaternion&);

    private:
        /**
         * Private Member Function
         */
        Quaternion neg(const Quaternion&);
};

#endif
