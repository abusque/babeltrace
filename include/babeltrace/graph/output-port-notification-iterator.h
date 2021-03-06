#ifndef BABELTRACE_GRAPH_OUTPUT_PORT_NOTIFICATION_ITERATOR_H
#define BABELTRACE_GRAPH_OUTPUT_PORT_NOTIFICATION_ITERATOR_H

/*
 * Copyright 2017 Philippe Proulx <pproulx@efficios.com>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

/* For enum bt_notification_type */
#include <babeltrace/graph/notification.h>

#ifdef __cplusplus
extern "C" {
#endif

struct bt_port;
struct bt_notification_iterator;

extern struct bt_notification_iterator *bt_output_port_notification_iterator_create(
		struct bt_port *port, const char *colander_component_name,
		const enum bt_notification_type *notification_types);

#ifdef __cplusplus
}
#endif

#endif /* BABELTRACE_GRAPH_OUTPUT_PORT_NOTIFICATION_ITERATOR_H */
