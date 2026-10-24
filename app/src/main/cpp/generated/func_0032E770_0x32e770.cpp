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

// Function: func_0032E770
// Address: 0x32e770 - 0x32ebd8
void func_0032E770_0x32e770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032E770_0x32e770");
#endif

    switch (ctx->pc) {
        case 0x32e770u: goto label_32e770;
        case 0x32e774u: goto label_32e774;
        case 0x32e778u: goto label_32e778;
        case 0x32e77cu: goto label_32e77c;
        case 0x32e780u: goto label_32e780;
        case 0x32e784u: goto label_32e784;
        case 0x32e788u: goto label_32e788;
        case 0x32e78cu: goto label_32e78c;
        case 0x32e790u: goto label_32e790;
        case 0x32e794u: goto label_32e794;
        case 0x32e798u: goto label_32e798;
        case 0x32e79cu: goto label_32e79c;
        case 0x32e7a0u: goto label_32e7a0;
        case 0x32e7a4u: goto label_32e7a4;
        case 0x32e7a8u: goto label_32e7a8;
        case 0x32e7acu: goto label_32e7ac;
        case 0x32e7b0u: goto label_32e7b0;
        case 0x32e7b4u: goto label_32e7b4;
        case 0x32e7b8u: goto label_32e7b8;
        case 0x32e7bcu: goto label_32e7bc;
        case 0x32e7c0u: goto label_32e7c0;
        case 0x32e7c4u: goto label_32e7c4;
        case 0x32e7c8u: goto label_32e7c8;
        case 0x32e7ccu: goto label_32e7cc;
        case 0x32e7d0u: goto label_32e7d0;
        case 0x32e7d4u: goto label_32e7d4;
        case 0x32e7d8u: goto label_32e7d8;
        case 0x32e7dcu: goto label_32e7dc;
        case 0x32e7e0u: goto label_32e7e0;
        case 0x32e7e4u: goto label_32e7e4;
        case 0x32e7e8u: goto label_32e7e8;
        case 0x32e7ecu: goto label_32e7ec;
        case 0x32e7f0u: goto label_32e7f0;
        case 0x32e7f4u: goto label_32e7f4;
        case 0x32e7f8u: goto label_32e7f8;
        case 0x32e7fcu: goto label_32e7fc;
        case 0x32e800u: goto label_32e800;
        case 0x32e804u: goto label_32e804;
        case 0x32e808u: goto label_32e808;
        case 0x32e80cu: goto label_32e80c;
        case 0x32e810u: goto label_32e810;
        case 0x32e814u: goto label_32e814;
        case 0x32e818u: goto label_32e818;
        case 0x32e81cu: goto label_32e81c;
        case 0x32e820u: goto label_32e820;
        case 0x32e824u: goto label_32e824;
        case 0x32e828u: goto label_32e828;
        case 0x32e82cu: goto label_32e82c;
        case 0x32e830u: goto label_32e830;
        case 0x32e834u: goto label_32e834;
        case 0x32e838u: goto label_32e838;
        case 0x32e83cu: goto label_32e83c;
        case 0x32e840u: goto label_32e840;
        case 0x32e844u: goto label_32e844;
        case 0x32e848u: goto label_32e848;
        case 0x32e84cu: goto label_32e84c;
        case 0x32e850u: goto label_32e850;
        case 0x32e854u: goto label_32e854;
        case 0x32e858u: goto label_32e858;
        case 0x32e85cu: goto label_32e85c;
        case 0x32e860u: goto label_32e860;
        case 0x32e864u: goto label_32e864;
        case 0x32e868u: goto label_32e868;
        case 0x32e86cu: goto label_32e86c;
        case 0x32e870u: goto label_32e870;
        case 0x32e874u: goto label_32e874;
        case 0x32e878u: goto label_32e878;
        case 0x32e87cu: goto label_32e87c;
        case 0x32e880u: goto label_32e880;
        case 0x32e884u: goto label_32e884;
        case 0x32e888u: goto label_32e888;
        case 0x32e88cu: goto label_32e88c;
        case 0x32e890u: goto label_32e890;
        case 0x32e894u: goto label_32e894;
        case 0x32e898u: goto label_32e898;
        case 0x32e89cu: goto label_32e89c;
        case 0x32e8a0u: goto label_32e8a0;
        case 0x32e8a4u: goto label_32e8a4;
        case 0x32e8a8u: goto label_32e8a8;
        case 0x32e8acu: goto label_32e8ac;
        case 0x32e8b0u: goto label_32e8b0;
        case 0x32e8b4u: goto label_32e8b4;
        case 0x32e8b8u: goto label_32e8b8;
        case 0x32e8bcu: goto label_32e8bc;
        case 0x32e8c0u: goto label_32e8c0;
        case 0x32e8c4u: goto label_32e8c4;
        case 0x32e8c8u: goto label_32e8c8;
        case 0x32e8ccu: goto label_32e8cc;
        case 0x32e8d0u: goto label_32e8d0;
        case 0x32e8d4u: goto label_32e8d4;
        case 0x32e8d8u: goto label_32e8d8;
        case 0x32e8dcu: goto label_32e8dc;
        case 0x32e8e0u: goto label_32e8e0;
        case 0x32e8e4u: goto label_32e8e4;
        case 0x32e8e8u: goto label_32e8e8;
        case 0x32e8ecu: goto label_32e8ec;
        case 0x32e8f0u: goto label_32e8f0;
        case 0x32e8f4u: goto label_32e8f4;
        case 0x32e8f8u: goto label_32e8f8;
        case 0x32e8fcu: goto label_32e8fc;
        case 0x32e900u: goto label_32e900;
        case 0x32e904u: goto label_32e904;
        case 0x32e908u: goto label_32e908;
        case 0x32e90cu: goto label_32e90c;
        case 0x32e910u: goto label_32e910;
        case 0x32e914u: goto label_32e914;
        case 0x32e918u: goto label_32e918;
        case 0x32e91cu: goto label_32e91c;
        case 0x32e920u: goto label_32e920;
        case 0x32e924u: goto label_32e924;
        case 0x32e928u: goto label_32e928;
        case 0x32e92cu: goto label_32e92c;
        case 0x32e930u: goto label_32e930;
        case 0x32e934u: goto label_32e934;
        case 0x32e938u: goto label_32e938;
        case 0x32e93cu: goto label_32e93c;
        case 0x32e940u: goto label_32e940;
        case 0x32e944u: goto label_32e944;
        case 0x32e948u: goto label_32e948;
        case 0x32e94cu: goto label_32e94c;
        case 0x32e950u: goto label_32e950;
        case 0x32e954u: goto label_32e954;
        case 0x32e958u: goto label_32e958;
        case 0x32e95cu: goto label_32e95c;
        case 0x32e960u: goto label_32e960;
        case 0x32e964u: goto label_32e964;
        case 0x32e968u: goto label_32e968;
        case 0x32e96cu: goto label_32e96c;
        case 0x32e970u: goto label_32e970;
        case 0x32e974u: goto label_32e974;
        case 0x32e978u: goto label_32e978;
        case 0x32e97cu: goto label_32e97c;
        case 0x32e980u: goto label_32e980;
        case 0x32e984u: goto label_32e984;
        case 0x32e988u: goto label_32e988;
        case 0x32e98cu: goto label_32e98c;
        case 0x32e990u: goto label_32e990;
        case 0x32e994u: goto label_32e994;
        case 0x32e998u: goto label_32e998;
        case 0x32e99cu: goto label_32e99c;
        case 0x32e9a0u: goto label_32e9a0;
        case 0x32e9a4u: goto label_32e9a4;
        case 0x32e9a8u: goto label_32e9a8;
        case 0x32e9acu: goto label_32e9ac;
        case 0x32e9b0u: goto label_32e9b0;
        case 0x32e9b4u: goto label_32e9b4;
        case 0x32e9b8u: goto label_32e9b8;
        case 0x32e9bcu: goto label_32e9bc;
        case 0x32e9c0u: goto label_32e9c0;
        case 0x32e9c4u: goto label_32e9c4;
        case 0x32e9c8u: goto label_32e9c8;
        case 0x32e9ccu: goto label_32e9cc;
        case 0x32e9d0u: goto label_32e9d0;
        case 0x32e9d4u: goto label_32e9d4;
        case 0x32e9d8u: goto label_32e9d8;
        case 0x32e9dcu: goto label_32e9dc;
        case 0x32e9e0u: goto label_32e9e0;
        case 0x32e9e4u: goto label_32e9e4;
        case 0x32e9e8u: goto label_32e9e8;
        case 0x32e9ecu: goto label_32e9ec;
        case 0x32e9f0u: goto label_32e9f0;
        case 0x32e9f4u: goto label_32e9f4;
        case 0x32e9f8u: goto label_32e9f8;
        case 0x32e9fcu: goto label_32e9fc;
        case 0x32ea00u: goto label_32ea00;
        case 0x32ea04u: goto label_32ea04;
        case 0x32ea08u: goto label_32ea08;
        case 0x32ea0cu: goto label_32ea0c;
        case 0x32ea10u: goto label_32ea10;
        case 0x32ea14u: goto label_32ea14;
        case 0x32ea18u: goto label_32ea18;
        case 0x32ea1cu: goto label_32ea1c;
        case 0x32ea20u: goto label_32ea20;
        case 0x32ea24u: goto label_32ea24;
        case 0x32ea28u: goto label_32ea28;
        case 0x32ea2cu: goto label_32ea2c;
        case 0x32ea30u: goto label_32ea30;
        case 0x32ea34u: goto label_32ea34;
        case 0x32ea38u: goto label_32ea38;
        case 0x32ea3cu: goto label_32ea3c;
        case 0x32ea40u: goto label_32ea40;
        case 0x32ea44u: goto label_32ea44;
        case 0x32ea48u: goto label_32ea48;
        case 0x32ea4cu: goto label_32ea4c;
        case 0x32ea50u: goto label_32ea50;
        case 0x32ea54u: goto label_32ea54;
        case 0x32ea58u: goto label_32ea58;
        case 0x32ea5cu: goto label_32ea5c;
        case 0x32ea60u: goto label_32ea60;
        case 0x32ea64u: goto label_32ea64;
        case 0x32ea68u: goto label_32ea68;
        case 0x32ea6cu: goto label_32ea6c;
        case 0x32ea70u: goto label_32ea70;
        case 0x32ea74u: goto label_32ea74;
        case 0x32ea78u: goto label_32ea78;
        case 0x32ea7cu: goto label_32ea7c;
        case 0x32ea80u: goto label_32ea80;
        case 0x32ea84u: goto label_32ea84;
        case 0x32ea88u: goto label_32ea88;
        case 0x32ea8cu: goto label_32ea8c;
        case 0x32ea90u: goto label_32ea90;
        case 0x32ea94u: goto label_32ea94;
        case 0x32ea98u: goto label_32ea98;
        case 0x32ea9cu: goto label_32ea9c;
        case 0x32eaa0u: goto label_32eaa0;
        case 0x32eaa4u: goto label_32eaa4;
        case 0x32eaa8u: goto label_32eaa8;
        case 0x32eaacu: goto label_32eaac;
        case 0x32eab0u: goto label_32eab0;
        case 0x32eab4u: goto label_32eab4;
        case 0x32eab8u: goto label_32eab8;
        case 0x32eabcu: goto label_32eabc;
        case 0x32eac0u: goto label_32eac0;
        case 0x32eac4u: goto label_32eac4;
        case 0x32eac8u: goto label_32eac8;
        case 0x32eaccu: goto label_32eacc;
        case 0x32ead0u: goto label_32ead0;
        case 0x32ead4u: goto label_32ead4;
        case 0x32ead8u: goto label_32ead8;
        case 0x32eadcu: goto label_32eadc;
        case 0x32eae0u: goto label_32eae0;
        case 0x32eae4u: goto label_32eae4;
        case 0x32eae8u: goto label_32eae8;
        case 0x32eaecu: goto label_32eaec;
        case 0x32eaf0u: goto label_32eaf0;
        case 0x32eaf4u: goto label_32eaf4;
        case 0x32eaf8u: goto label_32eaf8;
        case 0x32eafcu: goto label_32eafc;
        case 0x32eb00u: goto label_32eb00;
        case 0x32eb04u: goto label_32eb04;
        case 0x32eb08u: goto label_32eb08;
        case 0x32eb0cu: goto label_32eb0c;
        case 0x32eb10u: goto label_32eb10;
        case 0x32eb14u: goto label_32eb14;
        case 0x32eb18u: goto label_32eb18;
        case 0x32eb1cu: goto label_32eb1c;
        case 0x32eb20u: goto label_32eb20;
        case 0x32eb24u: goto label_32eb24;
        case 0x32eb28u: goto label_32eb28;
        case 0x32eb2cu: goto label_32eb2c;
        case 0x32eb30u: goto label_32eb30;
        case 0x32eb34u: goto label_32eb34;
        case 0x32eb38u: goto label_32eb38;
        case 0x32eb3cu: goto label_32eb3c;
        case 0x32eb40u: goto label_32eb40;
        case 0x32eb44u: goto label_32eb44;
        case 0x32eb48u: goto label_32eb48;
        case 0x32eb4cu: goto label_32eb4c;
        case 0x32eb50u: goto label_32eb50;
        case 0x32eb54u: goto label_32eb54;
        case 0x32eb58u: goto label_32eb58;
        case 0x32eb5cu: goto label_32eb5c;
        case 0x32eb60u: goto label_32eb60;
        case 0x32eb64u: goto label_32eb64;
        case 0x32eb68u: goto label_32eb68;
        case 0x32eb6cu: goto label_32eb6c;
        case 0x32eb70u: goto label_32eb70;
        case 0x32eb74u: goto label_32eb74;
        case 0x32eb78u: goto label_32eb78;
        case 0x32eb7cu: goto label_32eb7c;
        case 0x32eb80u: goto label_32eb80;
        case 0x32eb84u: goto label_32eb84;
        case 0x32eb88u: goto label_32eb88;
        case 0x32eb8cu: goto label_32eb8c;
        case 0x32eb90u: goto label_32eb90;
        case 0x32eb94u: goto label_32eb94;
        case 0x32eb98u: goto label_32eb98;
        case 0x32eb9cu: goto label_32eb9c;
        case 0x32eba0u: goto label_32eba0;
        case 0x32eba4u: goto label_32eba4;
        case 0x32eba8u: goto label_32eba8;
        case 0x32ebacu: goto label_32ebac;
        case 0x32ebb0u: goto label_32ebb0;
        case 0x32ebb4u: goto label_32ebb4;
        case 0x32ebb8u: goto label_32ebb8;
        case 0x32ebbcu: goto label_32ebbc;
        case 0x32ebc0u: goto label_32ebc0;
        case 0x32ebc4u: goto label_32ebc4;
        case 0x32ebc8u: goto label_32ebc8;
        case 0x32ebccu: goto label_32ebcc;
        case 0x32ebd0u: goto label_32ebd0;
        case 0x32ebd4u: goto label_32ebd4;
        default: break;
    }

    ctx->pc = 0x32e770u;

label_32e770:
    // 0x32e770: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x32e770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_32e774:
    // 0x32e774: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x32e774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_32e778:
    // 0x32e778: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x32e778u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32e77c:
    // 0x32e77c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x32e77cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_32e780:
    // 0x32e780: 0x2634000c  addiu       $s4, $s1, 0xC
    ctx->pc = 0x32e780u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_32e784:
    // 0x32e784: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x32e784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_32e788:
    // 0x32e788: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x32e788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_32e78c:
    // 0x32e78c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x32e78cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_32e790:
    // 0x32e790: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x32e790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_32e794:
    // 0x32e794: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
label_32e798:
    if (ctx->pc == 0x32E798u) {
        ctx->pc = 0x32E798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E794u;
        // 0x32e798: 0x8e330004  lw          $s3, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E79Cu;
        goto label_32e79c;
    }
    ctx->pc = 0x32E794u;
    {
        const bool branch_taken_0x32e794 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x32E798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E794u;
        // 0x32e798: 0x8e330004  lw          $s3, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e794) {
            ctx->pc = 0x32E7B0u;
            goto label_32e7b0;
        }
    }
    ctx->pc = 0x32E79Cu;
label_32e79c:
    // 0x32e79c: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x32e79cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_32e7a0:
    // 0x32e7a0: 0xc0cff2c  jal         func_33FCB0
label_32e7a4:
    if (ctx->pc == 0x32E7A4u) {
        ctx->pc = 0x32E7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E7A0u;
        // 0x32e7a4: 0x24842e90  addiu       $a0, $a0, 0x2E90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11920));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E7A8u;
        goto label_32e7a8;
    }
    ctx->pc = 0x32E7A0u;
    SET_GPR_U32(ctx, 31, 0x32E7A8u);
    ctx->pc = 0x32E7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E7A0u;
    // 0x32e7a4: 0x24842e90  addiu       $a0, $a0, 0x2E90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FCB0u, 0x32E7A0u, 0x32E7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E7A8u;
label_32e7a8:
    // 0x32e7a8: 0x10000104  b           . + 4 + (0x104 << 2)
label_32e7ac:
    if (ctx->pc == 0x32E7ACu) {
        ctx->pc = 0x32E7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E7A8u;
        // 0x32e7ac: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E7B0u;
        goto label_32e7b0;
    }
    ctx->pc = 0x32E7A8u;
    {
        const bool branch_taken_0x32e7a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E7A8u;
        // 0x32e7ac: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e7a8) {
            ctx->pc = 0x32EBBCu;
            goto label_32ebbc;
        }
    }
    ctx->pc = 0x32E7B0u;
label_32e7b0:
    // 0x32e7b0: 0x82300001  lb          $s0, 0x1($s1)
    ctx->pc = 0x32e7b0u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_32e7b4:
    // 0x32e7b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32e7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32e7b8:
    // 0x32e7b8: 0x160200c8  bne         $s0, $v0, . + 4 + (0xC8 << 2)
label_32e7bc:
    if (ctx->pc == 0x32E7BCu) {
        ctx->pc = 0x32E7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E7B8u;
        // 0x32e7bc: 0x92230001  lbu         $v1, 0x1($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E7C0u;
        goto label_32e7c0;
    }
    ctx->pc = 0x32E7B8u;
    {
        const bool branch_taken_0x32e7b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x32E7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E7B8u;
        // 0x32e7bc: 0x92230001  lbu         $v1, 0x1($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e7b8) {
            ctx->pc = 0x32EADCu;
            goto label_32eadc;
        }
    }
    ctx->pc = 0x32E7C0u;
label_32e7c0:
    // 0x32e7c0: 0xc0cbbda  jal         func_32EF68
label_32e7c4:
    if (ctx->pc == 0x32E7C4u) {
        ctx->pc = 0x32E7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E7C0u;
        // 0x32e7c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E7C8u;
        goto label_32e7c8;
    }
    ctx->pc = 0x32E7C0u;
    SET_GPR_U32(ctx, 31, 0x32E7C8u);
    ctx->pc = 0x32E7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E7C0u;
    // 0x32e7c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32EF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EF68u, 0x32E7C0u, 0x32E7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E7C8u;
label_32e7c8:
    // 0x32e7c8: 0x8e2201ac  lw          $v0, 0x1AC($s1)
    ctx->pc = 0x32e7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 428)));
label_32e7cc:
    // 0x32e7cc: 0x144000a2  bnez        $v0, . + 4 + (0xA2 << 2)
label_32e7d0:
    if (ctx->pc == 0x32E7D0u) {
        ctx->pc = 0x32E7D4u;
        goto label_32e7d4;
    }
    ctx->pc = 0x32E7CCu;
    {
        const bool branch_taken_0x32e7cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32e7cc) {
            ctx->pc = 0x32EA58u;
            goto label_32ea58;
        }
    }
    ctx->pc = 0x32E7D4u;
label_32e7d4:
    // 0x32e7d4: 0x8e2201e0  lw          $v0, 0x1E0($s1)
    ctx->pc = 0x32e7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 480)));
label_32e7d8:
    // 0x32e7d8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x32e7d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_32e7dc:
    // 0x32e7dc: 0x10400076  beqz        $v0, . + 4 + (0x76 << 2)
label_32e7e0:
    if (ctx->pc == 0x32E7E0u) {
        ctx->pc = 0x32E7E4u;
        goto label_32e7e4;
    }
    ctx->pc = 0x32E7DCu;
    {
        const bool branch_taken_0x32e7dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e7dc) {
            ctx->pc = 0x32E9B8u;
            goto label_32e9b8;
        }
    }
    ctx->pc = 0x32E7E4u;
label_32e7e4:
    // 0x32e7e4: 0xc0ca026  jal         func_328098
label_32e7e8:
    if (ctx->pc == 0x32E7E8u) {
        ctx->pc = 0x32E7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E7E4u;
        // 0x32e7e8: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E7ECu;
        goto label_32e7ec;
    }
    ctx->pc = 0x32E7E4u;
    SET_GPR_U32(ctx, 31, 0x32E7ECu);
    ctx->pc = 0x32E7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E7E4u;
    // 0x32e7e8: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328098u, 0x32E7E4u, 0x32E7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E7ECu;
label_32e7ec:
    // 0x32e7ec: 0xc0cff1c  jal         func_33FC70
label_32e7f0:
    if (ctx->pc == 0x32E7F0u) {
        ctx->pc = 0x32E7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E7ECu;
        // 0x32e7f0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E7F4u;
        goto label_32e7f4;
    }
    ctx->pc = 0x32E7ECu;
    SET_GPR_U32(ctx, 31, 0x32E7F4u);
    ctx->pc = 0x32E7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E7ECu;
    // 0x32e7f0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FC70u, 0x32E7ECu, 0x32E7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E7F4u;
label_32e7f4:
    // 0x32e7f4: 0x822201b2  lb          $v0, 0x1B2($s1)
    ctx->pc = 0x32e7f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 434)));
label_32e7f8:
    // 0x32e7f8: 0x14500009  bne         $v0, $s0, . + 4 + (0x9 << 2)
label_32e7fc:
    if (ctx->pc == 0x32E7FCu) {
        ctx->pc = 0x32E7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E7F8u;
        // 0x32e7fc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E800u;
        goto label_32e800;
    }
    ctx->pc = 0x32E7F8u;
    {
        const bool branch_taken_0x32e7f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x32E7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E7F8u;
        // 0x32e7fc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e7f8) {
            ctx->pc = 0x32E820u;
            goto label_32e820;
        }
    }
    ctx->pc = 0x32E800u;
label_32e800:
    // 0x32e800: 0x12420007  beq         $s2, $v0, . + 4 + (0x7 << 2)
label_32e804:
    if (ctx->pc == 0x32E804u) {
        ctx->pc = 0x32E808u;
        goto label_32e808;
    }
    ctx->pc = 0x32E800u;
    {
        const bool branch_taken_0x32e800 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x32e800) {
            ctx->pc = 0x32E820u;
            goto label_32e820;
        }
    }
    ctx->pc = 0x32E808u;
label_32e808:
    // 0x32e808: 0xc0cff22  jal         func_33FC88
label_32e80c:
    if (ctx->pc == 0x32E80Cu) {
        ctx->pc = 0x32E80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E808u;
        // 0x32e80c: 0xa22001b2  sb          $zero, 0x1B2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 434), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E810u;
        goto label_32e810;
    }
    ctx->pc = 0x32E808u;
    SET_GPR_U32(ctx, 31, 0x32E810u);
    ctx->pc = 0x32E80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E808u;
    // 0x32e80c: 0xa22001b2  sb          $zero, 0x1B2($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 434), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FC88u, 0x32E808u, 0x32E810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E810u;
label_32e810:
    // 0x32e810: 0xc0cb988  jal         func_32E620
label_32e814:
    if (ctx->pc == 0x32E814u) {
        ctx->pc = 0x32E814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E810u;
        // 0x32e814: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E818u;
        goto label_32e818;
    }
    ctx->pc = 0x32E810u;
    SET_GPR_U32(ctx, 31, 0x32E818u);
    ctx->pc = 0x32E814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E810u;
    // 0x32e814: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E620u, 0x32E810u, 0x32E818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E818u;
label_32e818:
    // 0x32e818: 0x10000003  b           . + 4 + (0x3 << 2)
label_32e81c:
    if (ctx->pc == 0x32E81Cu) {
        ctx->pc = 0x32E820u;
        goto label_32e820;
    }
    ctx->pc = 0x32E818u;
    {
        const bool branch_taken_0x32e818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e818) {
            ctx->pc = 0x32E828u;
            goto label_32e828;
        }
    }
    ctx->pc = 0x32E820u;
label_32e820:
    // 0x32e820: 0xc0cff22  jal         func_33FC88
label_32e824:
    if (ctx->pc == 0x32E824u) {
        ctx->pc = 0x32E828u;
        goto label_32e828;
    }
    ctx->pc = 0x32E820u;
    SET_GPR_U32(ctx, 31, 0x32E828u);
    ctx->pc = 0x33FC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FC88u, 0x32E820u, 0x32E828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E828u;
label_32e828:
    // 0x32e828: 0xc0cbd1a  jal         func_32F468
label_32e82c:
    if (ctx->pc == 0x32E82Cu) {
        ctx->pc = 0x32E82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E828u;
        // 0x32e82c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E830u;
        goto label_32e830;
    }
    ctx->pc = 0x32E828u;
    SET_GPR_U32(ctx, 31, 0x32E830u);
    ctx->pc = 0x32E82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E828u;
    // 0x32e82c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F468u, 0x32E828u, 0x32E830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E830u;
label_32e830:
    // 0x32e830: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x32e830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_32e834:
    // 0x32e834: 0x544300a9  bnel        $v0, $v1, . + 4 + (0xA9 << 2)
label_32e838:
    if (ctx->pc == 0x32E838u) {
        ctx->pc = 0x32E838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E834u;
        // 0x32e838: 0x92230001  lbu         $v1, 0x1($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E83Cu;
        goto label_32e83c;
    }
    ctx->pc = 0x32E834u;
    {
        const bool branch_taken_0x32e834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x32e834) {
            ctx->pc = 0x32E838u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32E834u;
            // 0x32e838: 0x92230001  lbu         $v1, 0x1($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32EADCu;
            goto label_32eadc;
        }
    }
    ctx->pc = 0x32E83Cu;
label_32e83c:
    // 0x32e83c: 0xc0cbd32  jal         func_32F4C8
label_32e840:
    if (ctx->pc == 0x32E840u) {
        ctx->pc = 0x32E840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E83Cu;
        // 0x32e840: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E844u;
        goto label_32e844;
    }
    ctx->pc = 0x32E83Cu;
    SET_GPR_U32(ctx, 31, 0x32E844u);
    ctx->pc = 0x32E840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E83Cu;
    // 0x32e840: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F4C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F4C8u, 0x32E83Cu, 0x32E844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E844u;
label_32e844:
    // 0x32e844: 0xc0cbd5c  jal         func_32F570
label_32e848:
    if (ctx->pc == 0x32E848u) {
        ctx->pc = 0x32E848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E844u;
        // 0x32e848: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E84Cu;
        goto label_32e84c;
    }
    ctx->pc = 0x32E844u;
    SET_GPR_U32(ctx, 31, 0x32E84Cu);
    ctx->pc = 0x32E848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E844u;
    // 0x32e848: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F570u, 0x32E844u, 0x32E84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E84Cu;
label_32e84c:
    // 0x32e84c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32e84cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32e850:
    // 0x32e850: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_32e854:
    if (ctx->pc == 0x32E854u) {
        ctx->pc = 0x32E854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E850u;
        // 0x32e854: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E858u;
        goto label_32e858;
    }
    ctx->pc = 0x32E850u;
    {
        const bool branch_taken_0x32e850 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E850u;
        // 0x32e854: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e850) {
            ctx->pc = 0x32E868u;
            goto label_32e868;
        }
    }
    ctx->pc = 0x32E858u;
label_32e858:
    // 0x32e858: 0x52020037  beql        $s0, $v0, . + 4 + (0x37 << 2)
label_32e85c:
    if (ctx->pc == 0x32E85Cu) {
        ctx->pc = 0x32E85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E858u;
        // 0x32e85c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E860u;
        goto label_32e860;
    }
    ctx->pc = 0x32E858u;
    {
        const bool branch_taken_0x32e858 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x32e858) {
            ctx->pc = 0x32E85Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32E858u;
            // 0x32e85c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32E938u;
            goto label_32e938;
        }
    }
    ctx->pc = 0x32E860u;
label_32e860:
    // 0x32e860: 0x10000053  b           . + 4 + (0x53 << 2)
label_32e864:
    if (ctx->pc == 0x32E864u) {
        ctx->pc = 0x32E864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E860u;
        // 0x32e864: 0x92230001  lbu         $v1, 0x1($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E868u;
        goto label_32e868;
    }
    ctx->pc = 0x32E860u;
    {
        const bool branch_taken_0x32e860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E860u;
        // 0x32e864: 0x92230001  lbu         $v1, 0x1($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e860) {
            ctx->pc = 0x32E9B0u;
            goto label_32e9b0;
        }
    }
    ctx->pc = 0x32E868u;
label_32e868:
    // 0x32e868: 0x8e3001c0  lw          $s0, 0x1C0($s1)
    ctx->pc = 0x32e868u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 448)));
label_32e86c:
    // 0x32e86c: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
label_32e870:
    if (ctx->pc == 0x32E870u) {
        ctx->pc = 0x32E870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E86Cu;
        // 0x32e870: 0xae3001bc  sw          $s0, 0x1BC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 444), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E874u;
        goto label_32e874;
    }
    ctx->pc = 0x32E86Cu;
    {
        const bool branch_taken_0x32e86c = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x32E870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E86Cu;
        // 0x32e870: 0xae3001bc  sw          $s0, 0x1BC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 444), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e86c) {
            ctx->pc = 0x32E888u;
            goto label_32e888;
        }
    }
    ctx->pc = 0x32E874u;
label_32e874:
    // 0x32e874: 0xc0cbd3c  jal         func_32F4F0
label_32e878:
    if (ctx->pc == 0x32E878u) {
        ctx->pc = 0x32E878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E874u;
        // 0x32e878: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E87Cu;
        goto label_32e87c;
    }
    ctx->pc = 0x32E874u;
    SET_GPR_U32(ctx, 31, 0x32E87Cu);
    ctx->pc = 0x32E878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E874u;
    // 0x32e878: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F4F0u, 0x32E874u, 0x32E87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E87Cu;
label_32e87c:
    // 0x32e87c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x32e87cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_32e880:
    // 0x32e880: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_32e884:
    if (ctx->pc == 0x32E884u) {
        ctx->pc = 0x32E884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E880u;
        // 0x32e884: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E888u;
        goto label_32e888;
    }
    ctx->pc = 0x32E880u;
    {
        const bool branch_taken_0x32e880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32E884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E880u;
        // 0x32e884: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e880) {
            ctx->pc = 0x32E898u;
            goto label_32e898;
        }
    }
    ctx->pc = 0x32E888u;
label_32e888:
    // 0x32e888: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x32e888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_32e88c:
    // 0x32e88c: 0x100000ca  b           . + 4 + (0xCA << 2)
label_32e890:
    if (ctx->pc == 0x32E890u) {
        ctx->pc = 0x32E890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E88Cu;
        // 0x32e890: 0xa2220001  sb          $v0, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E894u;
        goto label_32e894;
    }
    ctx->pc = 0x32E88Cu;
    {
        const bool branch_taken_0x32e88c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E88Cu;
        // 0x32e890: 0xa2220001  sb          $v0, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e88c) {
            ctx->pc = 0x32EBB8u;
            goto label_32ebb8;
        }
    }
    ctx->pc = 0x32E894u;
label_32e894:
    // 0x32e894: 0x0  nop
    ctx->pc = 0x32e894u;
    // NOP
label_32e898:
    // 0x32e898: 0x27a70004  addiu       $a3, $sp, 0x4
    ctx->pc = 0x32e898u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_32e89c:
    // 0x32e89c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x32e89cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32e8a0:
    // 0x32e8a0: 0xc0cbd3e  jal         func_32F4F8
label_32e8a4:
    if (ctx->pc == 0x32E8A4u) {
        ctx->pc = 0x32E8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E8A0u;
        // 0x32e8a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E8A8u;
        goto label_32e8a8;
    }
    ctx->pc = 0x32E8A0u;
    SET_GPR_U32(ctx, 31, 0x32E8A8u);
    ctx->pc = 0x32E8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E8A0u;
    // 0x32e8a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F4F8u, 0x32E8A0u, 0x32E8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E8A8u;
label_32e8a8:
    // 0x32e8a8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x32e8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_32e8ac:
    // 0x32e8ac: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x32e8acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_32e8b0:
    // 0x32e8b0: 0x24a307ff  addiu       $v1, $a1, 0x7FF
    ctx->pc = 0x32e8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 2047));
label_32e8b4:
    // 0x32e8b4: 0x28a20000  slti        $v0, $a1, 0x0
    ctx->pc = 0x32e8b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
label_32e8b8:
    // 0x32e8b8: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x32e8b8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_32e8bc:
    // 0x32e8bc: 0xc0ca036  jal         func_3280D8
label_32e8c0:
    if (ctx->pc == 0x32E8C0u) {
        ctx->pc = 0x32E8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E8BCu;
        // 0x32e8c0: 0x52ac3  sra         $a1, $a1, 11 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E8C4u;
        goto label_32e8c4;
    }
    ctx->pc = 0x32E8BCu;
    SET_GPR_U32(ctx, 31, 0x32E8C4u);
    ctx->pc = 0x32E8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E8BCu;
    // 0x32e8c0: 0x52ac3  sra         $a1, $a1, 11 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3280D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3280D8u, 0x32E8BCu, 0x32E8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E8C4u;
label_32e8c4:
    // 0x32e8c4: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x32e8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_32e8c8:
    // 0x32e8c8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x32e8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_32e8cc:
    // 0x32e8cc: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x32e8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_32e8d0:
    // 0x32e8d0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x32e8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_32e8d4:
    // 0x32e8d4: 0x24a307ff  addiu       $v1, $a1, 0x7FF
    ctx->pc = 0x32e8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 2047));
label_32e8d8:
    // 0x32e8d8: 0x28a20000  slti        $v0, $a1, 0x0
    ctx->pc = 0x32e8d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
label_32e8dc:
    // 0x32e8dc: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x32e8dcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_32e8e0:
    // 0x32e8e0: 0xc0ca112  jal         func_328448
label_32e8e4:
    if (ctx->pc == 0x32E8E4u) {
        ctx->pc = 0x32E8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E8E0u;
        // 0x32e8e4: 0x52ac3  sra         $a1, $a1, 11 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E8E8u;
        goto label_32e8e8;
    }
    ctx->pc = 0x32E8E0u;
    SET_GPR_U32(ctx, 31, 0x32E8E8u);
    ctx->pc = 0x32E8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E8E0u;
    // 0x32e8e4: 0x52ac3  sra         $a1, $a1, 11 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328448u, 0x32E8E0u, 0x32E8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E8E8u;
label_32e8e8:
    // 0x32e8e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x32e8e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_32e8ec:
    // 0x32e8ec: 0xc0cbd2e  jal         func_32F4B8
label_32e8f0:
    if (ctx->pc == 0x32E8F0u) {
        ctx->pc = 0x32E8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E8ECu;
        // 0x32e8f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E8F4u;
        goto label_32e8f4;
    }
    ctx->pc = 0x32E8ECu;
    SET_GPR_U32(ctx, 31, 0x32E8F4u);
    ctx->pc = 0x32E8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E8ECu;
    // 0x32e8f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F4B8u, 0x32E8ECu, 0x32E8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E8F4u;
label_32e8f4:
    // 0x32e8f4: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x32e8f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
label_32e8f8:
    // 0x32e8f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32e8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32e8fc:
    // 0x32e8fc: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
label_32e900:
    if (ctx->pc == 0x32E900u) {
        ctx->pc = 0x32E900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E8FCu;
        // 0x32e900: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E904u;
        goto label_32e904;
    }
    ctx->pc = 0x32E8FCu;
    {
        const bool branch_taken_0x32e8fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x32E900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E8FCu;
        // 0x32e900: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e8fc) {
            ctx->pc = 0x32E914u;
            goto label_32e914;
        }
    }
    ctx->pc = 0x32E904u;
label_32e904:
    // 0x32e904: 0x822201b1  lb          $v0, 0x1B1($s1)
    ctx->pc = 0x32e904u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 433)));
label_32e908:
    // 0x32e908: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_32e90c:
    if (ctx->pc == 0x32E90Cu) {
        ctx->pc = 0x32E90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E908u;
        // 0x32e90c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E910u;
        goto label_32e910;
    }
    ctx->pc = 0x32E908u;
    {
        const bool branch_taken_0x32e908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x32E90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E908u;
        // 0x32e90c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e908) {
            ctx->pc = 0x32E920u;
            goto label_32e920;
        }
    }
    ctx->pc = 0x32E910u;
label_32e910:
    // 0x32e910: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x32e910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_32e914:
    // 0x32e914: 0xc0cbd30  jal         func_32F4C0
label_32e918:
    if (ctx->pc == 0x32E918u) {
        ctx->pc = 0x32E918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E914u;
        // 0x32e918: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E91Cu;
        goto label_32e91c;
    }
    ctx->pc = 0x32E914u;
    SET_GPR_U32(ctx, 31, 0x32E91Cu);
    ctx->pc = 0x32E918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E914u;
    // 0x32e918: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F4C0u, 0x32E914u, 0x32E91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E91Cu;
label_32e91c:
    // 0x32e91c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32e91cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32e920:
    // 0x32e920: 0xc0cbc1a  jal         func_32F068
label_32e924:
    if (ctx->pc == 0x32E924u) {
        ctx->pc = 0x32E924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E920u;
        // 0x32e924: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E928u;
        goto label_32e928;
    }
    ctx->pc = 0x32E920u;
    SET_GPR_U32(ctx, 31, 0x32E928u);
    ctx->pc = 0x32E924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E920u;
    // 0x32e924: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F068u, 0x32E920u, 0x32E928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E928u;
label_32e928:
    // 0x32e928: 0xc0cbbfa  jal         func_32EFE8
label_32e92c:
    if (ctx->pc == 0x32E92Cu) {
        ctx->pc = 0x32E92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E928u;
        // 0x32e92c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E930u;
        goto label_32e930;
    }
    ctx->pc = 0x32E928u;
    SET_GPR_U32(ctx, 31, 0x32E930u);
    ctx->pc = 0x32E92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E928u;
    // 0x32e92c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32EFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EFE8u, 0x32E928u, 0x32E930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E930u;
label_32e930:
    // 0x32e930: 0x1000001e  b           . + 4 + (0x1E << 2)
label_32e934:
    if (ctx->pc == 0x32E934u) {
        ctx->pc = 0x32E934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E930u;
        // 0x32e934: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E938u;
        goto label_32e938;
    }
    ctx->pc = 0x32E930u;
    {
        const bool branch_taken_0x32e930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E930u;
        // 0x32e934: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e930) {
            ctx->pc = 0x32E9ACu;
            goto label_32e9ac;
        }
    }
    ctx->pc = 0x32E938u;
label_32e938:
    // 0x32e938: 0xc0ca112  jal         func_328448
label_32e93c:
    if (ctx->pc == 0x32E93Cu) {
        ctx->pc = 0x32E93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E938u;
        // 0x32e93c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E940u;
        goto label_32e940;
    }
    ctx->pc = 0x32E938u;
    SET_GPR_U32(ctx, 31, 0x32E940u);
    ctx->pc = 0x32E93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E938u;
    // 0x32e93c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328448u, 0x32E938u, 0x32E940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E940u;
label_32e940:
    // 0x32e940: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x32e940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_32e944:
    // 0x32e944: 0xc0cbd2e  jal         func_32F4B8
label_32e948:
    if (ctx->pc == 0x32E948u) {
        ctx->pc = 0x32E948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E944u;
        // 0x32e948: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E94Cu;
        goto label_32e94c;
    }
    ctx->pc = 0x32E944u;
    SET_GPR_U32(ctx, 31, 0x32E94Cu);
    ctx->pc = 0x32E948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E944u;
    // 0x32e948: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F4B8u, 0x32E944u, 0x32E94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E94Cu;
label_32e94c:
    // 0x32e94c: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x32e94cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
label_32e950:
    // 0x32e950: 0x10500005  beq         $v0, $s0, . + 4 + (0x5 << 2)
label_32e954:
    if (ctx->pc == 0x32E954u) {
        ctx->pc = 0x32E954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E950u;
        // 0x32e954: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E958u;
        goto label_32e958;
    }
    ctx->pc = 0x32E950u;
    {
        const bool branch_taken_0x32e950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x32E954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E950u;
        // 0x32e954: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e950) {
            ctx->pc = 0x32E968u;
            goto label_32e968;
        }
    }
    ctx->pc = 0x32E958u;
label_32e958:
    // 0x32e958: 0x822201b1  lb          $v0, 0x1B1($s1)
    ctx->pc = 0x32e958u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 433)));
label_32e95c:
    // 0x32e95c: 0x54500005  bnel        $v0, $s0, . + 4 + (0x5 << 2)
label_32e960:
    if (ctx->pc == 0x32E960u) {
        ctx->pc = 0x32E960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E95Cu;
        // 0x32e960: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E964u;
        goto label_32e964;
    }
    ctx->pc = 0x32E95Cu;
    {
        const bool branch_taken_0x32e95c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x32e95c) {
            ctx->pc = 0x32E960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32E95Cu;
            // 0x32e960: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32E974u;
            goto label_32e974;
        }
    }
    ctx->pc = 0x32E964u;
label_32e964:
    // 0x32e964: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x32e964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_32e968:
    // 0x32e968: 0xc0cbd30  jal         func_32F4C0
label_32e96c:
    if (ctx->pc == 0x32E96Cu) {
        ctx->pc = 0x32E96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E968u;
        // 0x32e96c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E970u;
        goto label_32e970;
    }
    ctx->pc = 0x32E968u;
    SET_GPR_U32(ctx, 31, 0x32E970u);
    ctx->pc = 0x32E96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E968u;
    // 0x32e96c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F4C0u, 0x32E968u, 0x32E970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E970u;
label_32e970:
    // 0x32e970: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x32e970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_32e974:
    // 0x32e974: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
label_32e978:
    if (ctx->pc == 0x32E978u) {
        ctx->pc = 0x32E978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E974u;
        // 0x32e978: 0x3c040045  lui         $a0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E97Cu;
        goto label_32e97c;
    }
    ctx->pc = 0x32E974u;
    {
        const bool branch_taken_0x32e974 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e974) {
            ctx->pc = 0x32E978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32E974u;
            // 0x32e978: 0x3c040045  lui         $a0, 0x45 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32E998u;
            goto label_32e998;
        }
    }
    ctx->pc = 0x32E97Cu;
label_32e97c:
    // 0x32e97c: 0xc0cad98  jal         func_32B660
label_32e980:
    if (ctx->pc == 0x32E980u) {
        ctx->pc = 0x32E980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E97Cu;
        // 0x32e980: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E984u;
        goto label_32e984;
    }
    ctx->pc = 0x32E97Cu;
    SET_GPR_U32(ctx, 31, 0x32E984u);
    ctx->pc = 0x32E980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E97Cu;
    // 0x32e980: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32B660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32B660u, 0x32E97Cu, 0x32E984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E984u;
label_32e984:
    // 0x32e984: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x32e984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_32e988:
    // 0x32e988: 0xc0ca74e  jal         func_329D38
label_32e98c:
    if (ctx->pc == 0x32E98Cu) {
        ctx->pc = 0x32E98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E988u;
        // 0x32e98c: 0x8e250094  lw          $a1, 0x94($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E990u;
        goto label_32e990;
    }
    ctx->pc = 0x32E988u;
    SET_GPR_U32(ctx, 31, 0x32E990u);
    ctx->pc = 0x32E98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E988u;
    // 0x32e98c: 0x8e250094  lw          $a1, 0x94($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329D38u, 0x32E988u, 0x32E990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E990u;
label_32e990:
    // 0x32e990: 0x10000006  b           . + 4 + (0x6 << 2)
label_32e994:
    if (ctx->pc == 0x32E994u) {
        ctx->pc = 0x32E994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E990u;
        // 0x32e994: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E998u;
        goto label_32e998;
    }
    ctx->pc = 0x32E990u;
    {
        const bool branch_taken_0x32e990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E990u;
        // 0x32e994: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e990) {
            ctx->pc = 0x32E9ACu;
            goto label_32e9ac;
        }
    }
    ctx->pc = 0x32E998u;
label_32e998:
    // 0x32e998: 0xc0cff2c  jal         func_33FCB0
label_32e99c:
    if (ctx->pc == 0x32E99Cu) {
        ctx->pc = 0x32E99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E998u;
        // 0x32e99c: 0x24842eb8  addiu       $a0, $a0, 0x2EB8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11960));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E9A0u;
        goto label_32e9a0;
    }
    ctx->pc = 0x32E998u;
    SET_GPR_U32(ctx, 31, 0x32E9A0u);
    ctx->pc = 0x32E99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E998u;
    // 0x32e99c: 0x24842eb8  addiu       $a0, $a0, 0x2EB8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FCB0u, 0x32E998u, 0x32E9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E9A0u;
label_32e9a0:
    // 0x32e9a0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x32e9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_32e9a4:
    // 0x32e9a4: 0xa2220001  sb          $v0, 0x1($s1)
    ctx->pc = 0x32e9a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
label_32e9a8:
    // 0x32e9a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32e9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32e9ac:
    // 0x32e9ac: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x32e9acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_32e9b0:
    // 0x32e9b0: 0x1000004a  b           . + 4 + (0x4A << 2)
label_32e9b4:
    if (ctx->pc == 0x32E9B4u) {
        ctx->pc = 0x32E9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E9B0u;
        // 0x32e9b4: 0xae2201ac  sw          $v0, 0x1AC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 428), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E9B8u;
        goto label_32e9b8;
    }
    ctx->pc = 0x32E9B0u;
    {
        const bool branch_taken_0x32e9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E9B0u;
        // 0x32e9b4: 0xae2201ac  sw          $v0, 0x1AC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 428), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e9b0) {
            ctx->pc = 0x32EADCu;
            goto label_32eadc;
        }
    }
    ctx->pc = 0x32E9B8u;
label_32e9b8:
    // 0x32e9b8: 0xc0cbd1a  jal         func_32F468
label_32e9bc:
    if (ctx->pc == 0x32E9BCu) {
        ctx->pc = 0x32E9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E9B8u;
        // 0x32e9bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E9C0u;
        goto label_32e9c0;
    }
    ctx->pc = 0x32E9B8u;
    SET_GPR_U32(ctx, 31, 0x32E9C0u);
    ctx->pc = 0x32E9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E9B8u;
    // 0x32e9bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F468u, 0x32E9B8u, 0x32E9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E9C0u;
label_32e9c0:
    // 0x32e9c0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x32e9c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32e9c4:
    // 0x32e9c4: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
label_32e9c8:
    if (ctx->pc == 0x32E9C8u) {
        ctx->pc = 0x32E9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E9C4u;
        // 0x32e9c8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E9CCu;
        goto label_32e9cc;
    }
    ctx->pc = 0x32E9C4u;
    {
        const bool branch_taken_0x32e9c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x32E9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E9C4u;
        // 0x32e9c8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e9c4) {
            ctx->pc = 0x32EA40u;
            goto label_32ea40;
        }
    }
    ctx->pc = 0x32E9CCu;
label_32e9cc:
    // 0x32e9cc: 0x82220003  lb          $v0, 0x3($s1)
    ctx->pc = 0x32e9ccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_32e9d0:
    // 0x32e9d0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x32e9d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_32e9d4:
    // 0x32e9d4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_32e9d8:
    if (ctx->pc == 0x32E9D8u) {
        ctx->pc = 0x32E9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E9D4u;
        // 0x32e9d8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E9DCu;
        goto label_32e9dc;
    }
    ctx->pc = 0x32E9D4u;
    {
        const bool branch_taken_0x32e9d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E9D4u;
        // 0x32e9d8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e9d4) {
            ctx->pc = 0x32EA0Cu;
            goto label_32ea0c;
        }
    }
    ctx->pc = 0x32E9DCu;
label_32e9dc:
    // 0x32e9dc: 0x26300094  addiu       $s0, $s1, 0x94
    ctx->pc = 0x32e9dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 148));
label_32e9e0:
    // 0x32e9e0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x32e9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32e9e4:
    // 0x32e9e4: 0x0  nop
    ctx->pc = 0x32e9e4u;
    // NOP
label_32e9e8:
    // 0x32e9e8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x32e9e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_32e9ec:
    // 0x32e9ec: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x32e9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_32e9f0:
    // 0x32e9f0: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x32e9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_32e9f4:
    // 0x32e9f4: 0x60f809  jalr        $v1
label_32e9f8:
    if (ctx->pc == 0x32E9F8u) {
        ctx->pc = 0x32E9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E9F4u;
        // 0x32e9f8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32E9FCu;
        goto label_32e9fc;
    }
    ctx->pc = 0x32E9F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x32E9FCu);
        ctx->pc = 0x32E9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E9F4u;
        // 0x32e9f8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32E9F4u, 0x32E9FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32E9FCu;
label_32e9fc:
    // 0x32e9fc: 0x82220003  lb          $v0, 0x3($s1)
    ctx->pc = 0x32e9fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_32ea00:
    // 0x32ea00: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x32ea00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_32ea04:
    // 0x32ea04: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
label_32ea08:
    if (ctx->pc == 0x32EA08u) {
        ctx->pc = 0x32EA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EA04u;
        // 0x32ea08: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32EA0Cu;
        goto label_32ea0c;
    }
    ctx->pc = 0x32EA04u;
    {
        const bool branch_taken_0x32ea04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32ea04) {
            ctx->pc = 0x32EA08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32EA04u;
            // 0x32ea08: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32E9E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32e9e8;
        }
    }
    ctx->pc = 0x32EA0Cu;
label_32ea0c:
    // 0x32ea0c: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x32ea0cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
label_32ea10:
    // 0x32ea10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32ea10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32ea14:
    // 0x32ea14: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
label_32ea18:
    if (ctx->pc == 0x32EA18u) {
        ctx->pc = 0x32EA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EA14u;
        // 0x32ea18: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32EA1Cu;
        goto label_32ea1c;
    }
    ctx->pc = 0x32EA14u;
    {
        const bool branch_taken_0x32ea14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x32EA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EA14u;
        // 0x32ea18: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ea14) {
            ctx->pc = 0x32EA28u;
            goto label_32ea28;
        }
    }
    ctx->pc = 0x32EA1Cu;
label_32ea1c:
    // 0x32ea1c: 0x822201b1  lb          $v0, 0x1B1($s1)
    ctx->pc = 0x32ea1cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 433)));
label_32ea20:
    // 0x32ea20: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_32ea24:
    if (ctx->pc == 0x32EA24u) {
        ctx->pc = 0x32EA28u;
        goto label_32ea28;
    }
    ctx->pc = 0x32EA20u;
    {
        const bool branch_taken_0x32ea20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x32ea20) {
            ctx->pc = 0x32EA30u;
            goto label_32ea30;
        }
    }
    ctx->pc = 0x32EA28u;
label_32ea28:
    // 0x32ea28: 0xc0cbd30  jal         func_32F4C0
label_32ea2c:
    if (ctx->pc == 0x32EA2Cu) {
        ctx->pc = 0x32EA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EA28u;
        // 0x32ea2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32EA30u;
        goto label_32ea30;
    }
    ctx->pc = 0x32EA28u;
    SET_GPR_U32(ctx, 31, 0x32EA30u);
    ctx->pc = 0x32EA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EA28u;
    // 0x32ea2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F4C0u, 0x32EA28u, 0x32EA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EA30u;
label_32ea30:
    // 0x32ea30: 0xc0cbd1c  jal         func_32F470
label_32ea34:
    if (ctx->pc == 0x32EA34u) {
        ctx->pc = 0x32EA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EA30u;
        // 0x32ea34: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32EA38u;
        goto label_32ea38;
    }
    ctx->pc = 0x32EA30u;
    SET_GPR_U32(ctx, 31, 0x32EA38u);
    ctx->pc = 0x32EA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EA30u;
    // 0x32ea34: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F470u, 0x32EA30u, 0x32EA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EA38u;
label_32ea38:
    // 0x32ea38: 0x10000028  b           . + 4 + (0x28 << 2)
label_32ea3c:
    if (ctx->pc == 0x32EA3Cu) {
        ctx->pc = 0x32EA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EA38u;
        // 0x32ea3c: 0x92230001  lbu         $v1, 0x1($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32EA40u;
        goto label_32ea40;
    }
    ctx->pc = 0x32EA38u;
    {
        const bool branch_taken_0x32ea38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32EA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EA38u;
        // 0x32ea3c: 0x92230001  lbu         $v1, 0x1($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ea38) {
            ctx->pc = 0x32EADCu;
            goto label_32eadc;
        }
    }
    ctx->pc = 0x32EA40u;
label_32ea40:
    // 0x32ea40: 0x54620026  bnel        $v1, $v0, . + 4 + (0x26 << 2)
label_32ea44:
    if (ctx->pc == 0x32EA44u) {
        ctx->pc = 0x32EA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EA40u;
        // 0x32ea44: 0x92230001  lbu         $v1, 0x1($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32EA48u;
        goto label_32ea48;
    }
    ctx->pc = 0x32EA40u;
    {
        const bool branch_taken_0x32ea40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x32ea40) {
            ctx->pc = 0x32EA44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32EA40u;
            // 0x32ea44: 0x92230001  lbu         $v1, 0x1($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32EADCu;
            goto label_32eadc;
        }
    }
    ctx->pc = 0x32EA48u;
label_32ea48:
    // 0x32ea48: 0xc0cbbfa  jal         func_32EFE8
label_32ea4c:
    if (ctx->pc == 0x32EA4Cu) {
        ctx->pc = 0x32EA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EA48u;
        // 0x32ea4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32EA50u;
        goto label_32ea50;
    }
    ctx->pc = 0x32EA48u;
    SET_GPR_U32(ctx, 31, 0x32EA50u);
    ctx->pc = 0x32EA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EA48u;
    // 0x32ea4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32EFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EFE8u, 0x32EA48u, 0x32EA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EA50u;
label_32ea50:
    // 0x32ea50: 0x10000021  b           . + 4 + (0x21 << 2)
label_32ea54:
    if (ctx->pc == 0x32EA54u) {
        ctx->pc = 0x32EA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EA50u;
        // 0x32ea54: 0xae3001ac  sw          $s0, 0x1AC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 428), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32EA58u;
        goto label_32ea58;
    }
    ctx->pc = 0x32EA50u;
    {
        const bool branch_taken_0x32ea50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32EA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EA50u;
        // 0x32ea54: 0xae3001ac  sw          $s0, 0x1AC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 428), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ea50) {
            ctx->pc = 0x32EAD8u;
            goto label_32ead8;
        }
    }
    ctx->pc = 0x32EA58u;
label_32ea58:
    // 0x32ea58: 0xc0cbd5c  jal         func_32F570
label_32ea5c:
    if (ctx->pc == 0x32EA5Cu) {
        ctx->pc = 0x32EA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EA58u;
        // 0x32ea5c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32EA60u;
        goto label_32ea60;
    }
    ctx->pc = 0x32EA58u;
    SET_GPR_U32(ctx, 31, 0x32EA60u);
    ctx->pc = 0x32EA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EA58u;
    // 0x32ea5c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F570u, 0x32EA58u, 0x32EA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EA60u;
label_32ea60:
    // 0x32ea60: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_32ea64:
    if (ctx->pc == 0x32EA64u) {
        ctx->pc = 0x32EA68u;
        goto label_32ea68;
    }
    ctx->pc = 0x32EA60u;
    {
        const bool branch_taken_0x32ea60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ea60) {
            ctx->pc = 0x32EA78u;
            goto label_32ea78;
        }
    }
    ctx->pc = 0x32EA68u;
label_32ea68:
    // 0x32ea68: 0x10500017  beq         $v0, $s0, . + 4 + (0x17 << 2)
label_32ea6c:
    if (ctx->pc == 0x32EA6Cu) {
        ctx->pc = 0x32EA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EA68u;
        // 0x32ea6c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32EA70u;
        goto label_32ea70;
    }
    ctx->pc = 0x32EA68u;
    {
        const bool branch_taken_0x32ea68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x32EA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EA68u;
        // 0x32ea6c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ea68) {
            ctx->pc = 0x32EAC8u;
            goto label_32eac8;
        }
    }
    ctx->pc = 0x32EA70u;
label_32ea70:
    // 0x32ea70: 0x1000001a  b           . + 4 + (0x1A << 2)
label_32ea74:
    if (ctx->pc == 0x32EA74u) {
        ctx->pc = 0x32EA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EA70u;
        // 0x32ea74: 0x92230001  lbu         $v1, 0x1($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32EA78u;
        goto label_32ea78;
    }
    ctx->pc = 0x32EA70u;
    {
        const bool branch_taken_0x32ea70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32EA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EA70u;
        // 0x32ea74: 0x92230001  lbu         $v1, 0x1($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ea70) {
            ctx->pc = 0x32EADCu;
            goto label_32eadc;
        }
    }
    ctx->pc = 0x32EA78u;
label_32ea78:
    // 0x32ea78: 0xc0cbc34  jal         func_32F0D0
label_32ea7c:
    if (ctx->pc == 0x32EA7Cu) {
        ctx->pc = 0x32EA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EA78u;
        // 0x32ea7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32EA80u;
        goto label_32ea80;
    }
    ctx->pc = 0x32EA78u;
    SET_GPR_U32(ctx, 31, 0x32EA80u);
    ctx->pc = 0x32EA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EA78u;
    // 0x32ea7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F0D0u, 0x32EA78u, 0x32EA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EA80u;
label_32ea80:
    // 0x32ea80: 0x54500016  bnel        $v0, $s0, . + 4 + (0x16 << 2)
label_32ea84:
    if (ctx->pc == 0x32EA84u) {
        ctx->pc = 0x32EA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EA80u;
        // 0x32ea84: 0x92230001  lbu         $v1, 0x1($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32EA88u;
        goto label_32ea88;
    }
    ctx->pc = 0x32EA80u;
    {
        const bool branch_taken_0x32ea80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x32ea80) {
            ctx->pc = 0x32EA84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32EA80u;
            // 0x32ea84: 0x92230001  lbu         $v1, 0x1($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32EADCu;
            goto label_32eadc;
        }
    }
    ctx->pc = 0x32EA88u;
label_32ea88:
    // 0x32ea88: 0xc0cff1c  jal         func_33FC70
label_32ea8c:
    if (ctx->pc == 0x32EA8Cu) {
        ctx->pc = 0x32EA90u;
        goto label_32ea90;
    }
    ctx->pc = 0x32EA88u;
    SET_GPR_U32(ctx, 31, 0x32EA90u);
    ctx->pc = 0x33FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FC70u, 0x32EA88u, 0x32EA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EA90u;
label_32ea90:
    // 0x32ea90: 0x8e2201a8  lw          $v0, 0x1A8($s1)
    ctx->pc = 0x32ea90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 424)));
label_32ea94:
    // 0x32ea94: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_32ea98:
    if (ctx->pc == 0x32EA98u) {
        ctx->pc = 0x32EA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EA94u;
        // 0x32ea98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32EA9Cu;
        goto label_32ea9c;
    }
    ctx->pc = 0x32EA94u;
    {
        const bool branch_taken_0x32ea94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32EA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EA94u;
        // 0x32ea98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ea94) {
            ctx->pc = 0x32EAA4u;
            goto label_32eaa4;
        }
    }
    ctx->pc = 0x32EA9Cu;
label_32ea9c:
    // 0x32ea9c: 0xc0cbbda  jal         func_32EF68
label_32eaa0:
    if (ctx->pc == 0x32EAA0u) {
        ctx->pc = 0x32EAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EA9Cu;
        // 0x32eaa0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32EAA4u;
        goto label_32eaa4;
    }
    ctx->pc = 0x32EA9Cu;
    SET_GPR_U32(ctx, 31, 0x32EAA4u);
    ctx->pc = 0x32EAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EA9Cu;
    // 0x32eaa0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32EF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EF68u, 0x32EA9Cu, 0x32EAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EAA4u;
label_32eaa4:
    // 0x32eaa4: 0xc0cb75c  jal         func_32DD70
label_32eaa8:
    if (ctx->pc == 0x32EAA8u) {
        ctx->pc = 0x32EAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EAA4u;
        // 0x32eaa8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32EAACu;
        goto label_32eaac;
    }
    ctx->pc = 0x32EAA4u;
    SET_GPR_U32(ctx, 31, 0x32EAACu);
    ctx->pc = 0x32EAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EAA4u;
    // 0x32eaa8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DD70u, 0x32EAA4u, 0x32EAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EAACu;
label_32eaac:
    // 0x32eaac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32eaacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_32eab0:
    // 0x32eab0: 0xa2220001  sb          $v0, 0x1($s1)
    ctx->pc = 0x32eab0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
label_32eab4:
    // 0x32eab4: 0xc0cff22  jal         func_33FC88
label_32eab8:
    if (ctx->pc == 0x32EAB8u) {
        ctx->pc = 0x32EAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EAB4u;
        // 0x32eab8: 0xae2001ac  sw          $zero, 0x1AC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 428), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32EABCu;
        goto label_32eabc;
    }
    ctx->pc = 0x32EAB4u;
    SET_GPR_U32(ctx, 31, 0x32EABCu);
    ctx->pc = 0x32EAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EAB4u;
    // 0x32eab8: 0xae2001ac  sw          $zero, 0x1AC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 428), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FC88u, 0x32EAB4u, 0x32EABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EABCu;
label_32eabc:
    // 0x32eabc: 0x10000007  b           . + 4 + (0x7 << 2)
label_32eac0:
    if (ctx->pc == 0x32EAC0u) {
        ctx->pc = 0x32EAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EABCu;
        // 0x32eac0: 0x92230001  lbu         $v1, 0x1($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32EAC4u;
        goto label_32eac4;
    }
    ctx->pc = 0x32EABCu;
    {
        const bool branch_taken_0x32eabc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32EAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EABCu;
        // 0x32eac0: 0x92230001  lbu         $v1, 0x1($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32eabc) {
            ctx->pc = 0x32EADCu;
            goto label_32eadc;
        }
    }
    ctx->pc = 0x32EAC4u;
label_32eac4:
    // 0x32eac4: 0x0  nop
    ctx->pc = 0x32eac4u;
    // NOP
label_32eac8:
    // 0x32eac8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x32eac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_32eacc:
    // 0x32eacc: 0x10000003  b           . + 4 + (0x3 << 2)
label_32ead0:
    if (ctx->pc == 0x32EAD0u) {
        ctx->pc = 0x32EAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EACCu;
        // 0x32ead0: 0xa2220001  sb          $v0, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32EAD4u;
        goto label_32ead4;
    }
    ctx->pc = 0x32EACCu;
    {
        const bool branch_taken_0x32eacc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32EAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EACCu;
        // 0x32ead0: 0xa2220001  sb          $v0, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32eacc) {
            ctx->pc = 0x32EADCu;
            goto label_32eadc;
        }
    }
    ctx->pc = 0x32EAD4u;
label_32ead4:
    // 0x32ead4: 0x0  nop
    ctx->pc = 0x32ead4u;
    // NOP
label_32ead8:
    // 0x32ead8: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x32ead8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_32eadc:
    // 0x32eadc: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x32eadcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_32eae0:
    // 0x32eae0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x32eae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_32eae4:
    // 0x32eae4: 0x28603  sra         $s0, $v0, 24
    ctx->pc = 0x32eae4u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 24));
label_32eae8:
    // 0x32eae8: 0x16030026  bne         $s0, $v1, . + 4 + (0x26 << 2)
label_32eaec:
    if (ctx->pc == 0x32EAECu) {
        ctx->pc = 0x32EAF0u;
        goto label_32eaf0;
    }
    ctx->pc = 0x32EAE8u;
    {
        const bool branch_taken_0x32eae8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x32eae8) {
            ctx->pc = 0x32EB84u;
            goto label_32eb84;
        }
    }
    ctx->pc = 0x32EAF0u;
label_32eaf0:
    // 0x32eaf0: 0xc0cbd5c  jal         func_32F570
label_32eaf4:
    if (ctx->pc == 0x32EAF4u) {
        ctx->pc = 0x32EAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EAF0u;
        // 0x32eaf4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32EAF8u;
        goto label_32eaf8;
    }
    ctx->pc = 0x32EAF0u;
    SET_GPR_U32(ctx, 31, 0x32EAF8u);
    ctx->pc = 0x32EAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EAF0u;
    // 0x32eaf4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F570u, 0x32EAF0u, 0x32EAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EAF8u;
label_32eaf8:
    // 0x32eaf8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x32eaf8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32eafc:
    // 0x32eafc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_32eb00:
    if (ctx->pc == 0x32EB00u) {
        ctx->pc = 0x32EB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EAFCu;
        // 0x32eb00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32EB04u;
        goto label_32eb04;
    }
    ctx->pc = 0x32EAFCu;
    {
        const bool branch_taken_0x32eafc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x32EB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EAFCu;
        // 0x32eb00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32eafc) {
            ctx->pc = 0x32EB18u;
            goto label_32eb18;
        }
    }
    ctx->pc = 0x32EB04u;
label_32eb04:
    // 0x32eb04: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
label_32eb08:
    if (ctx->pc == 0x32EB08u) {
        ctx->pc = 0x32EB0Cu;
        goto label_32eb0c;
    }
    ctx->pc = 0x32EB04u;
    {
        const bool branch_taken_0x32eb04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x32eb04) {
            ctx->pc = 0x32EB50u;
            goto label_32eb50;
        }
    }
    ctx->pc = 0x32EB0Cu;
label_32eb0c:
    // 0x32eb0c: 0x1000001d  b           . + 4 + (0x1D << 2)
label_32eb10:
    if (ctx->pc == 0x32EB10u) {
        ctx->pc = 0x32EB14u;
        goto label_32eb14;
    }
    ctx->pc = 0x32EB0Cu;
    {
        const bool branch_taken_0x32eb0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32eb0c) {
            ctx->pc = 0x32EB84u;
            goto label_32eb84;
        }
    }
    ctx->pc = 0x32EB14u;
label_32eb14:
    // 0x32eb14: 0x0  nop
    ctx->pc = 0x32eb14u;
    // NOP
label_32eb18:
    // 0x32eb18: 0xc0cbd1a  jal         func_32F468
label_32eb1c:
    if (ctx->pc == 0x32EB1Cu) {
        ctx->pc = 0x32EB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EB18u;
        // 0x32eb1c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32EB20u;
        goto label_32eb20;
    }
    ctx->pc = 0x32EB18u;
    SET_GPR_U32(ctx, 31, 0x32EB20u);
    ctx->pc = 0x32EB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EB18u;
    // 0x32eb1c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F468u, 0x32EB18u, 0x32EB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EB20u;
label_32eb20:
    // 0x32eb20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32eb20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32eb24:
    // 0x32eb24: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x32eb24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_32eb28:
    // 0x32eb28: 0x16020016  bne         $s0, $v0, . + 4 + (0x16 << 2)
label_32eb2c:
    if (ctx->pc == 0x32EB2Cu) {
        ctx->pc = 0x32EB30u;
        goto label_32eb30;
    }
    ctx->pc = 0x32EB28u;
    {
        const bool branch_taken_0x32eb28 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x32eb28) {
            ctx->pc = 0x32EB84u;
            goto label_32eb84;
        }
    }
    ctx->pc = 0x32EB30u;
label_32eb30:
    // 0x32eb30: 0xc0cbc5e  jal         func_32F178
label_32eb34:
    if (ctx->pc == 0x32EB34u) {
        ctx->pc = 0x32EB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EB30u;
        // 0x32eb34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32EB38u;
        goto label_32eb38;
    }
    ctx->pc = 0x32EB30u;
    SET_GPR_U32(ctx, 31, 0x32EB38u);
    ctx->pc = 0x32EB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EB30u;
    // 0x32eb34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F178u, 0x32EB30u, 0x32EB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EB38u;
label_32eb38:
    // 0x32eb38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32eb38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32eb3c:
    // 0x32eb3c: 0x50430011  beql        $v0, $v1, . + 4 + (0x11 << 2)
label_32eb40:
    if (ctx->pc == 0x32EB40u) {
        ctx->pc = 0x32EB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EB3Cu;
        // 0x32eb40: 0xa2300001  sb          $s0, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32EB44u;
        goto label_32eb44;
    }
    ctx->pc = 0x32EB3Cu;
    {
        const bool branch_taken_0x32eb3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x32eb3c) {
            ctx->pc = 0x32EB40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32EB3Cu;
            // 0x32eb40: 0xa2300001  sb          $s0, 0x1($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32EB84u;
            goto label_32eb84;
        }
    }
    ctx->pc = 0x32EB44u;
label_32eb44:
    // 0x32eb44: 0x1000000f  b           . + 4 + (0xF << 2)
label_32eb48:
    if (ctx->pc == 0x32EB48u) {
        ctx->pc = 0x32EB4Cu;
        goto label_32eb4c;
    }
    ctx->pc = 0x32EB44u;
    {
        const bool branch_taken_0x32eb44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32eb44) {
            ctx->pc = 0x32EB84u;
            goto label_32eb84;
        }
    }
    ctx->pc = 0x32EB4Cu;
label_32eb4c:
    // 0x32eb4c: 0x0  nop
    ctx->pc = 0x32eb4cu;
    // NOP
label_32eb50:
    // 0x32eb50: 0xc0ca026  jal         func_328098
label_32eb54:
    if (ctx->pc == 0x32EB54u) {
        ctx->pc = 0x32EB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EB50u;
        // 0x32eb54: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32EB58u;
        goto label_32eb58;
    }
    ctx->pc = 0x32EB50u;
    SET_GPR_U32(ctx, 31, 0x32EB58u);
    ctx->pc = 0x32EB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EB50u;
    // 0x32eb54: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328098u, 0x32EB50u, 0x32EB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EB58u;
label_32eb58:
    // 0x32eb58: 0x1050000a  beq         $v0, $s0, . + 4 + (0xA << 2)
label_32eb5c:
    if (ctx->pc == 0x32EB5Cu) {
        ctx->pc = 0x32EB60u;
        goto label_32eb60;
    }
    ctx->pc = 0x32EB58u;
    {
        const bool branch_taken_0x32eb58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x32eb58) {
            ctx->pc = 0x32EB84u;
            goto label_32eb84;
        }
    }
    ctx->pc = 0x32EB60u;
label_32eb60:
    // 0x32eb60: 0xc0ca7e6  jal         func_329F98
label_32eb64:
    if (ctx->pc == 0x32EB64u) {
        ctx->pc = 0x32EB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EB60u;
        // 0x32eb64: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32EB68u;
        goto label_32eb68;
    }
    ctx->pc = 0x32EB60u;
    SET_GPR_U32(ctx, 31, 0x32EB68u);
    ctx->pc = 0x32EB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EB60u;
    // 0x32eb64: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329F98u, 0x32EB60u, 0x32EB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EB68u;
label_32eb68:
    // 0x32eb68: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x32eb68u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32eb6c:
    // 0x32eb6c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x32eb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_32eb70:
    // 0x32eb70: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_32eb74:
    if (ctx->pc == 0x32EB74u) {
        ctx->pc = 0x32EB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EB70u;
        // 0x32eb74: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32EB78u;
        goto label_32eb78;
    }
    ctx->pc = 0x32EB70u;
    {
        const bool branch_taken_0x32eb70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x32EB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EB70u;
        // 0x32eb74: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32eb70) {
            ctx->pc = 0x32EB80u;
            goto label_32eb80;
        }
    }
    ctx->pc = 0x32EB78u;
label_32eb78:
    // 0x32eb78: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_32eb7c:
    if (ctx->pc == 0x32EB7Cu) {
        ctx->pc = 0x32EB80u;
        goto label_32eb80;
    }
    ctx->pc = 0x32EB78u;
    {
        const bool branch_taken_0x32eb78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32eb78) {
            ctx->pc = 0x32EB84u;
            goto label_32eb84;
        }
    }
    ctx->pc = 0x32EB80u;
label_32eb80:
    // 0x32eb80: 0xa2220001  sb          $v0, 0x1($s1)
    ctx->pc = 0x32eb80u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
label_32eb84:
    // 0x32eb84: 0xc0cff1c  jal         func_33FC70
label_32eb88:
    if (ctx->pc == 0x32EB88u) {
        ctx->pc = 0x32EB8Cu;
        goto label_32eb8c;
    }
    ctx->pc = 0x32EB84u;
    SET_GPR_U32(ctx, 31, 0x32EB8Cu);
    ctx->pc = 0x33FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FC70u, 0x32EB84u, 0x32EB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EB8Cu;
label_32eb8c:
    // 0x32eb8c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x32eb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_32eb90:
    // 0x32eb90: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_32eb94:
    if (ctx->pc == 0x32EB94u) {
        ctx->pc = 0x32EB98u;
        goto label_32eb98;
    }
    ctx->pc = 0x32EB90u;
    {
        const bool branch_taken_0x32eb90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x32eb90) {
            ctx->pc = 0x32EBB0u;
            goto label_32ebb0;
        }
    }
    ctx->pc = 0x32EB98u;
label_32eb98:
    // 0x32eb98: 0xc0ca026  jal         func_328098
label_32eb9c:
    if (ctx->pc == 0x32EB9Cu) {
        ctx->pc = 0x32EBA0u;
        goto label_32eba0;
    }
    ctx->pc = 0x32EB98u;
    SET_GPR_U32(ctx, 31, 0x32EBA0u);
    ctx->pc = 0x328098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328098u, 0x32EB98u, 0x32EBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EBA0u;
label_32eba0:
    // 0x32eba0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x32eba0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32eba4:
    // 0x32eba4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x32eba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_32eba8:
    // 0x32eba8: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
label_32ebac:
    if (ctx->pc == 0x32EBACu) {
        ctx->pc = 0x32EBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EBA8u;
        // 0x32ebac: 0xa2230001  sb          $v1, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32EBB0u;
        goto label_32ebb0;
    }
    ctx->pc = 0x32EBA8u;
    {
        const bool branch_taken_0x32eba8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x32eba8) {
            ctx->pc = 0x32EBACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32EBA8u;
            // 0x32ebac: 0xa2230001  sb          $v1, 0x1($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32EBB0u;
            goto label_32ebb0;
        }
    }
    ctx->pc = 0x32EBB0u;
label_32ebb0:
    // 0x32ebb0: 0xc0cff22  jal         func_33FC88
label_32ebb4:
    if (ctx->pc == 0x32EBB4u) {
        ctx->pc = 0x32EBB8u;
        goto label_32ebb8;
    }
    ctx->pc = 0x32EBB0u;
    SET_GPR_U32(ctx, 31, 0x32EBB8u);
    ctx->pc = 0x33FC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FC88u, 0x32EBB0u, 0x32EBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EBB8u;
label_32ebb8:
    // 0x32ebb8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x32ebb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_32ebbc:
    // 0x32ebbc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x32ebbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_32ebc0:
    // 0x32ebc0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x32ebc0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_32ebc4:
    // 0x32ebc4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x32ebc4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_32ebc8:
    // 0x32ebc8: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x32ebc8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_32ebcc:
    // 0x32ebcc: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x32ebccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_32ebd0:
    // 0x32ebd0: 0x3e00008  jr          $ra
label_32ebd4:
    if (ctx->pc == 0x32EBD4u) {
        ctx->pc = 0x32EBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EBD0u;
        // 0x32ebd4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32EBD8u;
        goto label_fallthrough_0x32ebd0;
    }
    ctx->pc = 0x32EBD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32EBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EBD0u;
        // 0x32ebd4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32EBD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x32ebd0:
    ctx->pc = 0x32EBD8u;
}
