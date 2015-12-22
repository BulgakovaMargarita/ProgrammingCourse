TEMPLATE = subdirs
app.depends = lib
test.depends = lib
SUBDIRS += \
    app \
    lib \
    stack \
    test
