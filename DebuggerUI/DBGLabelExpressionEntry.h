//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DBGLabelExpressionEntry : NSObject
{
    BOOL _forceLanguageToObjectiveCPlusPlus;
    NSString *_label;
    NSString *_expressionFormat;
    NSString *_fallbackExpressionFormat;
    CDUnknownBlockType _formatValueBlock;
    NSString *_expression;
    NSString *_fallbackExpression;
    NSString *_expressionResult;
}

@property BOOL forceLanguageToObjectiveCPlusPlus; // @synthesize forceLanguageToObjectiveCPlusPlus=_forceLanguageToObjectiveCPlusPlus;
@property(retain, nonatomic) NSString *expressionResult; // @synthesize expressionResult=_expressionResult;
@property(retain) NSString *fallbackExpression; // @synthesize fallbackExpression=_fallbackExpression;
@property(retain) NSString *expression; // @synthesize expression=_expression;
@property(copy) CDUnknownBlockType formatValueBlock; // @synthesize formatValueBlock=_formatValueBlock;
@property(retain) NSString *fallbackExpressionFormat; // @synthesize fallbackExpressionFormat=_fallbackExpressionFormat;
@property(readonly) NSString *expressionFormat; // @synthesize expressionFormat=_expressionFormat;
@property(readonly) NSString *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (id)_initWithLabel:(id)arg1 expressionFormat:(id)arg2 fallbackExpressionFormat:(id)arg3;
- (id)_initWithLabel:(id)arg1 expressionFormat:(id)arg2;

@end