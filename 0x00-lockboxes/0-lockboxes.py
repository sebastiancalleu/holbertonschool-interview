#!/usr/bin/python3
""" lockboxes """


def canUnlockAll(boxes):
    """
    function for determine if all boxes are Unlockables
    """
    lt1 = []
    for i in range(1, len(boxes)):
        lt1.append(i)

    for i in range(0, len(boxes)):
        for j in range(0, len(boxes[i])):
            if boxes[i][j] in lt1:
                lt1.remove(boxes[i][j])
                break

    if len(lt1) == 0:
        return True
    return False
