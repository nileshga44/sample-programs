obj = {
  'deleted':[],
  'added':[],
  1: {
    'product':{
      2:{
        'subproduct':{
          'added':[],
          'deleted':[]
        }
      },
      3:{
        'subproduct':{
          'added':[0,1],
          'deleted':[3,4]
        }
      },
      'added': [],
      'deleted': []
    }
  },
  7: {
    'product':{
      2:{
        'subproduct':{
          'added':[2],
          'deleted':[6]
        }
      },
      3:{
        'subproduct':{
          'added':[],
          'deleted':[]
        }
      },
      'added': [],
      'deleted': []
    }
  }
}

def deleteItem(o, k):
  if o[k].has_key('product'):
    for sub in o[k]['product']:
      if isinstance(sub, int):
        deleteItem(o[k]['product'], sub)
  elif o[k].has_key('subproduct'):
    if not o[k]['subproduct']['added'] and not o[k]['subproduct']['deleted']:
      del o[k]

def main(o):
  for k in o:
    if isinstance(k, int):
      deleteItem(o, k)

print obj
main(obj)
print obj
