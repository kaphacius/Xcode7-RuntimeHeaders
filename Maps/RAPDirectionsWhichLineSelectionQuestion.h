//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface RAPDirectionsWhichLineSelectionQuestion : RAPQuestion
{
    id <RAPUserDirectionRequest> _request;
    NSArray *_selectableLines;
    RAPTransitLine *_selectedLine;
}

@property(retain, nonatomic) RAPTransitLine *selectedLine; // @synthesize selectedLine=_selectedLine;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *selectableLines; // @synthesize selectableLines=_selectableLines;
@property(readonly, nonatomic) NSString *localizedLineSelectionPrompt;
- (void)_setSelectedDirectionsRequest:(id)arg1;

@end