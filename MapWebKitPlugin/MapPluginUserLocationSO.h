//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface MapPluginUserLocationSO : NSObject
{
    double latitude;
    double longitude;
    double altitude;
    double horizontalAccuracy;
    double verticalAccuracy;
}

+ (_Bool)isKeyExcludedFromWebScript:(const char *)arg1;
@property(nonatomic) double verticalAccuracy; // @synthesize verticalAccuracy;
@property(nonatomic) double horizontalAccuracy; // @synthesize horizontalAccuracy;
@property(nonatomic) double altitude; // @synthesize altitude;
@property(nonatomic) double longitude; // @synthesize longitude;
@property(nonatomic) double latitude; // @synthesize latitude;
- (id)attributeKeys;

@end