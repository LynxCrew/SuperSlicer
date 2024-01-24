#ifndef slic3r_Format_BBconfig_hpp_
#define slic3r_Format_BBconfig_hpp_


#include <filesystem>

namespace Slic3r {
class ModelConfigObject;
class DynamicPrintConfig;

bool read_project_file_bambu(const std::filesystem::path &temp_file,
                             DynamicPrintConfig &         config,
                             ConfigSubstitutionContext &  config_substitutions,
                             bool                         with_phony);

bool convert_settings_from_bambu(std::map<std::string, std::string> bambu_settings_serialized,
                                 const DynamicPrintConfig &         print_config,
                                 ModelConfigObject &                object_config,
                                 ConfigSubstitutionContext &        config_substitutions,
                                 bool                               with_phony);
} // namespace Slic3r

#endif /* slic3r_Format_BBconfig_hpp_ */
