///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGSharedLinkVisibility;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `SharedLinkVisibility` union.
///
/// Defines who has access to a shared link.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGSharedLinkVisibility : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBTEAMLOGSharedLinkVisibilityTag` enum type represents the possible tag
/// states with which the `DBTEAMLOGSharedLinkVisibility` union can exist.
typedef NS_CLOSED_ENUM(NSInteger, DBTEAMLOGSharedLinkVisibilityTag){
    /// (no description).
    DBTEAMLOGSharedLinkVisibilityNoOne,

    /// (no description).
    DBTEAMLOGSharedLinkVisibilityPassword,

    /// (no description).
    DBTEAMLOGSharedLinkVisibilityPublic,

    /// (no description).
    DBTEAMLOGSharedLinkVisibilityTeamOnly,

    /// (no description).
    DBTEAMLOGSharedLinkVisibilityOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBTEAMLOGSharedLinkVisibilityTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "no_one".
///
/// @return An initialized instance.
///
- (instancetype)initWithNoOne;

///
/// Initializes union class with tag state of "password".
///
/// @return An initialized instance.
///
- (instancetype)initWithPassword;

///
/// Initializes union class with tag state of "public".
///
/// @return An initialized instance.
///
- (instancetype)initWithPublic;

///
/// Initializes union class with tag state of "team_only".
///
/// @return An initialized instance.
///
- (instancetype)initWithTeamOnly;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "no_one".
///
/// @return Whether the union's current tag state has value "no_one".
///
- (BOOL)isNoOne;

///
/// Retrieves whether the union's current tag state has value "password".
///
/// @return Whether the union's current tag state has value "password".
///
- (BOOL)isPassword;

///
/// Retrieves whether the union's current tag state has value "public".
///
/// @return Whether the union's current tag state has value "public".
///
- (BOOL)isPublic;

///
/// Retrieves whether the union's current tag state has value "team_only".
///
/// @return Whether the union's current tag state has value "team_only".
///
- (BOOL)isTeamOnly;

///
/// Retrieves whether the union's current tag state has value "other".
///
/// @return Whether the union's current tag state has value "other".
///
- (BOOL)isOther;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString *)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBTEAMLOGSharedLinkVisibility` union.
///
@interface DBTEAMLOGSharedLinkVisibilitySerializer : NSObject

///
/// Serializes `DBTEAMLOGSharedLinkVisibility` instances.
///
/// @param instance An instance of the `DBTEAMLOGSharedLinkVisibility` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGSharedLinkVisibility` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGSharedLinkVisibility *)instance;

///
/// Deserializes `DBTEAMLOGSharedLinkVisibility` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGSharedLinkVisibility` API object.
///
/// @return An instantiation of the `DBTEAMLOGSharedLinkVisibility` object.
///
+ (DBTEAMLOGSharedLinkVisibility *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
