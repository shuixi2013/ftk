/*
 * File: ftk_menu_item.h    
 * Author:  Li XianJing <xianjimli@hotmail.com>
 * Brief:   item on the menu panel. 
 *
 * Copyright (c) 2009  Li XianJing <xianjimli@hotmail.com>
 *
 * Licensed under the Academic Free License version 2.1
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

/*
 * History:
 * ================================================================
 * 2009-10-30 Li XianJing <xianjimli@hotmail.com> created
 *
 */

#ifndef FTK_MENU_ITEM_H
#define FTK_MENU_ITEM_H

#include "ftk_widget.h"

FtkWidget* ftk_menu_item_create(int id);

Ret         ftk_menu_item_set_text(FtkWidget* thiz, const char* text);
const char* ftk_menu_item_get_text(FtkWidget* thiz);

Ret ftk_menu_item_set_clicked_listener(FtkWidget* thiz, FtkListener listener, void* ctx);

#endif/*FTK_MENU_ITEM_H*/
