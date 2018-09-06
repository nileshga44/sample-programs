#!/usr/bin/python

# Date: 2018-02-03
#
# Description:
# Pass multiple string parameters in sql query.


s = "select * from table where column in ({})"
val = ["cs", "fi", "hk"]

tmp = s.format(", ".join(["'{}'" for v in val]))
query = tmp.format(*val)

print query


# Output:
# select * from table where column in ('cs', 'fi', 'hk')
