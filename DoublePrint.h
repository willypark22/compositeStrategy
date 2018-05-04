#ifndef BINARYPRINT_H
#define BINARYPRINT_H

class DoublePrint : public BasePrint {
	public:
		DoublePrint();
		DoublePrint(double value): BasePrint(value) { };

		void print();
};

#endif
