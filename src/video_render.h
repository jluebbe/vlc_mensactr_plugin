/*****************************************************************************
 * video_renderer.h: rendering/networking header
 *****************************************************************************
 * Copyright (c) 2014 Malte Kießling 
 *
 * Authors: Malte Kießling <mkalte666@stratum0.org>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2.1 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston MA 02110-1301, USA.
 *****************************************************************************/

#ifndef RENDER_HEADER
#define RENDER_HEADER

#include <assert.h>
#include <stdio.h>
#include <zmq.h>

#include <vlc_common.h>
#include <vlc_plugin.h>
#include <vlc_vout_display.h>
#include <vlc_picture_pool.h>

void setupRenderer(char*, bool, int, bool);
void destroyRenderer();
void* blit(uint8_t*, int, int);

#endif
