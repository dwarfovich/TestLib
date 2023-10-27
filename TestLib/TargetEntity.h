#pragma once

class Downloader;

class TargetEntity
{
public:
    virtual ~TargetEntity() = default;

    void           InitializeFromJson(const nlohmann::json& json);
    const CString& Title() const;
    const CString& Description() const;
    const TString& Url() const;
    const TString& InstallParameters() const;
    const TString& DirParameter() const;
    DWORD          InstallExitCode() const;

    virtual bool Download(Downloader& downloader);
    virtual bool Install(Downloader& downloader);

protected:
    CString title;
    CString description;
    TString url;
    TString installParameters;
    TString m_dirParameter;
    DWORD   m_installExitCode = -1;
};
