@property
def statename(self):
    return self.getState().contains(pyatspi.STATE_STATENAME)
