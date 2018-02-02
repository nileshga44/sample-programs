#!/usr/bin/python

# Date: 2018-02-02
#
# Description:
# Script to send mail from linux machine from any mail id to any-one if SMTP is
# enabled on linux machine.

import getopt
import smtplib
import sys

def main(argv):
   FROM = ''
   TO = ''
   SUBJECT = ''
   CONTENT = ''

   try:
      # Options that require an argument is followed by a colon so its mandatory
      # to provide value after flags -f, -t and -s but no value after
      # -c should work(: specifies value is required for that flag).
      opts, args = getopt.getopt(argv, 'f:t:s:c', ['FROM=', 'TO=', 'SUBJECT=', 'CONTENT='])
   except getopt.GetoptError:
      print 'Usage: sendmail.py -f <from> -t <to> -s <subject> -c <content>'
      sys.exit(2)
   for opt, arg in opts:
      if opt == '-h':
         print 'sendmail.py -f <from> -t <to> -s <subject> -c <content>'
         sys.exit()
      elif opt in ('-f', '--FROM'):
         FROM = arg
      elif opt in ('-t', '--TO'):
         TO = arg
      elif opt in ('-s', '--SUBJECT'):
         SUBJECT = arg
      elif opt in ('-c', '--CONTENT'):
         CONTENT = arg

   print 'FROM: ', FROM
   print 'TO: ', TO
   print 'SUBJECT: ', SUBJECT
   print 'CONTENT: ', CONTENT

   from_addr = FROM
   to_addr = TO

   msg = ('From: ' + FROM + '\r\nTo: ' + TO + '\r\n')

   msg = msg + 'MIME-Version: 1.0\r\nContent-type: text/html\r\nSubject: ' + SUBJECT + '\r\n\r\n'

   msg = msg + CONTENT

   server = smtplib.SMTP('localhost', 25)
   server.set_debuglevel(1)
   server.sendmail(from_addr, to_addr, msg)
   server.quit()   

if __name__ == '__main__':
   main(sys.argv[1:])
