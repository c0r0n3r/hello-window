from dogtail import tree #*@ \label{dogtailminimal:importtree} @*

import unittest

class GtkDemoTest(unittest.TestCase): #*@ \label{dogtailminimal:testclass} @*
    def setUp(self): #*@ \label{dogtailminimal:setup} @*
        from dogtail import utils #*@ \label{dogtailminimal:utilsimport} @*
        self.pid = utils.run('gtk3-demo') #*@ \label{dogtailminimal:utilsrun} @*
        self.app = tree.root.application('gtk3-demo') #*@ \label{dogtailminimal:focusapp} @*

    def tearDown(self): #*@ \label{dogtailminimal:teardown} @*
        import os, signal, time
        os.kill(self.pid, signal.SIGTERM) #*@ \label{dogtailminimal:kill} @*
        time.sleep(0.5) #*@ \label{dogtailminimal:sleep} @*

    def testGtkDemo(self): #*@ \label{dogtailminimal:testgtkdemo} @*
        pass

if __name__ == '__main__':
    unittest.main() #*@ \label{dogtailminimal:unittestmain} @*
