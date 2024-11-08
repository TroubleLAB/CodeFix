// Acest cod este destinat să blocheze automat mesajele de tip spam care promovează vânzarea de yang și conturi, utilizând o abordare eficientă bazată pe expresii regulate. 
// 1. -> input_main.cpp

#include <regex> 
std::string NormalizeMessage(const std::string& message) {
    std::string normalized = message;
    std::transform(normalized.begin(), normalized.end(), normalized.begin(), ::tolower);
    normalized.erase(std::remove_if(normalized.begin(), normalized.end(), ::isspace), normalized.end());
    return normalized;
}

bool IsSpamMessage(const std::string& message) {
    std::string normalized = NormalizeMessage(message);
    std::regex patternSpam(R"((v[a-zA-Z]?nd\s?(yang|cont(ur[i]?|uri)))|(yang\s?(ieftin|v[a-zA-Z]?nd)))");

    return std::regex_search(normalized, patternSpam);
}

// 2.

    if (ch->GetLevel() < SHOUT_LIMIT_LEVEL)
    {
        ch->ChatPacket(CHAT_TYPE_INFO, LC_TEXT("외치기는 레벨 %d 이상만 사용 가능 합니다."), SHOUT_LIMIT_LEVEL);
        return (iExtraLen);
    }
	
    if (IsSpamMessage(buf))
        return (iExtraLen);
