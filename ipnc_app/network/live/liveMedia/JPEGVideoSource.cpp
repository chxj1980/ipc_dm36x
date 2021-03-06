/**********
This library is free software; you can redistribute it and/or modify it under
the terms of the GNU Lesser General Public License as published by the
Free Software Foundation; either version 2.1 of the License, or (at your
option) any later version. (See <http://www.gnu.org/copyleft/lesser.html>.)

This library is distributed in the hope that it will be useful, but WITHOUT
ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License for
more details.

You should have received a copy of the GNU Lesser General Public License
along with this library; if not, write to the Free Software Foundation, Inc.,
59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
**********/
// "liveMedia"
// Copyright (c) 1996-2007 Live Networks, Inc.  All rights reserved.
// JPEG video sources
// Implementation

#include "JPEGVideoSource.hh"

JPEGVideoSource::JPEGVideoSource(UsageEnvironment& env)
  : FramedSource(env) {
}

JPEGVideoSource::~JPEGVideoSource() {
}

u_int8_t const* JPEGVideoSource::quantizationTables(u_int8_t& precision,
						    u_int16_t& length) {
  // Default implementation
  precision = 0;
  length = 0;
  return NULL;
}

u_int8_t const* JPEGVideoSource::restartIntervalTables(u_int8_t& precision,
					     u_int16_t& length) {
	// Default implementation
	precision = 0;
	length = 0;
	return NULL;

}


Boolean JPEGVideoSource::isJPEGVideoSource() const {
  return True;
}
