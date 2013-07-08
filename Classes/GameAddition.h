//
//  GameAddition.h
//  MathIsFun2
//
//  Created by saumya ray on 10/6/10.
//  http://www.saumyaray.com , twit me @saumya
//

#import <Foundation/Foundation.h>
#import <Sparrow.h>
#import <QuestionTypeSprite.h>
#import <OptionSprite.h>
#import <OptionSelectionEvent.h>
#import <ScoreCardSprite.h>

@interface GameAddition : SPSprite
{
	SPQuad __weak *background;
	SPSprite __weak *questionType;
	
	SPSprite __weak *questionTimeCounter;
	SPTextField __weak *qtText;
	int qtTime;
	
	QuestionTypeSprite *qType;
	
	NSInteger *operandOne;
	NSInteger *operandTwo;
	
	QuestionTypeSprite *operandA;
	QuestionTypeSprite *operandB;
	QuestionTypeSprite *optionA;
	QuestionTypeSprite *optionB;
	QuestionTypeSprite *optionC;
	
	NSInteger *timerCounter;
	
	OptionSprite *optionSelectionSprite;
	
	//difficulty level by increasing the max value of operands
	int maxOperandValue;
	//score card
	ScoreCardSprite *scoreCard;
}

@property (weak) SPQuad *background;
@property (weak) SPSprite *questionType;

@property (weak) SPSprite *questionTimeCounter;
@property (weak) SPTextField *qtText;
@property (assign) int qtTime;

@property (strong) QuestionTypeSprite *qType;

@property (assign) NSInteger *operandOne;
@property (assign) NSInteger *operandTwo;

@property (strong) QuestionTypeSprite *operandA;
@property (strong) QuestionTypeSprite *operandB;
@property (strong) QuestionTypeSprite *optionA;
@property (strong) QuestionTypeSprite *optionB;
@property (strong) QuestionTypeSprite *optionC;

@property (assign) NSInteger *timerCounter;

@property (strong) OptionSprite *optionSelectionSprite;

@property (assign) int maxOperandValue;
@property (strong) ScoreCardSprite *scoreCard;


-(id)initGame;
-(void)renderGame;
-(void)initGameAgain;
-(void)initGameAgainWithSubtraction;
-(void)initGameAgainWithMultiplication;
-(void)initGameAgainWithDivision;
-(int) generateRandom:(int)maxValue;
-(void)waitAndInitAgain;

-(void) onWrongAnswer:(CorrectAnswerEvent *)event;
-(void) onCorrectAnswer:(CorrectAnswerEvent *)event;

-(void)onGameBegin:(OptionSelectionEvent *)event;
-(void)showOptions:(BOOL)option;

@end
