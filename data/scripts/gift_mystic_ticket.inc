MysteryGiftScript_MysticTicket::
	setvaddress MysteryGiftScript_MysticTicket
	lock
	faceplayer
	vgoto_if_set FLAG_RECEIVED_MYSTIC_TICKET, MysticTicket_Obtained
	vgoto_if_set FLAG_CAUGHT_LUGIA, MysticTicket_Obtained
	vgoto_if_set FLAG_CAUGHT_HO_OH, MysticTicket_Obtained
	checkitem ITEM_MYSTIC_TICKET
	vgoto_if_eq VAR_RESULT, TRUE, MysticTicket_Obtained
	vmessage sText_MysticTicketForYou
	waitmessage
	waitbuttonpress
	checkitemspace ITEM_MYSTIC_TICKET
	vgoto_if_eq VAR_RESULT, FALSE, MysticTicket_NoBagSpace
	giveitem ITEM_MYSTIC_TICKET
	setflag FLAG_ENABLE_SHIP_NAVEL_ROCK
	setflag FLAG_RECEIVED_MYSTIC_TICKET
	vmessage sText_MysticTicketUseAtPort
	waitmessage
	waitbuttonpress
	release
	end

MysticTicket_NoBagSpace:
	vmessage sText_MysticTicketBagFull
	waitmessage
	waitbuttonpress
	release
	end

MysticTicket_Obtained:
	vmessage sText_MysticTicketThankYou
	waitmessage
	waitbuttonpress
	release
	end

sText_MysticTicketForYou:
	.string "Merci d'utiliser le système\nCADEAU MYST.\pVous devez être {PLAYER}.\nIl y a un ticket pour vous.$"

sText_MysticTicketUseAtPort:
	.string "Il peut être utilisé au port de\nNENUCRIQUE.\pEssayez-le pour voir de quoi \nil s'agit.$"

sText_MysticTicketThankYou:
	.string "Merci d'utiliser le système\nCADEAU MYST.$"

sText_MysticTicketBagFull:
	.string "Oh, je regrette, {PLAYER}. La POCHE\nOBJ. RARES du SAC est pleine.\pFaites de la place dans votre SAC\net revenez me voir.$"
