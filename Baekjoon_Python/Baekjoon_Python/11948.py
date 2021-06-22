def score():
    return int(input())

scores = [score(), score(), score(), score()]
print(sum(scores) - min(scores) + max(score(), score()))