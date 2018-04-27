#ifndef __COMPONENT_H__
#define __COMPONENT_H__

#include <cmath>
#include <stdlib.h>

class Base {
    public:
        /* Constructors */
        Base() { };

        /* Pure Virtual Functions */
        virtual double evaluate() = 0;
};

class Op: public Base {
	protected:
		double value;

	public:
		Op() : Base(), value(0) { };
		Op(double value) : Base(), value(value) { };
		double evaluate() {
			return this->value;
		};
};

class UnaryOperator: public Base {
	protected:
		Base* num;
	
	public:
		UnaryOperator() : Base() { };
		UnaryOperator(Base* num) : num(num) { };
		Base* get_num() {
			return num;
		};
		virtual double evaluate() = 0;
};

class Sqr: public UnaryOperator {
	public:
		Sqr() : UnaryOperator() { };
		Sqr(Base* num) : UnaryOperator(num) { };
		double evaluate() {
			return this->num->evaluate() * this->num->evaluate();
		};
};

class Operator: public Base {
	protected:
		Base* left, *right;

	public:
		Operator() : Base() { };
		Operator(Base* l, Base* r) : left(l), right(r) { };
		Base* get_left() {
			return left;
		};
		Base* get_right() {
			return right;
		};
		virtual double evaluate() = 0;
};

class Add: public Operator {
	public:
		Add() : Operator() { };
		Add(Base* left, Base* right) : Operator(left, right) { };
		double evaluate() {
			return this->left->evaluate() + this->right->evaluate();
		};
};

class Sub: public Operator {
	public:
		Sub() : Operator() { };
		Sub(Base* left, Base* right) : Operator(left, right) { };
		double evaluate() {
			return this->left->evaluate() - this->right->evaluate();
		};
};

class Mult: public Operator {
	public:
		Mult() : Operator() { };
		Mult(Base* left, Base* right) : Operator(left, right) { };
		double evaluate() {
			return this->left->evaluate() * this->right->evaluate();
		};
};

class Divide: public Operator {
	public:
		Divide() : Operator() { };
		Divide(Base* left, Base* right) : Operator(left, right) { };
		double evaluate() {
			return this->left->evaluate() / this->right->evaluate();
		};
};

class Absolute: public UnaryOperator {
	public:
		Absolute() : UnaryOperator() { };
		Absolute(Base* num) : UnaryOperator(num) { };
		double evaluate() {
			if(num < 0) {
				return abs(this->num->evaluate());
			}
			return this->num->evaluate();
		};
};

class Floor: public UnaryOperator {
	public:
		Floor() : UnaryOperator() { };
		Floor(Base* num) : UnaryOperator(num) { };
		double evaluate() {
			return floor(this->num->evaluate());
		};
};

class Ceil: public UnaryOperator {
	public:
		Ceil() : UnaryOperator() { };
		Ceil(Base* num) : UnaryOperator(num) { };
		double evaluate() {
			return ceil(this->num->evaluate());
		};
};

#endif // __COMPONENT_H__
