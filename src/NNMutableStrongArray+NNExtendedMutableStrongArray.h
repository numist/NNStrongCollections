@interface NNMutable##_Uname_##Array (NNExtendedMutable##_Uname_##Array)
- (void)add##_Uname_##_pluralSuffix_##FromArray:(NSArray *)otherArray;
- (void)exchange##_Uname_##AtIndex:(NSUInteger)idx1 with##_Uname_##AtIndex:(NSUInteger)idx2;
- (void)removeAll##_Uname_##_pluralSuffix_;
- (void)remove##_Uname_:(_class_ *)some##_Uname_## inRange:(NSRange)range;
- (void)remove##_Uname_:(_class_ *)some##_Uname_;
- (void)remove##_Uname_##IdenticalTo:(_class_ *)some##_Uname_## inRange:(NSRange)range;
- (void)remove##_Uname_##IdenticalTo:(_class_ *)some##_Uname_;
- (void)remove##_Uname_##_pluralSuffix_##FromIndices:(NSUInteger *)indices numIndices:(NSUInteger)cnt NS_DEPRECATED(10_0, 10_6, 2_0, 4_0);
- (void)remove##_Uname_##_pluralSuffix_##InArray:(NSArray *)otherArray;
- (void)remove##_Uname_##_pluralSuffix_##InRange:(NSRange)range;
- (void)replace##_Uname_##_pluralSuffix_##InRange:(NSRange)range with##_Uname_##_pluralSuffix_##FromArray:(NSArray *)otherArray range:(NSRange)otherRange;
- (void)replace##_Uname_##_pluralSuffix_##InRange:(NSRange)range with##_Uname_##_pluralSuffix_##FromArray:(NSArray *)otherArray;
- (void)setArray:(NSArray *)otherArray;
- (void)sortUsing##_Uname_##Function:(NSInteger (*)(_class_ *, _class_ *, void *))compare context:(void *)context;
- (void)insert##_Uname_##_pluralSuffix_:(NSArray *)_lname_##_pluralSuffix_## atIndexes:(NSIndexSet *)indexes;
- (void)remove##_Uname_##_pluralSuffix_##AtIndexes:(NSIndexSet *)indexes;
- (void)replace##_Uname_##_pluralSuffix_##AtIndexes:(NSIndexSet *)indexes with##_Uname_##_pluralSuffix_:(NSArray *)_lname_##_pluralSuffix_;
- (void)set##_Uname_:(_class_ *)obj atIndexedSubscript:(NSUInteger)idx NS_AVAILABLE(10_8, 6_0);
@end
