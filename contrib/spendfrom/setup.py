from distutils.core import setup
setup(name='NAVspendfrom',
      version='1.0',
      description='Command-line utility for INTICOIN "coin control"',
      author='Gavin Andresen',
      author_email='gavin@INTICOINfoundation.org',
      requires=['jsonrpc'],
      scripts=['spendfrom.py'],
      )
