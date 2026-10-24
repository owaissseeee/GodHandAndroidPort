#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: func_001C3090
// Address: 0x1c3090 - 0x1c3540
void func_001C3090_0x1c3090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001C3090_0x1c3090");
#endif

    switch (ctx->pc) {
        case 0x1c3090u: goto label_1c3090;
        case 0x1c3094u: goto label_1c3094;
        case 0x1c3098u: goto label_1c3098;
        case 0x1c309cu: goto label_1c309c;
        case 0x1c30a0u: goto label_1c30a0;
        case 0x1c30a4u: goto label_1c30a4;
        case 0x1c30a8u: goto label_1c30a8;
        case 0x1c30acu: goto label_1c30ac;
        case 0x1c30b0u: goto label_1c30b0;
        case 0x1c30b4u: goto label_1c30b4;
        case 0x1c30b8u: goto label_1c30b8;
        case 0x1c30bcu: goto label_1c30bc;
        case 0x1c30c0u: goto label_1c30c0;
        case 0x1c30c4u: goto label_1c30c4;
        case 0x1c30c8u: goto label_1c30c8;
        case 0x1c30ccu: goto label_1c30cc;
        case 0x1c30d0u: goto label_1c30d0;
        case 0x1c30d4u: goto label_1c30d4;
        case 0x1c30d8u: goto label_1c30d8;
        case 0x1c30dcu: goto label_1c30dc;
        case 0x1c30e0u: goto label_1c30e0;
        case 0x1c30e4u: goto label_1c30e4;
        case 0x1c30e8u: goto label_1c30e8;
        case 0x1c30ecu: goto label_1c30ec;
        case 0x1c30f0u: goto label_1c30f0;
        case 0x1c30f4u: goto label_1c30f4;
        case 0x1c30f8u: goto label_1c30f8;
        case 0x1c30fcu: goto label_1c30fc;
        case 0x1c3100u: goto label_1c3100;
        case 0x1c3104u: goto label_1c3104;
        case 0x1c3108u: goto label_1c3108;
        case 0x1c310cu: goto label_1c310c;
        case 0x1c3110u: goto label_1c3110;
        case 0x1c3114u: goto label_1c3114;
        case 0x1c3118u: goto label_1c3118;
        case 0x1c311cu: goto label_1c311c;
        case 0x1c3120u: goto label_1c3120;
        case 0x1c3124u: goto label_1c3124;
        case 0x1c3128u: goto label_1c3128;
        case 0x1c312cu: goto label_1c312c;
        case 0x1c3130u: goto label_1c3130;
        case 0x1c3134u: goto label_1c3134;
        case 0x1c3138u: goto label_1c3138;
        case 0x1c313cu: goto label_1c313c;
        case 0x1c3140u: goto label_1c3140;
        case 0x1c3144u: goto label_1c3144;
        case 0x1c3148u: goto label_1c3148;
        case 0x1c314cu: goto label_1c314c;
        case 0x1c3150u: goto label_1c3150;
        case 0x1c3154u: goto label_1c3154;
        case 0x1c3158u: goto label_1c3158;
        case 0x1c315cu: goto label_1c315c;
        case 0x1c3160u: goto label_1c3160;
        case 0x1c3164u: goto label_1c3164;
        case 0x1c3168u: goto label_1c3168;
        case 0x1c316cu: goto label_1c316c;
        case 0x1c3170u: goto label_1c3170;
        case 0x1c3174u: goto label_1c3174;
        case 0x1c3178u: goto label_1c3178;
        case 0x1c317cu: goto label_1c317c;
        case 0x1c3180u: goto label_1c3180;
        case 0x1c3184u: goto label_1c3184;
        case 0x1c3188u: goto label_1c3188;
        case 0x1c318cu: goto label_1c318c;
        case 0x1c3190u: goto label_1c3190;
        case 0x1c3194u: goto label_1c3194;
        case 0x1c3198u: goto label_1c3198;
        case 0x1c319cu: goto label_1c319c;
        case 0x1c31a0u: goto label_1c31a0;
        case 0x1c31a4u: goto label_1c31a4;
        case 0x1c31a8u: goto label_1c31a8;
        case 0x1c31acu: goto label_1c31ac;
        case 0x1c31b0u: goto label_1c31b0;
        case 0x1c31b4u: goto label_1c31b4;
        case 0x1c31b8u: goto label_1c31b8;
        case 0x1c31bcu: goto label_1c31bc;
        case 0x1c31c0u: goto label_1c31c0;
        case 0x1c31c4u: goto label_1c31c4;
        case 0x1c31c8u: goto label_1c31c8;
        case 0x1c31ccu: goto label_1c31cc;
        case 0x1c31d0u: goto label_1c31d0;
        case 0x1c31d4u: goto label_1c31d4;
        case 0x1c31d8u: goto label_1c31d8;
        case 0x1c31dcu: goto label_1c31dc;
        case 0x1c31e0u: goto label_1c31e0;
        case 0x1c31e4u: goto label_1c31e4;
        case 0x1c31e8u: goto label_1c31e8;
        case 0x1c31ecu: goto label_1c31ec;
        case 0x1c31f0u: goto label_1c31f0;
        case 0x1c31f4u: goto label_1c31f4;
        case 0x1c31f8u: goto label_1c31f8;
        case 0x1c31fcu: goto label_1c31fc;
        case 0x1c3200u: goto label_1c3200;
        case 0x1c3204u: goto label_1c3204;
        case 0x1c3208u: goto label_1c3208;
        case 0x1c320cu: goto label_1c320c;
        case 0x1c3210u: goto label_1c3210;
        case 0x1c3214u: goto label_1c3214;
        case 0x1c3218u: goto label_1c3218;
        case 0x1c321cu: goto label_1c321c;
        case 0x1c3220u: goto label_1c3220;
        case 0x1c3224u: goto label_1c3224;
        case 0x1c3228u: goto label_1c3228;
        case 0x1c322cu: goto label_1c322c;
        case 0x1c3230u: goto label_1c3230;
        case 0x1c3234u: goto label_1c3234;
        case 0x1c3238u: goto label_1c3238;
        case 0x1c323cu: goto label_1c323c;
        case 0x1c3240u: goto label_1c3240;
        case 0x1c3244u: goto label_1c3244;
        case 0x1c3248u: goto label_1c3248;
        case 0x1c324cu: goto label_1c324c;
        case 0x1c3250u: goto label_1c3250;
        case 0x1c3254u: goto label_1c3254;
        case 0x1c3258u: goto label_1c3258;
        case 0x1c325cu: goto label_1c325c;
        case 0x1c3260u: goto label_1c3260;
        case 0x1c3264u: goto label_1c3264;
        case 0x1c3268u: goto label_1c3268;
        case 0x1c326cu: goto label_1c326c;
        case 0x1c3270u: goto label_1c3270;
        case 0x1c3274u: goto label_1c3274;
        case 0x1c3278u: goto label_1c3278;
        case 0x1c327cu: goto label_1c327c;
        case 0x1c3280u: goto label_1c3280;
        case 0x1c3284u: goto label_1c3284;
        case 0x1c3288u: goto label_1c3288;
        case 0x1c328cu: goto label_1c328c;
        case 0x1c3290u: goto label_1c3290;
        case 0x1c3294u: goto label_1c3294;
        case 0x1c3298u: goto label_1c3298;
        case 0x1c329cu: goto label_1c329c;
        case 0x1c32a0u: goto label_1c32a0;
        case 0x1c32a4u: goto label_1c32a4;
        case 0x1c32a8u: goto label_1c32a8;
        case 0x1c32acu: goto label_1c32ac;
        case 0x1c32b0u: goto label_1c32b0;
        case 0x1c32b4u: goto label_1c32b4;
        case 0x1c32b8u: goto label_1c32b8;
        case 0x1c32bcu: goto label_1c32bc;
        case 0x1c32c0u: goto label_1c32c0;
        case 0x1c32c4u: goto label_1c32c4;
        case 0x1c32c8u: goto label_1c32c8;
        case 0x1c32ccu: goto label_1c32cc;
        case 0x1c32d0u: goto label_1c32d0;
        case 0x1c32d4u: goto label_1c32d4;
        case 0x1c32d8u: goto label_1c32d8;
        case 0x1c32dcu: goto label_1c32dc;
        case 0x1c32e0u: goto label_1c32e0;
        case 0x1c32e4u: goto label_1c32e4;
        case 0x1c32e8u: goto label_1c32e8;
        case 0x1c32ecu: goto label_1c32ec;
        case 0x1c32f0u: goto label_1c32f0;
        case 0x1c32f4u: goto label_1c32f4;
        case 0x1c32f8u: goto label_1c32f8;
        case 0x1c32fcu: goto label_1c32fc;
        case 0x1c3300u: goto label_1c3300;
        case 0x1c3304u: goto label_1c3304;
        case 0x1c3308u: goto label_1c3308;
        case 0x1c330cu: goto label_1c330c;
        case 0x1c3310u: goto label_1c3310;
        case 0x1c3314u: goto label_1c3314;
        case 0x1c3318u: goto label_1c3318;
        case 0x1c331cu: goto label_1c331c;
        case 0x1c3320u: goto label_1c3320;
        case 0x1c3324u: goto label_1c3324;
        case 0x1c3328u: goto label_1c3328;
        case 0x1c332cu: goto label_1c332c;
        case 0x1c3330u: goto label_1c3330;
        case 0x1c3334u: goto label_1c3334;
        case 0x1c3338u: goto label_1c3338;
        case 0x1c333cu: goto label_1c333c;
        case 0x1c3340u: goto label_1c3340;
        case 0x1c3344u: goto label_1c3344;
        case 0x1c3348u: goto label_1c3348;
        case 0x1c334cu: goto label_1c334c;
        case 0x1c3350u: goto label_1c3350;
        case 0x1c3354u: goto label_1c3354;
        case 0x1c3358u: goto label_1c3358;
        case 0x1c335cu: goto label_1c335c;
        case 0x1c3360u: goto label_1c3360;
        case 0x1c3364u: goto label_1c3364;
        case 0x1c3368u: goto label_1c3368;
        case 0x1c336cu: goto label_1c336c;
        case 0x1c3370u: goto label_1c3370;
        case 0x1c3374u: goto label_1c3374;
        case 0x1c3378u: goto label_1c3378;
        case 0x1c337cu: goto label_1c337c;
        case 0x1c3380u: goto label_1c3380;
        case 0x1c3384u: goto label_1c3384;
        case 0x1c3388u: goto label_1c3388;
        case 0x1c338cu: goto label_1c338c;
        case 0x1c3390u: goto label_1c3390;
        case 0x1c3394u: goto label_1c3394;
        case 0x1c3398u: goto label_1c3398;
        case 0x1c339cu: goto label_1c339c;
        case 0x1c33a0u: goto label_1c33a0;
        case 0x1c33a4u: goto label_1c33a4;
        case 0x1c33a8u: goto label_1c33a8;
        case 0x1c33acu: goto label_1c33ac;
        case 0x1c33b0u: goto label_1c33b0;
        case 0x1c33b4u: goto label_1c33b4;
        case 0x1c33b8u: goto label_1c33b8;
        case 0x1c33bcu: goto label_1c33bc;
        case 0x1c33c0u: goto label_1c33c0;
        case 0x1c33c4u: goto label_1c33c4;
        case 0x1c33c8u: goto label_1c33c8;
        case 0x1c33ccu: goto label_1c33cc;
        case 0x1c33d0u: goto label_1c33d0;
        case 0x1c33d4u: goto label_1c33d4;
        case 0x1c33d8u: goto label_1c33d8;
        case 0x1c33dcu: goto label_1c33dc;
        case 0x1c33e0u: goto label_1c33e0;
        case 0x1c33e4u: goto label_1c33e4;
        case 0x1c33e8u: goto label_1c33e8;
        case 0x1c33ecu: goto label_1c33ec;
        case 0x1c33f0u: goto label_1c33f0;
        case 0x1c33f4u: goto label_1c33f4;
        case 0x1c33f8u: goto label_1c33f8;
        case 0x1c33fcu: goto label_1c33fc;
        case 0x1c3400u: goto label_1c3400;
        case 0x1c3404u: goto label_1c3404;
        case 0x1c3408u: goto label_1c3408;
        case 0x1c340cu: goto label_1c340c;
        case 0x1c3410u: goto label_1c3410;
        case 0x1c3414u: goto label_1c3414;
        case 0x1c3418u: goto label_1c3418;
        case 0x1c341cu: goto label_1c341c;
        case 0x1c3420u: goto label_1c3420;
        case 0x1c3424u: goto label_1c3424;
        case 0x1c3428u: goto label_1c3428;
        case 0x1c342cu: goto label_1c342c;
        case 0x1c3430u: goto label_1c3430;
        case 0x1c3434u: goto label_1c3434;
        case 0x1c3438u: goto label_1c3438;
        case 0x1c343cu: goto label_1c343c;
        case 0x1c3440u: goto label_1c3440;
        case 0x1c3444u: goto label_1c3444;
        case 0x1c3448u: goto label_1c3448;
        case 0x1c344cu: goto label_1c344c;
        case 0x1c3450u: goto label_1c3450;
        case 0x1c3454u: goto label_1c3454;
        case 0x1c3458u: goto label_1c3458;
        case 0x1c345cu: goto label_1c345c;
        case 0x1c3460u: goto label_1c3460;
        case 0x1c3464u: goto label_1c3464;
        case 0x1c3468u: goto label_1c3468;
        case 0x1c346cu: goto label_1c346c;
        case 0x1c3470u: goto label_1c3470;
        case 0x1c3474u: goto label_1c3474;
        case 0x1c3478u: goto label_1c3478;
        case 0x1c347cu: goto label_1c347c;
        case 0x1c3480u: goto label_1c3480;
        case 0x1c3484u: goto label_1c3484;
        case 0x1c3488u: goto label_1c3488;
        case 0x1c348cu: goto label_1c348c;
        case 0x1c3490u: goto label_1c3490;
        case 0x1c3494u: goto label_1c3494;
        case 0x1c3498u: goto label_1c3498;
        case 0x1c349cu: goto label_1c349c;
        case 0x1c34a0u: goto label_1c34a0;
        case 0x1c34a4u: goto label_1c34a4;
        case 0x1c34a8u: goto label_1c34a8;
        case 0x1c34acu: goto label_1c34ac;
        case 0x1c34b0u: goto label_1c34b0;
        case 0x1c34b4u: goto label_1c34b4;
        case 0x1c34b8u: goto label_1c34b8;
        case 0x1c34bcu: goto label_1c34bc;
        case 0x1c34c0u: goto label_1c34c0;
        case 0x1c34c4u: goto label_1c34c4;
        case 0x1c34c8u: goto label_1c34c8;
        case 0x1c34ccu: goto label_1c34cc;
        case 0x1c34d0u: goto label_1c34d0;
        case 0x1c34d4u: goto label_1c34d4;
        case 0x1c34d8u: goto label_1c34d8;
        case 0x1c34dcu: goto label_1c34dc;
        case 0x1c34e0u: goto label_1c34e0;
        case 0x1c34e4u: goto label_1c34e4;
        case 0x1c34e8u: goto label_1c34e8;
        case 0x1c34ecu: goto label_1c34ec;
        case 0x1c34f0u: goto label_1c34f0;
        case 0x1c34f4u: goto label_1c34f4;
        case 0x1c34f8u: goto label_1c34f8;
        case 0x1c34fcu: goto label_1c34fc;
        case 0x1c3500u: goto label_1c3500;
        case 0x1c3504u: goto label_1c3504;
        case 0x1c3508u: goto label_1c3508;
        case 0x1c350cu: goto label_1c350c;
        case 0x1c3510u: goto label_1c3510;
        case 0x1c3514u: goto label_1c3514;
        case 0x1c3518u: goto label_1c3518;
        case 0x1c351cu: goto label_1c351c;
        case 0x1c3520u: goto label_1c3520;
        case 0x1c3524u: goto label_1c3524;
        case 0x1c3528u: goto label_1c3528;
        case 0x1c352cu: goto label_1c352c;
        case 0x1c3530u: goto label_1c3530;
        case 0x1c3534u: goto label_1c3534;
        case 0x1c3538u: goto label_1c3538;
        case 0x1c353cu: goto label_1c353c;
        default: break;
    }

    ctx->pc = 0x1c3090u;

label_1c3090:
    // 0x1c3090: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1c3090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1c3094:
    // 0x1c3094: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x1c3094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_1c3098:
    // 0x1c3098: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1c3098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_1c309c:
    // 0x1c309c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1c309cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1c30a0:
    // 0x1c30a0: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x1c30a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_1c30a4:
    // 0x1c30a4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1c30a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c30a8:
    // 0x1c30a8: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x1c30a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_1c30ac:
    // 0x1c30ac: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1c30acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1c30b0:
    // 0x1c30b0: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x1c30b0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_1c30b4:
    // 0x1c30b4: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x1c30b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_1c30b8:
    // 0x1c30b8: 0x926302b4  lbu         $v1, 0x2B4($s3)
    ctx->pc = 0x1c30b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
label_1c30bc:
    // 0x1c30bc: 0x243102b  sltu        $v0, $s2, $v1
    ctx->pc = 0x1c30bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1c30c0:
    // 0x1c30c0: 0x10400116  beqz        $v0, . + 4 + (0x116 << 2)
label_1c30c4:
    if (ctx->pc == 0x1C30C4u) {
        ctx->pc = 0x1C30C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C30C0u;
        // 0x1c30c4: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C30C8u;
        goto label_1c30c8;
    }
    ctx->pc = 0x1C30C0u;
    {
        const bool branch_taken_0x1c30c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C30C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C30C0u;
        // 0x1c30c4: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c30c0) {
            ctx->pc = 0x1C351Cu;
            goto label_1c351c;
        }
    }
    ctx->pc = 0x1C30C8u;
label_1c30c8:
    // 0x1c30c8: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1c30c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_1c30cc:
    // 0x1c30cc: 0x6400002  bltz        $s2, . + 4 + (0x2 << 2)
label_1c30d0:
    if (ctx->pc == 0x1C30D0u) {
        ctx->pc = 0x1C30D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C30CCu;
        // 0x1c30d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C30D4u;
        goto label_1c30d4;
    }
    ctx->pc = 0x1C30CCu;
    {
        const bool branch_taken_0x1c30cc = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x1C30D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C30CCu;
        // 0x1c30d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c30cc) {
            ctx->pc = 0x1C30D8u;
            goto label_1c30d8;
        }
    }
    ctx->pc = 0x1C30D4u;
label_1c30d4:
    // 0x1c30d4: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x1c30d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1c30d8:
    // 0x1c30d8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c30d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1c30dc:
    // 0x1c30dc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1c30e0:
    if (ctx->pc == 0x1C30E0u) {
        ctx->pc = 0x1C30E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C30DCu;
        // 0x1c30e0: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C30E4u;
        goto label_1c30e4;
    }
    ctx->pc = 0x1C30DCu;
    {
        const bool branch_taken_0x1c30dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C30E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C30DCu;
        // 0x1c30e0: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c30dc) {
            ctx->pc = 0x1C30F4u;
            goto label_1c30f4;
        }
    }
    ctx->pc = 0x1C30E4u;
label_1c30e4:
    // 0x1c30e4: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x1c30e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
label_1c30e8:
    // 0x1c30e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c30e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c30ec:
    // 0x1c30ec: 0x10000002  b           . + 4 + (0x2 << 2)
label_1c30f0:
    if (ctx->pc == 0x1C30F0u) {
        ctx->pc = 0x1C30F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C30ECu;
        // 0x1c30f0: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C30F4u;
        goto label_1c30f4;
    }
    ctx->pc = 0x1C30ECu;
    {
        const bool branch_taken_0x1c30ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C30F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C30ECu;
        // 0x1c30f0: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c30ec) {
            ctx->pc = 0x1C30F8u;
            goto label_1c30f8;
        }
    }
    ctx->pc = 0x1C30F4u;
label_1c30f4:
    // 0x1c30f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c30f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c30f8:
    // 0x1c30f8: 0x10400107  beqz        $v0, . + 4 + (0x107 << 2)
label_1c30fc:
    if (ctx->pc == 0x1C30FCu) {
        ctx->pc = 0x1C30FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C30F8u;
        // 0x1c30fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3100u;
        goto label_1c3100;
    }
    ctx->pc = 0x1C30F8u;
    {
        const bool branch_taken_0x1c30f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C30FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C30F8u;
        // 0x1c30fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c30f8) {
            ctx->pc = 0x1C3518u;
            goto label_1c3518;
        }
    }
    ctx->pc = 0x1C3100u;
label_1c3100:
    // 0x1c3100: 0x926302b4  lbu         $v1, 0x2B4($s3)
    ctx->pc = 0x1c3100u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
label_1c3104:
    // 0x1c3104: 0x6400002  bltz        $s2, . + 4 + (0x2 << 2)
label_1c3108:
    if (ctx->pc == 0x1C3108u) {
        ctx->pc = 0x1C3108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3104u;
        // 0x1c3108: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C310Cu;
        goto label_1c310c;
    }
    ctx->pc = 0x1C3104u;
    {
        const bool branch_taken_0x1c3104 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x1C3108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3104u;
        // 0x1c3108: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3104) {
            ctx->pc = 0x1C3110u;
            goto label_1c3110;
        }
    }
    ctx->pc = 0x1C310Cu;
label_1c310c:
    // 0x1c310c: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x1c310cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1c3110:
    // 0x1c3110: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c3110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1c3114:
    // 0x1c3114: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1c3118:
    if (ctx->pc == 0x1C3118u) {
        ctx->pc = 0x1C3118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3114u;
        // 0x1c3118: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C311Cu;
        goto label_1c311c;
    }
    ctx->pc = 0x1C3114u;
    {
        const bool branch_taken_0x1c3114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3114u;
        // 0x1c3118: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3114) {
            ctx->pc = 0x1C312Cu;
            goto label_1c312c;
        }
    }
    ctx->pc = 0x1C311Cu;
label_1c311c:
    // 0x1c311c: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x1c311cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
label_1c3120:
    // 0x1c3120: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c3120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c3124:
    // 0x1c3124: 0x10000002  b           . + 4 + (0x2 << 2)
label_1c3128:
    if (ctx->pc == 0x1C3128u) {
        ctx->pc = 0x1C3128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3124u;
        // 0x1c3128: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C312Cu;
        goto label_1c312c;
    }
    ctx->pc = 0x1C3124u;
    {
        const bool branch_taken_0x1c3124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3124u;
        // 0x1c3128: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3124) {
            ctx->pc = 0x1C3130u;
            goto label_1c3130;
        }
    }
    ctx->pc = 0x1C312Cu;
label_1c312c:
    // 0x1c312c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1c312cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3130:
    // 0x1c3130: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x1c3130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
label_1c3134:
    // 0x1c3134: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c3134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3138:
    // 0x1c3138: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1c3138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_1c313c:
    // 0x1c313c: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x1c313cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
label_1c3140:
    // 0x1c3140: 0x926202b4  lbu         $v0, 0x2B4($s3)
    ctx->pc = 0x1c3140u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
label_1c3144:
    // 0x1c3144: 0x6400003  bltz        $s2, . + 4 + (0x3 << 2)
label_1c3148:
    if (ctx->pc == 0x1C3148u) {
        ctx->pc = 0x1C3148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3144u;
        // 0x1c3148: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C314Cu;
        goto label_1c314c;
    }
    ctx->pc = 0x1C3144u;
    {
        const bool branch_taken_0x1c3144 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x1C3148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3144u;
        // 0x1c3148: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3144) {
            ctx->pc = 0x1C3154u;
            goto label_1c3154;
        }
    }
    ctx->pc = 0x1C314Cu;
label_1c314c:
    // 0x1c314c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1c314cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1c3150:
    // 0x1c3150: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c3150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c3154:
    // 0x1c3154: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1c3154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1c3158:
    // 0x1c3158: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1c315c:
    if (ctx->pc == 0x1C315Cu) {
        ctx->pc = 0x1C315Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3158u;
        // 0x1c315c: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3160u;
        goto label_1c3160;
    }
    ctx->pc = 0x1C3158u;
    {
        const bool branch_taken_0x1c3158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C315Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3158u;
        // 0x1c315c: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3158) {
            ctx->pc = 0x1C3170u;
            goto label_1c3170;
        }
    }
    ctx->pc = 0x1C3160u;
label_1c3160:
    // 0x1c3160: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x1c3160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
label_1c3164:
    // 0x1c3164: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c3164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c3168:
    // 0x1c3168: 0x10000002  b           . + 4 + (0x2 << 2)
label_1c316c:
    if (ctx->pc == 0x1C316Cu) {
        ctx->pc = 0x1C316Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3168u;
        // 0x1c316c: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3170u;
        goto label_1c3170;
    }
    ctx->pc = 0x1C3168u;
    {
        const bool branch_taken_0x1c3168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C316Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3168u;
        // 0x1c316c: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3168) {
            ctx->pc = 0x1C3174u;
            goto label_1c3174;
        }
    }
    ctx->pc = 0x1C3170u;
label_1c3170:
    // 0x1c3170: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1c3170u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3174:
    // 0x1c3174: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x1c3174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
label_1c3178:
    // 0x1c3178: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x1c3178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_1c317c:
    // 0x1c317c: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x1c317cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
label_1c3180:
    // 0x1c3180: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x1c3180u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_1c3184:
    // 0x1c3184: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1c3184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c3188:
    // 0x1c3188: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x1c3188u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_1c318c:
    // 0x1c318c: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1c318cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c3190:
    // 0x1c3190: 0x966302fe  lhu         $v1, 0x2FE($s3)
    ctx->pc = 0x1c3190u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 766)));
label_1c3194:
    // 0x1c3194: 0x24020320  addiu       $v0, $zero, 0x320
    ctx->pc = 0x1c3194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 800));
label_1c3198:
    // 0x1c3198: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
label_1c319c:
    if (ctx->pc == 0x1C319Cu) {
        ctx->pc = 0x1C319Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3198u;
        // 0x1c319c: 0x28620320  slti        $v0, $v1, 0x320 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)800) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C31A0u;
        goto label_1c31a0;
    }
    ctx->pc = 0x1C3198u;
    {
        const bool branch_taken_0x1c3198 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C319Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3198u;
        // 0x1c319c: 0x28620320  slti        $v0, $v1, 0x320 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)800) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3198) {
            ctx->pc = 0x1C31D4u;
            goto label_1c31d4;
        }
    }
    ctx->pc = 0x1C31A0u;
label_1c31a0:
    // 0x1c31a0: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x1c31a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_1c31a4:
    // 0x1c31a4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c31a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1c31a8:
    // 0x1c31a8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1c31a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1c31ac:
    // 0x1c31ac: 0xc0c7408  jal         func_31D020
label_1c31b0:
    if (ctx->pc == 0x1C31B0u) {
        ctx->pc = 0x1C31B4u;
        goto label_1c31b4;
    }
    ctx->pc = 0x1C31ACu;
    SET_GPR_U32(ctx, 31, 0x1C31B4u);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1C31ACu, 0x1C31B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C31B4u;
label_1c31b4:
    // 0x1c31b4: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x1c31b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c31b8:
    // 0x1c31b8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1c31b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1c31bc:
    // 0x1c31bc: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1c31bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c31c0:
    // 0x1c31c0: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1c31c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1c31c4:
    // 0x1c31c4: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1c31c4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1c31c8:
    // 0x1c31c8: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1c31c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_1c31cc:
    // 0x1c31cc: 0x10000078  b           . + 4 + (0x78 << 2)
label_1c31d0:
    if (ctx->pc == 0x1C31D0u) {
        ctx->pc = 0x1C31D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C31CCu;
        // 0x1c31d0: 0xe7a20010  swc1        $f2, 0x10($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C31D4u;
        goto label_1c31d4;
    }
    ctx->pc = 0x1C31CCu;
    {
        const bool branch_taken_0x1c31cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C31D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C31CCu;
        // 0x1c31d0: 0xe7a20010  swc1        $f2, 0x10($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c31cc) {
            ctx->pc = 0x1C33B0u;
            goto label_1c33b0;
        }
    }
    ctx->pc = 0x1C31D4u;
label_1c31d4:
    // 0x1c31d4: 0x14400066  bnez        $v0, . + 4 + (0x66 << 2)
label_1c31d8:
    if (ctx->pc == 0x1C31D8u) {
        ctx->pc = 0x1C31D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C31D4u;
        // 0x1c31d8: 0x28620406  slti        $v0, $v1, 0x406 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1030) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C31DCu;
        goto label_1c31dc;
    }
    ctx->pc = 0x1C31D4u;
    {
        const bool branch_taken_0x1c31d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C31D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C31D4u;
        // 0x1c31d8: 0x28620406  slti        $v0, $v1, 0x406 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1030) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c31d4) {
            ctx->pc = 0x1C3370u;
            goto label_1c3370;
        }
    }
    ctx->pc = 0x1C31DCu;
label_1c31dc:
    // 0x1c31dc: 0x10400064  beqz        $v0, . + 4 + (0x64 << 2)
label_1c31e0:
    if (ctx->pc == 0x1C31E0u) {
        ctx->pc = 0x1C31E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C31DCu;
        // 0x1c31e0: 0x28620403  slti        $v0, $v1, 0x403 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1027) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C31E4u;
        goto label_1c31e4;
    }
    ctx->pc = 0x1C31DCu;
    {
        const bool branch_taken_0x1c31dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C31E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C31DCu;
        // 0x1c31e0: 0x28620403  slti        $v0, $v1, 0x403 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1027) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c31dc) {
            ctx->pc = 0x1C3370u;
            goto label_1c3370;
        }
    }
    ctx->pc = 0x1C31E4u;
label_1c31e4:
    // 0x1c31e4: 0x14400062  bnez        $v0, . + 4 + (0x62 << 2)
label_1c31e8:
    if (ctx->pc == 0x1C31E8u) {
        ctx->pc = 0x1C31E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C31E4u;
        // 0x1c31e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C31ECu;
        goto label_1c31ec;
    }
    ctx->pc = 0x1C31E4u;
    {
        const bool branch_taken_0x1c31e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C31E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C31E4u;
        // 0x1c31e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c31e4) {
            ctx->pc = 0x1C3370u;
            goto label_1c3370;
        }
    }
    ctx->pc = 0x1C31ECu;
label_1c31ec:
    // 0x1c31ec: 0x926302b4  lbu         $v1, 0x2B4($s3)
    ctx->pc = 0x1c31ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
label_1c31f0:
    // 0x1c31f0: 0x6400002  bltz        $s2, . + 4 + (0x2 << 2)
label_1c31f4:
    if (ctx->pc == 0x1C31F4u) {
        ctx->pc = 0x1C31F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C31F0u;
        // 0x1c31f4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C31F8u;
        goto label_1c31f8;
    }
    ctx->pc = 0x1C31F0u;
    {
        const bool branch_taken_0x1c31f0 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x1C31F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C31F0u;
        // 0x1c31f4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c31f0) {
            ctx->pc = 0x1C31FCu;
            goto label_1c31fc;
        }
    }
    ctx->pc = 0x1C31F8u;
label_1c31f8:
    // 0x1c31f8: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x1c31f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1c31fc:
    // 0x1c31fc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c31fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1c3200:
    // 0x1c3200: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1c3204:
    if (ctx->pc == 0x1C3204u) {
        ctx->pc = 0x1C3204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3200u;
        // 0x1c3204: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3208u;
        goto label_1c3208;
    }
    ctx->pc = 0x1C3200u;
    {
        const bool branch_taken_0x1c3200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3200u;
        // 0x1c3204: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3200) {
            ctx->pc = 0x1C3218u;
            goto label_1c3218;
        }
    }
    ctx->pc = 0x1C3208u;
label_1c3208:
    // 0x1c3208: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x1c3208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
label_1c320c:
    // 0x1c320c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c320cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c3210:
    // 0x1c3210: 0x10000002  b           . + 4 + (0x2 << 2)
label_1c3214:
    if (ctx->pc == 0x1C3214u) {
        ctx->pc = 0x1C3214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3210u;
        // 0x1c3214: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3218u;
        goto label_1c3218;
    }
    ctx->pc = 0x1C3210u;
    {
        const bool branch_taken_0x1c3210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3210u;
        // 0x1c3214: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3210) {
            ctx->pc = 0x1C321Cu;
            goto label_1c321c;
        }
    }
    ctx->pc = 0x1C3218u;
label_1c3218:
    // 0x1c3218: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c3218u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c321c:
    // 0x1c321c: 0x1040006a  beqz        $v0, . + 4 + (0x6A << 2)
label_1c3220:
    if (ctx->pc == 0x1C3220u) {
        ctx->pc = 0x1C3224u;
        goto label_1c3224;
    }
    ctx->pc = 0x1C321Cu;
    {
        const bool branch_taken_0x1c321c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c321c) {
            ctx->pc = 0x1C33C8u;
            goto label_1c33c8;
        }
    }
    ctx->pc = 0x1C3224u;
label_1c3224:
    // 0x1c3224: 0x8e630214  lw          $v1, 0x214($s3)
    ctx->pc = 0x1c3224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 532)));
label_1c3228:
    // 0x1c3228: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x1c3228u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_1c322c:
    // 0x1c322c: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x1c322cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_1c3230:
    // 0x1c3230: 0x40f809  jalr        $v0
label_1c3234:
    if (ctx->pc == 0x1C3234u) {
        ctx->pc = 0x1C3234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3230u;
        // 0x1c3234: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3238u;
        goto label_1c3238;
    }
    ctx->pc = 0x1C3230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C3238u);
        ctx->pc = 0x1C3234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3230u;
        // 0x1c3234: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3230u, 0x1C3238u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C3238u;
label_1c3238:
    // 0x1c3238: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1c3238u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1c323c:
    // 0x1c323c: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1c323cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c3240:
    // 0x1c3240: 0x926302b4  lbu         $v1, 0x2B4($s3)
    ctx->pc = 0x1c3240u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
label_1c3244:
    // 0x1c3244: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c3244u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3248:
    // 0x1c3248: 0x6400002  bltz        $s2, . + 4 + (0x2 << 2)
label_1c324c:
    if (ctx->pc == 0x1C324Cu) {
        ctx->pc = 0x1C324Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3248u;
        // 0x1c324c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3250u;
        goto label_1c3250;
    }
    ctx->pc = 0x1C3248u;
    {
        const bool branch_taken_0x1c3248 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x1C324Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3248u;
        // 0x1c324c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3248) {
            ctx->pc = 0x1C3254u;
            goto label_1c3254;
        }
    }
    ctx->pc = 0x1C3250u;
label_1c3250:
    // 0x1c3250: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x1c3250u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1c3254:
    // 0x1c3254: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c3254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1c3258:
    // 0x1c3258: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1c325c:
    if (ctx->pc == 0x1C325Cu) {
        ctx->pc = 0x1C325Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3258u;
        // 0x1c325c: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3260u;
        goto label_1c3260;
    }
    ctx->pc = 0x1C3258u;
    {
        const bool branch_taken_0x1c3258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C325Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3258u;
        // 0x1c325c: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3258) {
            ctx->pc = 0x1C3270u;
            goto label_1c3270;
        }
    }
    ctx->pc = 0x1C3260u;
label_1c3260:
    // 0x1c3260: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x1c3260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
label_1c3264:
    // 0x1c3264: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c3264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c3268:
    // 0x1c3268: 0x10000002  b           . + 4 + (0x2 << 2)
label_1c326c:
    if (ctx->pc == 0x1C326Cu) {
        ctx->pc = 0x1C326Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3268u;
        // 0x1c326c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3270u;
        goto label_1c3270;
    }
    ctx->pc = 0x1C3268u;
    {
        const bool branch_taken_0x1c3268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C326Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3268u;
        // 0x1c326c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3268) {
            ctx->pc = 0x1C3274u;
            goto label_1c3274;
        }
    }
    ctx->pc = 0x1C3270u;
label_1c3270:
    // 0x1c3270: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c3270u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3274:
    // 0x1c3274: 0xc44000b4  lwc1        $f0, 0xB4($v0)
    ctx->pc = 0x1c3274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c3278:
    // 0x1c3278: 0xc44300b8  lwc1        $f3, 0xB8($v0)
    ctx->pc = 0x1c3278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1c327c:
    // 0x1c327c: 0xc44200b0  lwc1        $f2, 0xB0($v0)
    ctx->pc = 0x1c327cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c3280:
    // 0x1c3280: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x1c3280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c3284:
    // 0x1c3284: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1c3284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_1c3288:
    // 0x1c3288: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1c3288u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1c328c:
    // 0x1c328c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1c328cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_1c3290:
    // 0x1c3290: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1c3290u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1c3294:
    // 0x1c3294: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x1c3294u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1c3298:
    // 0x1c3298: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c3298u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1c329c:
    // 0x1c329c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c329cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c32a0:
    // 0x1c32a0: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x1c32a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
label_1c32a4:
    // 0x1c32a4: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x1c32a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1c32a8:
    // 0x1c32a8: 0xe7a30048  swc1        $f3, 0x48($sp)
    ctx->pc = 0x1c32a8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_1c32ac:
    // 0x1c32ac: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x1c32acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c32b0:
    // 0x1c32b0: 0x0  nop
    ctx->pc = 0x1c32b0u;
    // NOP
label_1c32b4:
    // 0x1c32b4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1c32b8:
    if (ctx->pc == 0x1C32B8u) {
        ctx->pc = 0x1C32B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C32B4u;
        // 0x1c32b8: 0xe7a1004c  swc1        $f1, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C32BCu;
        goto label_1c32bc;
    }
    ctx->pc = 0x1C32B4u;
    {
        const bool branch_taken_0x1c32b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C32B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C32B4u;
        // 0x1c32b8: 0xe7a1004c  swc1        $f1, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c32b4) {
            ctx->pc = 0x1C32C4u;
            goto label_1c32c4;
        }
    }
    ctx->pc = 0x1C32BCu;
label_1c32bc:
    // 0x1c32bc: 0x1000000f  b           . + 4 + (0xF << 2)
label_1c32c0:
    if (ctx->pc == 0x1C32C0u) {
        ctx->pc = 0x1C32C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C32BCu;
        // 0x1c32c0: 0x46000d46  mov.s       $f21, $f1 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C32C4u;
        goto label_1c32c4;
    }
    ctx->pc = 0x1C32BCu;
    {
        const bool branch_taken_0x1c32bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C32C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C32BCu;
        // 0x1c32c0: 0x46000d46  mov.s       $f21, $f1 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c32bc) {
            ctx->pc = 0x1C32FCu;
            goto label_1c32fc;
        }
    }
    ctx->pc = 0x1C32C4u;
label_1c32c4:
    // 0x1c32c4: 0x46002836  c.le.s      $f5, $f0
    ctx->pc = 0x1c32c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c32c8:
    // 0x1c32c8: 0x0  nop
    ctx->pc = 0x1c32c8u;
    // NOP
label_1c32cc:
    // 0x1c32cc: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_1c32d0:
    if (ctx->pc == 0x1C32D0u) {
        ctx->pc = 0x1C32D4u;
        goto label_1c32d4;
    }
    ctx->pc = 0x1C32CCu;
    {
        const bool branch_taken_0x1c32cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c32cc) {
            ctx->pc = 0x1C32F8u;
            goto label_1c32f8;
        }
    }
    ctx->pc = 0x1C32D4u;
label_1c32d4:
    // 0x1c32d4: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x1c32d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c32d8:
    // 0x1c32d8: 0x0  nop
    ctx->pc = 0x1c32d8u;
    // NOP
label_1c32dc:
    // 0x1c32dc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_1c32e0:
    if (ctx->pc == 0x1C32E0u) {
        ctx->pc = 0x1C32E4u;
        goto label_1c32e4;
    }
    ctx->pc = 0x1C32DCu;
    {
        const bool branch_taken_0x1c32dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c32dc) {
            ctx->pc = 0x1C32F8u;
            goto label_1c32f8;
        }
    }
    ctx->pc = 0x1C32E4u;
label_1c32e4:
    // 0x1c32e4: 0x46002041  sub.s       $f1, $f4, $f0
    ctx->pc = 0x1c32e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_1c32e8:
    // 0x1c32e8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1c32e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1c32ec:
    // 0x1c32ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c32ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c32f0:
    // 0x1c32f0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1c32f4:
    if (ctx->pc == 0x1C32F4u) {
        ctx->pc = 0x1C32F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C32F0u;
        // 0x1c32f4: 0x46000d42  mul.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C32F8u;
        goto label_1c32f8;
    }
    ctx->pc = 0x1C32F0u;
    {
        const bool branch_taken_0x1c32f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C32F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C32F0u;
        // 0x1c32f4: 0x46000d42  mul.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c32f0) {
            ctx->pc = 0x1C32FCu;
            goto label_1c32fc;
        }
    }
    ctx->pc = 0x1C32F8u;
label_1c32f8:
    // 0x1c32f8: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x1c32f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1c32fc:
    // 0x1c32fc: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1c32fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_1c3300:
    // 0x1c3300: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c3300u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1c3304:
    // 0x1c3304: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1c3304u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1c3308:
    // 0x1c3308: 0xc0c7408  jal         func_31D020
label_1c330c:
    if (ctx->pc == 0x1C330Cu) {
        ctx->pc = 0x1C3310u;
        goto label_1c3310;
    }
    ctx->pc = 0x1C3308u;
    SET_GPR_U32(ctx, 31, 0x1C3310u);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1C3308u, 0x1C3310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3310u;
label_1c3310:
    // 0x1c3310: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x1c3310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c3314:
    // 0x1c3314: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1c3314u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1c3318:
    // 0x1c3318: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1c3318u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1c331c:
    // 0x1c331c: 0xc0c7400  jal         func_31D000
label_1c3320:
    if (ctx->pc == 0x1C3320u) {
        ctx->pc = 0x1C3320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C331Cu;
        // 0x1c3320: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3324u;
        goto label_1c3324;
    }
    ctx->pc = 0x1C331Cu;
    SET_GPR_U32(ctx, 31, 0x1C3324u);
    ctx->pc = 0x1C3320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C331Cu;
    // 0x1c3320: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x1C331Cu, 0x1C3324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3324u;
label_1c3324:
    // 0x1c3324: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x1c3324u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
label_1c3328:
    // 0x1c3328: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c3328u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1c332c:
    // 0x1c332c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1c332cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1c3330:
    // 0x1c3330: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1c3330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c3334:
    // 0x1c3334: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1c3334u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1c3338:
    // 0x1c3338: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1c3338u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1c333c:
    // 0x1c333c: 0xc0c7408  jal         func_31D020
label_1c3340:
    if (ctx->pc == 0x1C3340u) {
        ctx->pc = 0x1C3340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C333Cu;
        // 0x1c3340: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3344u;
        goto label_1c3344;
    }
    ctx->pc = 0x1C333Cu;
    SET_GPR_U32(ctx, 31, 0x1C3344u);
    ctx->pc = 0x1C3340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C333Cu;
    // 0x1c3340: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1C333Cu, 0x1C3344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3344u;
label_1c3344:
    // 0x1c3344: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1c3344u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1c3348:
    // 0x1c3348: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x1c3348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c334c:
    // 0x1c334c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1c334cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1c3350:
    // 0x1c3350: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x1c3350u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1c3354:
    // 0x1c3354: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1c3354u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c3358:
    // 0x1c3358: 0x4408a800  mfc1        $t0, $f21
    ctx->pc = 0x1c3358u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_1c335c:
    // 0x1c335c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1c335cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_1c3360:
    // 0x1c3360: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1c3360u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c3364:
    // 0x1c3364: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1c3364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c3368:
    // 0x1c3368: 0x10000017  b           . + 4 + (0x17 << 2)
label_1c336c:
    if (ctx->pc == 0x1C336Cu) {
        ctx->pc = 0x1C3370u;
        goto label_1c3370;
    }
    ctx->pc = 0x1C3368u;
    {
        const bool branch_taken_0x1c3368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3368) {
            ctx->pc = 0x1C33C8u;
            goto label_1c33c8;
        }
    }
    ctx->pc = 0x1C3370u;
label_1c3370:
    // 0x1c3370: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1c3370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_1c3374:
    // 0x1c3374: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c3374u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1c3378:
    // 0x1c3378: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1c3378u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1c337c:
    // 0x1c337c: 0xc0c7408  jal         func_31D020
label_1c3380:
    if (ctx->pc == 0x1C3380u) {
        ctx->pc = 0x1C3384u;
        goto label_1c3384;
    }
    ctx->pc = 0x1C337Cu;
    SET_GPR_U32(ctx, 31, 0x1C3384u);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1C337Cu, 0x1C3384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3384u;
label_1c3384:
    // 0x1c3384: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x1c3384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c3388:
    // 0x1c3388: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1c3388u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1c338c:
    // 0x1c338c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1c338cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1c3390:
    // 0x1c3390: 0xc0c7400  jal         func_31D000
label_1c3394:
    if (ctx->pc == 0x1C3394u) {
        ctx->pc = 0x1C3394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3390u;
        // 0x1c3394: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3398u;
        goto label_1c3398;
    }
    ctx->pc = 0x1C3390u;
    SET_GPR_U32(ctx, 31, 0x1C3398u);
    ctx->pc = 0x1C3394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3390u;
    // 0x1c3394: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x1C3390u, 0x1C3398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3398u;
label_1c3398:
    // 0x1c3398: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x1c3398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
label_1c339c:
    // 0x1c339c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c339cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1c33a0:
    // 0x1c33a0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1c33a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1c33a4:
    // 0x1c33a4: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1c33a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c33a8:
    // 0x1c33a8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1c33a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1c33ac:
    // 0x1c33ac: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1c33acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1c33b0:
    // 0x1c33b0: 0xc0c7408  jal         func_31D020
label_1c33b4:
    if (ctx->pc == 0x1C33B4u) {
        ctx->pc = 0x1C33B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C33B0u;
        // 0x1c33b4: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C33B8u;
        goto label_1c33b8;
    }
    ctx->pc = 0x1C33B0u;
    SET_GPR_U32(ctx, 31, 0x1C33B8u);
    ctx->pc = 0x1C33B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C33B0u;
    // 0x1c33b4: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1C33B0u, 0x1C33B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C33B8u;
label_1c33b8:
    // 0x1c33b8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1c33b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1c33bc:
    // 0x1c33bc: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x1c33bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c33c0:
    // 0x1c33c0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1c33c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1c33c4:
    // 0x1c33c4: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x1c33c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1c33c8:
    // 0x1c33c8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1c33c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_1c33cc:
    // 0x1c33cc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c33ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1c33d0:
    // 0x1c33d0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1c33d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1c33d4:
    // 0x1c33d4: 0xc0c7408  jal         func_31D020
label_1c33d8:
    if (ctx->pc == 0x1C33D8u) {
        ctx->pc = 0x1C33DCu;
        goto label_1c33dc;
    }
    ctx->pc = 0x1C33D4u;
    SET_GPR_U32(ctx, 31, 0x1C33DCu);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1C33D4u, 0x1C33DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C33DCu;
label_1c33dc:
    // 0x1c33dc: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x1c33dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c33e0:
    // 0x1c33e0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1c33e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1c33e4:
    // 0x1c33e4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1c33e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1c33e8:
    // 0x1c33e8: 0xc0c7408  jal         func_31D020
label_1c33ec:
    if (ctx->pc == 0x1C33ECu) {
        ctx->pc = 0x1C33ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C33E8u;
        // 0x1c33ec: 0xe7a10020  swc1        $f1, 0x20($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C33F0u;
        goto label_1c33f0;
    }
    ctx->pc = 0x1C33E8u;
    SET_GPR_U32(ctx, 31, 0x1C33F0u);
    ctx->pc = 0x1C33ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C33E8u;
    // 0x1c33ec: 0xe7a10020  swc1        $f1, 0x20($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1C33E8u, 0x1C33F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C33F0u;
label_1c33f0:
    // 0x1c33f0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1c33f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1c33f4:
    // 0x1c33f4: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x1c33f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c33f8:
    // 0x1c33f8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1c33f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1c33fc:
    // 0x1c33fc: 0xc0c7408  jal         func_31D020
label_1c3400:
    if (ctx->pc == 0x1C3400u) {
        ctx->pc = 0x1C3400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C33FCu;
        // 0x1c3400: 0xe7a10024  swc1        $f1, 0x24($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3404u;
        goto label_1c3404;
    }
    ctx->pc = 0x1C33FCu;
    SET_GPR_U32(ctx, 31, 0x1C3404u);
    ctx->pc = 0x1C3400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C33FCu;
    // 0x1c3400: 0xe7a10024  swc1        $f1, 0x24($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1C33FCu, 0x1C3404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3404u;
label_1c3404:
    // 0x1c3404: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1c3404u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1c3408:
    // 0x1c3408: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1c3408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c340c:
    // 0x1c340c: 0x926302b4  lbu         $v1, 0x2B4($s3)
    ctx->pc = 0x1c340cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
label_1c3410:
    // 0x1c3410: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c3410u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3414:
    // 0x1c3414: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1c3414u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1c3418:
    // 0x1c3418: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1c3418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_1c341c:
    // 0x1c341c: 0x6400002  bltz        $s2, . + 4 + (0x2 << 2)
label_1c3420:
    if (ctx->pc == 0x1C3420u) {
        ctx->pc = 0x1C3420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C341Cu;
        // 0x1c3420: 0xe7a10028  swc1        $f1, 0x28($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3424u;
        goto label_1c3424;
    }
    ctx->pc = 0x1C341Cu;
    {
        const bool branch_taken_0x1c341c = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x1C3420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C341Cu;
        // 0x1c3420: 0xe7a10028  swc1        $f1, 0x28($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c341c) {
            ctx->pc = 0x1C3428u;
            goto label_1c3428;
        }
    }
    ctx->pc = 0x1C3424u;
label_1c3424:
    // 0x1c3424: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x1c3424u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1c3428:
    // 0x1c3428: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c3428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1c342c:
    // 0x1c342c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1c3430:
    if (ctx->pc == 0x1C3430u) {
        ctx->pc = 0x1C3430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C342Cu;
        // 0x1c3430: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3434u;
        goto label_1c3434;
    }
    ctx->pc = 0x1C342Cu;
    {
        const bool branch_taken_0x1c342c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C342Cu;
        // 0x1c3430: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c342c) {
            ctx->pc = 0x1C3444u;
            goto label_1c3444;
        }
    }
    ctx->pc = 0x1C3434u;
label_1c3434:
    // 0x1c3434: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x1c3434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
label_1c3438:
    // 0x1c3438: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c3438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c343c:
    // 0x1c343c: 0x10000002  b           . + 4 + (0x2 << 2)
label_1c3440:
    if (ctx->pc == 0x1C3440u) {
        ctx->pc = 0x1C3440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C343Cu;
        // 0x1c3440: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3444u;
        goto label_1c3444;
    }
    ctx->pc = 0x1C343Cu;
    {
        const bool branch_taken_0x1c343c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C343Cu;
        // 0x1c3440: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c343c) {
            ctx->pc = 0x1C3448u;
            goto label_1c3448;
        }
    }
    ctx->pc = 0x1C3444u;
label_1c3444:
    // 0x1c3444: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c3444u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3448:
    // 0x1c3448: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
label_1c344c:
    if (ctx->pc == 0x1C344Cu) {
        ctx->pc = 0x1C344Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3448u;
        // 0x1c344c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3450u;
        goto label_1c3450;
    }
    ctx->pc = 0x1C3448u;
    {
        const bool branch_taken_0x1c3448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C344Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3448u;
        // 0x1c344c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3448) {
            ctx->pc = 0x1C3518u;
            goto label_1c3518;
        }
    }
    ctx->pc = 0x1C3450u;
label_1c3450:
    // 0x1c3450: 0x926302b4  lbu         $v1, 0x2B4($s3)
    ctx->pc = 0x1c3450u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
label_1c3454:
    // 0x1c3454: 0x6400002  bltz        $s2, . + 4 + (0x2 << 2)
label_1c3458:
    if (ctx->pc == 0x1C3458u) {
        ctx->pc = 0x1C3458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3454u;
        // 0x1c3458: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C345Cu;
        goto label_1c345c;
    }
    ctx->pc = 0x1C3454u;
    {
        const bool branch_taken_0x1c3454 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x1C3458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3454u;
        // 0x1c3458: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3454) {
            ctx->pc = 0x1C3460u;
            goto label_1c3460;
        }
    }
    ctx->pc = 0x1C345Cu;
label_1c345c:
    // 0x1c345c: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x1c345cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1c3460:
    // 0x1c3460: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c3460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1c3464:
    // 0x1c3464: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1c3468:
    if (ctx->pc == 0x1C3468u) {
        ctx->pc = 0x1C3468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3464u;
        // 0x1c3468: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C346Cu;
        goto label_1c346c;
    }
    ctx->pc = 0x1C3464u;
    {
        const bool branch_taken_0x1c3464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3464u;
        // 0x1c3468: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3464) {
            ctx->pc = 0x1C347Cu;
            goto label_1c347c;
        }
    }
    ctx->pc = 0x1C346Cu;
label_1c346c:
    // 0x1c346c: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x1c346cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
label_1c3470:
    // 0x1c3470: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c3470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c3474:
    // 0x1c3474: 0x10000002  b           . + 4 + (0x2 << 2)
label_1c3478:
    if (ctx->pc == 0x1C3478u) {
        ctx->pc = 0x1C3478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3474u;
        // 0x1c3478: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C347Cu;
        goto label_1c347c;
    }
    ctx->pc = 0x1C3474u;
    {
        const bool branch_taken_0x1c3474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3474u;
        // 0x1c3478: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3474) {
            ctx->pc = 0x1C3480u;
            goto label_1c3480;
        }
    }
    ctx->pc = 0x1C347Cu;
label_1c347c:
    // 0x1c347c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c347cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3480:
    // 0x1c3480: 0x24100060  addiu       $s0, $zero, 0x60
    ctx->pc = 0x1c3480u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_1c3484:
    // 0x1c3484: 0x8e620608  lw          $v0, 0x608($s3)
    ctx->pc = 0x1c3484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1544)));
label_1c3488:
    // 0x1c3488: 0x2508018  mult        $s0, $s2, $s0
    ctx->pc = 0x1c3488u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_1c348c:
    // 0x1c348c: 0x26310080  addiu       $s1, $s1, 0x80
    ctx->pc = 0x1c348cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
label_1c3490:
    // 0x1c3490: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c3490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c3494:
    // 0x1c3494: 0x3c01bca3  lui         $at, 0xBCA3
    ctx->pc = 0x1c3494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48291 << 16));
label_1c3498:
    // 0x1c3498: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1c3498u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1c349c:
    // 0x1c349c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1c349cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1c34a0:
    // 0x1c34a0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1c34a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1c34a4:
    // 0x1c34a4: 0xc05bd90  jal         func_16F640
label_1c34a8:
    if (ctx->pc == 0x1C34A8u) {
        ctx->pc = 0x1C34A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C34A4u;
        // 0x1c34a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C34ACu;
        goto label_1c34ac;
    }
    ctx->pc = 0x1C34A4u;
    SET_GPR_U32(ctx, 31, 0x1C34ACu);
    ctx->pc = 0x1C34A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C34A4u;
    // 0x1c34a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x1C34A4u, 0x1C34ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C34ACu;
label_1c34ac:
    // 0x1c34ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c34acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c34b0:
    // 0x1c34b0: 0xc05ce66  jal         func_173998
label_1c34b4:
    if (ctx->pc == 0x1C34B4u) {
        ctx->pc = 0x1C34B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C34B0u;
        // 0x1c34b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C34B8u;
        goto label_1c34b8;
    }
    ctx->pc = 0x1C34B0u;
    SET_GPR_U32(ctx, 31, 0x1C34B8u);
    ctx->pc = 0x1C34B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C34B0u;
    // 0x1c34b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173998u, 0x1C34B0u, 0x1C34B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C34B8u;
label_1c34b8:
    // 0x1c34b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c34b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c34bc:
    // 0x1c34bc: 0xc051f18  jal         func_147C60
label_1c34c0:
    if (ctx->pc == 0x1C34C0u) {
        ctx->pc = 0x1C34C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C34BCu;
        // 0x1c34c0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C34C4u;
        goto label_1c34c4;
    }
    ctx->pc = 0x1C34BCu;
    SET_GPR_U32(ctx, 31, 0x1C34C4u);
    ctx->pc = 0x1C34C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C34BCu;
    // 0x1c34c0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x1C34BCu, 0x1C34C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C34C4u;
label_1c34c4:
    // 0x1c34c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c34c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c34c8:
    // 0x1c34c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c34c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c34cc:
    // 0x1c34cc: 0xc051f22  jal         func_147C88
label_1c34d0:
    if (ctx->pc == 0x1C34D0u) {
        ctx->pc = 0x1C34D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C34CCu;
        // 0x1c34d0: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C34D4u;
        goto label_1c34d4;
    }
    ctx->pc = 0x1C34CCu;
    SET_GPR_U32(ctx, 31, 0x1C34D4u);
    ctx->pc = 0x1C34D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C34CCu;
    // 0x1c34d0: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C88u, 0x1C34CCu, 0x1C34D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C34D4u;
label_1c34d4:
    // 0x1c34d4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1c34d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1c34d8:
    // 0x1c34d8: 0xc05ce42  jal         func_173908
label_1c34dc:
    if (ctx->pc == 0x1C34DCu) {
        ctx->pc = 0x1C34DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C34D8u;
        // 0x1c34dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C34E0u;
        goto label_1c34e0;
    }
    ctx->pc = 0x1C34D8u;
    SET_GPR_U32(ctx, 31, 0x1C34E0u);
    ctx->pc = 0x1C34DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C34D8u;
    // 0x1c34dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173908u, 0x1C34D8u, 0x1C34E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C34E0u;
label_1c34e0:
    // 0x1c34e0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1c34e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1c34e4:
    // 0x1c34e4: 0xc05ce4e  jal         func_173938
label_1c34e8:
    if (ctx->pc == 0x1C34E8u) {
        ctx->pc = 0x1C34E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C34E4u;
        // 0x1c34e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C34ECu;
        goto label_1c34ec;
    }
    ctx->pc = 0x1C34E4u;
    SET_GPR_U32(ctx, 31, 0x1C34ECu);
    ctx->pc = 0x1C34E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C34E4u;
    // 0x1c34e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173938u, 0x1C34E4u, 0x1C34ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C34ECu;
label_1c34ec:
    // 0x1c34ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c34ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1c34f0:
    // 0x1c34f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c34f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c34f4:
    // 0x1c34f4: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1c34f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1c34f8:
    // 0x1c34f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c34f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c34fc:
    // 0x1c34fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c34fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c3500:
    // 0x1c3500: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1c3500u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1c3504:
    // 0x1c3504: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1c3504u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_1c3508:
    // 0x1c3508: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1c3508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1c350c:
    // 0x1c350c: 0xc05ce5a  jal         func_173968
label_1c3510:
    if (ctx->pc == 0x1C3510u) {
        ctx->pc = 0x1C3510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C350Cu;
        // 0x1c3510: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3514u;
        goto label_1c3514;
    }
    ctx->pc = 0x1C350Cu;
    SET_GPR_U32(ctx, 31, 0x1C3514u);
    ctx->pc = 0x1C3510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C350Cu;
    // 0x1c3510: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x173968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173968u, 0x1C350Cu, 0x1C3514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3514u;
label_1c3514:
    // 0x1c3514: 0xe6140058  swc1        $f20, 0x58($s0)
    ctx->pc = 0x1c3514u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
label_1c3518:
    // 0x1c3518: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x1c3518u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1c351c:
    // 0x1c351c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x1c351cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1c3520:
    // 0x1c3520: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x1c3520u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1c3524:
    // 0x1c3524: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1c3524u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1c3528:
    // 0x1c3528: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1c3528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1c352c:
    // 0x1c352c: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x1c352cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1c3530:
    // 0x1c3530: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x1c3530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1c3534:
    // 0x1c3534: 0x3e00008  jr          $ra
label_1c3538:
    if (ctx->pc == 0x1C3538u) {
        ctx->pc = 0x1C3538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3534u;
        // 0x1c3538: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C353Cu;
        goto label_1c353c;
    }
    ctx->pc = 0x1C3534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3534u;
        // 0x1c3538: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C353Cu;
label_1c353c:
    // 0x1c353c: 0x0  nop
    ctx->pc = 0x1c353cu;
    // NOP
    ctx->pc = 0x1c3540u;
}
