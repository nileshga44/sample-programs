#!/usr/bin/python

# Date: 2019-04-15
#
# Description:
# Check if application is running on given IP and port.
#
# Approach:
# Python telnet module telnetlib is used to make a telnet connect request on
# given set of IP and port.
#
# Reference:
# https://docs.python.org/2/library/telnetlib.html

import telnetlib


def check_alive_using_telnet(values):
  """
  Given list of IPs and ports, check if (IP, Port) is running or not using
  telnet.

  Args:
    values: List of tuples having IP and port.
  """
  telnet = telnetlib.Telnet()
  for value in values:
    sock = '{0}:{1} - %s'.format(*value) 
    try:
      telnet.open(value[0], value[1], timeout=3)  # v[0] - IP, v[1] - Port
      print(sock % 'Running')
    except Exception as e:
      print(sock  % 'Down, ' + str(e))
    finally:
      telnet.close()


if __name__ == '__main__':
  configs = [
    ('localhost', 80),
    ('localhost', 631),
    ('login.gs.com', 80),
    ('login.gs.com', 443),
    ('www.google.com', 443),
  ]
  check_alive_using_telnet(configs)


# Output:
# -----------------------
# localhost:80 - Down, [Errno 111] Connection refused
# localhost:631 - Running
# login.gs.com:80 - Running
# login.gs.com:443 - Running
# www.google.com:443 - Running
