//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol RAPCategoryCases <RAPPlaceIssueCases>
- (void)proceedToTransitSubcategoryQuestion:(RAPTransitSubcategoryQuestion *)arg1;
- (void)proceedToPlaceSelectionQuestion:(RAPPlaceSelectionQuestion *)arg1;
- (void)proceedToAddNewPlaceQuestion:(RAPAddNewPlaceQuestion *)arg1;
- (void)proceedToLabelCorrectionsQuestion:(RAPLabelCorrectionsQuestion *)arg1;
- (void)proceedToProblemWithImageryQuestion:(RAPImageryQuestion *)arg1;
- (void)proceedToBadRouteSuggestionsQuestion:(RAPBadRouteSuggestionsQuestion *)arg1;
- (void)proceedToProblemWithDirectionsQuestion:(RAPDirectionsWhichOneQuestion *)arg1;
- (void)proceedToIncorrectSearchResultsQuestion:(RAPSearchWhichOneQuestion *)arg1;
- (void)proceedToProblemNotListedQuestion:(RAPProblemNotListedQuestion *)arg1;
@end