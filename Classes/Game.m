//
//  Game.m
//  AppScaffold
//

#import "Game.h" 
#import "GameScreen.h"

@implementation Game

- (id)init
{
    if ((self = [super init]))
    {
        [self beginGame];
    }
    return self;
}

-(void) beginGame
{
	GameScreen *gs=[[GameScreen alloc] initWithDefaultOrientation];
	[self addChild:gs];}
@end
