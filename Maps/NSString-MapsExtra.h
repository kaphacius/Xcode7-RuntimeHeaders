//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NSString (MapsExtra)
+ (id)stringWithAltitudeUnits;
+ (id)stringWithTime:(id)arg1;
+ (id)stringWithAltitude:(double)arg1 accuracy:(double)arg2;
+ (id)stringWithDirection:(double)arg1 abbreviated:(_Bool)arg2;
+ (id)stringWithSpeedUnits;
+ (id)stringWithSpeed:(double)arg1;
+ (id)stringWithRemainingTime:(double)arg1 allowShortForm:(_Bool)arg2;
+ (id)stringWithSeconds:(unsigned long long)arg1 withTraffic:(_Bool)arg2 abbreviated:(_Bool)arg3;
+ (id)stringWithRemainingTime:(double)arg1 allowShortForm:(_Bool)arg2 showPastTimes:(_Bool)arg3;
+ (id)_maps_formattedStringForInt:(long long)arg1;
+ (id)_maps_replacementForFormatToken:(id)arg1 timeStampTimeZone:(id)arg2 forSpokenText:(_Bool)arg3;
+ (id)_maps_stringForServerFormattedString:(id)arg1 timeZone:(id)arg2 forSpokenText:(_Bool)arg3 overrideVariables:(id)arg4;
+ (id)_maps_stringForServerFormattedString:(id)arg1 timeZone:(id)arg2;
+ (id)_maps_stringForServerFormattedString:(id)arg1;
- (struct _NSRange)_maps_rangeForTimePartOfFormattedShortTimeString;
- (id)stringByMarkingAsNormalText;
- (id)stringByMarkingAsNavigationText;
- (id)stringByMarkingAsAddress;
- (id)stringByMakingPhonetic;
- (long long)fileCreationDateDescendingSort:(id)arg1;
@end