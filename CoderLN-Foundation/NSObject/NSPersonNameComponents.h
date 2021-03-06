/*
 * NSPersonNameComponents.h
 *
 * Foundation (c) 2015-2017
 * 不知名开发者 - 该模块将系统化学习, 后续「坚持新增文章, 替换、补充文章内容」
 */
 

#import <Foundation/NSObject.h>
#import <Foundation/NSString.h>
#import <Foundation/NSDictionary.h>

NS_ASSUME_NONNULL_BEGIN
NS_CLASS_AVAILABLE(10_11, 9_0)
@interface NSPersonNameComponents : NSObject <NSCopying, NSSecureCoding>{
@private
    id _private;
}

/* The below examples all assume the full name Dr. Johnathan Maple Appleseed Esq., nickname "Johnny" */

/* Pre-nominal letters denoting title, salutation, or honorific, e.g. Dr., Mr. */
@property (copy, nullable) NSString *namePrefix;

/* Name bestowed upon an individual by one's parents, e.g. Johnathan */
@property (copy, nullable) NSString *givenName;

/* Secondary given name chosen to differentiate those with the same first name, e.g. Maple  */
@property (copy, nullable) NSString *middleName;

/* Name passed from one generation to another to indicate lineage, e.g. Appleseed  */
@property (copy, nullable) NSString *familyName;

/* Post-nominal letters denoting degree, accreditation, or other honor, e.g. Esq., Jr., Ph.D. */
@property (copy, nullable) NSString *nameSuffix;

/* Name substituted for the purposes of familiarity, e.g. "Johnny"*/
@property (copy, nullable) NSString *nickname;

/* Each element of the phoneticRepresentation should correspond to an element of the original PersonNameComponents instance.
 The phoneticRepresentation of the phoneticRepresentation object itself will be ignored. nil by default, must be instantiated.
 */
@property (copy, nullable) NSPersonNameComponents *phoneticRepresentation;

@end
NS_ASSUME_NONNULL_END

