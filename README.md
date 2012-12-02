NNStrongCollections
===================

This project enables you to create and use strongly-typed collections in Objective-C projects.

Collections
-----------

Subclasses of the following collections are currently generated:

* `NSArray`
* `NSMutableArray`

Installation and Usage
------------

The headers produced by this project can be found in a [gist](https://gist.github.com/4187633). You can clone them into your project with:

    git clone git://gist.github.com/4187633.git NNStrongCollections

In files where you would like to use strongly-typed collections:

    #import "NNStrongCollections.h"
    NNStrongCollections(MYClass, thing, Thing, s)

The syntax is a bit odd, but it's hard to do better with macros. The arguments are:

* `MYClass`: The class name of your type, like `NSObject` (silly) or `NSString`.
* `thing`: The lower case singular name of an instance of `MYClass`, like "string". It's a bad plan to use "object".
* `Thing`: The capitalized name of an instance of `MYClass`, like "String". It's a bad plan to use "Object".
* `s`: The plural suffix for the names of instances of `MYClass`. `s` provides for "things" and "Things", but the name "gas" could use the plural suffix `ses` to produce "gasses" in the appropriate method names.

Somewhere in your project you should have an implementation file where these collections are defined. It should look similar to:

    // Don't forget to define all the typed collections that you declare!
    #import "NNStrongCollections+Implementation.h"
    NNStrongCollections(MYClass, thing, Thing, s)

For more information, check out the [example project](https://github.com/numist/NNStrongCollections/tree/develop/examples/StrongCollectionExample/StrongCollectionExample). The collection implementations are generated in [`StrongCollections.m`](https://github.com/numist/NNStrongCollections/blob/develop/examples/StrongCollectionExample/StrongCollectionExample/StrongCollections.m) and are used in [`NNHello.m`](https://github.com/numist/NNStrongCollections/blob/develop/examples/StrongCollectionExample/StrongCollectionExample/NNHello.m). Complete documentation can be found in the [downloads](downloads) section.

Building From "Source"
----------------------

`NNCollections` is cobbled together using `rake`, which supports the following targets:

* `all`: Build everything, and clean up the intermediate steps.
* `build`: Construct the interface and implementation headers.
* `docs`: Build the docset.
* `lint`: Sanity check to ensure that the source is syntactically correct and contains no obvious errors.
* `test`: Somewhat of a joke. [Tests exist](https://github.com/numist/NNStrongCollections/tree/develop/tests/ocunit), and I use them, but I haven't checked in the harness yet because it's not ready.
