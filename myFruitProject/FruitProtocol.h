//
//  FruitProtocol.h
//  myFruitProject
//
//  Created by rentit on 2015. 11. 09..
//  Copyright © 2015. rentit. All rights reserved.
//

#import <Foundation/Foundation.h>
@class Fruit;

@protocol FruitProtocol <NSObject>

- (void) fruitDidRipe: (Fruit *)fruit;

@optional
- (void) fruitDidRot: (Fruit *) fruit;

@end
