#!/usr/bin/python

# Date: 2018-10-27
#
# Description:
# Basic operations in pandas library

import pandas as pd

# Create data frame, reading data from CSV file
df = pd.read_csv('weather_data.csv')
print df

# Same can be done using data in dictionary also
weather_data = {
  'Day': ['1/1/2018', '1/2/2018', '1/3/2018', '1/4/2018', '1/5/2018', '1/6/2018'],
  'Temperature': [32, 35, 28, 24, 32, 31],
  'Windspeed': [6, 7, 2, 7, 4, 2],
  'Event': ['Rain', 'Sunny', 'Snow', 'Snow', 'Rain', 'Sunny'],
}

df = pd.DataFrame(weather_data)
print df

#         Day  Event  Temperature  Windspeed
# 0  1/1/2018   Rain           32          6
# 1  1/2/2018  Sunny           35          7
# 2  1/3/2018   Snow           28          2
# 3  1/4/2018   Snow           24          7
# 4  1/5/2018   Rain           32          4
# 5  1/6/2018  Sunny           31          2

print df.shape  # (6, 4)
print df.head(2)  # Print first 2 rows only with column names and row index
print df.tail(2)  # Print last 2 rows only with column names and row index
print df.head(-2)  # Prints 0 to n - 2 rows

print df[1:3]  # Same as index slicing, prints rows from 0 to 2

print df.columns  # Index([u'Day', u'Event', u'Temperature', u'Windspeed'], dtype='object')
print df.Day  # Print all values in Day column
# 0    1/1/2018
# 1    1/2/2018
# 2    1/3/2018
# 3    1/4/2018
# 4    1/5/2018
# 5    1/6/2018
# Name: Day, dtype: object

print df['Temperature']  # Same as above, print all values in Temperature col
# 0    32
# 1    35
# 2    28
# 3    24
# 4    32
# 5    31
# Name: Temperature, dtype: int64

print type(df['Temperature'])  # <class 'pandas.core.series.Series'>
# All column in pandas data frame are of this type only

print df[['Day', 'Event']]  # Print specific column values
#         Day  Event
# 0  1/1/2018   Rain
# 1  1/2/2018  Sunny
# 2  1/3/2018   Snow
# 3  1/4/2018   Snow
# 4  1/5/2018   Rain
# 5  1/6/2018  Sunny


## Operations on data frames
print df['Temperature'].max()  # 35, Max temperature
print df['Temperature'].min()  # 24, Min temperature
print df['Temperature'].sum()  # 182, Sum of all temperatures
print df['Temperature'].mean()  # 30.333333333333332, Average temperature
print df['Temperature'].std()  # 3.8297084310253524, Standard deviation

# Gives statistics of columns having interger values like Temperature and
# Windspeed, Quick way to get table stats
print df.describe()
#       Temperature  Windspeed
# count     6.000000   6.000000
# mean     30.333333   4.666667
# std       3.829708   2.338090
# min      24.000000   2.000000
# 25%      28.750000   2.500000
# 50%      31.500000   5.000000
# 75%      32.000000   6.750000
# max      35.000000   7.000000

print df[df.Temperature >= 32]  # Conditional selection like in relational databases
#         Day  Event  Temperature  Windspeed
# 0  1/1/2018   Rain           32          6
# 1  1/2/2018  Sunny           35          7
# 4  1/5/2018   Rain           32          4

print df[df.Temperature == df.Temperature.max()]  # Day stats with max temp
#         Day  Event  Temperature  Windspeed
# 1  1/2/2018  Sunny           35          7

## Note: If column name contains spaces, then we will have dictionary syntax
# to specify column name like df['Temperature readings'], we can't use dot
# syntax in those cases.

# Day and temp of day which had max temp
print df[['Day', 'Temperature']][df.Temperature == df.Temperature.max()]
#         Day  Temperature
# 1  1/2/2018           35


## indexes, like range last is not included
print df.index  # RangeIndex(start=0, stop=6, step=1)

# Use some column as index instead of counting from 0. set_index() retruns a
# new data frame, to update existing data frame using inplace=True
df.set_index('Day', inplace=True)
print df  # Now Day is used as indexes instead of 0,1,2...
#           Event  Temperature  Windspeed
# Day
# 1/1/2018   Rain           32          6
# 1/2/2018  Sunny           35          7
# 1/3/2018   Snow           28          2
# 1/4/2018   Snow           24          7
# 1/5/2018   Rain           32          4
# 1/6/2018  Sunny           31          2

print df.loc['1/2/2018']  # Get row whose index value is '1/2/2018'
# Event          Sunny
# Temperature       35
# Windspeed          7
# Name: 1/2/2018, dtype: object

df.reset_index(inplace=True)  # Reset index back to numbers
print df
#         Day  Event  Temperature  Windspeed
# 0  1/1/2018   Rain           32          6
# 1  1/2/2018  Sunny           35          7
# 2  1/3/2018   Snow           28          2
# 3  1/4/2018   Snow           24          7
# 4  1/5/2018   Rain           32          4
# 5  1/6/2018  Sunny           31          2
