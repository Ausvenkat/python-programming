def snake_to_camel(word):
        import re
        return ''.join(a.capitalize() or '_' for a in word.split('_'))

print(snake_to_camel('python_exercises'))
