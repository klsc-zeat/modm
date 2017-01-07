/*
 * Copyright (c) 2009-2010, Martin Rosekeit
 * Copyright (c) 2009-2011, Fabian Greif
 * Copyright (c) 2012-2013, Niklas Hauser
 *
 * This file is part of the modm project.
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 */
// ----------------------------------------------------------------------------

#include <unittest/testsuite.hpp>

#include "../slave.hpp"
#include "fake_io_device.hpp"

class SlaveTest : public unittest::TestSuite
{
public:
	virtual void
	setUp();
	
	virtual void
	tearDown();
	
	
	void
	testEmptyMethod();
	
	void
	testResponseMethod();
	
	void
	testErrorResponse();
	
	void
	testParameterMethod();
	
	void
	testWrongParameterSize();
	
	void
	testNoMethod();
	
	
protected:
	typedef modm::sab::Interface< FakeIODevice > TestingInterface;
	typedef modm::sab::Slave< TestingInterface > TestingSlave;
	
	TestingSlave *slave;
};