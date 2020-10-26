Action()
{

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("WebTours", 
		"URL=http://127.0.0.1:1080/WebTours/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "2&3");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("A-IM", 
		"x-bm,gzip");

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=86", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("NID=204=uP7i8ZIimziLekfbxBHlC4jmrS2gsw9WL_NOBe0Q7DkoL_pEYLRt43a3FNZW07wMvYgscssjO3PMdHFnMJXTuXuLORffyxnPxyTkvQxvyZ2BEC9UFzbwRVYq9FENtzEFrjhjdCKSxUm4WkhVSOH2mO4bUE4sEtdYkRYK_IHo32VERqdf2l0j8ac; DOMAIN=adservice.google.com");

	web_add_cookie("SIDCC=AJi4QfE648JUu9vwY1z9dwBLAgdstzrmlUKp6jx0iybHrnsiw3X_m_Ll4Dvoa3QTdYivc-JI; DOMAIN=adservice.google.com");

	web_add_cookie("__Secure-3PSIDCC=AJi4QfEJhSe5bjGhj-YxjzSWOJomEj27-LJruF1Cehhhp6Ngfq1OdqNxcnmok2vCcDSmKl78Xw; DOMAIN=adservice.google.com");

	web_url("do_ad_settings_allow_floc_poc", 
		"URL=https://adservice.google.com/settings/do_ad_settings_allow_floc_poc", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://content-autofill.googleapis.com/v1/pages/Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRIfCTfZQeCPfjGJEgkN541ADhIAGgASCQ3OQUx6EgAaAA==?alt=proto", "Referer=", ENDITEM, 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"frame");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Origin", 
		"http://127.0.0.1:1080");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(9);

	web_submit_data("login.pl", 
		"Action=http://127.0.0.1:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=userSession", "Value=129885.865694613zziVAAtpcVzzzzzHtAAizpAcfD", ENDITEM, 
		"Name=username", "Value=admin", ENDITEM, 
		"Name=password", "Value=admin", ENDITEM, 
		"Name=login.x", "Value=77", ENDITEM, 
		"Name=login.y", "Value=2", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("X-Chrome-UMA-Log-HMAC-SHA256", 
		"BCuFcF/6Ez9vyQamT5UjKE6mtR8OOsPfQFxksmiP7tQ=");

	web_add_header("X-Chrome-UMA-Log-SHA1", 
		"86A6C8C2917CB57C110B470FBAC9ABE472A1F194");

	web_add_header("X-Chrome-UMA-ReportingInfo", 
		"CAE=");

	lr_think_time(4);

	web_custom_request("v2", 
		"URL=https://clientservices.googleapis.com/uma/v2", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t10.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/vnd.chrome.uma", 
		"BodyBinary=\t\\xA0\\xBB\\xE3\\xF1 \\xF3`\\xEB\\x10\\x00\\x1A\\xAE\r\\x08\\xFB\\xBE\\xB9\\xFC\\x05\\x12\\x1086.0.4240.111-64\\x18\\x80\\x9B\\xCA\\xFC\\x05\"\\x02ru*\\x18\n\nWindows NT\\x12\n10.0.190412\\xB0\\x01\n\\x06x86_64\\x10\\x81?\\x18\\x80\\x80\\xC4\\xE6\\xF4\\xFF\\x1F\"\\x00(\\x010\\x80\\x0C8\\xE0\\x06B`\\x08\\x86\\x81\\x02\\x10\\x9B}\\x1A\\x0E27.20.100.79892\\x0BGoogle Inc.::ANGLE (Intel(R) UHD Graphics 630 Direct3D11 vs_5_0 ps_5_0)Mw\\xC4\rCU\\xEEf\rCe\\x00\\x00\\xA0?j\\x16\n"
		"\\x0CGenuineIntel\\x10\\xEA\\x8D$\\x18\\x0C \\x01\\x82\\x01\\x02\\x08\\x01\\x8A\\x01\\x02\\x08\\x01:;\n\\x11Chrome PDF Viewer\\x12 mhjfbmdgcfjbbpaeojofohoefgiehjai\\x1A\\x00 \\x00(\\x00:B\n\\x0FShockwave Flash\\x12\\x1Fpepflashplayer64_32_0_0_207.dll\\x1A\n32.0.0.207 \\x00(\\x01:+\n\rNative Client\\x12\\x14internal-nacl-plugin\\x1A\\x00 \\x00(\\x01:.\n\\x11Chrome PDF Plugin\\x12\\x13internal-pdf-viewer\\x1A\\x00 \\x00(\\x01B\\x00J\n\rm#:^\\x15\\x9E\\xA7\\x13AP\\x04Z!\\x08\\x01*\\x1D\n\r"
		"86.0.4240.111\\x10\\xCA\\x9F\\xCA\\xFC\\x05\\x18\\x00 \\x00(\\x80\\x80\\x08b\\x04GGLSj\\x0C\\x08\\x00\\x10\\x00\\x18\\x00 "
		"\\x058\\x06@\\x06\\x80\\x01\\x80\\x9B\\xCA\\xFC\\x05\\x90\\x01\\x1A\\x90\\x01`\\x90\\x01l\\x90\\x01z\\x90\\x01\\x7F\\x90\\x01\\x8C\\x01\\x90\\x01\\xF0\\x01\\x90\\x01\\xD2\\x02\\x90\\x01\\xF3\\x02\\x90\\x01\\x83\\x03\\x90\\x01\\xB1\\x03\\x90\\x01\\xEB\\x03\\x90\\x01\\xF8\\x03\\x90\\x01\\x84\\x04\\x90\\x01\\x85\\x04\\x90\\x01\\xA1\\x04\\x90\\x01\\xB3\\x04\\x90\\x01\\xCA\\x04\\x90\\x01\\xA2\\x05\\x90\\x01\\xC4\\x05\\x90\\x01\\xDB\\x05\\x90\\x01\\xC3\\x06\\x90\\x01\\xD6\\x06\\x90\\x01\\xC5\\x07\\x98\\"
		"x01\\x01\\xBA\\x01\\x0C\\x15\\xD3\\xD2\\xA7\\x96%\\x00\\x00\\x00\\x00(\\x00\\xC2\\x01\\x0F\\x08\\x0B\\x12\\x069.17.0\\x1D\\xC66\t\\xD7\\xC2\\x01\n\\x08\\x08\\x12\\x017\\x1D\\xC0^Q\\xFD\\xC2\\x01\\x10\\x08\\x0C\\x12\\x070.0.0.0\\x1D\\x00\\x00\\x00\\x00\\xC2\\x01\r\\x08\n\\x12\\x046193\\x1D\\xAC\\xD0Z\\xE9\\xC2\\x01\\x15\\x08\\x06\\x12\\x0C0.57.44.2492\\x1D=\\xC9ko\\xC2\\x01\\x0B\\x08\\x02\\x12\\x0243\\x1D\\xD7\\xD2\\xD1\\xFF\\xC2\\x01\\x10\\x08\\x03\\x12\\x071.0.0.5\\x1D;"
		"\\xA9\\xFCb\\xC2\\x01\\x13\\x08\\x04\\x12\n32.0.0.445\\x1D)\\x0B\\x91\\xB4\\xC2\\x01\\x14\\x08\r\\x12\\x0B4.10.1679.0\\x1D\\x00\\x00\\x00\\x00\\xC2\\x01\n\\x08\\x1B\\x12\\x011\\x1D\\x15\\xA9\\x8AG\\xCA\\x01\\x1F\\x08\\x05\\x10\\x01\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x04\\x10\\x05\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x05\\x10\\x01\\x18\\x02 \\x00"
		"(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x04\\x10\\x01\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x04\\x10\\x01\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01!\\x08\\x04\\x10\\x01\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x00`\\x00h\\x00p\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x01\\x18\\x02 "
		"\\x01(\\x000\\x018\\x01@\\x01H\\x00P\\x00X\\x00`\\x00h\\x01x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x05\\x10\\x01\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x06\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x01\\x18\\x02 \\x00"
		"(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x01\\x18\\x02 \\x00(\\x000\\x018\\x01@\\x01H\\x00P\\x00X\\x00`\\x00h\\x01x\\x00\\x80\\x01\\x00\\xCA\\x01!\\x08\\x01\\x10\\x06\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x00`\\x00h\\x01p\nx\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01!\\x08\\x04\\x10\\x01\\x18\\x02 \\x00"
		"(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x00`\\x00h\\x00p\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01!\\x08\\x04\\x10\\x01\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x00`\\x00h\\x00p\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x04\\x10\\x05\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01!\\x08\\x05\\x10\\x01\\x18\\x02"
		" \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x00`\\x00h\\x00p\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x06\\x10\n\\x18\\x02 \\x00"
		"(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x01\\x18\\x02 \\x01(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x00`\\x00h\\x01x\\x00\\x80\\x01\\x00\\xCA\\x01!\\x08\\x04\\x10\\x01\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x00`\\x00h\\x00p\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x04\\x10\\x01\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\n\\x18\\x02 "
		"\\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xF8\\x01\\x92&\\x80\\x02\\xFF\\xFF\\xFF\\xFF\\xFF\\xFF\\xFF\\xFF\\xFF\\x01\\x88\\x02\\x012\\x0F\t\\xEB\\x82h-\\xB8\\x12\\x0E\\xFC\\x10\\x01\\x1A\\x02\\x10\\x022\r\tVM\\xC4\\xD3\\xE0\\x1D],\\x1A\\x02\\x10\\x01", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"frame");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("welcome.pl", 
		"URL=http://127.0.0.1:1080/cgi-bin/welcome.pl?page=search", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("X-Goog-Update-AppId", 
		"ihnlcenocehgdaegdmhbidjhnhdchfmm,cmahhnpholdijhjokonmfdjbfmklppij,oimompecagnajdejgnnjijobebaeigek,gcmjkmgdlgnkkcocmoeiminaijmmjnii,hnimpnehoodheedghdeeijklkeaacbdc,obedbbhbpmojnkanicioggnmelmoomoc,gkmgaooipdjhmangpemjhigmamcehddo,hfnkpimlhhgieaddgfemjhofmfblmnib,aemomkdncapdnfajjbbcbdebjljbpmpj,khaoiebndkojlmppeemjhbpbandiljpe,giekcmmlnklenlaomppkphknjmnnpneh,ehgidpndbllacpjalkiimkbadgjfnnmc,jflookgnkcckhobaglndicnbbgbonegd,bklopemakmnopmghhmccadeonafabnal,ggkkehgbnfjpeggfpleeakpidbkibbmn,"
		"ojhpjlocmbogdgmfpkhlaaeamibhnphh,llkgjffcdpffmhiakmfcdcblohccpfmo,mimojjlkmoijpicakmndhoigimigcmbb");

	web_add_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_header("X-Goog-Update-Updater", 
		"chrome-86.0.4240.111");

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=10:640212966&cup2hreq=022ffeeb5ad7649121637ea0f81d0f4468dd9818257159d0fb8b8b7db9953044", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx2,crx3\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GGLS\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{c9e9edd6-65e7-4865-8a09-47b343f61f33}\",\"rd\":5044},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"cmahhnpholdijhjokonmfdjbfmklppij\",\"brand\":\"GGLS\",\"cohort\":\"1:wr3:x23@0.01\",\"cohorthint\":\"Auto\",\"enabled\":true,\"ping\":{\"ping_freshness\":\""
		"{21894c00-f331-4a8b-b1a4-bcc79b98c04d}\",\"rd\":5044},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GGLS\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{e739511a-ca5e-4387-b37a-681f624901f6}\",\"rd\":5044},\"updatecheck\":{},\"version\":\"4.10.1679.0\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"GGLS\",\"cohort\":\"1:bm1:\",\"cohorthint\":\"M54ToM99\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\""
		"1.d70936c64ef8cf3a5701f38398d074dea0dab8f5d94218975dfd18c09ce0fbfa\"}]},\"ping\":{\"ping_freshness\":\"{daaef81e-87d0-47ca-8f33-f850a2c8775e}\",\"rd\":5044},\"updatecheck\":{},\"version\":\"9.17.0\"},{\"appid\":\"hnimpnehoodheedghdeeijklkeaacbdc\",\"brand\":\"GGLS\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.6f6bc93dcd62dc251850d2ff458fda96083ceb7fbe8eeb11248b8485ef2aea23\"}]},\"ping\":{\"ping_freshness\":\"{704c89e6-9c7b-42c9-a0e4-20a49cd8dc9c}\",\"rd\":5044},\"updatecheck\":{},\""
		"version\":\"0.57.44.2492\"},{\"accept_locale\":\"RU\",\"appid\":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"brand\":\"GGLS\",\"enabled\":true,\"ping\":{\"r\":-2},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"gkmgaooipdjhmangpemjhigmamcehddo\",\"brand\":\"GGLS\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{3267a798-2583-404a-8d75-d601bbc824d9}\",\"rd\":5044},\"tag\":\"eset_exp_b\",\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GGLS"
		"\",\"cohort\":\"1:jcl:\",\"cohorthint\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.e95ad0ac4f30786bc10dc8418e9189648fcf01abc6b24f65a2476e184eaceea6\"}]},\"ping\":{\"ping_freshness\":\"{223f9461-8e52-4765-a1a3-e4aa63fbd3a6}\",\"rd\":5044},\"updatecheck\":{},\"version\":\"6193\"},{\"appid\":\"aemomkdncapdnfajjbbcbdebjljbpmpj\",\"brand\":\"GGLS\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{79307159-f615-404f-a90d-37e0c697f847}\",\"rd\":5044},\"updatecheck\":{},\"version\":"
		"\"1.0.5.0\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"GGLS\",\"cohort\":\"1:cux:\",\"cohorthint\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.ffd1d2d75a8183b0a1081bd03a7ce1d140fded7a9fb52cf3ae864cd4d408ceb4\"}]},\"ping\":{\"ping_freshness\":\"{82ccbf5c-b886-44d7-9b8b-b1d8d7fb15f3}\",\"rd\":5044},\"updatecheck\":{},\"version\":\"43\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"GGLS\",\"cohort\":\"1:j5l:\",\"cohorthint\":\"Auto\",\"enabled\""
		":true,\"packages\":{\"package\":[{\"fp\":\"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\"}]},\"ping\":{\"ping_freshness\":\"{7427ca5b-1703-4af4-b201-bdca869e6d8a}\",\"rd\":5044},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GGLS\",\"cohort\":\"1:ofl:\",\"cohorthint\":\"stable64\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\""
		"ping_freshness\":\"{3ea91b0c-5a57-4156-9076-1b1241962e2f}\",\"rd\":5044},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"GGLS\",\"cohort\":\"1:s7x:\",\"cohorthint\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.6e14d7f542a81955534f7280c8ebe2c7adc2dd068a31404569b2d12b6c57431d\"}]},\"ping\":{\"ping_freshness\":\"{f43378e9-d3ca-4f0b-9e7a-a00a67ed3f94}\",\"rd\":5044},\"updatecheck\":{},\"version\":\"2446\"},{\"appid\":\""
		"bklopemakmnopmghhmccadeonafabnal\",\"brand\":\"GGLS\",\"cohort\":\"1:swl:\",\"cohorthint\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.6dce22b9a11fa1e62b22559c4a157ce745e7fc63c6c6941a82cf11e8ecf65b0e\"}]},\"ping\":{\"ping_freshness\":\"{238b64d2-7f6c-4036-95d1-8d7d3e980369}\",\"rd\":5044},\"updatecheck\":{},\"version\":\"3\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GGLS\",\"cohort\":\"1:ut9:\",\"cohorthint\":\"M80ToM89\",\"enabled\":true,\"packages\":{\""
		"package\":[{\"fp\":\"1.91f04f6eca5f3aa494aa33fca77cc89d8d98d02c349d7f73ea03a8b411889cff\"}]},\"ping\":{\"ping_freshness\":\"{b716b752-f83d-4eb4-ab36-759967125c35}\",\"rd\":5044},\"updatecheck\":{},\"version\":\"2020.10.18.1142\"},{\"appid\":\"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\"brand\":\"GGLS\",\"cohort\":\"1:w0x:\",\"cohorthint\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.478aa915e78878e332a0b4bb4d2a6fb67ff1c7f7b62fe906f47095ba5ae112d0\"}]},\"ping\":{\"ping_freshness\":\""
		"{aa381dee-3264-4f96-ba3c-ef6f6b881069}\",\"rd\":5044},\"updatecheck\":{},\"version\":\"1\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GGLS\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.62fca93b66ce468f2e445a0c0aee3643e7946aae6f6c86f45dc79de14e67d8ce\"}]},\"ping\":{\"ping_freshness\":\"{e244fd96-074b-4584-b85f-12953339531d}\",\"rd\":5044},\"updatecheck\":{},\"version\":\"1.0.0.5\"},{\"appid\":\"mimojjlkmoijpicakmndhoigimigcmbb\",\"brand\":\"GGLS\",\"cohort\":\"1:d0j:\""
		",\"cohorthint\":\"Chrome [M50+]\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.b4910b29de31631d0cfe05b0ae043ebf1471ac3f94ace38ea5312042aa4b6dfc\"}]},\"ping\":{\"ping_freshness\":\"{48304bd4-38da-4361-a278-a369b68280ae}\",\"rd\":5044},\"updatecheck\":{},\"version\":\"32.0.0.445\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"physmemory\":8},\"lang\":\"ru\",\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.19041.572\"},"
		"\"prodversion\":\"86.0.4240.111\",\"protocol\":\"3.1\",\"requestid\":\"{b102c740-1223-45e8-afe9-dbefc4e30ea5}\",\"sessionid\":\"{d32a6c46-08f3-4e0b-a307-2afc2f02dcfe}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.36.32\"},\"updaterversion\":\"86.0.4240.111\"}}", 
		EXTRARES, 
		"Url=https://content-autofill.googleapis.com/v1/pages/Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRJACesIHR01a_Z_EgkNVGIprRIAGgASCQ17ncSlEgAaABIJDR87OYUSABoAEgkN2oWZYRIAGgASCQ2pjkq9EgAaAA==?alt=proto", "Referer=", ENDITEM, 
		LAST);

	lr_think_time(13);

	web_custom_request("issuetoken", 
		"URL=https://oauthaccountmanager.googleapis.com/v1/issuetoken", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		"Body=force=false&response_type=token&scope=https://www.googleapis.com/auth/calendar.readonly+https://www.googleapis.com/auth/cast-edu-messaging+https://www.googleapis.com/auth/clouddevices+https://www.googleapis.com/auth/hangouts+https://www.googleapis.com/auth/hangouts.readonly+https://www.googleapis.com/auth/meetings+https://www.googleapis.com/auth/plus.peopleapi.readwrite+https://www.googleapis.com/auth/userinfo.email&enable_granular_permissions=false&client_id="
		"919648714761-55j965o0km033psv3i9qls5mo3qtdrb0.apps.googleusercontent.com&origin=pkedcjkdefgpdelpbcmbmeomcjbeemfm&lib_ver=86.0.4240.111&release_channel=stable&device_id=6796eba9-13db-4d04-8e4b-0898bce42c8d&device_type=chrome", 
		LAST);

	web_add_auto_header("Origin", 
		"http://127.0.0.1:1080");

	web_add_auto_header("Sec-Fetch-Dest", 
		"frame");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(27);

	web_submit_data("reservations.pl", 
		"Action=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/reservations.pl?page=welcome", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=depart", "Value=Denver", ENDITEM, 
		"Name=departDate", "Value=10/25/2020", ENDITEM, 
		"Name=arrive", "Value=London", ENDITEM, 
		"Name=returnDate", "Value=10/27/2020", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=seatPref", "Value=Aisle", ENDITEM, 
		"Name=seatType", "Value=Business", ENDITEM, 
		"Name=findFlights.x", "Value=48", ENDITEM, 
		"Name=findFlights.y", "Value=10", ENDITEM, 
		"Name=.cgifields", "Value=roundtrip", ENDITEM, 
		"Name=.cgifields", "Value=seatType", ENDITEM, 
		"Name=.cgifields", "Value=seatPref", ENDITEM, 
		LAST);

	lr_think_time(14);

	web_submit_form("reservations.pl_2", 
		"Snapshot=t15.inf", 
		ITEMDATA, 
		"Name=outboundFlight", "Value=023;401;10/25/2020", ENDITEM, 
		"Name=reserveFlights.x", "Value=29", ENDITEM, 
		"Name=reserveFlights.y", "Value=10", ENDITEM, 
		LAST);

	web_revert_auto_header("Sec-Fetch-Dest");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_revert_auto_header("Sec-Fetch-Site");

	web_revert_auto_header("Sec-Fetch-User");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_auto_header("Origin", 
		"https://beacons2.gvt2.com");

	web_add_header("Access-Control-Request-Headers", 
		"content-type");

	web_add_header("Access-Control-Request-Method", 
		"POST");

	lr_think_time(17);

	web_custom_request("upload-nel", 
		"URL=https://beacons.gvt2.com/domainreliability/upload-nel", 
		"Method=OPTIONS", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"frame");

	web_revert_auto_header("Origin");

	web_add_header("Origin", 
		"http://127.0.0.1:1080");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(8);

	web_submit_data("reservations.pl_3", 
		"Action=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=firstName", "Value=admin", ENDITEM, 
		"Name=lastName", "Value=admin", ENDITEM, 
		"Name=address1", "Value=admin", ENDITEM, 
		"Name=address2", "Value=admin", ENDITEM, 
		"Name=pass1", "Value=admin admin", ENDITEM, 
		"Name=creditCard", "Value=1354123547895231", ENDITEM, 
		"Name=expDate", "Value=08/22", ENDITEM, 
		"Name=oldCCOption", "Value=", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=seatType", "Value=Business", ENDITEM, 
		"Name=seatPref", "Value=Aisle", ENDITEM, 
		"Name=outboundFlight", "Value=023;401;10/25/2020", ENDITEM, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=returnFlight", "Value=", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		"Name=buyFlights.x", "Value=64", ENDITEM, 
		"Name=buyFlights.y", "Value=10", ENDITEM, 
		"Name=.cgifields", "Value=saveCC", ENDITEM, 
		LAST);

	web_revert_auto_header("Sec-Fetch-User");

	lr_think_time(17);

	web_url("welcome.pl_2", 
		"URL=http://127.0.0.1:1080/cgi-bin/welcome.pl?signOff=1", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}