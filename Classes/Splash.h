//
//  Splash.h
//  MathIsFun2
//
//  Created by saumya ray on 9/18/10.
//  Copyright 2010 Personal. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Sparrow.h>
#import <SplashAnimationEndEvent.h>


@interface Splash : SPSprite 
{
	NSInteger count;
	Boolean isIncreasing;
	NSInteger bounceSpeed;
	
	SPSprite __weak *quadContainer;
	
	SPSprite __weak *spOne;
	SPSprite __weak *spTwo;
	SPSprite __weak *spThree;
	SPSprite __weak *spFour;
	
	SPQuad __weak *oneS;
	SPQuad __weak *twoS;
	SPQuad __weak *threeS;
	SPQuad __weak *fourS;
	
}

@property (assign) NSInteger count;
@property (assign) Boolean isIncreasing;
@property (assign) NSInteger bounceSpeed;
@property (weak) SPSprite *quadContainer;

@property (weak) SPSprite *spOne;
@property (weak) SPSprite *spTwo;
@property (weak) SPSprite *spThree;
@property (weak) SPSprite *spFour;

@property (weak) SPQuad *oneS;
@property (weak) SPQuad *twoS;
@property (weak) SPQuad *threeS;
@property (weak) SPQuad *fourS;


-(id)initWithSplash;
-(void)initTheSplash;
-(void)bounce:(SPSprite *)squareObject;
-(void)notifyAnimationEnd;

@end
