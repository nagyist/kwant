/*ckwg +5
 * Copyright 2014 by Kitware, Inc. All Rights Reserved. Please refer to
 * KITWARE_LICENSE.TXT for licensing information, or contact General Counsel,
 * Kitware, Inc., 28 Corporate Drive, Clifton Park, NY 12065.
 */

#ifndef INCL_TRACK_ORACLE_ROW_VIEW_INSTANCES_H
#define INCL_TRACK_ORACLE_ROW_VIEW_INSTANCES_H

#include <track_oracle/track_oracle_row_view.txx>

#define TRACK_ORACLE_ROW_VIEW_INSTANCES(T) \
  template vidtk::track_field< T >& vidtk::track_oracle_row_view::add_field< T >( const std::string& );


#endif
