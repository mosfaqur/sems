/*
 * Copyright (C) 2010 Stefan Sayer
 *
 * This file is part of SEMS, a free SIP media server.
 *
 * SEMS is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * For a license to use the SEMS software under conditions
 * other than those described here, or to purchase support for this
 * software, please contact iptel.org by e-mail at the following addresses:
 *    info@iptel.org
 *
 * SEMS is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */
#ifndef _HeaderFilter_h_
#define _HeaderFilter_h_

#include <string>
using std::string;

#include <set>
using std::set;

enum FilterType { Transparent=0, Whitelist, Blacklist };
const char* FilterType2String(FilterType ft);
int skip_header(const std::string& hdr, size_t start_pos, 
		 size_t& name_end, size_t& val_begin, size_t& val_end, size_t& hdr_end);
int inplaceHeaderFilter(string& hdrs, const set<string>& headerfilter_list, 
			FilterType f_type);

#endif
