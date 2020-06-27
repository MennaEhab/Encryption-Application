# Encryption Application
 RC4 algorithm
 
 Description : 
               Encryption of a text up to 1000 ASCII characters, using a key consisting of 8 ASCII characters using the CR4 algorithm 
 
 Programming techniques:
 - Using of MFC.
 - Using classes (OOP) .
 
 Inputs :
 - ASCII key .
 - ASCII text.
 
 
 Output :
 - encrypted bytes in hex format. 

The code has  : 
 - the CR4 encryption algorthims (RC4.cpp - RC4.h) 
 - MFC application code (example.cpp - resources.h)
 
Detailed description :

the application can handle any number of charaters in plaintext up to 1000 (tested) , also handle error in input empty key of empty text an error message pops up ask the user to enter the missing data .

test cases aplied : 
simple test case 
 - key : pwd12
 - text : Math 310 Proves!
 - output : 6c	a8	6f	e3	cb	c3	3c	16	25	95	c3	e7	8b	9c	97	bc
 
 corner testcase 
 - confirmed the output with online encrypter :     http://rc4.online-domain-tools.com/
 - key : menna
 - text : 
 xut I must explain to you how all this mistaken idea of denouncing pleasure and praising pain was born and I will give you a complete account of the system and expound the actual teachings of the great explorer of the truth the masterbuilder of human happiness No one rejects dislikes or avoids pleasure itself because it is pleasure but because those who do not know how to pursue pleasure rationally encounter consequences that are extremely painful Nor again is there anyone who loves or pursues or desires to obtain pain of itself because it is pain but because occasionally circumstances occur in which toil and pain can procure him some great pleasure To take a trivial example which of us ever undertakes laborious physical exercise except to obtain some advantage from it But who has any right to find fault with a man who chooses to enjoy a pleasure that has no annoying consequences or one who avoids a pain that produces no resultant pleasure On the other handwe denoun
 
 - coutput : 
 85	a0	b0	89	af	42	5f	71	88	0e	f1	30	1d	03	d3	3f
f1	97	9e	58	dd	f8	c4	3d	78	ca	a8	36	7a	6c	3c	b2
ac	c5	c3	e9	6b	7b	b0	6a	34	8c	7a	a1	a3	2c	77	e9
82	6f	91	33	53	e9	a6	2e	7f	eb	76	c2	95	90	b2	7d
e1	5d	c5	87	cb	d1	4b	aa	fe	2d	a5	ca	91	7e	40	97
6f	8a	bf	b8	39	47	28	4d	54	6a	1d	3f	51	af	39	79
f2	bf	d7	96	b8	d0	78	bf	4c	ef	67	16	09	7d	72	50
e8	de	bf	36	4c	89	96	58	79	3d	f7	e9	76	c2	a4	9b
6d	ef	38	fd	2b	2a	3c	28	8a	2e	57	a0	07	81	6f	e0
d0	6a	8a	71	7a	a7	3c	d3	de	43	a5	11	a1	d3	29	44
30	1d	f4	1e	22	c8	2b	8d	24	6e	24	7a	c6	21	f1	d0
54	fa	de	e1	b9	0d	83	a8	04	cd	6b	60	64	3a	f5	d3
82	6c	3a	b2	44	38	7a	3b	81	f1	1e	30	bb	bb	b0	f1
41	04	75	47	37	b9	1d	0c	8d	48	70	ca	d1	55	50	8b
7a	7f	80	9a	f5	76	50	87	52	e0	0e	4b	c2	f9	9b	79
f7	b2	12	e0	b3	24	87	01	8d	47	04	de	5d	54	cc	fd
ae	cd	15	ff	fb	a2	59	d9	8c	fc	41	52	c3	14	ed	55
a3	9b	3a	80	ea	f9	56	2c	fc	0b	ac	fd	ca	2e	9b	6c
a8	cb	6f	62	e2	b6	a1	5a	2e	1e	84	6d	07	e3	ae	9e
a6	a0	67	af	ee	13	80	d6	07	fc	9c	62	46	6b	02	9e
b7	bd	dc	b4	36	ed	76	73	6d	4a	56	20	9f	87	0f	84
7d	25	89	0d	2c	dd	9a	58	48	02	7b	08	a0	b5	81	66
dc	b6	df	f4	48	9d	81	ec	ac	93	10	82	0e	99	62	83
1e	9a	b2	9c	8b	18	82	7b	d4	eb	dc	13	87	5f	2d	e2
90	c5	86	86	51	97	97	3a	36	ed	7a	44	65	bf	ea	b2
bb	63	75	c3	3d	a7	f4	e5	94	1e	c2	ab	f7	42	08	85
7b	d9	08	26	fc	7f	1d	b1	69	20	5a	57	48	74	45	1a
72	6f	e2	d9	14	df	cf	a9	da	ff	f5	ae	34	24	6a	c3
17	bd	e6	7b	bf	e7	18	3e	75	40	20	71	7a	ba	d9	b3
a9	26	ee	89	7d	02	34	42	22	98	f5	5f	91	01	b9	96
16	9c	b7	32	6f	64	31	75	f9	d6	51	62	f9	f6	3f	6b
35	a3	2e	39	74	65	f6	0e	e7	45	67	b1	fb	c9	9e	44
26	26	a8	b4	39	cf	44	ca	86	2d	47	df	dc	dd	22	fd
a6	15	ff	11	14	06	b9	a6	08	b7	25	25	fb	33	08	c2
2a	7c	b1	7d	fd	9b	90	76	70	f4	2e	02	39	bd	04	79
a7	00	59	f4	1d	0e	06	d4	b2	db	77	b0	e0	dd	f6	f8
28	a8	56	66	5c	2d	ab	db	b1	a4	8a	f5	fb	b6	47	18
f4	ca	1d	5f	56	3f	ea	f2	34	74	ae	44	8d	1d	e6	2f
47	78	34	ca	f3	6d	0b	3e	b9	ad	d4	89	95	d0	2d	b3
ad	ad	b2	4e	75	2f	84	ed	ac	47	ed	ef	e2	0a	95	99
77	57	bf	c9	2e	dd	f2	42	07	2a	df	38	b9	e9	3e	d9
14	5d	b2	76	d4	ff	fb	93	4a	3e	b2	94	45	88	5f	ab
9c	6d	8d	69	83	7f	8e	78	28	a6	cf	f5	f9	88	f3	fe
bf	4e	9c	05	25	e9	61	d4	33	87	cb	06	d8	01	98	f1
87	0a	fa	d4	c6	9f	e9	c1	c5	a1	e2	13	32	d8	3e	7e
4d	2a	f5	b4	4f	15	b6	90	1b	82	47	1c	fc	90	04	c4
4f	2f	ba	d6	1e	6a	f2	aa	40	0a	3b	c6	39	ca	14	32
b8	47	6d	95	48	71	16	7a	16	9f	ce	8d	dc	b3	94	3a
a1	b4	38	69	74	38	1c	e1	2b	18	01	8e	89	6b	ed	6b
f1	47	2f	aa	4a	71	33	4c	b2	bd	92	13	d4	af	44	e0
99	5b	33	d2	97	ad	b0	32	22	c6	31	eb	9a	6b	b6	07
f7	f7	c4	36	ad	c2	fe	8c	a3	e4	87	27	87	41	20	c9
17	61	08	b6	7b	e0	d7	e1	30	d3	63	ab	0f	e8	43	70
67	51	eb	2b	d1	80	f6	cb	6e	41	b3	fc	00	b5	0c	54
51	93	6f	1a	8a	4f	95	c7	cf	86	8a	65	42	06	1d	78
6b	22	f0	a3	07	1c	81	fc	83	a3	30	9e	1c	81	5c	99
ae	8d	27	2a	bf	ff	65	68	44	6c	07	10	6b	9f	5a	d0
45	b8	b2	82	e8	94	af	5d	ca	d1	4c	53	0c	4c	03	7f
cd	92	16	01	0f	41	d0	4b	04	07	7b	d5	54	0d	b0	05
a9	62	3a	c4	73	d6	bd	6a	cf	b4	ef	13	ac	8d	50	c5
fa	ec	f9	a8	4a	b8	0c	2b	ab	88	b2	52	96	74	7a	d6
ce	a3	49	b1
 
 
 
 
