@class NNMutable##_Uname_##Array;

@interface NN##_Uname_##Array (NN##_Uname_##ArrayCreation)
+ (NN##_Uname_##Array *)strongArrayWith##_Uname_:(_class_ *)some##_Uname_;
+ (NN##_Uname_##Array *)strongArrayWith##_Uname_##_pluralSuffix_:(const id [])_lname_##_pluralSuffix_## count:(NSUInteger)cnt;
+ (NN##_Uname_##Array *)strongArrayWith##_Uname_##_pluralSuffix_:(_class_ *)firstObj, ... NS_REQUIRES_NIL_TERMINATION;
+ (NN##_Uname_##Array *)strongArrayWithArray:(NSArray *)array;
- (NNMutable##_Uname_##Array *)strongMutableCopy;
- (id)initWith##_Uname_##_pluralSuffix_:(const id [])_lname_##_pluralSuffix_## count:(NSUInteger)cnt;
- (id)initWith##_Uname_##_pluralSuffix_:(_class_ *)firstObj, ... NS_REQUIRES_NIL_TERMINATION;
- (id)initWithArray:(NSArray *)array;
- (id)initWithArray:(NSArray *)array copyItems:(BOOL)flag;

+ (id)arrayWithContentsOfFile:(NSString *)path __attribute__ ((deprecated));
+ (id)arrayWithContentsOfURL:(NSURL *)url __attribute__ ((deprecated));
- (id)initWithContentsOfFile:(NSString *)path __attribute__ ((deprecated));
- (id)initWithContentsOfURL:(NSURL *)url __attribute__ ((deprecated));
@end
