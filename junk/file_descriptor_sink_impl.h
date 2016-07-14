/* -*- c++ -*- */
/*
 * Copyright 2004,2013 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * GNU Radio is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 *
 * GNU Radio is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with GNU Radio; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */

#ifndef INCLUDED_MSOD_SENSOR_FILE_DESCRIPTOR_SINK_IMPL_H
#define INCLUDED_MSOD_SENSOR_FILE_DESCRIPTOR_SINK_IMPL_H

#include <msod_sensor/file_descriptor_sink.h>

namespace gr {
  namespace msod_sensor {

    class file_descriptor_sink_impl : public file_descriptor_sink
    {
    private:
      size_t d_itemsize;
      int d_fd;

    public:
      void set_fd(int fd) { d_fd = fd; }

      file_descriptor_sink_impl(size_t itemsize, int fd);
      ~file_descriptor_sink_impl();

      int work(int noutput_items,
               gr_vector_const_void_star &input_items,
               gr_vector_void_star &output_items);
    };

  } /* namespace myblocks */
} /* namespace gr */

#endif /* INCLUDED_MYBLOCKS_FILE_DESCRIPTOR_SINK_IMPL_H */