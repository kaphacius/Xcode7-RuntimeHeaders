//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol DSAToken <NSObject>
@property(readonly) DSADocSet *docSet;
@property(readonly, getter=isDeprecated) BOOL deprecated;
@property(readonly, copy) NSString *declaredInFrameworkName;
@property(readonly, copy) NSString *type;
@property(readonly, copy) NSString *scope;
@property(readonly, copy, nonatomic) NSURL *URL;
@property(readonly, copy) NSString *apiLanguage;
@property(readonly, copy) NSString *name;
@property(readonly, copy) NSString *usr;
- (id <DSAToken>)tokenWithFixedUpLanguage:(NSString *)arg1;
- (NSXMLDocument *)XMLDescription;
@end