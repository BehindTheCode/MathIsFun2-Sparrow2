//
//  ScoreCardSprite.h
//  MathIsFun
//
//  Created by saumya ray on 10/29/10.
//  http://www.saumyaray.com , twit me @saumya
//

#import <Foundation/Foundation.h>
#import <Sparrow.h>

@interface ScoreCardSprite : SPSprite {
	SPTextField __weak *scored;
	SPTextField __weak *missed;
	SPTextField __weak *asked;
	NSInteger *score;
	NSInteger *miss;
	NSInteger *ask;
}

@property (weak) SPTextField *scored;
@property (weak) SPTextField *missed;
@property (weak) SPTextField *asked;
@property (assign) NSInteger *score;
@property (assign) NSInteger *miss;
@property (assign) NSInteger *ask;

-(id)initWithDefault;
-(void) renderDefault;
-(void)updateScore:(int)newScore andMiss:(int)missCount andAsked:(int)askCount;

@end
