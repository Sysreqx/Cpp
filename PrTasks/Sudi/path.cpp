﻿//СѓРєР°Р·Р°С‚СЊ РёРјСЏ С„Р°Р№Р»Р° СЃСѓР±С‚РёС‚СЂРѕРІ
string subtitles_file_name = "Dexter.S01E01.1080p.5.1Ch.BluRay.ReEnc-DeeJayAhmed.srt";

string s_f_m = subtitles_file_name.substr(0, subtitles_file_name.size() - 4);

string f1_path_editS = "Subtitles\\" + s_f_m + ".srt";
string f1_path1 = "Subtitles\\" + s_f_m + "(edit).srt";
string f1_path2 = "TempFiles\\" + s_f_m + ".srt";
string f1_path3 = "ForStudying\\" + s_f_m + ".srt";
string f1_path4 = "ForStudying\\" + s_f_m + "WordsForStudying.txt";

string f2_path1 = "dic.txt";