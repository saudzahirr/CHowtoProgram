/*
 * Author  : Saud Zahir
 * Date    : November 20, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Default Memberwise Assignment
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

    private:
        int x;
        int y;
        int z;
        int w;
};

#endif
