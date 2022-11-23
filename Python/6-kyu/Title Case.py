def title_case(title, minor_words = ''):
    new_title = []
    new_minor_words = [word.lower() for word in minor_words.split(' ')]

    if not len(title):
        return title

    for index, word in enumerate(title.split(' ')):
        if index == 0:
            new_title.append(word.title())
            continue

        if word.lower() in new_minor_words:
            new_title.append(word.lower())
            continue

        new_title.append(word.title())

    return ' '.join(new_title)
