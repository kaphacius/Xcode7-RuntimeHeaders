//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface AXWeatherUtils : NSObject
{
}

+ (id)sharedInstance;
- (id)_localizedStringForWeatherDescription:(id)arg1;
- (id)_weatherFrameworkBundle;
- (void)_debugAssertWeatherDescriptionKeyIsValid:(id)arg1;
- (id)_weatherDescriptionKeyForGenericIconName:(id)arg1;
- (id)descriptionForPrecipitation:(id)arg1 weatherConditionCode:(long long)arg2;
- (id)descriptionForWeatherConditionCode:(long long)arg1;
- (id)descriptionForWeatherConditionImageName:(id)arg1;

@end