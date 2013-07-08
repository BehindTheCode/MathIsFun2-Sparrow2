//
//  OptionSprite.h
//  MathIsFun
//
//  Created by saumya ray on 10/11/10.
//  http://www.saumyaray.com , twit me @saumya
//

#import <Foundation/Foundation.h>
#import <Sparrow.h>
#import <OptionSelectionEvent.h>


@interface OptionSprite : SPSprite 
{
	SPQuad __weak *background;
	
	SPSprite __weak *optionAddition;
	SPSprite __weak *optionSubtraction;
	SPSprite __weak *optionMultiplication;
	SPSprite __weak *optionDivision;
	
	SPQuad __weak *bgAddition;
	SPQuad __weak *bgSubtraction;
	SPQuad __weak *bgMultiplication;
	SPQuad __weak *bgDivision;
	
	SPTextField __weak *add;
	SPTextField __weak *addShadow;
	SPTextField __weak *subtract;
	SPTextField __weak *subtractShadow;
	SPTextField __weak *multiply;
	SPTextField __weak *multiplyShadow;
	SPTextField __weak *divide;
	SPTextField __weak *divideShadow;
	
	SPSprite __weak *titleSprite;
	SPSprite __weak *footerSprite;
}

-(id)initWithDefault;
-(void) renderDefault;

-(SPTextField *)makeSymbol:(NSString *)type withColor:(int)colorValue;
-(SPTextField *)makeText:(NSString *)text withColor:(int)colorValue andSize:(int)size;
-(SPSprite *)makeText:(NSString *)text withColor:(int)colorValue andSize:(int)size withShadowColor:(int)shadow;
-(SPQuad *)makeSquareWithColor:(int)colorValue andWidth:(int)widthValue andHeight:(int)heightValue;

@property (weak) SPQuad *background;
@property (weak) SPSprite *optionAddition;
@property (weak) SPSprite *optionSubtraction;
@property (weak) SPSprite *optionMultiplication;
@property (weak) SPSprite *optionDivision;
@property (weak) SPQuad *bgAddition;
@property (weak) SPQuad *bgSubtraction;
@property (weak) SPQuad *bgMultiplication;
@property (weak) SPQuad *bgDivision;
@property (weak) SPTextField *add;
@property (weak) SPTextField *addShadow;
@property (weak) SPTextField *subtract;
@property (weak) SPTextField *subtractShadow;
@property (weak) SPTextField *multiply;
@property (weak) SPTextField *multiplyShadow;
@property (weak) SPTextField *divide;
@property (weak) SPTextField *divideShadow;

@property (weak) SPSprite *titleSprite;
@property (weak) SPSprite *footerSprite;

@end
