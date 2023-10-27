#include "pch.h"
#include "TargetEntity.h"
// #include "Downloader.h"
// #include "StringUtils.h"
// #include "JsonFields.h"
//
// void TargetEntity::InitializeFromJson(const nlohmann::json& json)
//{
//     title             = json[JsonFields::title].get<std::string>().data();
//     description       = json[JsonFields::description].get<std::string>().data();
//     url               = cl::string_utils::FromUtf8(json[JsonFields::url].get<std::string>());
//     installParameters = cl::string_utils::FromUtf8(json[JsonFields::installParameters].get<std::string>());
//     m_dirParameter    = cl::string_utils::FromUtf8(json[JsonFields::dirParameter].get<std::string>());
// }
//
// const CString& TargetEntity::Title() const
//{
//     return title;
// }
//
// const CString& TargetEntity::Description() const
//{
//     return description;
// }
//
// const TString& TargetEntity::Url() const
//{
//     return url;
// }
//
// const TString& TargetEntity::InstallParameters() const
//{
//     return installParameters;
// }
//
// const TString& TargetEntity::DirParameter() const
//{
//     return m_dirParameter;
// }
//
// DWORD TargetEntity::InstallExitCode() const
//{
//     return m_installExitCode;
// }
//
// bool TargetEntity::Download(Downloader& downloader)
//{
//     using namespace PathUtils;
//     auto downloadPath =
//         GenerateTargetAppDownloadPathFromUrl(Url(), DefaultTargetAppDownloadFolder(), fallbackDownloadFileName);
//
//     if (downloadPath.empty()) {
//         return false;
//     }
//
//     return downloader.DownloadAsynchronously(Url(), downloadPath);
// }
//
// bool TargetEntity::Install(Downloader& downloader)
//{
//     auto installParameters = InstallParameters();
//     if (!DirParameter().empty()) {
//         // installParameters += _T(' ') + DirParameter() + _T('\"') + _T("C:\\Boo\\Temp\\7zip") + _T('\"');
//     }
//
//     SHELLEXECUTEINFO ShExecInfo = { 0 };
//     ShExecInfo.cbSize           = sizeof(SHELLEXECUTEINFO);
//     ShExecInfo.fMask            = SEE_MASK_NOCLOSEPROCESS;
//     ShExecInfo.hwnd             = NULL;
//     ShExecInfo.lpVerb           = NULL;
//     ShExecInfo.lpFile           = downloader.DownloadPath().data();
//     ShExecInfo.lpParameters     = installParameters.data();
//     ShExecInfo.lpDirectory      = NULL;
//     ShExecInfo.nShow            = SW_SHOW;
//     ShExecInfo.hInstApp         = NULL;
//     auto success                = ShellExecuteEx(&ShExecInfo);
//     if (success) {
//         WaitForSingleObject(ShExecInfo.hProcess, INFINITE);
//         GetExitCodeProcess(ShExecInfo.hProcess, &m_installExitCode);
//     }
//     CloseHandle(ShExecInfo.hProcess);
//
//     return success;
// }

void TargetEntity::InitializeFromJson(const nlohmann::json& json)
{
    auto j  = json;
    j["32"] = "sd";
}
