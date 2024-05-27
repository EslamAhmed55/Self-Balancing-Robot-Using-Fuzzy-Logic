const int NROW_FLC2 = 50;
const int NCOL_FLC2 = 50;

const float in1min_FLC2=-1.50000e+01;
const float in2min_FLC2=-1.77778e+02;
const float res1_FLC2=6.12245e-01;
const float res2_FLC2=7.25624e+00;

const PROGMEM int16_t FLC2[NROW_FLC2][NCOL_FLC2] = { 
{ -290,	-290,	-290,	-290,	-290,	-290,	-290,	-290,	-290,	-290,	-290,	-290,	-290,	-290,	-290,	-290,	-290,	-290,	-290,	-290,	-290,	-290,	-290,	-290,	-290,	-284,	-273,	-261,	-249,	-237,	-225,	-213,	-202,	-190,	-178,	-166,	-154,	-142,	-130,	-119,	-107,	-95,	-83,	-71,	-59,	-47,	-36,	-24,	-12,	0,	 },
{ -290,	-279,	-279,	-279,	-279,	-279,	-279,	-279,	-279,	-279,	-279,	-279,	-279,	-279,	-279,	-279,	-279,	-279,	-279,	-279,	-279,	-279,	-279,	-279,	-279,	-262,	-241,	-230,	-219,	-208,	-197,	-186,	-175,	-164,	-153,	-142,	-132,	-121,	-110,	-99,	-88,	-77,	-66,	-55,	-44,	-33,	-22,	-11,	0,	12,	 },
{ -290,	-279,	-270,	-270,	-270,	-270,	-270,	-270,	-270,	-270,	-270,	-270,	-270,	-270,	-270,	-270,	-270,	-270,	-270,	-270,	-270,	-270,	-270,	-269,	-268,	-251,	-222,	-204,	-194,	-183,	-173,	-163,	-153,	-143,	-132,	-122,	-112,	-102,	-92,	-82,	-71,	-61,	-51,	-41,	-31,	-20,	-10,	0,	11,	24,	 },
{ -290,	-279,	-270,	-262,	-262,	-262,	-262,	-262,	-262,	-262,	-262,	-262,	-262,	-262,	-262,	-262,	-262,	-262,	-262,	-262,	-262,	-262,	-261,	-259,	-256,	-239,	-211,	-187,	-171,	-162,	-152,	-143,	-133,	-124,	-114,	-105,	-95,	-86,	-76,	-67,	-57,	-48,	-38,	-29,	-19,	-10,	0,	10,	22,	36,	 },
{ -290,	-279,	-270,	-262,	-255,	-255,	-255,	-255,	-255,	-255,	-255,	-255,	-255,	-255,	-255,	-255,	-255,	-255,	-255,	-255,	-255,	-254,	-251,	-248,	-245,	-228,	-201,	-177,	-157,	-143,	-134,	-125,	-116,	-107,	-98,	-89,	-80,	-71,	-63,	-54,	-45,	-36,	-27,	-18,	-9,	0,	9,	20,	33,	47,	 },
{ -290,	-279,	-270,	-262,	-255,	-248,	-248,	-248,	-248,	-248,	-248,	-248,	-248,	-248,	-248,	-248,	-248,	-248,	-248,	-248,	-247,	-244,	-241,	-238,	-233,	-216,	-190,	-167,	-148,	-130,	-118,	-109,	-101,	-93,	-84,	-76,	-67,	-59,	-51,	-42,	-34,	-25,	-17,	-8,	0,	9,	19,	31,	44,	59,	 },
{ -290,	-279,	-270,	-262,	-255,	-248,	-243,	-243,	-243,	-243,	-243,	-243,	-243,	-243,	-243,	-243,	-243,	-243,	-243,	-241,	-238,	-235,	-231,	-227,	-222,	-205,	-180,	-158,	-138,	-121,	-106,	-95,	-88,	-80,	-72,	-64,	-56,	-48,	-40,	-32,	-24,	-16,	-8,	0,	8,	18,	29,	41,	55,	71,	 },
{ -290,	-279,	-270,	-262,	-255,	-248,	-243,	-238,	-238,	-238,	-238,	-238,	-238,	-238,	-238,	-238,	-238,	-238,	-236,	-233,	-230,	-226,	-221,	-216,	-211,	-194,	-169,	-148,	-129,	-113,	-98,	-85,	-75,	-68,	-60,	-53,	-45,	-38,	-30,	-23,	-15,	-8,	0,	8,	17,	27,	38,	51,	66,	83,	 },
{ -290,	-279,	-270,	-262,	-255,	-248,	-243,	-238,	-233,	-233,	-233,	-233,	-233,	-233,	-233,	-233,	-233,	-232,	-228,	-225,	-221,	-217,	-212,	-206,	-199,	-182,	-158,	-138,	-120,	-104,	-90,	-77,	-66,	-57,	-50,	-43,	-36,	-29,	-22,	-14,	-7,	0,	8,	16,	25,	36,	48,	61,	77,	95,	 },
{ -290,	-279,	-270,	-262,	-255,	-248,	-243,	-238,	-233,	-229,	-229,	-229,	-229,	-229,	-229,	-229,	-227,	-224,	-221,	-217,	-212,	-207,	-202,	-195,	-188,	-171,	-148,	-128,	-111,	-95,	-82,	-70,	-59,	-49,	-41,	-34,	-27,	-21,	-14,	-7,	0,	7,	15,	24,	34,	45,	57,	71,	88,	107,	 },
{ -290,	-279,	-270,	-262,	-255,	-248,	-243,	-238,	-233,	-229,	-225,	-225,	-225,	-225,	-225,	-224,	-220,	-217,	-213,	-209,	-204,	-198,	-192,	-185,	-177,	-159,	-137,	-118,	-101,	-87,	-74,	-62,	-51,	-42,	-33,	-26,	-20,	-13,	-7,	0,	7,	14,	23,	32,	42,	54,	67,	81,	99,	118,	 },
{ -290,	-279,	-270,	-262,	-255,	-248,	-243,	-238,	-233,	-229,	-225,	-222,	-222,	-222,	-220,	-217,	-213,	-210,	-205,	-200,	-195,	-189,	-182,	-174,	-165,	-148,	-127,	-108,	-92,	-78,	-65,	-54,	-44,	-35,	-27,	-19,	-12,	-6,	0,	7,	14,	21,	30,	40,	50,	63,	76,	92,	110,	130,	 },
{ -290,	-279,	-270,	-262,	-255,	-248,	-243,	-238,	-233,	-229,	-225,	-222,	-219,	-217,	-214,	-210,	-206,	-202,	-197,	-192,	-186,	-180,	-172,	-164,	-154,	-137,	-116,	-98,	-83,	-69,	-57,	-46,	-37,	-28,	-20,	-13,	-6,	0,	6,	13,	20,	29,	38,	48,	59,	71,	86,	102,	120,	142,	 },
{ -290,	-279,	-270,	-262,	-255,	-248,	-243,	-238,	-233,	-229,	-225,	-222,	-217,	-211,	-207,	-204,	-199,	-195,	-190,	-184,	-178,	-171,	-162,	-153,	-142,	-125,	-106,	-89,	-74,	-61,	-49,	-39,	-29,	-21,	-13,	-6,	0,	6,	12,	20,	27,	36,	45,	56,	67,	80,	95,	112,	131,	154,	 },
{ -290,	-279,	-270,	-262,	-255,	-248,	-243,	-238,	-233,	-229,	-225,	-220,	-214,	-207,	-201,	-197,	-192,	-187,	-182,	-176,	-169,	-161,	-153,	-143,	-131,	-114,	-95,	-79,	-65,	-52,	-41,	-31,	-22,	-14,	-7,	0,	6,	13,	19,	26,	34,	43,	53,	64,	76,	89,	105,	122,	142,	166,	 },
{ -290,	-279,	-270,	-262,	-255,	-248,	-243,	-238,	-233,	-229,	-224,	-217,	-210,	-204,	-197,	-190,	-185,	-180,	-174,	-168,	-160,	-152,	-143,	-132,	-120,	-102,	-84,	-69,	-55,	-43,	-33,	-23,	-15,	-7,	0,	7,	13,	20,	27,	33,	41,	50,	60,	72,	84,	98,	114,	132,	153,	178,	 },
{ -290,	-279,	-270,	-262,	-255,	-248,	-243,	-238,	-233,	-227,	-220,	-213,	-206,	-199,	-192,	-185,	-178,	-173,	-166,	-160,	-152,	-143,	-133,	-121,	-108,	-91,	-74,	-59,	-46,	-35,	-25,	-15,	-7,	0,	7,	14,	21,	28,	35,	42,	49,	57,	68,	80,	93,	107,	124,	143,	164,	190,	 },
{ -290,	-279,	-270,	-262,	-255,	-248,	-243,	-238,	-232,	-224,	-217,	-210,	-202,	-195,	-187,	-180,	-173,	-165,	-159,	-151,	-143,	-134,	-123,	-111,	-97,	-80,	-63,	-49,	-37,	-26,	-16,	-8,	0,	7,	15,	22,	29,	37,	44,	51,	59,	66,	75,	87,	101,	116,	133,	153,	175,	201,	 },
{ -290,	-279,	-270,	-262,	-255,	-248,	-243,	-236,	-228,	-221,	-213,	-205,	-197,	-190,	-182,	-174,	-166,	-159,	-151,	-143,	-134,	-124,	-113,	-100,	-85,	-68,	-53,	-39,	-28,	-17,	-8,	0,	8,	15,	23,	31,	39,	46,	54,	62,	70,	77,	85,	95,	109,	125,	143,	163,	186,	213,	 },
{ -290,	-279,	-270,	-262,	-255,	-248,	-241,	-233,	-225,	-217,	-209,	-200,	-192,	-184,	-176,	-168,	-160,	-151,	-143,	-135,	-126,	-115,	-103,	-90,	-74,	-57,	-42,	-30,	-18,	-9,	0,	8,	16,	25,	33,	41,	49,	57,	65,	74,	82,	90,	98,	106,	118,	134,	152,	173,	197,	225,	 },
{ -290,	-279,	-270,	-262,	-255,	-247,	-238,	-230,	-221,	-212,	-204,	-195,	-186,	-178,	-169,	-160,	-152,	-143,	-134,	-126,	-117,	-106,	-94,	-79,	-63,	-46,	-32,	-20,	-9,	0,	9,	17,	26,	35,	43,	52,	61,	69,	78,	87,	95,	104,	113,	121,	130,	143,	162,	183,	208,	237,	 },
{ -290,	-279,	-270,	-262,	-254,	-244,	-235,	-226,	-217,	-207,	-198,	-189,	-180,	-171,	-161,	-152,	-143,	-134,	-124,	-115,	-106,	-97,	-84,	-69,	-51,	-34,	-21,	-10,	0,	9,	18,	28,	37,	46,	55,	65,	74,	83,	92,	101,	111,	120,	129,	138,	147,	157,	171,	194,	219,	249,	 },
{ -290,	-279,	-270,	-261,	-251,	-241,	-231,	-221,	-212,	-202,	-192,	-182,	-172,	-162,	-153,	-143,	-133,	-123,	-113,	-103,	-94,	-84,	-74,	-58,	-40,	-23,	-11,	0,	10,	20,	30,	39,	49,	59,	69,	79,	89,	98,	108,	118,	128,	138,	148,	157,	167,	177,	187,	204,	230,	261,	 },
{ -290,	-279,	-269,	-259,	-248,	-238,	-227,	-216,	-206,	-195,	-185,	-174,	-164,	-153,	-143,	-132,	-121,	-111,	-100,	-90,	-79,	-69,	-58,	-48,	-28,	-11,	0,	11,	21,	32,	42,	53,	63,	74,	84,	95,	106,	116,	127,	137,	148,	158,	169,	179,	190,	201,	211,	222,	241,	273,	 },
{ -290,	-279,	-268,	-256,	-245,	-233,	-222,	-211,	-199,	-188,	-176,	-165,	-154,	-142,	-131,	-120,	-108,	-97,	-85,	-74,	-63,	-51,	-40,	-28,	-17,	0,	11,	23,	34,	46,	57,	68,	80,	91,	102,	114,	125,	137,	148,	159,	171,	182,	194,	205,	216,	228,	239,	251,	262,	284,	 },
{ -284,	-262,	-251,	-239,	-228,	-216,	-205,	-194,	-182,	-171,	-159,	-148,	-137,	-125,	-114,	-102,	-91,	-80,	-68,	-57,	-46,	-34,	-23,	-11,	0,	17,	28,	40,	51,	63,	74,	85,	97,	108,	120,	131,	142,	154,	165,	176,	188,	199,	211,	222,	233,	245,	256,	268,	279,	290,	 },
{ -273,	-241,	-222,	-211,	-201,	-190,	-179,	-169,	-158,	-148,	-137,	-127,	-116,	-106,	-95,	-84,	-74,	-63,	-53,	-42,	-32,	-21,	-11,	0,	11,	28,	48,	58,	69,	79,	90,	100,	111,	121,	132,	143,	153,	164,	174,	185,	195,	206,	216,	227,	238,	248,	259,	269,	279,	290,	 },
{ -261,	-230,	-204,	-187,	-177,	-167,	-157,	-148,	-138,	-128,	-118,	-108,	-98,	-89,	-79,	-69,	-59,	-49,	-39,	-30,	-20,	-10,	0,	11,	23,	40,	58,	74,	84,	94,	103,	113,	123,	133,	143,	153,	162,	172,	182,	192,	202,	212,	221,	231,	241,	251,	261,	270,	279,	290,	 },
{ -249,	-219,	-194,	-171,	-157,	-147,	-138,	-129,	-120,	-111,	-101,	-92,	-83,	-74,	-65,	-55,	-46,	-37,	-28,	-18,	-9,	0,	10,	21,	34,	51,	69,	84,	97,	106,	115,	124,	134,	143,	152,	161,	171,	180,	189,	198,	207,	217,	226,	235,	244,	254,	262,	270,	279,	290,	 },
{ -237,	-208,	-183,	-162,	-143,	-130,	-121,	-113,	-104,	-95,	-87,	-78,	-69,	-61,	-52,	-43,	-35,	-26,	-17,	-9,	0,	9,	20,	32,	46,	63,	79,	94,	106,	117,	126,	134,	143,	152,	160,	169,	178,	186,	195,	204,	212,	221,	230,	238,	247,	255,	262,	270,	279,	290,	 },
{ -225,	-197,	-173,	-152,	-134,	-118,	-106,	-98,	-90,	-82,	-74,	-65,	-57,	-49,	-41,	-33,	-25,	-16,	-8,	0,	9,	18,	30,	42,	57,	74,	90,	103,	115,	126,	135,	143,	151,	160,	168,	176,	184,	192,	200,	209,	217,	225,	233,	241,	248,	255,	262,	270,	279,	290,	 },
{ -213,	-186,	-163,	-143,	-125,	-109,	-95,	-85,	-77,	-70,	-62,	-54,	-46,	-39,	-31,	-23,	-15,	-8,	0,	8,	17,	28,	39,	53,	68,	85,	100,	113,	124,	134,	143,	151,	159,	166,	174,	182,	190,	197,	205,	213,	221,	228,	236,	243,	248,	255,	262,	270,	279,	290,	 },
{ -201,	-175,	-153,	-133,	-116,	-101,	-87,	-75,	-66,	-59,	-51,	-44,	-37,	-29,	-22,	-15,	-7,	0,	8,	16,	26,	37,	49,	63,	80,	97,	111,	123,	134,	143,	151,	159,	165,	173,	180,	187,	195,	202,	210,	217,	224,	232,	238,	243,	248,	255,	262,	270,	279,	290,	 },
{ -190,	-164,	-143,	-124,	-107,	-93,	-80,	-68,	-57,	-49,	-42,	-35,	-28,	-21,	-14,	-7,	0,	7,	15,	25,	35,	46,	59,	74,	91,	108,	121,	133,	143,	152,	160,	166,	173,	178,	185,	192,	199,	206,	213,	220,	227,	233,	238,	243,	248,	255,	262,	270,	279,	290,	 },
{ -178,	-153,	-132,	-114,	-98,	-84,	-72,	-60,	-50,	-41,	-33,	-27,	-20,	-13,	-7,	0,	7,	15,	23,	33,	43,	55,	69,	84,	102,	120,	132,	143,	152,	160,	168,	174,	180,	185,	190,	197,	204,	210,	217,	224,	229,	233,	238,	243,	248,	255,	262,	270,	279,	290,	 },
{ -166,	-142,	-122,	-105,	-89,	-76,	-64,	-53,	-43,	-34,	-26,	-19,	-13,	-6,	0,	7,	14,	22,	31,	41,	52,	65,	79,	95,	114,	131,	143,	153,	161,	169,	176,	182,	187,	192,	197,	201,	207,	214,	220,	225,	229,	233,	238,	243,	248,	255,	262,	270,	279,	290,	 },
{ -154,	-131,	-112,	-95,	-80,	-67,	-56,	-45,	-36,	-27,	-20,	-12,	-6,	0,	6,	13,	21,	29,	39,	49,	61,	74,	89,	106,	125,	142,	153,	162,	171,	178,	184,	190,	195,	199,	204,	207,	211,	217,	222,	225,	229,	233,	238,	243,	248,	255,	262,	270,	279,	290,	 },
{ -142,	-120,	-102,	-86,	-71,	-59,	-48,	-38,	-29,	-20,	-13,	-6,	0,	6,	13,	20,	28,	37,	46,	57,	69,	83,	98,	116,	137,	154,	164,	172,	180,	186,	192,	197,	202,	206,	210,	214,	217,	219,	222,	225,	229,	233,	238,	243,	248,	255,	262,	270,	279,	290,	 },
{ -130,	-110,	-92,	-76,	-63,	-50,	-40,	-30,	-21,	-14,	-7,	0,	6,	12,	19,	27,	35,	44,	54,	65,	78,	92,	108,	127,	148,	165,	174,	182,	189,	195,	200,	205,	210,	213,	217,	220,	222,	222,	222,	225,	229,	233,	238,	243,	248,	255,	262,	270,	279,	290,	 },
{ -118,	-99,	-81,	-67,	-54,	-42,	-32,	-23,	-14,	-7,	0,	7,	13,	20,	26,	33,	42,	51,	62,	74,	87,	101,	118,	137,	159,	177,	185,	192,	198,	204,	209,	213,	217,	220,	224,	225,	225,	225,	225,	225,	229,	233,	238,	243,	248,	255,	262,	270,	279,	290,	 },
{ -107,	-88,	-71,	-57,	-45,	-34,	-24,	-15,	-7,	0,	7,	14,	21,	27,	34,	41,	49,	59,	70,	82,	95,	111,	128,	148,	171,	188,	195,	202,	207,	212,	217,	221,	224,	227,	229,	229,	229,	229,	229,	229,	229,	233,	238,	243,	248,	255,	262,	270,	279,	290,	 },
{ -95,	-77,	-61,	-48,	-36,	-25,	-16,	-8,	0,	7,	14,	22,	29,	36,	43,	50,	57,	66,	77,	90,	104,	120,	138,	158,	182,	199,	206,	212,	217,	221,	225,	228,	232,	233,	233,	233,	233,	233,	233,	233,	233,	233,	238,	243,	248,	255,	262,	270,	279,	290,	 },
{ -83,	-66,	-51,	-38,	-27,	-17,	-8,	0,	8,	15,	23,	30,	38,	45,	53,	60,	68,	75,	85,	98,	113,	129,	148,	169,	194,	211,	216,	221,	226,	230,	233,	236,	238,	238,	238,	238,	238,	238,	238,	238,	238,	238,	238,	243,	248,	255,	262,	270,	279,	290,	 },
{ -71,	-55,	-41,	-29,	-18,	-8,	0,	8,	16,	24,	32,	40,	48,	56,	64,	72,	80,	88,	95,	106,	121,	138,	158,	180,	205,	222,	227,	231,	235,	238,	241,	243,	243,	243,	243,	243,	243,	243,	243,	243,	243,	243,	243,	243,	248,	255,	262,	270,	279,	290,	 },
{ -59,	-44,	-31,	-19,	-9,	0,	8,	17,	25,	34,	42,	51,	59,	67,	76,	84,	93,	101,	109,	118,	130,	148,	167,	190,	216,	233,	238,	241,	244,	247,	248,	248,	248,	248,	248,	248,	248,	248,	248,	248,	248,	248,	248,	248,	248,	255,	262,	270,	279,	290,	 },
{ -47,	-33,	-20,	-9,	0,	9,	18,	27,	36,	45,	54,	63,	71,	80,	89,	98,	107,	116,	125,	134,	143,	157,	177,	201,	228,	245,	248,	251,	254,	255,	255,	255,	255,	255,	255,	255,	255,	255,	255,	255,	255,	255,	255,	255,	255,	255,	262,	270,	279,	290,	 },
{ -36,	-22,	-10,	0,	10,	19,	29,	38,	48,	57,	67,	76,	86,	95,	105,	114,	124,	133,	143,	152,	162,	171,	187,	211,	239,	256,	259,	261,	262,	262,	262,	262,	262,	262,	262,	262,	262,	262,	262,	262,	262,	262,	262,	262,	262,	262,	262,	270,	279,	290,	 },
{ -24,	-11,	0,	10,	20,	31,	41,	51,	61,	71,	82,	92,	102,	112,	122,	132,	143,	153,	163,	173,	183,	194,	204,	222,	251,	268,	269,	270,	270,	270,	270,	270,	270,	270,	270,	270,	270,	270,	270,	270,	270,	270,	270,	270,	270,	270,	270,	270,	279,	290,	 },
{ -12,	0,	11,	22,	33,	44,	55,	66,	77,	88,	99,	110,	121,	132,	142,	153,	164,	175,	186,	197,	208,	219,	230,	241,	262,	279,	279,	279,	279,	279,	279,	279,	279,	279,	279,	279,	279,	279,	279,	279,	279,	279,	279,	279,	279,	279,	279,	279,	279,	290,	 },
{ 0,	12,	24,	36,	47,	59,	71,	83,	95,	107,	119,	130,	142,	154,	166,	178,	190,	202,	213,	225,	237,	249,	261,	273,	284,	290,	290,	290,	290,	290,	290,	290,	290,	290,	290,	290,	290,	290,	290,	290,	290,	290,	290,	290,	290,	290,	290,	290,	290,	290,	 },
};