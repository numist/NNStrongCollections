//
//  NNHello.m
//  Practical
//
//  Created by Scott Perry on 12/01/12.
//  Copyright (c) 2012 Scott Perry. All rights reserved.
//

#import "NNHello.h"

// NNStrongCollections.h contains a macro for declaring the interfaces for strongly-typed collections.
#import "NNStrongCollections.h"

// This declares interfaces for strong collections containing NSStrings with appropriately-named type-specific methods.
NNStrongCollections(NSString, string, String, s)

@implementation NNHello
+ (void)world;
{
    // Creating a strongly-typed collection is the same as its Foundation counterpart, but with runtime type checking.
    NNMutableStringArray *array = [NNMutableStringArray strongArrayWithStrings:@"Hello,", @"World", nil];
    
    // Since the collections are subclasses of their Foundation counterparts, it's safe to use them as you normally would treat any other collection.
    NSLog(@"%@", array);

    // Since method overloads can't change types, static type safety checking is guaranteed as long as you use methods containing type-specific names.
    if ([[array stringAtIndex:1] isEqualToString:@"World"]) {
        NSLog(@"%@ goodbye!", [array stringAtIndex:0]);
    }
    
    // If you have code that uses methods that don't provide static type safety, types are also checked at runtime:
    @try {
        [array addObject:self];
    }
    @catch (NSException *exception) {
        NSLog(@"%@", exception);
    }
}
@end
