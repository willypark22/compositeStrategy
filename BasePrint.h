#ifndef __BasePrint_H__
#define __BasePrint_H__

class BasePrint {
	protected: 
		/* Value to Print */
		double value;

	public:
		/* Constructors */
		BasePrint();
		BasePrint(double val);

		/* Pure Virutal Print Function */
		virtual void print() = 0;
};

#endif
