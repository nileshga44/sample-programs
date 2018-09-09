#!/usr/bin/python

# Date: 2018-04-19
#
# Description:
# Few snippets to work with named tuples in python.

import collections

Records = []
Record = collections.namedtuple('Record', ['Id', 'Name', 'Age'])

record = Record(1, 'Abc', 10)
print record
# Record(Id=1, Name='Abc', Age=10)

Records.append(record)
Records.append(Record(2, 'Xyz', 20))
print Records  
# [Record(Id=1, Name='Abc', Age=10), Record(Id=2, Name='Xyz', Age=20)]

d = Records[0]._asdict()
print d
# OrderedDict([('Id', 1), ('Name', 'Abc'), ('Age', 10)])

d = {'Id': 10, 'Name': 'pppp', 'Age': 22}
print Record(**d)
# Record(Id=10, Name='pppp', Age=22)
