def application(self, appName):
    return root.findChild(predicate.IsAnApplicationNamed(appName),  recursive=False)
