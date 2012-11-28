#pragma mark NN__StrongType__

#define _NNInternal__StrongType__(_class_, _lname_, _Uname_, _pluralSuffix_) \
    __NNMacroDefinitionForStrongType__

#define NN__StrongType__(class, lowerName, UpperName, pluralSuffix) \
    _NNInternal__StrongType__(class, lowerName, UpperName, pluralSuffix)
