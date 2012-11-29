
static void nnCheck##_Uname_(id obj) {
    if (![obj isKindOfClass:[_class_ class]]) {
        @throw [NSException exceptionWithName:@"NNMutable##_Uname_##ArrayInvalidTypeException"
                                       reason:[NSString stringWithFormat:@"Collection parameter to %@ contained objects that were not instances of _class_", NSStringFromSelector(_cmd)]
                                     userInfo:nil];
    }
}

static void nnCheckCollectionOf##_Uname_##_pluralSuffix_(id<NSFastEnumeration> collection) {
    for (id obj in collection) {
        nnCheck##_Uname_(obj);
    }
}
