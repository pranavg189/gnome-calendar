/* gcal-week-header.h
 *
 * Copyright (C) 2016 Vamsi Krishna Gollapudi <pandu.sonu@yahoo.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef GCAL_WEEK_HEADER_H
#define GCAL_WEEK_HEADER_H

#include "gcal-manager.h"
#include "gcal-event-widget.h"
#include "gcal-subscriber-view.h"

#include <gtk/gtk.h>

G_BEGIN_DECLS

#define GCAL_TYPE_WEEK_HEADER (gcal_week_header_get_type())

G_DECLARE_FINAL_TYPE (GcalWeekHeader, gcal_week_header, GCAL, WEEK_HEADER, GtkGrid)

void                 gcal_week_header_set_manager                (GcalWeekHeader     *self,
                                                                  GcalManager        *manager);

void                 gcal_week_header_set_first_weekday          (GcalWeekHeader     *self,
                                                                  gint                nr_day);

void                 gcal_week_header_set_use_24h_format         (GcalWeekHeader     *self,
                                                                  gboolean            use_24h_format);

void                 gcal_week_header_add_event                  (GcalWeekHeader     *self,
                                                                  GcalEvent          *event);

void                 gcal_week_header_remove_event               (GcalWeekHeader     *self,
                                                                  const gchar        *uuid);

GList*               gcal_week_header_get_children_by_uuid       (GcalWeekHeader     *self,
                                                                  const gchar        *uuid);

GtkSizeGroup*        gcal_week_header_get_sidebar_size_group     (GcalWeekHeader     *self);

void                 gcal_week_header_clear_marks                (GcalWeekHeader     *self);

void                 gcal_week_header_set_date                   (GcalWeekHeader     *self,
                                                                  icaltimetype       *date);

G_END_DECLS

#endif /* GCAL_WEEK_HEADER_H */
