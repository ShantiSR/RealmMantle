//
//  APIManager.h
//  RealmMantle
//
//  Created by Santiago Sánchez Rodríguez on 30/7/15.
//  Copyright (c) 2015 Shanti Rodríguez. All rights reserved.
//

#import "SessionManager.h"
#import "ArticleListRequestModel.h"
#import "ArticleListResponseModel.h"

@interface APIManager : SessionManager

- (NSURLSessionDataTask *)getArticlesWithRequestModel:(ArticleListRequestModel *)requestModel
                                              success:(void (^)(ArticleListResponseModel *responseModel))success
                                              failure:(void (^)(NSError *error))failure;


@end
