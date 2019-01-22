/* Aravis - Digital camera library
 *
 * Copyright © 2009-2010 Emmanuel Pacaud
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General
 * Public License along with this library; if not, write to the
 * Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 *
 * Author: Emmanuel Pacaud <emmanuel@gnome.org>
 */

#ifndef ARV_H
#define ARV_H

#define ARV_H_INSIDE

#include </home/pi/arv/aravis/src/arvtypes.h>

#include </home/pi/arv/aravis/src/arvfeatures.h>
#include </home/pi/arv/aravis/src/arvversion.h>
#include </home/pi/arv/aravis/src/arvdebug.h>
#include </home/pi/arv/aravis/src/arvmisc.h>
#include </home/pi/arv/aravis/src/arvstr.h>
#include </home/pi/arv/aravis/src/arvzip.h>
#include </home/pi/arv/aravis/src/arvsystem.h>
#include </home/pi/arv/aravis/src/arvevaluator.h>
#include </home/pi/arv/aravis/src/arvdomnode.h>
#include </home/pi/arv/aravis/src/arvdomnodelist.h>
#include </home/pi/arv/aravis/src/arvdomdocument.h>
#include </home/pi/arv/aravis/src/arvdomelement.h>
#include </home/pi/arv/aravis/src/arvdomcharacterdata.h>
#include </home/pi/arv/aravis/src/arvdomtext.h>
#include </home/pi/arv/aravis/src/arvdomimplementation.h>
#include </home/pi/arv/aravis/src/arvdomparser.h>
#include </home/pi/arv/aravis/src/arvcamera.h>
#include </home/pi/arv/aravis/src/arvgc.h>
#include </home/pi/arv/aravis/src/arvgcnode.h>
#include </home/pi/arv/aravis/src/arvgcpropertynode.h>
#include </home/pi/arv/aravis/src/arvgcfeaturenode.h>
#include </home/pi/arv/aravis/src/arvgccategory.h>
#include </home/pi/arv/aravis/src/arvgcboolean.h>
#include </home/pi/arv/aravis/src/arvgcenumeration.h>
#include </home/pi/arv/aravis/src/arvgcenumentry.h>
#include </home/pi/arv/aravis/src/arvgcintegernode.h>
#include </home/pi/arv/aravis/src/arvgcfloatnode.h>
#include </home/pi/arv/aravis/src/arvgcregisternode.h>
#include </home/pi/arv/aravis/src/arvgccommand.h>
#include </home/pi/arv/aravis/src/arvgcswissknife.h>
#include </home/pi/arv/aravis/src/arvgcconverter.h>
#include </home/pi/arv/aravis/src/arvgcport.h>
#include </home/pi/arv/aravis/src/arvgcregister.h>
#include </home/pi/arv/aravis/src/arvgcinteger.h>
#include </home/pi/arv/aravis/src/arvgcfloat.h>
#include </home/pi/arv/aravis/src/arvgcstring.h>
#include </home/pi/arv/aravis/src/arvinterface.h>
#include </home/pi/arv/aravis/src/arvdevice.h>
#include </home/pi/arv/aravis/src/arvstream.h>
#include </home/pi/arv/aravis/src/arvbuffer.h>
#include </home/pi/arv/aravis/src/arvchunkparser.h>
#include </home/pi/arv/aravis/src/arvgvcp.h>
#include </home/pi/arv/aravis/src/arvgvsp.h>
#include </home/pi/arv/aravis/src/arvgvinterface.h>
#include </home/pi/arv/aravis/src/arvgvdevice.h>
#include </home/pi/arv/aravis/src/arvgvstream.h>
#if ARAVIS_HAS_USB
#include </home/pi/arv/aravis/src/arvuvcp.h>
#include </home/pi/arv/aravis/src/arvuvsp.h>
#include </home/pi/arv/aravis/src/arvuvinterface.h>
#include </home/pi/arv/aravis/src/arvuvdevice.h>
#include </home/pi/arv/aravis/src/arvuvstream.h>
#endif
#include </home/pi/arv/aravis/src/arvfakeinterface.h>
#include </home/pi/arv/aravis/src/arvfakedevice.h>
#include </home/pi/arv/aravis/src/arvfakestream.h>
#include </home/pi/arv/aravis/src/arvfakecamera.h>
#include </home/pi/arv/aravis/src/arvgvfakecamera.h>
#include </home/pi/arv/aravis/src/arvrealtime.h>
#include </home/pi/arv/aravis/src/arvxmlschema.h>

#undef ARV_H_INSIDE

#endif
