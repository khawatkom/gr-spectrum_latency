/* -*- c++ -*- */
/* 
 * Copyright 2014 <+YOU OR YOUR COMPANY+>.
 * 
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 * 
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */

#ifndef INCLUDED_spectrum_latency_BIN_STATISTICS_IMPL_H
#define INCLUDED_spectrum_latency_BIN_STATISTICS_IMPL_H

#include <spectrum_latency/bin_statistics.h>

namespace gr {
  namespace spectrum_latency {

    class bin_statistics_impl : public bin_statistics
    {
     private:
      unsigned int d_vlen;
      unsigned int d_meas_interval;

     public:
      bin_statistics_impl(unsigned int vlen, unsigned int meas_interval);
      ~bin_statistics_impl();

      // Where all the action really happens
      int work(int noutput_items,
	       gr_vector_const_void_star &input_items,
	       gr_vector_void_star &output_items);
    };

  } // namespace spectrum_latency
} // namespace gr

#endif /* INCLUDED_spectrum_latency_BIN_STATISTICS_IMPL_H */

