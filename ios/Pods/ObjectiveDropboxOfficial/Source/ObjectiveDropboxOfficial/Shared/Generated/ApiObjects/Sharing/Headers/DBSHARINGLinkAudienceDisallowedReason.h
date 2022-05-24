///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBSHARINGLinkAudienceDisallowedReason;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `LinkAudienceDisallowedReason` union.
///
/// check documentation for VisibilityPolicyDisallowedReason.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBSHARINGLinkAudienceDisallowedReason : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBSHARINGLinkAudienceDisallowedReasonTag` enum type represents the
/// possible tag states with which the `DBSHARINGLinkAudienceDisallowedReason`
/// union can exist.
typedef NS_CLOSED_ENUM(NSInteger, DBSHARINGLinkAudienceDisallowedReasonTag){
    /// The user needs to delete and recreate the link to change the visibility
    /// policy.
    DBSHARINGLinkAudienceDisallowedReasonDeleteAndRecreate,

    /// The parent shared folder restricts sharing of links outside the shared
    /// folder. To change the visibility policy, remove the restriction from the
    /// parent shared folder.
    DBSHARINGLinkAudienceDisallowedReasonRestrictedBySharedFolder,

    /// The team policy prevents links being shared outside the team.
    DBSHARINGLinkAudienceDisallowedReasonRestrictedByTeam,

    /// The user needs to be on a team to set this policy.
    DBSHARINGLinkAudienceDisallowedReasonUserNotOnTeam,

    /// The user is a basic user or is on a limited team.
    DBSHARINGLinkAudienceDisallowedReasonUserAccountType,

    /// The user does not have permission.
    DBSHARINGLinkAudienceDisallowedReasonPermissionDenied,

    /// (no description).
    DBSHARINGLinkAudienceDisallowedReasonOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBSHARINGLinkAudienceDisallowedReasonTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "delete_and_recreate".
///
/// Description of the "delete_and_recreate" tag state: The user needs to delete
/// and recreate the link to change the visibility policy.
///
/// @return An initialized instance.
///
- (instancetype)initWithDeleteAndRecreate;

///
/// Initializes union class with tag state of "restricted_by_shared_folder".
///
/// Description of the "restricted_by_shared_folder" tag state: The parent
/// shared folder restricts sharing of links outside the shared folder. To
/// change the visibility policy, remove the restriction from the parent shared
/// folder.
///
/// @return An initialized instance.
///
- (instancetype)initWithRestrictedBySharedFolder;

///
/// Initializes union class with tag state of "restricted_by_team".
///
/// Description of the "restricted_by_team" tag state: The team policy prevents
/// links being shared outside the team.
///
/// @return An initialized instance.
///
- (instancetype)initWithRestrictedByTeam;

///
/// Initializes union class with tag state of "user_not_on_team".
///
/// Description of the "user_not_on_team" tag state: The user needs to be on a
/// team to set this policy.
///
/// @return An initialized instance.
///
- (instancetype)initWithUserNotOnTeam;

///
/// Initializes union class with tag state of "user_account_type".
///
/// Description of the "user_account_type" tag state: The user is a basic user
/// or is on a limited team.
///
/// @return An initialized instance.
///
- (instancetype)initWithUserAccountType;

///
/// Initializes union class with tag state of "permission_denied".
///
/// Description of the "permission_denied" tag state: The user does not have
/// permission.
///
/// @return An initialized instance.
///
- (instancetype)initWithPermissionDenied;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value
/// "delete_and_recreate".
///
/// @return Whether the union's current tag state has value
/// "delete_and_recreate".
///
- (BOOL)isDeleteAndRecreate;

///
/// Retrieves whether the union's current tag state has value
/// "restricted_by_shared_folder".
///
/// @return Whether the union's current tag state has value
/// "restricted_by_shared_folder".
///
- (BOOL)isRestrictedBySharedFolder;

///
/// Retrieves whether the union's current tag state has value
/// "restricted_by_team".
///
/// @return Whether the union's current tag state has value
/// "restricted_by_team".
///
- (BOOL)isRestrictedByTeam;

///
/// Retrieves whether the union's current tag state has value
/// "user_not_on_team".
///
/// @return Whether the union's current tag state has value "user_not_on_team".
///
- (BOOL)isUserNotOnTeam;

///
/// Retrieves whether the union's current tag state has value
/// "user_account_type".
///
/// @return Whether the union's current tag state has value "user_account_type".
///
- (BOOL)isUserAccountType;

///
/// Retrieves whether the union's current tag state has value
/// "permission_denied".
///
/// @return Whether the union's current tag state has value "permission_denied".
///
- (BOOL)isPermissionDenied;

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
/// The serialization class for the `DBSHARINGLinkAudienceDisallowedReason`
/// union.
///
@interface DBSHARINGLinkAudienceDisallowedReasonSerializer : NSObject

///
/// Serializes `DBSHARINGLinkAudienceDisallowedReason` instances.
///
/// @param instance An instance of the `DBSHARINGLinkAudienceDisallowedReason`
/// API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBSHARINGLinkAudienceDisallowedReason` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBSHARINGLinkAudienceDisallowedReason *)instance;

///
/// Deserializes `DBSHARINGLinkAudienceDisallowedReason` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBSHARINGLinkAudienceDisallowedReason` API object.
///
/// @return An instantiation of the `DBSHARINGLinkAudienceDisallowedReason`
/// object.
///
+ (DBSHARINGLinkAudienceDisallowedReason *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
