#include <stdio.h>

int main(void)
{
	int weight[] = {5713,	6936,	8764,	6702,	8535,	8654,	8710,	8332,	4948,	7627,	5472,	5311,	7331,	8719,	6135,	6672,	5786,	7113,	5292,	6923,	5683,	7020,	8595,	8606,	6837,	7003,	7415,	8372,	8429,	5726,	8323,	6442,	8672,	6488,	6932,	5884,	6811,	7785,	7189,	5531,	6323,	8561,	8283,	5114,	6669,	7217,	8307,	6599,	6961,	8695,	6026,	5580,	6010,	4954,	8725,	4955,	5532,	7736,	5372,	8712,	8343,	5375,	5931,	6449,	8223,	5844,	5931,	5307,	5436,	6405,	8599,	6302,	8617,	8222,	5985,	8216,	5044,	5259,	6523,	7526,	8702,	5878,	7559,	5366,	5362,	7393,	6633,	8781,	6289,	6470,	5342,	7278,	5348,	8677,	5779,	5763,	5718,	8678,	6406,	8774,	5931,	7324,	6819,	6393,	5027,	7545,	8385,	8795,	8277,	8059,	6362,	6980,	5899,	5828,	6707,	7149,	5621,	7287,	5958,	6506,	6517,	5710,	5504,	7070,	8797,	6840,	7112,	6063,	7014,	5419,	7514,	7431,	7725,	5310,	6892,	8342,	4979,	6219,	6321,	6924,	7662,	8407,	5745,	8599,	5395,	8461,	7914,	5343,	5187,	4930,	4978,	8467,	6237,	7908,	6210,	7498,	6816,	7648,	8279,	8075,	7933,	7168,	5119,	7614,	7870,	7254,	7866,	6903,	8151,	8567,	8629,	5767,	6165,	6001,	7657,	6814,	8039,	6780,	8007,	6572,	5859,	8251,	5528,	5837,	5024,	8124,	5743,	5815,	7816,	5312,	7596,	7025,	4966,	5448,	6912,	8497,	6365,	6139,	8257,	6094,	8701,	8771,	6018,	8097,	5556,	6121,	8568,	6811,	8224,	4982,	5117,	8661,	8258,	5030,	8354,	5993,	7363,	6071,	8332,	6350,	5179,	7543,	6175,	5217,	8176,	7765,	5738,	8103,	5281,	7708,	7179,	5183,	8506,	5636,	6834,	7958,	5776,	6045,	8371,	8334,	6059,	8100,	6342,	5910,	7329,	7848,	8430,	5541,	5838,	6332,	7196,	6870,	7429,	6513,	6648,	6460,	5359,	5271,	7066,	6784,	5927,	5673,	6284,	7451,	6827,	8045,	8793,	7040,	5730,	8632,	8354,	5646,	6622,	6205,	6475,	6486,	5533,	8494,	7520,	6924,	5625,	6719,	4935,	5829,	5355,	4984,	6781,	5359,	6536,	8422,	7631,	5762,	7549,	6445,	7312,	6856,	7622,	6677,	5964,	7217,	5639,	5442,	4900,	8259,	7674,	6165,	7046,	6080,	6969,	6037,	7409,	6105,	6727,	7296,	5523,	7518,	5067,	6485,	8367,	7863,	8042,	5135,	7323,	7890,	6252,	5649,	5674,	8598,	7952,	6328,	8680,	5738,	5877,	5800,	5775,	6297,	5496,	5687,	7428,	4908,	8062,	6788,	8560,	6962,	5121,	5931,	6244,	5297,	6361,	5927,	7643,	7639,	7511,	5241,	7246,	5793,	5560,	6753,	5843,	4991,	6113,	7233,	7201,	6118,	5478,	5304,	6347,	5629,	4966,	6012,	6340,	5435,	5782,	7487,	8168,	6557,	8041,	5346,	8407,	7534,	5380,	7264,	6288,	8775,	7901,	7646,	6869,	5436,	8426,	5378,	7465,	5177,	8447,	5311,	6369,	6847,	6037,	6481,	8303,	6011,	7180,	8182,	6435,	5849,	6898,	7660,	6575,	5469,	7482,	6995,	8577,	6711,	5045,	7871,	5692,	7998,	8254,	6978,	6408,	6426,	5693,	6727,	7250,	7219,	6370,	6358,	6720,	8020,	6557,	7042,	6098,	5710,	5700,	7942,	7056,	5426,	8022,	7280,	4911,	8455,	7791,	6788,	6226,	6459,	5653,	6238,	8210,	7115,	5373,	4913,	8405,	6687,	8783,	5416,	6965,	4995,	8240,	8469,	7546,	5156,	5362,	8288,	5793,	6734,	6618,	8268,	7256,	5955,	7616,	8387,	8284,	5479,	8320,	7435,	7055,	4935,	7030,	7045,	4993,	8259,	5349,	8160,	7022,	8334,	6394,	7351,	7243,	6537,	4964,	7612,	6965,	7314,	5948,	4980,	8581,	6616,	8505,	8707,	6802,	5138,	8081,	8233,	4925,	6880,	8378,	8426,	8080,	6874,	5084,	5688,	6442,	8671,	6834,	6777,	6807,	6124,	7952,	8448,	5707,	7670,	6405,	5289,	7289,	7155,	5210,	8030,	7249,	5822,	8523,	6609,	8674,	7663,	7329,	8074,	8458,	6530,	7911,	8715,	5515,	6704,	7354,	6575,	8239,	8620,	8224,	8062,	8422,	8742,	5184,	8488,	7544,	7285,	6042,	6907,	5080,	8396,	8758,	7909,	6098,	8120,	6041,	8784,	8351,	7343,	8063,	8332,	5225,	8512,	7484,	8668,	6228,	5375,	5324,	6728,	4936,	5482,	6684,	7642,	5151,	7085,	5578,	7478,	5520,	8512,	5910,	5369,	5239,	7681,	7703,	5378,	7735,	5004,	5757,	8035,	5299,	5451,	7322,	5917,	7653,	8401,	6481,	7026,	7010,	7061,	7036,	6489,	5682,	8362,	7532,	7463,	7676,	7731,	5696,	8241,	5742,	8246,	6020,	5872,	5098,	6666,	5118,	6807,	6676,	6037,	6289,	6423,	8071,	5342,	8545,	8212,	5890,	5652,	6906,	7868,	6162,	7339,	8796,	5163,	5617,	6111,	7984,	5498,	7079,	7716,	7604,	8370,	8124,	5544,	8607,	6549,	6513,	6402,	8161,	5098,	7038,	5317,	5100,	4996,	5391,	8066,	7720,	5436,	7625,	5044,	7197,	6386,	5553,	8194,	6062,	7941,	8500,	8085,	7841,	7982,	5727,	6811,	4946,	7974,	8636,	6359,	7497,	5435,	8602,	6305,	6861,	6152,	8409,	6016,	7555,	7781,	5185,	6560,	8009,	6882,	6751,	5148,	5679,	8200,	5266,	6506,	5342,	5264,	6308,	8191,	5101,	5056,	7138,	5070,	5495,	6598,	7541,	7821,	6098,	5117,	6388,	6017,	5630,	4915,	7114,	7227,	8114,	7480,	7588,	6697,	8239,	7293,	5764,	6813,	7005,	7536,	7966,	7135,	6540,	7149,	4983,	8571,	6744,	7107,	5569,	6059,	6492,	5562,	6604,	5610,	6387,	8103,	7130,	7138,	8631,	6299,	6127,	7542,	5576,	8729,	7709,	6199,	8483,	8679,	8200,	7292,	6975,	5086,	8139,	6916,	7464,	5792,	6017,	8169,	7298,	8636,	5010,	5975,	7771,	7585,	5666,	8074,	7731,	6572,	7721,	8615,	8706,	6322,	5494,	8063,	5344,	8620,	8062,	7785,	8432,	8523,	7541,	8424,	4948,	8319,	5941,	5288,	8023,	6279,	5119,	6059,	7186,	7656,	6861,	5453,	5283,	8389,	5731,	5591,	6399,	5289,	5115,	7065,	6003,	7919,	6461,	5876,	8552,	5540,	7316,	8055,	7544,	7322,	7868,	6424,	7722,	5188,	5772,	7731,	8520,	7449,	5327,	6377,	7401,	8355,	8597,	7897,	6126,	8093,	7834,	6188,	5238,	5852,	6685,	7564,	6357,	5443,	7060,	8428,	5833,	7941,	7105,	5380,	6003,	5705,	6535,	6734,	8657,	5740,	8075,	7319,	7557,	7391,	5974,	7604,	5287,	8082,	5406,	5198,	7252,	6776,	5474,	8263,	5330,	6582,	6426,	5322,	7857,	8704,	5528,	5383,	5462,	7577,	8325,	5900,	6038,	5769,	5762,	7444,	7204,	7942,	5519,	7438,	5081,	8679,	6892,	7305,	6650,	8479,	8311,	8335,	5097,	5319,	8164,	5154,	7758,	8252,	7643,	5453,	5869,	5642,	7495,	7892,	6858,	7279,	7784,	7271,	8615,	4956,	5616,	8347,	6614,	7692,	7007,	5600,	7825,	8372,	8006,	8669,	6586,	5079,	5994,	6514,	6599,	6883,	7873,	8650,	8272,	6973,	6281,	7766,	8159,	8334,	7443,	8370,	6262,	8548,	7846,	7304,	6785,	6437,	7105,	5891,	5896,	5069,	8780,	6945,	5539,	5487,	4985,	5743,	6590,	7796,	8210,	7381,	6832,	5465,	8532,	5900,	5496,	5268,	5891,	6276,	5639,	8506,	4916,	8774,	5025,	8151,	5615,	7891,	8449,	5536, 6854,	5779,	8452,	6901,	8642,	5722,	7983,	6827,	5948,	8635,	5666,	7133,	5873,	7758,	5232,	6456, 7371, 5672};
	double sum=0.0;	
	int i;
	for(i=0;i<1000;i++)
	{
        	sum = sum + weight[i];
	}
	printf("Average weight of seal is: %.2f",sum/1000);
	return 0 ;
}