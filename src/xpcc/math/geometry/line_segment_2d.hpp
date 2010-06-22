// coding: utf-8
// ----------------------------------------------------------------------------
/* Copyright (c) 2009, Roboterclub Aachen e.V.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of the Roboterclub Aachen e.V. nor the
 *       names of its contributors may be used to endorse or promote products
 *       derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY ROBOTERCLUB AACHEN E.V. ''AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL ROBOTERCLUB AACHEN E.V. BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * $Id$
 */
// ----------------------------------------------------------------------------

#ifndef XPCC__LINE_SEGMENT_2D_HPP
#define XPCC__LINE_SEGMENT_2D_HPP

#include "vector_2d.hpp"

namespace xpcc
{
	/**
	 * \brief	Line segment
	 * 
	 * \author	Fabian Greif
	 * \ingroup	geometry
	 */
	template <typename T>
	class LineSegment2D
	{
		typedef Vector2D<T> Point;
	public:
		LineSegment2D();
		
		LineSegment2D(const Point& start, const Point& end);
		
		void
		setStartPoint(const Point& point)
		{
			this->start = point;
		}
		
		const Point&
		getStartPoint() const
		{
			return this->start;
		}
		
		void
		setEndPoint(const Point& point)
		{
			this->end = point;
		}
		
		inline const Point&
		getEndPoint() const
		{
			return this->end;
		}
		
		inline void
		setPoints(const Point& start, const Point& end)
		{
			this->start = start;
			this->end = end;
		}
		
		T
		getLength() const;
		
	protected:
		Point start;
		Point end;
		
	private:
		template<typename U>
		friend bool
		operator == (const LineSegment2D<U> &a, const LineSegment2D<U> &b);
		
		template<typename U>
		friend bool
		operator != (const LineSegment2D<U> &a, const LineSegment2D<U> &b);
	};
	
	template<typename U>
	bool
	operator == (const LineSegment2D<U> &a, const LineSegment2D<U> &b);
	
	template<typename U>
	bool
	operator != (const LineSegment2D<U> &a, const LineSegment2D<U> &b);
}

#include "line_segment_2d_impl.hpp"

#endif // XPCC__LINE_SEGMENT_2D_HPP
