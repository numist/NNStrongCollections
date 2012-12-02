
static void nnCheckWidget(id obj) {
    if (![obj isKindOfClass:[NNWidget class]]) {
        @throw [NSException exceptionWithName:@"NNMutableWidgetArrayInvalidTypeException"
                                       reason:[NSString stringWithFormat:@"Collection parameter to %@ contained objects that were not instances of NNWidget", NSStringFromSelector(_cmd)]
                                     userInfo:nil];
    }
}

static void nnCheckCollectionOfWidgets(id<NSFastEnumeration> collection) {
    for (id obj in collection) {
        nnCheckWidget(obj);
    }
}
