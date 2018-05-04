#ifndef BASEPRINT_H
#define BASEPRINT_H

class BasePrint {
	private: 
		/* Value to Print */
		double value;

	public:
		/* Constructors */
		BasePrint();
		BasePrint(double value);

		/* Pure Virutal Print Function */
		virtual void print() = 0;
}
