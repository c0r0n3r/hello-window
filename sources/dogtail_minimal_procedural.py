from dogtail import procedural

import unittest

class GtkDemoTest(unittest.TestCase):
    def setUp(self):
        from dogtail import utils
        self.pid = utils.run('gtk3-demo')
        self.app = procedural.focus.application('gtk3-demo')

    def tearDown(self):
        import os, signal, time
        os.kill(self.pid, signal.SIGTERM)
        time.sleep(0.5)

    def testGtkDemo(self):
        pass




if __name__ == '__main__':
    unittest.main()
