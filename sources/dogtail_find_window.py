class IsAWindowNamed(Predicate):
    def __init__(self, windowName):
        ...

    def _genCompareFunc(self):
        def satisfiedByNode(node):
            return node.roleName=='frame' and stringMatches(self.windowName, node.name)
        return satisfiedByNode

class IsADialogNamed(Predicate):
    def __init__(self, dialogName):
        ...

    def _genCompareFunc(self):
        def satisfiedByNode(node):
            return node.roleName=='dialog' and stringMatches(self.dialogName, node.name)
        return satisfiedByNode
