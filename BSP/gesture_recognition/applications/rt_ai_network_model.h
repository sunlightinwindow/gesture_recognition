#ifndef __RT_AI_NETWORK_MODEL_H
#define __RT_AI_NETWORK_MODEL_H

/* model info ... */

// model name
#define RT_AI_NETWORK_MODEL_NAME			"network"

#define RT_AI_NETWORK_WORK_BUFFER_BYTES		(23856)

#define AI_NETWORK_DATA_WEIGHTS_SIZE		(648576)

#define RT_AI_NETWORK_BUFFER_ALIGNMENT		(4)

#define RT_AI_NETWORK_IN_NUM				(1)

#define RT_AI_NETWORK_IN_SIZE_BYTES	{	\
	((64 * 64 * 3) * 1),	\
}
#define RT_AI_NETWORK_IN_1_SIZE			(64 * 64 * 3)
#define RT_AI_NETWORK_IN_1_SIZE_BYTES		((64 * 64 * 3) * 1)
#define RT_AI_NETWORK_IN_TOTAL_SIZE_BYTES		((64 * 64 * 3) * 1)



#define RT_AI_NETWORK_OUT_NUM				(1)

#define RT_AI_NETWORK_OUT_SIZE_BYTES	{	\
	((1 * 1 * 4) * 1),	\
}
#define RT_AI_NETWORK_OUT_1_SIZE			(1 * 1 * 4)
#define RT_AI_NETWORK_OUT_1_SIZE_BYTES		((1 * 1 * 4) * 1)
#define RT_AI_NETWORK_OUT_TOTAL_SIZE_BYTES		((1 * 1 * 4) * 1)




#define RT_AI_NETWORK_TOTAL_BUFFER_SIZE		//unused

#endif	//end
