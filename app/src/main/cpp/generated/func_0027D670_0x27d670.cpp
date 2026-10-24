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

// Function: func_0027D670
// Address: 0x27d670 - 0x27daf0
void func_0027D670_0x27d670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0027D670_0x27d670");
#endif

    switch (ctx->pc) {
        case 0x27d670u: goto label_27d670;
        case 0x27d674u: goto label_27d674;
        case 0x27d678u: goto label_27d678;
        case 0x27d67cu: goto label_27d67c;
        case 0x27d680u: goto label_27d680;
        case 0x27d684u: goto label_27d684;
        case 0x27d688u: goto label_27d688;
        case 0x27d68cu: goto label_27d68c;
        case 0x27d690u: goto label_27d690;
        case 0x27d694u: goto label_27d694;
        case 0x27d698u: goto label_27d698;
        case 0x27d69cu: goto label_27d69c;
        case 0x27d6a0u: goto label_27d6a0;
        case 0x27d6a4u: goto label_27d6a4;
        case 0x27d6a8u: goto label_27d6a8;
        case 0x27d6acu: goto label_27d6ac;
        case 0x27d6b0u: goto label_27d6b0;
        case 0x27d6b4u: goto label_27d6b4;
        case 0x27d6b8u: goto label_27d6b8;
        case 0x27d6bcu: goto label_27d6bc;
        case 0x27d6c0u: goto label_27d6c0;
        case 0x27d6c4u: goto label_27d6c4;
        case 0x27d6c8u: goto label_27d6c8;
        case 0x27d6ccu: goto label_27d6cc;
        case 0x27d6d0u: goto label_27d6d0;
        case 0x27d6d4u: goto label_27d6d4;
        case 0x27d6d8u: goto label_27d6d8;
        case 0x27d6dcu: goto label_27d6dc;
        case 0x27d6e0u: goto label_27d6e0;
        case 0x27d6e4u: goto label_27d6e4;
        case 0x27d6e8u: goto label_27d6e8;
        case 0x27d6ecu: goto label_27d6ec;
        case 0x27d6f0u: goto label_27d6f0;
        case 0x27d6f4u: goto label_27d6f4;
        case 0x27d6f8u: goto label_27d6f8;
        case 0x27d6fcu: goto label_27d6fc;
        case 0x27d700u: goto label_27d700;
        case 0x27d704u: goto label_27d704;
        case 0x27d708u: goto label_27d708;
        case 0x27d70cu: goto label_27d70c;
        case 0x27d710u: goto label_27d710;
        case 0x27d714u: goto label_27d714;
        case 0x27d718u: goto label_27d718;
        case 0x27d71cu: goto label_27d71c;
        case 0x27d720u: goto label_27d720;
        case 0x27d724u: goto label_27d724;
        case 0x27d728u: goto label_27d728;
        case 0x27d72cu: goto label_27d72c;
        case 0x27d730u: goto label_27d730;
        case 0x27d734u: goto label_27d734;
        case 0x27d738u: goto label_27d738;
        case 0x27d73cu: goto label_27d73c;
        case 0x27d740u: goto label_27d740;
        case 0x27d744u: goto label_27d744;
        case 0x27d748u: goto label_27d748;
        case 0x27d74cu: goto label_27d74c;
        case 0x27d750u: goto label_27d750;
        case 0x27d754u: goto label_27d754;
        case 0x27d758u: goto label_27d758;
        case 0x27d75cu: goto label_27d75c;
        case 0x27d760u: goto label_27d760;
        case 0x27d764u: goto label_27d764;
        case 0x27d768u: goto label_27d768;
        case 0x27d76cu: goto label_27d76c;
        case 0x27d770u: goto label_27d770;
        case 0x27d774u: goto label_27d774;
        case 0x27d778u: goto label_27d778;
        case 0x27d77cu: goto label_27d77c;
        case 0x27d780u: goto label_27d780;
        case 0x27d784u: goto label_27d784;
        case 0x27d788u: goto label_27d788;
        case 0x27d78cu: goto label_27d78c;
        case 0x27d790u: goto label_27d790;
        case 0x27d794u: goto label_27d794;
        case 0x27d798u: goto label_27d798;
        case 0x27d79cu: goto label_27d79c;
        case 0x27d7a0u: goto label_27d7a0;
        case 0x27d7a4u: goto label_27d7a4;
        case 0x27d7a8u: goto label_27d7a8;
        case 0x27d7acu: goto label_27d7ac;
        case 0x27d7b0u: goto label_27d7b0;
        case 0x27d7b4u: goto label_27d7b4;
        case 0x27d7b8u: goto label_27d7b8;
        case 0x27d7bcu: goto label_27d7bc;
        case 0x27d7c0u: goto label_27d7c0;
        case 0x27d7c4u: goto label_27d7c4;
        case 0x27d7c8u: goto label_27d7c8;
        case 0x27d7ccu: goto label_27d7cc;
        case 0x27d7d0u: goto label_27d7d0;
        case 0x27d7d4u: goto label_27d7d4;
        case 0x27d7d8u: goto label_27d7d8;
        case 0x27d7dcu: goto label_27d7dc;
        case 0x27d7e0u: goto label_27d7e0;
        case 0x27d7e4u: goto label_27d7e4;
        case 0x27d7e8u: goto label_27d7e8;
        case 0x27d7ecu: goto label_27d7ec;
        case 0x27d7f0u: goto label_27d7f0;
        case 0x27d7f4u: goto label_27d7f4;
        case 0x27d7f8u: goto label_27d7f8;
        case 0x27d7fcu: goto label_27d7fc;
        case 0x27d800u: goto label_27d800;
        case 0x27d804u: goto label_27d804;
        case 0x27d808u: goto label_27d808;
        case 0x27d80cu: goto label_27d80c;
        case 0x27d810u: goto label_27d810;
        case 0x27d814u: goto label_27d814;
        case 0x27d818u: goto label_27d818;
        case 0x27d81cu: goto label_27d81c;
        case 0x27d820u: goto label_27d820;
        case 0x27d824u: goto label_27d824;
        case 0x27d828u: goto label_27d828;
        case 0x27d82cu: goto label_27d82c;
        case 0x27d830u: goto label_27d830;
        case 0x27d834u: goto label_27d834;
        case 0x27d838u: goto label_27d838;
        case 0x27d83cu: goto label_27d83c;
        case 0x27d840u: goto label_27d840;
        case 0x27d844u: goto label_27d844;
        case 0x27d848u: goto label_27d848;
        case 0x27d84cu: goto label_27d84c;
        case 0x27d850u: goto label_27d850;
        case 0x27d854u: goto label_27d854;
        case 0x27d858u: goto label_27d858;
        case 0x27d85cu: goto label_27d85c;
        case 0x27d860u: goto label_27d860;
        case 0x27d864u: goto label_27d864;
        case 0x27d868u: goto label_27d868;
        case 0x27d86cu: goto label_27d86c;
        case 0x27d870u: goto label_27d870;
        case 0x27d874u: goto label_27d874;
        case 0x27d878u: goto label_27d878;
        case 0x27d87cu: goto label_27d87c;
        case 0x27d880u: goto label_27d880;
        case 0x27d884u: goto label_27d884;
        case 0x27d888u: goto label_27d888;
        case 0x27d88cu: goto label_27d88c;
        case 0x27d890u: goto label_27d890;
        case 0x27d894u: goto label_27d894;
        case 0x27d898u: goto label_27d898;
        case 0x27d89cu: goto label_27d89c;
        case 0x27d8a0u: goto label_27d8a0;
        case 0x27d8a4u: goto label_27d8a4;
        case 0x27d8a8u: goto label_27d8a8;
        case 0x27d8acu: goto label_27d8ac;
        case 0x27d8b0u: goto label_27d8b0;
        case 0x27d8b4u: goto label_27d8b4;
        case 0x27d8b8u: goto label_27d8b8;
        case 0x27d8bcu: goto label_27d8bc;
        case 0x27d8c0u: goto label_27d8c0;
        case 0x27d8c4u: goto label_27d8c4;
        case 0x27d8c8u: goto label_27d8c8;
        case 0x27d8ccu: goto label_27d8cc;
        case 0x27d8d0u: goto label_27d8d0;
        case 0x27d8d4u: goto label_27d8d4;
        case 0x27d8d8u: goto label_27d8d8;
        case 0x27d8dcu: goto label_27d8dc;
        case 0x27d8e0u: goto label_27d8e0;
        case 0x27d8e4u: goto label_27d8e4;
        case 0x27d8e8u: goto label_27d8e8;
        case 0x27d8ecu: goto label_27d8ec;
        case 0x27d8f0u: goto label_27d8f0;
        case 0x27d8f4u: goto label_27d8f4;
        case 0x27d8f8u: goto label_27d8f8;
        case 0x27d8fcu: goto label_27d8fc;
        case 0x27d900u: goto label_27d900;
        case 0x27d904u: goto label_27d904;
        case 0x27d908u: goto label_27d908;
        case 0x27d90cu: goto label_27d90c;
        case 0x27d910u: goto label_27d910;
        case 0x27d914u: goto label_27d914;
        case 0x27d918u: goto label_27d918;
        case 0x27d91cu: goto label_27d91c;
        case 0x27d920u: goto label_27d920;
        case 0x27d924u: goto label_27d924;
        case 0x27d928u: goto label_27d928;
        case 0x27d92cu: goto label_27d92c;
        case 0x27d930u: goto label_27d930;
        case 0x27d934u: goto label_27d934;
        case 0x27d938u: goto label_27d938;
        case 0x27d93cu: goto label_27d93c;
        case 0x27d940u: goto label_27d940;
        case 0x27d944u: goto label_27d944;
        case 0x27d948u: goto label_27d948;
        case 0x27d94cu: goto label_27d94c;
        case 0x27d950u: goto label_27d950;
        case 0x27d954u: goto label_27d954;
        case 0x27d958u: goto label_27d958;
        case 0x27d95cu: goto label_27d95c;
        case 0x27d960u: goto label_27d960;
        case 0x27d964u: goto label_27d964;
        case 0x27d968u: goto label_27d968;
        case 0x27d96cu: goto label_27d96c;
        case 0x27d970u: goto label_27d970;
        case 0x27d974u: goto label_27d974;
        case 0x27d978u: goto label_27d978;
        case 0x27d97cu: goto label_27d97c;
        case 0x27d980u: goto label_27d980;
        case 0x27d984u: goto label_27d984;
        case 0x27d988u: goto label_27d988;
        case 0x27d98cu: goto label_27d98c;
        case 0x27d990u: goto label_27d990;
        case 0x27d994u: goto label_27d994;
        case 0x27d998u: goto label_27d998;
        case 0x27d99cu: goto label_27d99c;
        case 0x27d9a0u: goto label_27d9a0;
        case 0x27d9a4u: goto label_27d9a4;
        case 0x27d9a8u: goto label_27d9a8;
        case 0x27d9acu: goto label_27d9ac;
        case 0x27d9b0u: goto label_27d9b0;
        case 0x27d9b4u: goto label_27d9b4;
        case 0x27d9b8u: goto label_27d9b8;
        case 0x27d9bcu: goto label_27d9bc;
        case 0x27d9c0u: goto label_27d9c0;
        case 0x27d9c4u: goto label_27d9c4;
        case 0x27d9c8u: goto label_27d9c8;
        case 0x27d9ccu: goto label_27d9cc;
        case 0x27d9d0u: goto label_27d9d0;
        case 0x27d9d4u: goto label_27d9d4;
        case 0x27d9d8u: goto label_27d9d8;
        case 0x27d9dcu: goto label_27d9dc;
        case 0x27d9e0u: goto label_27d9e0;
        case 0x27d9e4u: goto label_27d9e4;
        case 0x27d9e8u: goto label_27d9e8;
        case 0x27d9ecu: goto label_27d9ec;
        case 0x27d9f0u: goto label_27d9f0;
        case 0x27d9f4u: goto label_27d9f4;
        case 0x27d9f8u: goto label_27d9f8;
        case 0x27d9fcu: goto label_27d9fc;
        case 0x27da00u: goto label_27da00;
        case 0x27da04u: goto label_27da04;
        case 0x27da08u: goto label_27da08;
        case 0x27da0cu: goto label_27da0c;
        case 0x27da10u: goto label_27da10;
        case 0x27da14u: goto label_27da14;
        case 0x27da18u: goto label_27da18;
        case 0x27da1cu: goto label_27da1c;
        case 0x27da20u: goto label_27da20;
        case 0x27da24u: goto label_27da24;
        case 0x27da28u: goto label_27da28;
        case 0x27da2cu: goto label_27da2c;
        case 0x27da30u: goto label_27da30;
        case 0x27da34u: goto label_27da34;
        case 0x27da38u: goto label_27da38;
        case 0x27da3cu: goto label_27da3c;
        case 0x27da40u: goto label_27da40;
        case 0x27da44u: goto label_27da44;
        case 0x27da48u: goto label_27da48;
        case 0x27da4cu: goto label_27da4c;
        case 0x27da50u: goto label_27da50;
        case 0x27da54u: goto label_27da54;
        case 0x27da58u: goto label_27da58;
        case 0x27da5cu: goto label_27da5c;
        case 0x27da60u: goto label_27da60;
        case 0x27da64u: goto label_27da64;
        case 0x27da68u: goto label_27da68;
        case 0x27da6cu: goto label_27da6c;
        case 0x27da70u: goto label_27da70;
        case 0x27da74u: goto label_27da74;
        case 0x27da78u: goto label_27da78;
        case 0x27da7cu: goto label_27da7c;
        case 0x27da80u: goto label_27da80;
        case 0x27da84u: goto label_27da84;
        case 0x27da88u: goto label_27da88;
        case 0x27da8cu: goto label_27da8c;
        case 0x27da90u: goto label_27da90;
        case 0x27da94u: goto label_27da94;
        case 0x27da98u: goto label_27da98;
        case 0x27da9cu: goto label_27da9c;
        case 0x27daa0u: goto label_27daa0;
        case 0x27daa4u: goto label_27daa4;
        case 0x27daa8u: goto label_27daa8;
        case 0x27daacu: goto label_27daac;
        case 0x27dab0u: goto label_27dab0;
        case 0x27dab4u: goto label_27dab4;
        case 0x27dab8u: goto label_27dab8;
        case 0x27dabcu: goto label_27dabc;
        case 0x27dac0u: goto label_27dac0;
        case 0x27dac4u: goto label_27dac4;
        case 0x27dac8u: goto label_27dac8;
        case 0x27daccu: goto label_27dacc;
        case 0x27dad0u: goto label_27dad0;
        case 0x27dad4u: goto label_27dad4;
        case 0x27dad8u: goto label_27dad8;
        case 0x27dadcu: goto label_27dadc;
        case 0x27dae0u: goto label_27dae0;
        case 0x27dae4u: goto label_27dae4;
        case 0x27dae8u: goto label_27dae8;
        case 0x27daecu: goto label_27daec;
        default: break;
    }

    ctx->pc = 0x27d670u;

label_27d670:
    // 0x27d670: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x27d670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_27d674:
    // 0x27d674: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x27d674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_27d678:
    // 0x27d678: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x27d678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_27d67c:
    // 0x27d67c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x27d67cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_27d680:
    // 0x27d680: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x27d680u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_27d684:
    // 0x27d684: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x27d684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_27d688:
    // 0x27d688: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x27d688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_27d68c:
    // 0x27d68c: 0x240403be  addiu       $a0, $zero, 0x3BE
    ctx->pc = 0x27d68cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 958));
label_27d690:
    // 0x27d690: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x27d690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_27d694:
    // 0x27d694: 0xc0c3ea6  jal         func_30FA98
label_27d698:
    if (ctx->pc == 0x27D698u) {
        ctx->pc = 0x27D698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D694u;
        // 0x27d698: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D69Cu;
        goto label_27d69c;
    }
    ctx->pc = 0x27D694u;
    SET_GPR_U32(ctx, 31, 0x27D69Cu);
    ctx->pc = 0x27D698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D694u;
    // 0x27d698: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FA98u, 0x27D694u, 0x27D69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D69Cu;
label_27d69c:
    // 0x27d69c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27d69cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27d6a0:
    // 0x27d6a0: 0x5200010b  beql        $s0, $zero, . + 4 + (0x10B << 2)
label_27d6a4:
    if (ctx->pc == 0x27D6A4u) {
        ctx->pc = 0x27D6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D6A0u;
        // 0x27d6a4: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D6A8u;
        goto label_27d6a8;
    }
    ctx->pc = 0x27D6A0u;
    {
        const bool branch_taken_0x27d6a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d6a0) {
            ctx->pc = 0x27D6A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27D6A0u;
            // 0x27d6a4: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27DAD0u;
            goto label_27dad0;
        }
    }
    ctx->pc = 0x27D6A8u;
label_27d6a8:
    // 0x27d6a8: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x27d6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_27d6ac:
    // 0x27d6ac: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x27d6acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
label_27d6b0:
    // 0x27d6b0: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x27d6b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
label_27d6b4:
    // 0x27d6b4: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x27d6b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
label_27d6b8:
    // 0x27d6b8: 0xc0b6dac  jal         func_2DB6B0
label_27d6bc:
    if (ctx->pc == 0x27D6BCu) {
        ctx->pc = 0x27D6C0u;
        goto label_27d6c0;
    }
    ctx->pc = 0x27D6B8u;
    SET_GPR_U32(ctx, 31, 0x27D6C0u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x27D6B8u, 0x27D6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D6C0u;
label_27d6c0:
    // 0x27d6c0: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x27d6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_27d6c4:
    // 0x27d6c4: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x27d6c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_27d6c8:
    // 0x27d6c8: 0x12420008  beq         $s2, $v0, . + 4 + (0x8 << 2)
label_27d6cc:
    if (ctx->pc == 0x27D6CCu) {
        ctx->pc = 0x27D6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D6C8u;
        // 0x27d6cc: 0xc7a00034  lwc1        $f0, 0x34($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D6D0u;
        goto label_27d6d0;
    }
    ctx->pc = 0x27D6C8u;
    {
        const bool branch_taken_0x27d6c8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x27D6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D6C8u;
        // 0x27d6cc: 0xc7a00034  lwc1        $f0, 0x34($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d6c8) {
            ctx->pc = 0x27D6ECu;
            goto label_27d6ec;
        }
    }
    ctx->pc = 0x27D6D0u;
label_27d6d0:
    // 0x27d6d0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x27d6d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27d6d4:
    // 0x27d6d4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x27d6d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_27d6d8:
    // 0x27d6d8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x27d6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27d6dc:
    // 0x27d6dc: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x27d6dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_27d6e0:
    // 0x27d6e0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x27d6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27d6e4:
    // 0x27d6e4: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x27d6e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_27d6e8:
    // 0x27d6e8: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x27d6e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27d6ec:
    // 0x27d6ec: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x27d6ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
label_27d6f0:
    // 0x27d6f0: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x27d6f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_27d6f4:
    // 0x27d6f4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x27d6f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_27d6f8:
    // 0x27d6f8: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x27d6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_27d6fc:
    // 0x27d6fc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27d6fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_27d700:
    // 0x27d700: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x27d700u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_27d704:
    // 0x27d704: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_27d708:
    if (ctx->pc == 0x27D708u) {
        ctx->pc = 0x27D708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D704u;
        // 0x27d708: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D70Cu;
        goto label_27d70c;
    }
    ctx->pc = 0x27D704u;
    {
        const bool branch_taken_0x27d704 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D704u;
        // 0x27d708: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d704) {
            ctx->pc = 0x27D718u;
            goto label_27d718;
        }
    }
    ctx->pc = 0x27D70Cu;
label_27d70c:
    // 0x27d70c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27d70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27d710:
    // 0x27d710: 0x12220062  beq         $s1, $v0, . + 4 + (0x62 << 2)
label_27d714:
    if (ctx->pc == 0x27D714u) {
        ctx->pc = 0x27D714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D710u;
        // 0x27d714: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D718u;
        goto label_27d718;
    }
    ctx->pc = 0x27D710u;
    {
        const bool branch_taken_0x27d710 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x27D714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D710u;
        // 0x27d714: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d710) {
            ctx->pc = 0x27D89Cu;
            goto label_27d89c;
        }
    }
    ctx->pc = 0x27D718u;
label_27d718:
    // 0x27d718: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x27d718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_27d71c:
    // 0x27d71c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x27d71cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_27d720:
    // 0x27d720: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27d720u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27d724:
    // 0x27d724: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27d724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_27d728:
    // 0x27d728: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x27d728u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_27d72c:
    // 0x27d72c: 0x26650080  addiu       $a1, $s3, 0x80
    ctx->pc = 0x27d72cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
label_27d730:
    // 0x27d730: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x27d730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_27d734:
    // 0x27d734: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x27d734u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_27d738:
    // 0x27d738: 0xc0c28ac  jal         func_30A2B0
label_27d73c:
    if (ctx->pc == 0x27D73Cu) {
        ctx->pc = 0x27D73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D738u;
        // 0x27d73c: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D740u;
        goto label_27d740;
    }
    ctx->pc = 0x27D738u;
    SET_GPR_U32(ctx, 31, 0x27D740u);
    ctx->pc = 0x27D73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D738u;
    // 0x27d73c: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x27D738u, 0x27D740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D740u;
label_27d740:
    // 0x27d740: 0x8e6315b0  lw          $v1, 0x15B0($s3)
    ctx->pc = 0x27d740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 5552)));
label_27d744:
    // 0x27d744: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_27d748:
    if (ctx->pc == 0x27D748u) {
        ctx->pc = 0x27D748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D744u;
        // 0x27d748: 0x27a20060  addiu       $v0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D74Cu;
        goto label_27d74c;
    }
    ctx->pc = 0x27D744u;
    {
        const bool branch_taken_0x27d744 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D744u;
        // 0x27d748: 0x27a20060  addiu       $v0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d744) {
            ctx->pc = 0x27D798u;
            goto label_27d798;
        }
    }
    ctx->pc = 0x27D74Cu;
label_27d74c:
    // 0x27d74c: 0x906202b4  lbu         $v0, 0x2B4($v1)
    ctx->pc = 0x27d74cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 692)));
label_27d750:
    // 0x27d750: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_27d754:
    if (ctx->pc == 0x27D754u) {
        ctx->pc = 0x27D754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D750u;
        // 0x27d754: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D758u;
        goto label_27d758;
    }
    ctx->pc = 0x27D750u;
    {
        const bool branch_taken_0x27d750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D750u;
        // 0x27d754: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d750) {
            ctx->pc = 0x27D764u;
            goto label_27d764;
        }
    }
    ctx->pc = 0x27D758u;
label_27d758:
    // 0x27d758: 0x8c620278  lw          $v0, 0x278($v1)
    ctx->pc = 0x27d758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 632)));
label_27d75c:
    // 0x27d75c: 0x10000002  b           . + 4 + (0x2 << 2)
label_27d760:
    if (ctx->pc == 0x27D760u) {
        ctx->pc = 0x27D760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D75Cu;
        // 0x27d760: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D764u;
        goto label_27d764;
    }
    ctx->pc = 0x27D75Cu;
    {
        const bool branch_taken_0x27d75c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D75Cu;
        // 0x27d760: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d75c) {
            ctx->pc = 0x27D768u;
            goto label_27d768;
        }
    }
    ctx->pc = 0x27D764u;
label_27d764:
    // 0x27d764: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27d764u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27d768:
    // 0x27d768: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_27d76c:
    if (ctx->pc == 0x27D76Cu) {
        ctx->pc = 0x27D76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D768u;
        // 0x27d76c: 0x24450080  addiu       $a1, $v0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D770u;
        goto label_27d770;
    }
    ctx->pc = 0x27D768u;
    {
        const bool branch_taken_0x27d768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D768u;
        // 0x27d76c: 0x24450080  addiu       $a1, $v0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d768) {
            ctx->pc = 0x27D794u;
            goto label_27d794;
        }
    }
    ctx->pc = 0x27D770u;
label_27d770:
    // 0x27d770: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x27d770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_27d774:
    // 0x27d774: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x27d774u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_27d778:
    // 0x27d778: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27d778u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27d77c:
    // 0x27d77c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x27d77cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_27d780:
    // 0x27d780: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27d780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_27d784:
    // 0x27d784: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x27d784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_27d788:
    // 0x27d788: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x27d788u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_27d78c:
    // 0x27d78c: 0xc0c28ac  jal         func_30A2B0
label_27d790:
    if (ctx->pc == 0x27D790u) {
        ctx->pc = 0x27D790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D78Cu;
        // 0x27d790: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D794u;
        goto label_27d794;
    }
    ctx->pc = 0x27D78Cu;
    SET_GPR_U32(ctx, 31, 0x27D794u);
    ctx->pc = 0x27D790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D78Cu;
    // 0x27d790: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x27D78Cu, 0x27D794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D794u;
label_27d794:
    // 0x27d794: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x27d794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_27d798:
    // 0x27d798: 0x27b10050  addiu       $s1, $sp, 0x50
    ctx->pc = 0x27d798u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_27d79c:
    // 0x27d79c: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x27d79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
label_27d7a0:
    // 0x27d7a0: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x27d7a0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_27d7a4:
    // 0x27d7a4: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x27d7a4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_27d7a8:
    // 0x27d7a8: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x27d7a8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_27d7ac:
    // 0x27d7ac: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x27d7acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
label_27d7b0:
    // 0x27d7b0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x27d7b0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_27d7b4:
    // 0x27d7b4: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x27d7b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
label_27d7b8:
    // 0x27d7b8: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x27d7b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27d7bc:
    // 0x27d7bc: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x27d7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27d7c0:
    // 0x27d7c0: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x27d7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27d7c4:
    // 0x27d7c4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x27d7c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_27d7c8:
    // 0x27d7c8: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x27d7c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_27d7cc:
    // 0x27d7cc: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x27d7ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_27d7d0:
    // 0x27d7d0: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x27d7d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
label_27d7d4:
    // 0x27d7d4: 0xc04078a  jal         func_101E28
label_27d7d8:
    if (ctx->pc == 0x27D7D8u) {
        ctx->pc = 0x27D7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D7D4u;
        // 0x27d7d8: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D7DCu;
        goto label_27d7dc;
    }
    ctx->pc = 0x27D7D4u;
    SET_GPR_U32(ctx, 31, 0x27D7DCu);
    ctx->pc = 0x27D7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D7D4u;
    // 0x27d7d8: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x27D7D4u, 0x27D7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D7DCu;
label_27d7dc:
    // 0x27d7dc: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x27d7dcu;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_27d7e0:
    // 0x27d7e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27d7e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27d7e4:
    // 0x27d7e4: 0x0  nop
    ctx->pc = 0x27d7e4u;
    // NOP
label_27d7e8:
    // 0x27d7e8: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x27d7e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27d7ec:
    // 0x27d7ec: 0x0  nop
    ctx->pc = 0x27d7ecu;
    // NOP
label_27d7f0:
    // 0x27d7f0: 0x45000010  bc1f        . + 4 + (0x10 << 2)
label_27d7f4:
    if (ctx->pc == 0x27D7F4u) {
        ctx->pc = 0x27D7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D7F0u;
        // 0x27d7f4: 0xc7a40020  lwc1        $f4, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D7F8u;
        goto label_27d7f8;
    }
    ctx->pc = 0x27D7F0u;
    {
        const bool branch_taken_0x27d7f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27D7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D7F0u;
        // 0x27d7f4: 0xc7a40020  lwc1        $f4, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d7f0) {
            ctx->pc = 0x27D834u;
            goto label_27d834;
        }
    }
    ctx->pc = 0x27D7F8u;
label_27d7f8:
    // 0x27d7f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27d7f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_27d7fc:
    // 0x27d7fc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x27d7fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_27d800:
    // 0x27d800: 0x0  nop
    ctx->pc = 0x27d800u;
    // NOP
label_27d804:
    // 0x27d804: 0x0  nop
    ctx->pc = 0x27d804u;
    // NOP
label_27d808:
    // 0x27d808: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x27d808u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[2]);
label_27d80c:
    // 0x27d80c: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x27d80cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_27d810:
    // 0x27d810: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x27d810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27d814:
    // 0x27d814: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x27d814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27d818:
    // 0x27d818: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x27d818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_27d81c:
    // 0x27d81c: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x27d81cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_27d820:
    // 0x27d820: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x27d820u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_27d824:
    // 0x27d824: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x27d824u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_27d828:
    // 0x27d828: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x27d828u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_27d82c:
    // 0x27d82c: 0xe7a40050  swc1        $f4, 0x50($sp)
    ctx->pc = 0x27d82cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_27d830:
    // 0x27d830: 0xe7a30054  swc1        $f3, 0x54($sp)
    ctx->pc = 0x27d830u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_27d834:
    // 0x27d834: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x27d834u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_27d838:
    // 0x27d838: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x27d838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
label_27d83c:
    // 0x27d83c: 0xc7a20040  lwc1        $f2, 0x40($sp)
    ctx->pc = 0x27d83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27d840:
    // 0x27d840: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x27d840u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_27d844:
    // 0x27d844: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x27d844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27d848:
    // 0x27d848: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x27d848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
label_27d84c:
    // 0x27d84c: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x27d84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27d850:
    // 0x27d850: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x27d850u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_27d854:
    // 0x27d854: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x27d854u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_27d858:
    // 0x27d858: 0xc07e804  jal         func_1FA010
label_27d85c:
    if (ctx->pc == 0x27D85Cu) {
        ctx->pc = 0x27D85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D858u;
        // 0x27d85c: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D860u;
        goto label_27d860;
    }
    ctx->pc = 0x27D858u;
    SET_GPR_U32(ctx, 31, 0x27D860u);
    ctx->pc = 0x27D85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D858u;
    // 0x27d85c: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x27D858u, 0x27D860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D860u;
label_27d860:
    // 0x27d860: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x27d860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_27d864:
    // 0x27d864: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27d864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_27d868:
    // 0x27d868: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27d868u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27d86c:
    // 0x27d86c: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_27d870:
    if (ctx->pc == 0x27D870u) {
        ctx->pc = 0x27D874u;
        goto label_27d874;
    }
    ctx->pc = 0x27D86Cu;
    {
        const bool branch_taken_0x27d86c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x27d86c) {
            ctx->pc = 0x27D880u;
            goto label_27d880;
        }
    }
    ctx->pc = 0x27D874u;
label_27d874:
    // 0x27d874: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x27d874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
label_27d878:
    // 0x27d878: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x27d878u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_27d87c:
    // 0x27d87c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27d87cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27d880:
    // 0x27d880: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x27d880u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_27d884:
    // 0x27d884: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x27d884u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_27d888:
    // 0x27d888: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x27d888u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_27d88c:
    // 0x27d88c: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x27d88cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_27d890:
    // 0x27d890: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x27d890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_27d894:
    // 0x27d894: 0x1000006d  b           . + 4 + (0x6D << 2)
label_27d898:
    if (ctx->pc == 0x27D898u) {
        ctx->pc = 0x27D898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D894u;
        // 0x27d898: 0x2411000f  addiu       $s1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D89Cu;
        goto label_27d89c;
    }
    ctx->pc = 0x27D894u;
    {
        const bool branch_taken_0x27d894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D894u;
        // 0x27d898: 0x2411000f  addiu       $s1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d894) {
            ctx->pc = 0x27DA4Cu;
            goto label_27da4c;
        }
    }
    ctx->pc = 0x27D89Cu;
label_27d89c:
    // 0x27d89c: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x27d89cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_27d8a0:
    // 0x27d8a0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x27d8a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_27d8a4:
    // 0x27d8a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27d8a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27d8a8:
    // 0x27d8a8: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x27d8a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_27d8ac:
    // 0x27d8ac: 0x26650080  addiu       $a1, $s3, 0x80
    ctx->pc = 0x27d8acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
label_27d8b0:
    // 0x27d8b0: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x27d8b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_27d8b4:
    // 0x27d8b4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x27d8b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_27d8b8:
    // 0x27d8b8: 0xc0c28ac  jal         func_30A2B0
label_27d8bc:
    if (ctx->pc == 0x27D8BCu) {
        ctx->pc = 0x27D8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D8B8u;
        // 0x27d8bc: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D8C0u;
        goto label_27d8c0;
    }
    ctx->pc = 0x27D8B8u;
    SET_GPR_U32(ctx, 31, 0x27D8C0u);
    ctx->pc = 0x27D8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D8B8u;
    // 0x27d8bc: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x27D8B8u, 0x27D8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D8C0u;
label_27d8c0:
    // 0x27d8c0: 0x8e6315b0  lw          $v1, 0x15B0($s3)
    ctx->pc = 0x27d8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 5552)));
label_27d8c4:
    // 0x27d8c4: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_27d8c8:
    if (ctx->pc == 0x27D8C8u) {
        ctx->pc = 0x27D8CCu;
        goto label_27d8cc;
    }
    ctx->pc = 0x27D8C4u;
    {
        const bool branch_taken_0x27d8c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d8c4) {
            ctx->pc = 0x27D914u;
            goto label_27d914;
        }
    }
    ctx->pc = 0x27D8CCu;
label_27d8cc:
    // 0x27d8cc: 0x906202b4  lbu         $v0, 0x2B4($v1)
    ctx->pc = 0x27d8ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 692)));
label_27d8d0:
    // 0x27d8d0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_27d8d4:
    if (ctx->pc == 0x27D8D4u) {
        ctx->pc = 0x27D8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D8D0u;
        // 0x27d8d4: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D8D8u;
        goto label_27d8d8;
    }
    ctx->pc = 0x27D8D0u;
    {
        const bool branch_taken_0x27d8d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D8D0u;
        // 0x27d8d4: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d8d0) {
            ctx->pc = 0x27D8E4u;
            goto label_27d8e4;
        }
    }
    ctx->pc = 0x27D8D8u;
label_27d8d8:
    // 0x27d8d8: 0x8c620278  lw          $v0, 0x278($v1)
    ctx->pc = 0x27d8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 632)));
label_27d8dc:
    // 0x27d8dc: 0x10000002  b           . + 4 + (0x2 << 2)
label_27d8e0:
    if (ctx->pc == 0x27D8E0u) {
        ctx->pc = 0x27D8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D8DCu;
        // 0x27d8e0: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D8E4u;
        goto label_27d8e4;
    }
    ctx->pc = 0x27D8DCu;
    {
        const bool branch_taken_0x27d8dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D8DCu;
        // 0x27d8e0: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d8dc) {
            ctx->pc = 0x27D8E8u;
            goto label_27d8e8;
        }
    }
    ctx->pc = 0x27D8E4u;
label_27d8e4:
    // 0x27d8e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27d8e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27d8e8:
    // 0x27d8e8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_27d8ec:
    if (ctx->pc == 0x27D8ECu) {
        ctx->pc = 0x27D8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D8E8u;
        // 0x27d8ec: 0x24450080  addiu       $a1, $v0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D8F0u;
        goto label_27d8f0;
    }
    ctx->pc = 0x27D8E8u;
    {
        const bool branch_taken_0x27d8e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D8E8u;
        // 0x27d8ec: 0x24450080  addiu       $a1, $v0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d8e8) {
            ctx->pc = 0x27D914u;
            goto label_27d914;
        }
    }
    ctx->pc = 0x27D8F0u;
label_27d8f0:
    // 0x27d8f0: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x27d8f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_27d8f4:
    // 0x27d8f4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x27d8f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_27d8f8:
    // 0x27d8f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27d8f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27d8fc:
    // 0x27d8fc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x27d8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_27d900:
    // 0x27d900: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27d900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_27d904:
    // 0x27d904: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x27d904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_27d908:
    // 0x27d908: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x27d908u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_27d90c:
    // 0x27d90c: 0xc0c28ac  jal         func_30A2B0
label_27d910:
    if (ctx->pc == 0x27D910u) {
        ctx->pc = 0x27D910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D90Cu;
        // 0x27d910: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D914u;
        goto label_27d914;
    }
    ctx->pc = 0x27D90Cu;
    SET_GPR_U32(ctx, 31, 0x27D914u);
    ctx->pc = 0x27D910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D90Cu;
    // 0x27d910: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x27D90Cu, 0x27D914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D914u;
label_27d914:
    // 0x27d914: 0xc0c7408  jal         func_31D020
label_27d918:
    if (ctx->pc == 0x27D918u) {
        ctx->pc = 0x27D91Cu;
        goto label_27d91c;
    }
    ctx->pc = 0x27D914u;
    SET_GPR_U32(ctx, 31, 0x27D91Cu);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x27D914u, 0x27D91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D91Cu;
label_27d91c:
    // 0x27d91c: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x27d91cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27d920:
    // 0x27d920: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x27d920u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_27d924:
    // 0x27d924: 0xc0c7408  jal         func_31D020
label_27d928:
    if (ctx->pc == 0x27D928u) {
        ctx->pc = 0x27D928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D924u;
        // 0x27d928: 0xe7a10030  swc1        $f1, 0x30($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D92Cu;
        goto label_27d92c;
    }
    ctx->pc = 0x27D924u;
    SET_GPR_U32(ctx, 31, 0x27D92Cu);
    ctx->pc = 0x27D928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D924u;
    // 0x27d928: 0xe7a10030  swc1        $f1, 0x30($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x27D924u, 0x27D92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D92Cu;
label_27d92c:
    // 0x27d92c: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x27d92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27d930:
    // 0x27d930: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x27d930u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_27d934:
    // 0x27d934: 0xc0c7408  jal         func_31D020
label_27d938:
    if (ctx->pc == 0x27D938u) {
        ctx->pc = 0x27D938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D934u;
        // 0x27d938: 0xe7a10034  swc1        $f1, 0x34($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D93Cu;
        goto label_27d93c;
    }
    ctx->pc = 0x27D934u;
    SET_GPR_U32(ctx, 31, 0x27D93Cu);
    ctx->pc = 0x27D938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D934u;
    // 0x27d938: 0xe7a10034  swc1        $f1, 0x34($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x27D934u, 0x27D93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D93Cu;
label_27d93c:
    // 0x27d93c: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x27d93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27d940:
    // 0x27d940: 0x27b10050  addiu       $s1, $sp, 0x50
    ctx->pc = 0x27d940u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_27d944:
    // 0x27d944: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x27d944u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_27d948:
    // 0x27d948: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x27d948u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_27d94c:
    // 0x27d94c: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x27d94cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
label_27d950:
    // 0x27d950: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x27d950u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_27d954:
    // 0x27d954: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x27d954u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_27d958:
    // 0x27d958: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x27d958u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_27d95c:
    // 0x27d95c: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x27d95cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
label_27d960:
    // 0x27d960: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x27d960u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_27d964:
    // 0x27d964: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x27d964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
label_27d968:
    // 0x27d968: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x27d968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27d96c:
    // 0x27d96c: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x27d96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27d970:
    // 0x27d970: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x27d970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27d974:
    // 0x27d974: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x27d974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_27d978:
    // 0x27d978: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x27d978u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_27d97c:
    // 0x27d97c: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x27d97cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_27d980:
    // 0x27d980: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x27d980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
label_27d984:
    // 0x27d984: 0xc04078a  jal         func_101E28
label_27d988:
    if (ctx->pc == 0x27D988u) {
        ctx->pc = 0x27D988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D984u;
        // 0x27d988: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D98Cu;
        goto label_27d98c;
    }
    ctx->pc = 0x27D984u;
    SET_GPR_U32(ctx, 31, 0x27D98Cu);
    ctx->pc = 0x27D988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D984u;
    // 0x27d988: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x27D984u, 0x27D98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D98Cu;
label_27d98c:
    // 0x27d98c: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x27d98cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_27d990:
    // 0x27d990: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27d990u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27d994:
    // 0x27d994: 0x0  nop
    ctx->pc = 0x27d994u;
    // NOP
label_27d998:
    // 0x27d998: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x27d998u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27d99c:
    // 0x27d99c: 0x0  nop
    ctx->pc = 0x27d99cu;
    // NOP
label_27d9a0:
    // 0x27d9a0: 0x45000010  bc1f        . + 4 + (0x10 << 2)
label_27d9a4:
    if (ctx->pc == 0x27D9A4u) {
        ctx->pc = 0x27D9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D9A0u;
        // 0x27d9a4: 0xc7a40020  lwc1        $f4, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D9A8u;
        goto label_27d9a8;
    }
    ctx->pc = 0x27D9A0u;
    {
        const bool branch_taken_0x27d9a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27D9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D9A0u;
        // 0x27d9a4: 0xc7a40020  lwc1        $f4, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d9a0) {
            ctx->pc = 0x27D9E4u;
            goto label_27d9e4;
        }
    }
    ctx->pc = 0x27D9A8u;
label_27d9a8:
    // 0x27d9a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27d9a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_27d9ac:
    // 0x27d9ac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x27d9acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_27d9b0:
    // 0x27d9b0: 0x0  nop
    ctx->pc = 0x27d9b0u;
    // NOP
label_27d9b4:
    // 0x27d9b4: 0x0  nop
    ctx->pc = 0x27d9b4u;
    // NOP
label_27d9b8:
    // 0x27d9b8: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x27d9b8u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[2]);
label_27d9bc:
    // 0x27d9bc: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x27d9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_27d9c0:
    // 0x27d9c0: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x27d9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27d9c4:
    // 0x27d9c4: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x27d9c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27d9c8:
    // 0x27d9c8: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x27d9c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_27d9cc:
    // 0x27d9cc: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x27d9ccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_27d9d0:
    // 0x27d9d0: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x27d9d0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_27d9d4:
    // 0x27d9d4: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x27d9d4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_27d9d8:
    // 0x27d9d8: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x27d9d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_27d9dc:
    // 0x27d9dc: 0xe7a40050  swc1        $f4, 0x50($sp)
    ctx->pc = 0x27d9dcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_27d9e0:
    // 0x27d9e0: 0xe7a30054  swc1        $f3, 0x54($sp)
    ctx->pc = 0x27d9e0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_27d9e4:
    // 0x27d9e4: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x27d9e4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_27d9e8:
    // 0x27d9e8: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x27d9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
label_27d9ec:
    // 0x27d9ec: 0xc7a20040  lwc1        $f2, 0x40($sp)
    ctx->pc = 0x27d9ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27d9f0:
    // 0x27d9f0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x27d9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_27d9f4:
    // 0x27d9f4: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x27d9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27d9f8:
    // 0x27d9f8: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x27d9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
label_27d9fc:
    // 0x27d9fc: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x27d9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27da00:
    // 0x27da00: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x27da00u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_27da04:
    // 0x27da04: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x27da04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_27da08:
    // 0x27da08: 0xc07e804  jal         func_1FA010
label_27da0c:
    if (ctx->pc == 0x27DA0Cu) {
        ctx->pc = 0x27DA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DA08u;
        // 0x27da0c: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DA10u;
        goto label_27da10;
    }
    ctx->pc = 0x27DA08u;
    SET_GPR_U32(ctx, 31, 0x27DA10u);
    ctx->pc = 0x27DA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DA08u;
    // 0x27da0c: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x27DA08u, 0x27DA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DA10u;
label_27da10:
    // 0x27da10: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x27da10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_27da14:
    // 0x27da14: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x27da14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
label_27da18:
    // 0x27da18: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x27da18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_27da1c:
    // 0x27da1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27da1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27da20:
    // 0x27da20: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_27da24:
    if (ctx->pc == 0x27DA24u) {
        ctx->pc = 0x27DA28u;
        goto label_27da28;
    }
    ctx->pc = 0x27DA20u;
    {
        const bool branch_taken_0x27da20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x27da20) {
            ctx->pc = 0x27DA34u;
            goto label_27da34;
        }
    }
    ctx->pc = 0x27DA28u;
label_27da28:
    // 0x27da28: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x27da28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_27da2c:
    // 0x27da2c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x27da2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_27da30:
    // 0x27da30: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27da30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27da34:
    // 0x27da34: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x27da34u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_27da38:
    // 0x27da38: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x27da38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_27da3c:
    // 0x27da3c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x27da3cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_27da40:
    // 0x27da40: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x27da40u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_27da44:
    // 0x27da44: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x27da44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_27da48:
    // 0x27da48: 0x2411000e  addiu       $s1, $zero, 0xE
    ctx->pc = 0x27da48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_27da4c:
    // 0x27da4c: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x27da4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_27da50:
    // 0x27da50: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x27da50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_27da54:
    // 0x27da54: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x27da54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_27da58:
    // 0x27da58: 0x40f809  jalr        $v0
label_27da5c:
    if (ctx->pc == 0x27DA5Cu) {
        ctx->pc = 0x27DA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DA58u;
        // 0x27da5c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DA60u;
        goto label_27da60;
    }
    ctx->pc = 0x27DA58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x27DA60u);
        ctx->pc = 0x27DA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DA58u;
        // 0x27da5c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27DA58u, 0x27DA60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27DA60u;
label_27da60:
    // 0x27da60: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x27da60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_27da64:
    // 0x27da64: 0x105d0007  beq         $v0, $sp, . + 4 + (0x7 << 2)
label_27da68:
    if (ctx->pc == 0x27DA68u) {
        ctx->pc = 0x27DA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DA64u;
        // 0x27da68: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DA6Cu;
        goto label_27da6c;
    }
    ctx->pc = 0x27DA64u;
    {
        const bool branch_taken_0x27da64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x27DA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DA64u;
        // 0x27da68: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27da64) {
            ctx->pc = 0x27DA84u;
            goto label_27da84;
        }
    }
    ctx->pc = 0x27DA6Cu;
label_27da6c:
    // 0x27da6c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x27da6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_27da70:
    // 0x27da70: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x27da70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27da74:
    // 0x27da74: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x27da74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_27da78:
    // 0x27da78: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x27da78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27da7c:
    // 0x27da7c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x27da7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_27da80:
    // 0x27da80: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x27da80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_27da84:
    // 0x27da84: 0x26030490  addiu       $v1, $s0, 0x490
    ctx->pc = 0x27da84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1168));
label_27da88:
    // 0x27da88: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
label_27da8c:
    if (ctx->pc == 0x27DA8Cu) {
        ctx->pc = 0x27DA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DA88u;
        // 0x27da8c: 0x26020100  addiu       $v0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DA90u;
        goto label_27da90;
    }
    ctx->pc = 0x27DA88u;
    {
        const bool branch_taken_0x27da88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x27da88) {
            ctx->pc = 0x27DA8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27DA88u;
            // 0x27da8c: 0x26020100  addiu       $v0, $s0, 0x100 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27DAACu;
            goto label_27daac;
        }
    }
    ctx->pc = 0x27DA90u;
label_27da90:
    // 0x27da90: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x27da90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27da94:
    // 0x27da94: 0xe6000490  swc1        $f0, 0x490($s0)
    ctx->pc = 0x27da94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1168), bits); }
label_27da98:
    // 0x27da98: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x27da98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27da9c:
    // 0x27da9c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x27da9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_27daa0:
    // 0x27daa0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x27daa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27daa4:
    // 0x27daa4: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x27daa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_27daa8:
    // 0x27daa8: 0x26020100  addiu       $v0, $s0, 0x100
    ctx->pc = 0x27daa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
label_27daac:
    // 0x27daac: 0xae000100  sw          $zero, 0x100($s0)
    ctx->pc = 0x27daacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
label_27dab0:
    // 0x27dab0: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x27dab0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_27dab4:
    // 0x27dab4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27dab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27dab8:
    // 0x27dab8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x27dab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27dabc:
    // 0x27dabc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x27dabcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27dac0:
    // 0x27dac0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x27dac0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_27dac4:
    // 0x27dac4: 0xc06ed52  jal         func_1BB548
label_27dac8:
    if (ctx->pc == 0x27DAC8u) {
        ctx->pc = 0x27DAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DAC4u;
        // 0x27dac8: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DACCu;
        goto label_27dacc;
    }
    ctx->pc = 0x27DAC4u;
    SET_GPR_U32(ctx, 31, 0x27DACCu);
    ctx->pc = 0x27DAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DAC4u;
    // 0x27dac8: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB548u, 0x27DAC4u, 0x27DACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DACCu;
label_27dacc:
    // 0x27dacc: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x27daccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_27dad0:
    // 0x27dad0: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x27dad0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_27dad4:
    // 0x27dad4: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x27dad4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_27dad8:
    // 0x27dad8: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x27dad8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_27dadc:
    // 0x27dadc: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x27dadcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_27dae0:
    // 0x27dae0: 0x3e00008  jr          $ra
label_27dae4:
    if (ctx->pc == 0x27DAE4u) {
        ctx->pc = 0x27DAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DAE0u;
        // 0x27dae4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DAE8u;
        goto label_27dae8;
    }
    ctx->pc = 0x27DAE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27DAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DAE0u;
        // 0x27dae4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27DAE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27DAE8u;
label_27dae8:
    // 0x27dae8: 0xa08002f6  sb          $zero, 0x2F6($a0)
    ctx->pc = 0x27dae8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
label_27daec:
    // 0x27daec: 0x0  nop
    ctx->pc = 0x27daecu;
    // NOP
    ctx->pc = 0x27daf0u;
}
