/* This file is part of the Spring engine (GPL v2 or later), see LICENSE.html */

/* Note: This file is machine generated, do not edit directly! */

#ifndef _CPPWRAPPER_ABSTRACTPATHING_H
#define _CPPWRAPPER_ABSTRACTPATHING_H

#include <climits> // for INT_MAX (required by unit-command wrapping functions)

#include "IncludesHeaders.h"
#include "Pathing.h"

namespace springai {

/**
 * Lets C++ Skirmish AIs call back to the Spring engine.
 *
 * @author	AWK wrapper script
 * @version	GENERATED
 */
class AbstractPathing : public Pathing {

protected:
	virtual ~AbstractPathing();
	// @Override
public:
	virtual int CompareTo(const Pathing& other);
	// @Override
public:
	virtual bool Equals(const Pathing& other);
	// @Override
public:
	virtual int HashCode();
	// @Override
public:
	virtual std::string ToString();
}; // class AbstractPathing

}  // namespace springai

#endif // _CPPWRAPPER_ABSTRACTPATHING_H

