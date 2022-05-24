///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBFILEPROPERTIESRouteObjects.h"
#import "DBFILEPROPERTIESAddPropertiesError.h"
#import "DBFILEPROPERTIESAddTemplateResult.h"
#import "DBFILEPROPERTIESGetTemplateResult.h"
#import "DBFILEPROPERTIESInvalidPropertyGroupError.h"
#import "DBFILEPROPERTIESListTemplateResult.h"
#import "DBFILEPROPERTIESLookUpPropertiesError.h"
#import "DBFILEPROPERTIESLookupError.h"
#import "DBFILEPROPERTIESModifyTemplateError.h"
#import "DBFILEPROPERTIESPropertiesError.h"
#import "DBFILEPROPERTIESPropertiesSearchContinueError.h"
#import "DBFILEPROPERTIESPropertiesSearchError.h"
#import "DBFILEPROPERTIESPropertiesSearchMatch.h"
#import "DBFILEPROPERTIESPropertiesSearchResult.h"
#import "DBFILEPROPERTIESPropertyFieldTemplate.h"
#import "DBFILEPROPERTIESPropertyGroupTemplate.h"
#import "DBFILEPROPERTIESRemovePropertiesError.h"
#import "DBFILEPROPERTIESTeamAuthRoutes.h"
#import "DBFILEPROPERTIESTemplateError.h"
#import "DBFILEPROPERTIESUpdatePropertiesError.h"
#import "DBFILEPROPERTIESUpdateTemplateResult.h"
#import "DBFILEPROPERTIESUserAuthRoutes.h"
#import "DBRequestErrors.h"
#import "DBStoneBase.h"

@implementation DBFILEPROPERTIESRouteObjects

static DBRoute *DBFILEPROPERTIESPropertiesAdd;
static DBRoute *DBFILEPROPERTIESPropertiesOverwrite;
static DBRoute *DBFILEPROPERTIESPropertiesRemove;
static DBRoute *DBFILEPROPERTIESPropertiesSearch;
static DBRoute *DBFILEPROPERTIESPropertiesSearchContinue;
static DBRoute *DBFILEPROPERTIESPropertiesUpdate;
static DBRoute *DBFILEPROPERTIESTemplatesAddForTeam;
static DBRoute *DBFILEPROPERTIESTemplatesAddForUser;
static DBRoute *DBFILEPROPERTIESTemplatesGetForTeam;
static DBRoute *DBFILEPROPERTIESTemplatesGetForUser;
static DBRoute *DBFILEPROPERTIESTemplatesListForTeam;
static DBRoute *DBFILEPROPERTIESTemplatesListForUser;
static DBRoute *DBFILEPROPERTIESTemplatesRemoveForTeam;
static DBRoute *DBFILEPROPERTIESTemplatesRemoveForUser;
static DBRoute *DBFILEPROPERTIESTemplatesUpdateForTeam;
static DBRoute *DBFILEPROPERTIESTemplatesUpdateForUser;

static NSObject *lockObj = nil;
+ (void)initialize {
  static dispatch_once_t onceToken;
  dispatch_once(&onceToken, ^{
    lockObj = [[NSObject alloc] init];
  });
}

+ (DBRoute *)DBFILEPROPERTIESPropertiesAdd {
  @synchronized(lockObj) {
    if (!DBFILEPROPERTIESPropertiesAdd) {
      DBFILEPROPERTIESPropertiesAdd = [[DBRoute alloc] init:@"properties/add"
                                                 namespace_:@"file_properties"
                                                 deprecated:@NO
                                                 resultType:nil
                                                  errorType:[DBFILEPROPERTIESAddPropertiesError class]
                                                      attrs:@{
                                                        @"auth" : @"user",
                                                        @"host" : @"api",
                                                        @"style" : @"rpc"
                                                      }
                                      dataStructSerialBlock:nil
                                    dataStructDeserialBlock:nil];
    }
    return DBFILEPROPERTIESPropertiesAdd;
  }
}

+ (DBRoute *)DBFILEPROPERTIESPropertiesOverwrite {
  @synchronized(lockObj) {
    if (!DBFILEPROPERTIESPropertiesOverwrite) {
      DBFILEPROPERTIESPropertiesOverwrite = [[DBRoute alloc] init:@"properties/overwrite"
                                                       namespace_:@"file_properties"
                                                       deprecated:@NO
                                                       resultType:nil
                                                        errorType:[DBFILEPROPERTIESInvalidPropertyGroupError class]
                                                            attrs:@{
                                                              @"auth" : @"user",
                                                              @"host" : @"api",
                                                              @"style" : @"rpc"
                                                            }
                                            dataStructSerialBlock:nil
                                          dataStructDeserialBlock:nil];
    }
    return DBFILEPROPERTIESPropertiesOverwrite;
  }
}

+ (DBRoute *)DBFILEPROPERTIESPropertiesRemove {
  @synchronized(lockObj) {
    if (!DBFILEPROPERTIESPropertiesRemove) {
      DBFILEPROPERTIESPropertiesRemove = [[DBRoute alloc] init:@"properties/remove"
                                                    namespace_:@"file_properties"
                                                    deprecated:@NO
                                                    resultType:nil
                                                     errorType:[DBFILEPROPERTIESRemovePropertiesError class]
                                                         attrs:@{
                                                           @"auth" : @"user",
                                                           @"host" : @"api",
                                                           @"style" : @"rpc"
                                                         }
                                         dataStructSerialBlock:nil
                                       dataStructDeserialBlock:nil];
    }
    return DBFILEPROPERTIESPropertiesRemove;
  }
}

+ (DBRoute *)DBFILEPROPERTIESPropertiesSearch {
  @synchronized(lockObj) {
    if (!DBFILEPROPERTIESPropertiesSearch) {
      DBFILEPROPERTIESPropertiesSearch = [[DBRoute alloc] init:@"properties/search"
                                                    namespace_:@"file_properties"
                                                    deprecated:@NO
                                                    resultType:[DBFILEPROPERTIESPropertiesSearchResult class]
                                                     errorType:[DBFILEPROPERTIESPropertiesSearchError class]
                                                         attrs:@{
                                                           @"auth" : @"user",
                                                           @"host" : @"api",
                                                           @"style" : @"rpc"
                                                         }
                                         dataStructSerialBlock:nil
                                       dataStructDeserialBlock:nil];
    }
    return DBFILEPROPERTIESPropertiesSearch;
  }
}

+ (DBRoute *)DBFILEPROPERTIESPropertiesSearchContinue {
  @synchronized(lockObj) {
    if (!DBFILEPROPERTIESPropertiesSearchContinue) {
      DBFILEPROPERTIESPropertiesSearchContinue =
          [[DBRoute alloc] init:@"properties/search/continue"
                           namespace_:@"file_properties"
                           deprecated:@NO
                           resultType:[DBFILEPROPERTIESPropertiesSearchResult class]
                            errorType:[DBFILEPROPERTIESPropertiesSearchContinueError class]
                                attrs:@{
                                  @"auth" : @"user",
                                  @"host" : @"api",
                                  @"style" : @"rpc"
                                }
                dataStructSerialBlock:nil
              dataStructDeserialBlock:nil];
    }
    return DBFILEPROPERTIESPropertiesSearchContinue;
  }
}

+ (DBRoute *)DBFILEPROPERTIESPropertiesUpdate {
  @synchronized(lockObj) {
    if (!DBFILEPROPERTIESPropertiesUpdate) {
      DBFILEPROPERTIESPropertiesUpdate = [[DBRoute alloc] init:@"properties/update"
                                                    namespace_:@"file_properties"
                                                    deprecated:@NO
                                                    resultType:nil
                                                     errorType:[DBFILEPROPERTIESUpdatePropertiesError class]
                                                         attrs:@{
                                                           @"auth" : @"user",
                                                           @"host" : @"api",
                                                           @"style" : @"rpc"
                                                         }
                                         dataStructSerialBlock:nil
                                       dataStructDeserialBlock:nil];
    }
    return DBFILEPROPERTIESPropertiesUpdate;
  }
}

+ (DBRoute *)DBFILEPROPERTIESTemplatesAddForTeam {
  @synchronized(lockObj) {
    if (!DBFILEPROPERTIESTemplatesAddForTeam) {
      DBFILEPROPERTIESTemplatesAddForTeam = [[DBRoute alloc] init:@"templates/add_for_team"
                                                       namespace_:@"file_properties"
                                                       deprecated:@NO
                                                       resultType:[DBFILEPROPERTIESAddTemplateResult class]
                                                        errorType:[DBFILEPROPERTIESModifyTemplateError class]
                                                            attrs:@{
                                                              @"auth" : @"team",
                                                              @"host" : @"api",
                                                              @"style" : @"rpc"
                                                            }
                                            dataStructSerialBlock:nil
                                          dataStructDeserialBlock:nil];
    }
    return DBFILEPROPERTIESTemplatesAddForTeam;
  }
}

+ (DBRoute *)DBFILEPROPERTIESTemplatesAddForUser {
  @synchronized(lockObj) {
    if (!DBFILEPROPERTIESTemplatesAddForUser) {
      DBFILEPROPERTIESTemplatesAddForUser = [[DBRoute alloc] init:@"templates/add_for_user"
                                                       namespace_:@"file_properties"
                                                       deprecated:@NO
                                                       resultType:[DBFILEPROPERTIESAddTemplateResult class]
                                                        errorType:[DBFILEPROPERTIESModifyTemplateError class]
                                                            attrs:@{
                                                              @"auth" : @"user",
                                                              @"host" : @"api",
                                                              @"style" : @"rpc"
                                                            }
                                            dataStructSerialBlock:nil
                                          dataStructDeserialBlock:nil];
    }
    return DBFILEPROPERTIESTemplatesAddForUser;
  }
}

+ (DBRoute *)DBFILEPROPERTIESTemplatesGetForTeam {
  @synchronized(lockObj) {
    if (!DBFILEPROPERTIESTemplatesGetForTeam) {
      DBFILEPROPERTIESTemplatesGetForTeam = [[DBRoute alloc] init:@"templates/get_for_team"
                                                       namespace_:@"file_properties"
                                                       deprecated:@NO
                                                       resultType:[DBFILEPROPERTIESGetTemplateResult class]
                                                        errorType:[DBFILEPROPERTIESTemplateError class]
                                                            attrs:@{
                                                              @"auth" : @"team",
                                                              @"host" : @"api",
                                                              @"style" : @"rpc"
                                                            }
                                            dataStructSerialBlock:nil
                                          dataStructDeserialBlock:nil];
    }
    return DBFILEPROPERTIESTemplatesGetForTeam;
  }
}

+ (DBRoute *)DBFILEPROPERTIESTemplatesGetForUser {
  @synchronized(lockObj) {
    if (!DBFILEPROPERTIESTemplatesGetForUser) {
      DBFILEPROPERTIESTemplatesGetForUser = [[DBRoute alloc] init:@"templates/get_for_user"
                                                       namespace_:@"file_properties"
                                                       deprecated:@NO
                                                       resultType:[DBFILEPROPERTIESGetTemplateResult class]
                                                        errorType:[DBFILEPROPERTIESTemplateError class]
                                                            attrs:@{
                                                              @"auth" : @"user",
                                                              @"host" : @"api",
                                                              @"style" : @"rpc"
                                                            }
                                            dataStructSerialBlock:nil
                                          dataStructDeserialBlock:nil];
    }
    return DBFILEPROPERTIESTemplatesGetForUser;
  }
}

+ (DBRoute *)DBFILEPROPERTIESTemplatesListForTeam {
  @synchronized(lockObj) {
    if (!DBFILEPROPERTIESTemplatesListForTeam) {
      DBFILEPROPERTIESTemplatesListForTeam = [[DBRoute alloc] init:@"templates/list_for_team"
                                                        namespace_:@"file_properties"
                                                        deprecated:@NO
                                                        resultType:[DBFILEPROPERTIESListTemplateResult class]
                                                         errorType:[DBFILEPROPERTIESTemplateError class]
                                                             attrs:@{
                                                               @"auth" : @"team",
                                                               @"host" : @"api",
                                                               @"style" : @"rpc"
                                                             }
                                             dataStructSerialBlock:nil
                                           dataStructDeserialBlock:nil];
    }
    return DBFILEPROPERTIESTemplatesListForTeam;
  }
}

+ (DBRoute *)DBFILEPROPERTIESTemplatesListForUser {
  @synchronized(lockObj) {
    if (!DBFILEPROPERTIESTemplatesListForUser) {
      DBFILEPROPERTIESTemplatesListForUser = [[DBRoute alloc] init:@"templates/list_for_user"
                                                        namespace_:@"file_properties"
                                                        deprecated:@NO
                                                        resultType:[DBFILEPROPERTIESListTemplateResult class]
                                                         errorType:[DBFILEPROPERTIESTemplateError class]
                                                             attrs:@{
                                                               @"auth" : @"user",
                                                               @"host" : @"api",
                                                               @"style" : @"rpc"
                                                             }
                                             dataStructSerialBlock:nil
                                           dataStructDeserialBlock:nil];
    }
    return DBFILEPROPERTIESTemplatesListForUser;
  }
}

+ (DBRoute *)DBFILEPROPERTIESTemplatesRemoveForTeam {
  @synchronized(lockObj) {
    if (!DBFILEPROPERTIESTemplatesRemoveForTeam) {
      DBFILEPROPERTIESTemplatesRemoveForTeam = [[DBRoute alloc] init:@"templates/remove_for_team"
                                                          namespace_:@"file_properties"
                                                          deprecated:@NO
                                                          resultType:nil
                                                           errorType:[DBFILEPROPERTIESTemplateError class]
                                                               attrs:@{
                                                                 @"auth" : @"team",
                                                                 @"host" : @"api",
                                                                 @"style" : @"rpc"
                                                               }
                                               dataStructSerialBlock:nil
                                             dataStructDeserialBlock:nil];
    }
    return DBFILEPROPERTIESTemplatesRemoveForTeam;
  }
}

+ (DBRoute *)DBFILEPROPERTIESTemplatesRemoveForUser {
  @synchronized(lockObj) {
    if (!DBFILEPROPERTIESTemplatesRemoveForUser) {
      DBFILEPROPERTIESTemplatesRemoveForUser = [[DBRoute alloc] init:@"templates/remove_for_user"
                                                          namespace_:@"file_properties"
                                                          deprecated:@NO
                                                          resultType:nil
                                                           errorType:[DBFILEPROPERTIESTemplateError class]
                                                               attrs:@{
                                                                 @"auth" : @"user",
                                                                 @"host" : @"api",
                                                                 @"style" : @"rpc"
                                                               }
                                               dataStructSerialBlock:nil
                                             dataStructDeserialBlock:nil];
    }
    return DBFILEPROPERTIESTemplatesRemoveForUser;
  }
}

+ (DBRoute *)DBFILEPROPERTIESTemplatesUpdateForTeam {
  @synchronized(lockObj) {
    if (!DBFILEPROPERTIESTemplatesUpdateForTeam) {
      DBFILEPROPERTIESTemplatesUpdateForTeam = [[DBRoute alloc] init:@"templates/update_for_team"
                                                          namespace_:@"file_properties"
                                                          deprecated:@NO
                                                          resultType:[DBFILEPROPERTIESUpdateTemplateResult class]
                                                           errorType:[DBFILEPROPERTIESModifyTemplateError class]
                                                               attrs:@{
                                                                 @"auth" : @"team",
                                                                 @"host" : @"api",
                                                                 @"style" : @"rpc"
                                                               }
                                               dataStructSerialBlock:nil
                                             dataStructDeserialBlock:nil];
    }
    return DBFILEPROPERTIESTemplatesUpdateForTeam;
  }
}

+ (DBRoute *)DBFILEPROPERTIESTemplatesUpdateForUser {
  @synchronized(lockObj) {
    if (!DBFILEPROPERTIESTemplatesUpdateForUser) {
      DBFILEPROPERTIESTemplatesUpdateForUser = [[DBRoute alloc] init:@"templates/update_for_user"
                                                          namespace_:@"file_properties"
                                                          deprecated:@NO
                                                          resultType:[DBFILEPROPERTIESUpdateTemplateResult class]
                                                           errorType:[DBFILEPROPERTIESModifyTemplateError class]
                                                               attrs:@{
                                                                 @"auth" : @"user",
                                                                 @"host" : @"api",
                                                                 @"style" : @"rpc"
                                                               }
                                               dataStructSerialBlock:nil
                                             dataStructDeserialBlock:nil];
    }
    return DBFILEPROPERTIESTemplatesUpdateForUser;
  }
}

@end
