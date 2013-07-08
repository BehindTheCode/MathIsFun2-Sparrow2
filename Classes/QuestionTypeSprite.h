//
//  QuestionTypeSprite.h
//  MathIsFun2
//
//  Created by saumya ray on 10/6/10.
//  http://www.saumyaray.com , twit me @saumya
//

#import <Foundation/Foundation.h>
#import <Sparrow.h>
#import <CorrectAnswerEvent.h>


@interface QuestionTypeSprite : SPSprite
{
	SPQuad __weak *border;
	SPQuad __weak *background;
	SPTextField __weak *questionSymbol;
	SPTextField __weak *questionShadow;
	int userDefinedX;
	int userDefinedY;
	int question;
	BOOL isCorrectAnswer;
	SPImage __weak *rightImage;
	SPImage __weak *wrongImage;
	
	BOOL isOptionButton;
	NSString __weak *mode;
}

@property (weak) SPQuad *border;
@property (weak) SPQuad *background;
@property (weak) SPTextField *questionSymbol;
@property (weak) SPTextField *questionShadow;
@property (assign) int userDefinedX;
@property (assign) int userDefinedY;
@property (assign) int question;
@property (assign) BOOL isCorrectAnswer;
@property (weak) SPImage *rightImage;
@property (weak) SPImage *wrongImage;
@property (assign) BOOL isOptionButton;

@property (weak) NSString *mode;

-(id)initWithType:(NSString *)type;
-(id)initWithOperand:(NSString *)operand havingPosX:(int)xPos andPosY:(int)yPos;
-(id)initWithOption:(int)option havingPosX:(int)xPos andPosY:(int)yPos;
-(void)setQuestionValue:(int)value;
-(void)renderThisType:(NSString *)type;
-(void)setTypeOfOperation:(NSString *)type;
-(void)moveToPosX:(float)xPos andPosY:(float)yPos; 
-(void)resetResponseImage;

@end
