#!/usr/lib/python

# Date: 2020-08-13
#
# Description:
# Log rotation example. We can rotate on basis of size of file.
#
# Reference:
# https://www.blog.pythonlibrary.org/2014/02/11/python-how-to-create-rotating-logs/

import logging
import time

from logging.handlers import RotatingFileHandler


def create_rotating_log(path):
    """Creates a rotating log."""
    logger = logging.getLogger('Rotating Log')
    logger.setLevel(logging.INFO)
    
    formatter = logging.Formatter('%(message)s')
    # add a rotating handler
    handler = RotatingFileHandler(path, maxBytes=20, backupCount=5)
    handler.setFormatter(formatter)
    logger.addHandler(handler)
    
    for i in range(10):
        logger.info('This is test log line %s' % i)
        time.sleep(0.5)
        

if __name__ == '__main__':
    log_file = 'test.log'
    create_rotating_log(log_file)
