//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NSXMLElement (IBIDEXMLElementAddition)
+ (id)ib_elementWithName:(id)arg1 attributesWithDictionary:(id)arg2 children:(id)arg3;
+ (id)ib_elementWithName:(id)arg1 attributesWithDictionary:(id)arg2;
+ (id)ib_elementWithName:(id)arg1 attributes:(id)arg2;
+ (id)ib_elementWithName:(id)arg1 namespaces:(id)arg2 attributes:(id)arg3;
+ (id)ib_elementWithName:(id)arg1 stringValue:(id)arg2 attributes:(id)arg3;
- (void)ib_removeChildrenInRange:(struct _NSRange)arg1;
- (void)ib_addAttributeWithName:(id)arg1 andStringValue:(id)arg2;
- (id)ib_elements;
- (void)ib_enumerateElements:(CDUnknownBlockType)arg1;
@end