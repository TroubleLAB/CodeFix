/*
Deschidem input_main.cpp și căutam
In input_main.cpp cautam:
*/

LPCHARACTER newmember = CHARACTER_MANAGER::instance().Find(vid);

/*
Mai jos găsiți:
*/

if (!ch->IsPC())
					return SubPacketLen;

/* 
Și o modificați în:    
*/

return (!ch->IsPC() || !newmember->IsPC()) ? SubPacketLen : 0; /* @tlb_fix */
