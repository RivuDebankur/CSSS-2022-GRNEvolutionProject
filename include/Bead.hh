#ifndef BeadHeader
#define BeadHeader

#include "Header.hh"

class Bead {
	public:

		Bead();
		explicit Bead(const Bead &b);
		virtual ~Bead();

		virtual Bead* Clone() const=0;
};

#endif