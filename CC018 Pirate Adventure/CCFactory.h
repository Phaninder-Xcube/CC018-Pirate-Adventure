//
//  CCFactory.h
//  CC018 Pirate Adventure
//
//  Created by systemtest on 27/05/15.
//  Copyright (c) 2015 PurpleTalk. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CCTile.h"
#import "CCCharacter.h" 
#import "CCBoss.h"
@interface CCFactory : NSObject

-(NSArray *)tiles;
-(CCCharacter *)character;
-(CCBoss *)boss;
@end
