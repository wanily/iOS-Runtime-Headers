/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, SAPerson;

@interface SAPersonAttribute : AceObject <SAAceSerializable> {
}

@property(copy) NSString * data;
@property(copy) NSString * displayText;
@property(retain) SAPerson * object;

+ (id)personAttributeWithDictionary:(id)arg1 context:(id)arg2;
+ (id)personAttribute;

- (id)groupIdentifier;
- (id)data;
- (void)setObject:(id)arg1;
- (id)object;
- (void)setData:(id)arg1;
- (void)setDisplayText:(id)arg1;
- (id)displayText;
- (id)encodedClassName;

@end