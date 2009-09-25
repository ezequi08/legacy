/* -*- Mode: C; tab-width: 2 -*- */

{
	/*
		einmal kurz druecken
		clickstate_free[0] : ignore
		clickstate[0]      : low
		clickstate_free[1] : high
	*/
	if ( (rb[taster_i].clickstate[0] <= T_CLICKDELAY) && 
			 (rb[taster_i].clickstate_free[1] > T_CLICKDELAY))
		{
			switch(vortrag_cur.onoff){
			case A_SW_ON:
				{
					/*
						wenn das licht schon an ist, schalten wir es aus
					*/
					vortrag_cur.onoff=A_SW_OFF;
					add_queue_v(QUEUE_A5,&vortrag_cur);
				}
				break;
			case A_SW_OFF:
				{
					/*
						squenz hinzufuegen
						t=0 an
						0<t<=20sec = hell  k=1,2,3,4
						20<t<=25 = dunkel  k=5
						25<t<30 = hell     k=6
						t=3 aus
					*/
					vortrag_cur.onoff=A_SW_ON;
					vortrag_cur.bright_tafel=MAXHELL;
					vortrag_cur.bright_beamer=MAXHELL;
					vortrag_cur.bright_schraenke=MAXHELL;
					vortrag_cur.bright_flipper=MAXHELL;
					/*
						20 sekunden
					*/
					for (i=0;i<4;i++)	{
						add_queue_v(QUEUE_A9,&vortrag_cur);
					}
					vortrag_cur.bright_tafel=MAXDUNKEL;
					vortrag_cur.bright_beamer=MAXDUNKEL;
					vortrag_cur.bright_schraenke=MAXDUNKEL;
					vortrag_cur.bright_flipper=MAXDUNKEL;
					/*
						5 sekunden
					*/
					add_queue_v(QUEUE_A9,&vortrag_cur);

					vortrag_cur.bright_tafel=MAXHELL;
					vortrag_cur.bright_beamer=MAXHELL;
					vortrag_cur.bright_schraenke=MAXHELL;
					vortrag_cur.bright_flipper=MAXHELL;
					/*
						5 sekunden
					*/
					add_queue_v(QUEUE_A9,&vortrag_cur);

					/*
						aus
					*/
					vortrag_cur.onoff=A_SW_OFF;
					add_queue_v(QUEUE_A5,&vortrag_cur);
				}
				break;
			default:
				break;
			}
		}

	/*
		einmal lang - und halten
		clickstate_free[0] : ignore
		clickstate[0]      : high
	*/
	else if ( (rb[taster_i].clickstate[0] > T_CLICKDELAY) )
		{
			/*
				sichergehen, dass die lampen alle an sind
				klar, das signal geht sehr oft raus, aber das ist ok
			*/
			vortrag_cur.onoff=A_SW_ON;
			/*
				alle Lampen gleich hell machen. fipper ist ref
			*/
			vortrag_cur.bright_tafel=vortrag_cur.bright_flipper;
			vortrag_cur.bright_beamer=vortrag_cur.bright_flipper;
			vortrag_cur.bright_schraenke=vortrag_cur.bright_flipper;
			if(vortrag_cur.dimDirection == MACHHELL){
				vortrag_cur.bright_tafel--;
				vortrag_cur.bright_beamer--;
				vortrag_cur.bright_schraenke--;
				vortrag_cur.bright_flipper--;
			} else {
				vortrag_cur.bright_tafel++;
				vortrag_cur.bright_beamer++;
				vortrag_cur.bright_schraenke++;
				vortrag_cur.bright_flipper++;
			}
			if(vortrag_cur.bright_flipper <= MAXHELL) vortrag_cur.dimDirection = MACHDUNKEL;
			if(vortrag_cur.bright_flipper >= MAXDUNKEL)	vortrag_cur.dimDirection = MACHHELL;

			add_queue_v(QUEUE_A5,&vortrag_cur);
		}

	/*
		zwei mal schnell klicken
		clickstate_free[0] : ignore
		clickstate[0]      : low
		clickstate_free[1] : low
		clickstate[1]      : low
		clickstate_free[2] : low
	*/
	else if ( (rb[taster_i].clickstate[0] <= T_CLICKDELAY) &&
						(rb[taster_i].clickstate_free[1] <= T_CLICKDELAY) &&
						(rb[taster_i].clickstate[1] <= T_CLICKDELAY) && 
						(rb[taster_i].clickstate_free[2] > T_CLICKDELAY) )
		{
			add_queue_v(QUEUE_A5,&vortrag_vortrag1);
		}
	/*
		druecken loslassen druecken halten
		clickstate_free[0] : ignore
		clickstate[0]      : low
		clickstate_free[1] : low
		clickstate[1]      : high
	*/
	else if ( (rb[taster_i].clickstate[0] <= T_CLICKDELAY) &&
						(rb[taster_i].clickstate_free[1] <= T_CLICKDELAY) &&
						(rb[taster_i].clickstate[1] > T_CLICKDELAY))
		{

		}
	/*
		drei mal schnell klicken
		clickstate_free[0] : ignore
		clickstate[0]      : low
		clickstate_free[1] : low
		clickstate[1]      : low
		clickstate_free[2] : low
		clickstate[2]      : low

	*/
	else if ( (rb[taster_i].clickstate[0] <= T_CLICKDELAY) &&
						(rb[taster_i].clickstate_free[1] <= T_CLICKDELAY) &&
						(rb[taster_i].clickstate[1] <= T_CLICKDELAY) && 
						(rb[taster_i].clickstate_free[2] <= T_CLICKDELAY) &&
						(rb[taster_i].clickstate[2] <= T_CLICKDELAY) )
		{
			add_queue_v(QUEUE_A5,&vortrag_vortrag2);
		}
	/*
		druecken ->loslassen, druecken->loslassen, druecken->halten
		clickstate_free[0] : ignore
		clickstate[0]      : low
		clickstate_free[1] : low
		clickstate[1]      : low
		clickstate_free[2] : low
		clickstate[2]      : high
	*/
	else if ( (rb[taster_i].clickstate[0] <= T_CLICKDELAY) &&
						(rb[taster_i].clickstate_free[1] <= T_CLICKDELAY) &&
						(rb[taster_i].clickstate[1] <= T_CLICKDELAY) && 
						(rb[taster_i].clickstate_free[2] <= T_CLICKDELAY) &&
						(rb[taster_i].clickstate[2] > T_CLICKDELAY) )
		{

		}

	ringbuffer_flush(&(rb[taster_i]));
}