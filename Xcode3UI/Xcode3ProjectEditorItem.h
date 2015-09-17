//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface Xcode3ProjectEditorItem : NSObject <IDEProjectItem>
{
    BOOL _availableWithFreeProvisioning;
    Xcode3Target *_target;
    Class _viewControllerClass;
    Class _modelClass;
    NSString *_name;
    NSString *_capabilityDescription;
    DVTExtension *_itemExtension;
}

@property(readonly) DVTExtension *itemExtension; // @synthesize itemExtension=_itemExtension;
@property(readonly, nonatomic, getter=isAvailableWithFreeProvisioning) BOOL availableWithFreeProvisioning; // @synthesize availableWithFreeProvisioning=_availableWithFreeProvisioning;
@property(readonly, nonatomic) NSString *capabilityDescription; // @synthesize capabilityDescription=_capabilityDescription;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) Class modelClass; // @synthesize modelClass=_modelClass;
@property(readonly, nonatomic) Class viewControllerClass; // @synthesize viewControllerClass=_viewControllerClass;
@property(readonly, nonatomic) Xcode3Target *target; // @synthesize target=_target;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSSet *entitlements;
@property(readonly, nonatomic) NSString *appIDFeatureName;
@property(readonly, nonatomic) NSImage *image;
@property(readonly, nonatomic) NSString *identifier;
- (id)initWithExtension:(id)arg1 platformIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end