//
//  CCCharacter.h
//  CC018 Pirate Adventure
//
//  Created by systemtest on 27/05/15.
//  Copyright (c) 2015 PurpleTalk. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CCWeapon.h"
#import "CCArmor.h"

@interface CCCharacter : NSObject

@property (strong, nonatomic) CCArmor *armor;
@property (strong, nonatomic) CCWeapon *weapon;
@property (nonatomic) NSInteger damage;
@property (nonatomic) NSInteger health;

@end
