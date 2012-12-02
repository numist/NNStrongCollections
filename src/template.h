#define _NNInternalCollections(_class_, _lname_, _Uname_, _pluralSuffix_) __NNMacroDefinition__

#define NNStrongCollections(class, lowerName, UpperName, pluralSuffix) \
    _NNInternalCollections(class, lowerName, UpperName, pluralSuffix)
