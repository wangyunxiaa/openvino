// Copyright (C) 2020 Intel Corporation
// SPDX-License-Identifier: Apache-2.0
#pragma once

#include <tuple>
#include <string>
#include <vector>
#include <memory>
#include "functional_test_utils/layer_test_utils.hpp"
#include "ngraph_functions/builders.hpp"
#include "ngraph_functions/utils/ngraph_helpers.hpp"

namespace LayerTestsDefinitions {

typedef std::tuple<
        std::vector<std::vector<size_t>>,  //input shapes
        InferenceEngine::Precision,        //Network precision
        std::string,                       //Device name
        std::map<std::string, std::string> //Configuration
> MultioutputEltwiseReshapeEltwiseTuple;

class MultioutputEltwiseReshapeEltwise
        : public testing::WithParamInterface<MultioutputEltwiseReshapeEltwiseTuple>,
          public LayerTestsUtils::LayerTestsCommon {
public:
    static std::string getTestCaseName(const testing::TestParamInfo<MultioutputEltwiseReshapeEltwiseTuple> &obj);
protected:
    void SetUp() override;
};
} // namespace LayerTestsDefinitions
