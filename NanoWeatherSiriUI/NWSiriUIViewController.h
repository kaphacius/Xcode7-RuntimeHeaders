//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NWSiriUIViewController : UIViewController
{
    NSBundle *_localBundle;
    NSString *_weatherAppBundlePath;
    NSString *_weatherGlanceBundlePath;
    NSNumberFormatter *_numberFormatter;
}

@property(retain, nonatomic) NSNumberFormatter *numberFormatter; // @synthesize numberFormatter=_numberFormatter;
@property(retain, nonatomic) NSString *weatherGlanceBundlePath; // @synthesize weatherGlanceBundlePath=_weatherGlanceBundlePath;
@property(retain, nonatomic) NSString *weatherAppBundlePath; // @synthesize weatherAppBundlePath=_weatherAppBundlePath;
@property(retain, nonatomic) NSBundle *localBundle; // @synthesize localBundle=_localBundle;
- (void).cxx_destruct;
- (id)localizedStringForKey:(id)arg1;
- (id)_getLocalBundle;
- (id)createLabelWithText:(id)arg1 fontData:(CDStruct_20f020d9 *)arg2;
- (float)adjustedOriginYForDetailView:(id)arg1;
- (void)adjustedOriginYForSubtitle:(CDStruct_20f020d9 *)arg1 titleLabel:(id)arg2;
- (id)_labelWithText:(id)arg1 fontData:(CDStruct_20f020d9 *)arg2;
- (void)_alignRight:(id)arg1 fontData:(CDStruct_20f020d9 *)arg2;
- (void)_alignLeft:(id)arg1 fontData:(CDStruct_20f020d9 *)arg2;
- (void)_alignCenter:(id)arg1 fontData:(CDStruct_20f020d9 *)arg2;
- (id)_colorFromFontData:(CDStruct_20f020d9 *)arg1;
- (id)_fontFromFontData:(CDStruct_20f020d9 *)arg1;
- (id)_fontFromEnum:(int)arg1;
- (_Bool)selectGreenOverRed;
- (_Bool)isCompactDevice;
- (int)deviceVariant;
- (id)_getWeatherGlanceBundlePath;
- (id)_getWeatherAppBundlePath;
- (id)weatherAttributionImage;
- (id)conditionImageWithAttributes:(id)arg1 imageSize:(int)arg2 candidateView:(id)arg3;
- (unsigned int)siriEnumToWeatherEnum:(int)arg1;
- (_Bool)isDaytimeSiriConditionID:(int)arg1;
- (int)displayTemperatureInUnits;
- (int)convertTemperature:(id)arg1;
- (void)_setupNumberFormatter;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end