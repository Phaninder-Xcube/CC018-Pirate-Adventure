//
//  ViewController.h
//  CC018 Pirate Adventure
//
//  Created by systemtest on 27/05/15.
//  Copyright (c) 2015 PurpleTalk. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CCCharacter.h"
#import "CCBoss.h"

@interface ViewController : UIViewController

//iVars
@property (nonatomic) CGPoint currentPoint;
@property (strong, nonatomic) NSArray *tiles;
@property (strong, nonatomic) CCCharacter *character;
@property (strong, nonatomic) CCBoss *boss;

//IBOutles
@property (weak, nonatomic) IBOutlet UIImageView *backgroundImageView;
@property (weak, nonatomic) IBOutlet UILabel *healthLabel;
@property (weak, nonatomic) IBOutlet UILabel *damageLabel;
@property (weak, nonatomic) IBOutlet UILabel *weaponLabel;
@property (weak, nonatomic) IBOutlet UILabel *armorLabel;
@property (weak, nonatomic) IBOutlet UILabel *storyLabel;
@property (weak, nonatomic) IBOutlet UIButton *actionButton;
@property (weak, nonatomic) IBOutlet UIButton *northButton;
@property (weak, nonatomic) IBOutlet UIButton *westButton;
@property (weak, nonatomic) IBOutlet UIButton *southButton;
@property (weak, nonatomic) IBOutlet UIButton *eastButton;


//IBActions
- (IBAction)actionButtonPressed:(UIButton *)sender;

- (IBAction)northButtonPressed:(UIButton *)sender;

- (IBAction)westButtonPressed:(UIButton *)sender;

- (IBAction)southButtonPressed:(UIButton *)sender;

- (IBAction)eastButtonPressed:(UIButton *)sender;

- (IBAction)resetButtonPressed:(UIButton *)sender;

@end

