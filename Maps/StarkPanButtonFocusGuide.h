//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface StarkPanButtonFocusGuide : UIFocusGuide
{
    _Bool _onFocusSide;
    UIView *_guidedView;
    NSArray *_constraints;
}

+ (id)starkPanButtonFocusGuideWithGuidedView:(id)arg1 preferredFocusView:(id)arg2 onFocusSide:(_Bool)arg3;
@property(retain, nonatomic) NSArray *constraints; // @synthesize constraints=_constraints;
@property(retain, nonatomic) UIView *guidedView; // @synthesize guidedView=_guidedView;
@property(nonatomic) _Bool onFocusSide; // @synthesize onFocusSide=_onFocusSide;
- (void).cxx_destruct;
- (id)description;
- (id)debugDescription;

@end