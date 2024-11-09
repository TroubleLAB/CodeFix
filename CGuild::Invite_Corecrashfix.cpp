/*
Deschidem input_main.cpp și căutam:
*/

LPCHARACTER newmember = CHARACTER_MANAGER::instance().Find(vid);

/*
Mai jos găsim:
*/

if (!ch->IsPC())
	return SubPacketLen;

/* 
Și modificăm în: 
*/

return (!ch->IsPC() || !newmember->IsPC()) ? SubPacketLen : 0; /* @tlb_fix */
