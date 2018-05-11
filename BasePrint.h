#ifndef __BASEPRINT_H__
#define __BASEPRINT_H__

class BasePrint {
	private:
		/* Value to Print */
		double value;

	public:
		/* Constructors */
		BasePrint();
		BasePrint(double val);
		
		/* Pure Virtual Print Function */
		virtual void print() = 0;
};
#endif