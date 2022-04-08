/*
CH-230-A
a4 p2.[c]
Blen Assefa
bassefa@jacobs-university.de
*/
#ifndef _AREA_H
#define _AREA_H

class Area {
	public:
		Area(const char *n);
		virtual ~Area(); /* Destructor */
		void getColor() const;
		/* Virtual method to calculate perimeter, initially it is 0 */
		virtual double perimeter() const = 0;
		/* Virtual method to calculate area, initially it is 0 */
		virtual double calcArea() const = 0;
	private:
		char color[11];
};
#endif
