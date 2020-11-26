Action()
{
	
	lr_start_transaction("checkTicket");

	
	lr_start_transaction("1_getWebtours");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");
	
	web_reg_find("Text=<title>Web Tours</title>",
		LAST);

	web_url("WebTours", 
		"URL=http://127.0.0.1:1080/WebTours/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "2&3");

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	web_revert_auto_header("Sec-Fetch-User");

	web_add_auto_header("Sec-Fetch-Dest", 
		"frame");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_header("Origin", 
		"http://127.0.0.1:1080");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");
	lr_end_transaction("1_getWebtours", LR_AUTO);
	
	lr_start_transaction("2_login");

	web_reg_find("Text=User password was correct",
		LAST);

	web_submit_form("login.pl", 
		"Snapshot=t2.inf", 
		ITEMDATA, 
		"Name=username", "Value={login}", ENDITEM, 
		"Name=password", "Value={password}", ENDITEM, 
		LAST);

	web_add_auto_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");
	
	lr_end_transaction("2_login", LR_AUTO);
	
	lr_start_transaction("3_Itinerary");

	web_reg_find("Text=<!-- Flight #1 -->",
		LAST);
	
	web_image("Itinerary Button", 
		"Alt=Itinerary Button", 
		"Snapshot=t3.inf", 
		LAST);

	web_revert_auto_header("Sec-Fetch-User");
	
	lr_end_transaction("3_Itinerary", LR_AUTO);
	
	lr_start_transaction("4_signoff");

	web_reg_find("Text=A Session ID has been created and loaded",
		LAST);

	web_image("SignOff Button", 
		"Alt=SignOff Button", 
		"Snapshot=t4.inf", 
		LAST);
	
	lr_end_transaction("4_signoff", LR_AUTO);
	
	lr_end_transaction("checkTicket", LR_AUTO);



	return 0;
}