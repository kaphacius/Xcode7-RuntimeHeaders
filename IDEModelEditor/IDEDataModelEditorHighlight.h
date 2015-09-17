//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEDataModelEditorHighlight : NSObject
{
    id _modelObject;
    struct _NSRange _highlightRange;
    NSString *_highlightProperty;
    BOOL _isActive;
    unsigned long long _numberOfInternalHits;
}

@property unsigned long long numberOfInternalHits; // @synthesize numberOfInternalHits=_numberOfInternalHits;
@property BOOL isActive; // @synthesize isActive=_isActive;
@property(readonly) NSString *highlightProperty; // @synthesize highlightProperty=_highlightProperty;
@property(readonly) struct _NSRange highlightRange; // @synthesize highlightRange=_highlightRange;
@property(readonly) id modelObject; // @synthesize modelObject=_modelObject;
- (void).cxx_destruct;
- (id)initWithModelObject:(id)arg1 range:(struct _NSRange)arg2 property:(id)arg3;

@end