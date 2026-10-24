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

// Function: func_00208858
// Address: 0x208858 - 0x208be0
void func_00208858_0x208858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00208858_0x208858");
#endif

    switch (ctx->pc) {
        case 0x208880u: goto label_208880;
        case 0x208888u: goto label_208888;
        case 0x208894u: goto label_208894;
        case 0x2088a8u: goto label_2088a8;
        case 0x2088d0u: goto label_2088d0;
        case 0x2088ecu: goto label_2088ec;
        case 0x208908u: goto label_208908;
        case 0x208924u: goto label_208924;
        case 0x208940u: goto label_208940;
        case 0x208964u: goto label_208964;
        case 0x20897cu: goto label_20897c;
        case 0x208994u: goto label_208994;
        case 0x2089acu: goto label_2089ac;
        case 0x2089c4u: goto label_2089c4;
        case 0x2089dcu: goto label_2089dc;
        case 0x2089f4u: goto label_2089f4;
        case 0x208a0cu: goto label_208a0c;
        case 0x208a24u: goto label_208a24;
        case 0x208a3cu: goto label_208a3c;
        case 0x208a54u: goto label_208a54;
        case 0x208a6cu: goto label_208a6c;
        case 0x208a84u: goto label_208a84;
        case 0x208a9cu: goto label_208a9c;
        case 0x208ab4u: goto label_208ab4;
        case 0x208accu: goto label_208acc;
        case 0x208ae4u: goto label_208ae4;
        case 0x208afcu: goto label_208afc;
        case 0x208b14u: goto label_208b14;
        case 0x208b2cu: goto label_208b2c;
        case 0x208b44u: goto label_208b44;
        case 0x208b5cu: goto label_208b5c;
        case 0x208b74u: goto label_208b74;
        case 0x208b8cu: goto label_208b8c;
        case 0x208b98u: goto label_208b98;
        case 0x208bacu: goto label_208bac;
        case 0x208bc4u: goto label_208bc4;
        default: break;
    }

    ctx->pc = 0x208858u;

    // 0x208858: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x208858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x20885c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x20885cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x208860: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x208860u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208864: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x208864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x208868: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x208868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x20886c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x20886cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x208870: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x208870u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    // 0x208874: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x208874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x208878: 0xc082098  jal         func_208260
    ctx->pc = 0x208878u;
    SET_GPR_U32(ctx, 31, 0x208880u);
    ctx->pc = 0x20887Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208878u;
    // 0x20887c: 0x3c130046  lui         $s3, 0x46 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)70 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208260u, 0x208878u, 0x208880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208880u;
label_208880:
    // 0x208880: 0xc09c52c  jal         func_2714B0
    ctx->pc = 0x208880u;
    SET_GPR_U32(ctx, 31, 0x208888u);
    ctx->pc = 0x208884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208880u;
    // 0x208884: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2714B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2714B0u, 0x208880u, 0x208888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208888u;
label_208888:
    // 0x208888: 0x8e250698  lw          $a1, 0x698($s1)
    ctx->pc = 0x208888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
    // 0x20888c: 0xc07f89e  jal         func_1FE278
    ctx->pc = 0x20888Cu;
    SET_GPR_U32(ctx, 31, 0x208894u);
    ctx->pc = 0x208890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20888Cu;
    // 0x208890: 0x26044380  addiu       $a0, $s0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE278u, 0x20888Cu, 0x208894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208894u;
label_208894:
    // 0x208894: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x208894u;
    {
        const bool branch_taken_0x208894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208894u;
        // 0x208898: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208894) {
            ctx->pc = 0x2088C0u;
            goto label_2088c0;
        }
    }
    ctx->pc = 0x20889Cu;
    // 0x20889c: 0xae200698  sw          $zero, 0x698($s1)
    ctx->pc = 0x20889cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1688), GPR_U32(ctx, 0));
    // 0x2088a0: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x2088a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2088a4: 0x262206ac  addiu       $v0, $s1, 0x6AC
    ctx->pc = 0x2088a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1708));
label_2088a8:
    // 0x2088a8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2088a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2088ac: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x2088acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x2088b0: 0x0  nop
    ctx->pc = 0x2088b0u;
    // NOP
    // 0x2088b4: 0x0  nop
    ctx->pc = 0x2088b4u;
    // NOP
    // 0x2088b8: 0x641fffb  bgez        $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2088B8u;
    {
        const bool branch_taken_0x2088b8 = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x2088BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2088B8u;
        // 0x2088bc: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2088b8) {
            ctx->pc = 0x2088A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2088a8;
        }
    }
    ctx->pc = 0x2088C0u;
label_2088c0:
    // 0x2088c0: 0x26104380  addiu       $s0, $s0, 0x4380
    ctx->pc = 0x2088c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 17280));
    // 0x2088c4: 0x8e250670  lw          $a1, 0x670($s1)
    ctx->pc = 0x2088c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
    // 0x2088c8: 0xc07f852  jal         func_1FE148
    ctx->pc = 0x2088C8u;
    SET_GPR_U32(ctx, 31, 0x2088D0u);
    ctx->pc = 0x2088CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2088C8u;
    // 0x2088cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE148u, 0x2088C8u, 0x2088D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2088D0u;
label_2088d0:
    // 0x2088d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2088D0u;
    {
        const bool branch_taken_0x2088d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2088D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2088D0u;
        // 0x2088d4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2088d0) {
            ctx->pc = 0x2088E0u;
            goto label_2088e0;
        }
    }
    ctx->pc = 0x2088D8u;
    // 0x2088d8: 0xae200670  sw          $zero, 0x670($s1)
    ctx->pc = 0x2088d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1648), GPR_U32(ctx, 0));
    // 0x2088dc: 0xae220674  sw          $v0, 0x674($s1)
    ctx->pc = 0x2088dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1652), GPR_U32(ctx, 2));
label_2088e0:
    // 0x2088e0: 0x8e250678  lw          $a1, 0x678($s1)
    ctx->pc = 0x2088e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1656)));
    // 0x2088e4: 0xc07f852  jal         func_1FE148
    ctx->pc = 0x2088E4u;
    SET_GPR_U32(ctx, 31, 0x2088ECu);
    ctx->pc = 0x2088E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2088E4u;
    // 0x2088e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE148u, 0x2088E4u, 0x2088ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2088ECu;
label_2088ec:
    // 0x2088ec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2088ECu;
    {
        const bool branch_taken_0x2088ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2088F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2088ECu;
        // 0x2088f0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2088ec) {
            ctx->pc = 0x2088FCu;
            goto label_2088fc;
        }
    }
    ctx->pc = 0x2088F4u;
    // 0x2088f4: 0xae200678  sw          $zero, 0x678($s1)
    ctx->pc = 0x2088f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1656), GPR_U32(ctx, 0));
    // 0x2088f8: 0xae22067c  sw          $v0, 0x67C($s1)
    ctx->pc = 0x2088f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1660), GPR_U32(ctx, 2));
label_2088fc:
    // 0x2088fc: 0x8e250680  lw          $a1, 0x680($s1)
    ctx->pc = 0x2088fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1664)));
    // 0x208900: 0xc07f852  jal         func_1FE148
    ctx->pc = 0x208900u;
    SET_GPR_U32(ctx, 31, 0x208908u);
    ctx->pc = 0x208904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208900u;
    // 0x208904: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE148u, 0x208900u, 0x208908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208908u;
label_208908:
    // 0x208908: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x208908u;
    {
        const bool branch_taken_0x208908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20890Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208908u;
        // 0x20890c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208908) {
            ctx->pc = 0x208918u;
            goto label_208918;
        }
    }
    ctx->pc = 0x208910u;
    // 0x208910: 0xae200680  sw          $zero, 0x680($s1)
    ctx->pc = 0x208910u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1664), GPR_U32(ctx, 0));
    // 0x208914: 0xae220684  sw          $v0, 0x684($s1)
    ctx->pc = 0x208914u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1668), GPR_U32(ctx, 2));
label_208918:
    // 0x208918: 0x8e250688  lw          $a1, 0x688($s1)
    ctx->pc = 0x208918u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1672)));
    // 0x20891c: 0xc07f852  jal         func_1FE148
    ctx->pc = 0x20891Cu;
    SET_GPR_U32(ctx, 31, 0x208924u);
    ctx->pc = 0x208920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20891Cu;
    // 0x208920: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE148u, 0x20891Cu, 0x208924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208924u;
label_208924:
    // 0x208924: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x208924u;
    {
        const bool branch_taken_0x208924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208924u;
        // 0x208928: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208924) {
            ctx->pc = 0x208934u;
            goto label_208934;
        }
    }
    ctx->pc = 0x20892Cu;
    // 0x20892c: 0xae200688  sw          $zero, 0x688($s1)
    ctx->pc = 0x20892cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1672), GPR_U32(ctx, 0));
    // 0x208930: 0xae22068c  sw          $v0, 0x68C($s1)
    ctx->pc = 0x208930u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1676), GPR_U32(ctx, 2));
label_208934:
    // 0x208934: 0x8e250690  lw          $a1, 0x690($s1)
    ctx->pc = 0x208934u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
    // 0x208938: 0xc07f852  jal         func_1FE148
    ctx->pc = 0x208938u;
    SET_GPR_U32(ctx, 31, 0x208940u);
    ctx->pc = 0x20893Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208938u;
    // 0x20893c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE148u, 0x208938u, 0x208940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208940u;
label_208940:
    // 0x208940: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x208940u;
    {
        const bool branch_taken_0x208940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208940u;
        // 0x208944: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208940) {
            ctx->pc = 0x208950u;
            goto label_208950;
        }
    }
    ctx->pc = 0x208948u;
    // 0x208948: 0xae200690  sw          $zero, 0x690($s1)
    ctx->pc = 0x208948u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1680), GPR_U32(ctx, 0));
    // 0x20894c: 0xae220694  sw          $v0, 0x694($s1)
    ctx->pc = 0x20894cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1684), GPR_U32(ctx, 2));
label_208950:
    // 0x208950: 0x8e2406ec  lw          $a0, 0x6EC($s1)
    ctx->pc = 0x208950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1772)));
    // 0x208954: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x208954u;
    {
        const bool branch_taken_0x208954 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x208954) {
            ctx->pc = 0x208958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208954u;
            // 0x208958: 0x8e2406f0  lw          $a0, 0x6F0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1776)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20896Cu;
            goto label_20896c;
        }
    }
    ctx->pc = 0x20895Cu;
    // 0x20895c: 0xc06de6c  jal         func_1B79B0
    ctx->pc = 0x20895Cu;
    SET_GPR_U32(ctx, 31, 0x208964u);
    ctx->pc = 0x1B79B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B79B0u, 0x20895Cu, 0x208964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208964u;
label_208964:
    // 0x208964: 0xae2006ec  sw          $zero, 0x6EC($s1)
    ctx->pc = 0x208964u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1772), GPR_U32(ctx, 0));
    // 0x208968: 0x8e2406f0  lw          $a0, 0x6F0($s1)
    ctx->pc = 0x208968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1776)));
label_20896c:
    // 0x20896c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x20896Cu;
    {
        const bool branch_taken_0x20896c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20896c) {
            ctx->pc = 0x208970u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20896Cu;
            // 0x208970: 0x8e2406f8  lw          $a0, 0x6F8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1784)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208984u;
            goto label_208984;
        }
    }
    ctx->pc = 0x208974u;
    // 0x208974: 0xc06de6c  jal         func_1B79B0
    ctx->pc = 0x208974u;
    SET_GPR_U32(ctx, 31, 0x20897Cu);
    ctx->pc = 0x1B79B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B79B0u, 0x208974u, 0x20897Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20897Cu;
label_20897c:
    // 0x20897c: 0xae2006f0  sw          $zero, 0x6F0($s1)
    ctx->pc = 0x20897cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1776), GPR_U32(ctx, 0));
    // 0x208980: 0x8e2406f8  lw          $a0, 0x6F8($s1)
    ctx->pc = 0x208980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1784)));
label_208984:
    // 0x208984: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x208984u;
    {
        const bool branch_taken_0x208984 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x208984) {
            ctx->pc = 0x208988u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208984u;
            // 0x208988: 0x8e2406fc  lw          $a0, 0x6FC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1788)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20899Cu;
            goto label_20899c;
        }
    }
    ctx->pc = 0x20898Cu;
    // 0x20898c: 0xc06de6c  jal         func_1B79B0
    ctx->pc = 0x20898Cu;
    SET_GPR_U32(ctx, 31, 0x208994u);
    ctx->pc = 0x1B79B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B79B0u, 0x20898Cu, 0x208994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208994u;
label_208994:
    // 0x208994: 0xae2006f8  sw          $zero, 0x6F8($s1)
    ctx->pc = 0x208994u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1784), GPR_U32(ctx, 0));
    // 0x208998: 0x8e2406fc  lw          $a0, 0x6FC($s1)
    ctx->pc = 0x208998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1788)));
label_20899c:
    // 0x20899c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x20899Cu;
    {
        const bool branch_taken_0x20899c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20899c) {
            ctx->pc = 0x2089A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20899Cu;
            // 0x2089a0: 0x8e240700  lw          $a0, 0x700($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1792)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2089B4u;
            goto label_2089b4;
        }
    }
    ctx->pc = 0x2089A4u;
    // 0x2089a4: 0xc06de6c  jal         func_1B79B0
    ctx->pc = 0x2089A4u;
    SET_GPR_U32(ctx, 31, 0x2089ACu);
    ctx->pc = 0x1B79B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B79B0u, 0x2089A4u, 0x2089ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2089ACu;
label_2089ac:
    // 0x2089ac: 0xae2006fc  sw          $zero, 0x6FC($s1)
    ctx->pc = 0x2089acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1788), GPR_U32(ctx, 0));
    // 0x2089b0: 0x8e240700  lw          $a0, 0x700($s1)
    ctx->pc = 0x2089b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1792)));
label_2089b4:
    // 0x2089b4: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2089B4u;
    {
        const bool branch_taken_0x2089b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2089b4) {
            ctx->pc = 0x2089B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2089B4u;
            // 0x2089b8: 0x8e240704  lw          $a0, 0x704($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1796)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2089CCu;
            goto label_2089cc;
        }
    }
    ctx->pc = 0x2089BCu;
    // 0x2089bc: 0xc06de6c  jal         func_1B79B0
    ctx->pc = 0x2089BCu;
    SET_GPR_U32(ctx, 31, 0x2089C4u);
    ctx->pc = 0x1B79B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B79B0u, 0x2089BCu, 0x2089C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2089C4u;
label_2089c4:
    // 0x2089c4: 0xae200700  sw          $zero, 0x700($s1)
    ctx->pc = 0x2089c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1792), GPR_U32(ctx, 0));
    // 0x2089c8: 0x8e240704  lw          $a0, 0x704($s1)
    ctx->pc = 0x2089c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1796)));
label_2089cc:
    // 0x2089cc: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2089CCu;
    {
        const bool branch_taken_0x2089cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2089cc) {
            ctx->pc = 0x2089D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2089CCu;
            // 0x2089d0: 0x8e240708  lw          $a0, 0x708($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1800)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2089E4u;
            goto label_2089e4;
        }
    }
    ctx->pc = 0x2089D4u;
    // 0x2089d4: 0xc06de6c  jal         func_1B79B0
    ctx->pc = 0x2089D4u;
    SET_GPR_U32(ctx, 31, 0x2089DCu);
    ctx->pc = 0x1B79B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B79B0u, 0x2089D4u, 0x2089DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2089DCu;
label_2089dc:
    // 0x2089dc: 0xae200704  sw          $zero, 0x704($s1)
    ctx->pc = 0x2089dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1796), GPR_U32(ctx, 0));
    // 0x2089e0: 0x8e240708  lw          $a0, 0x708($s1)
    ctx->pc = 0x2089e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1800)));
label_2089e4:
    // 0x2089e4: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2089E4u;
    {
        const bool branch_taken_0x2089e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2089e4) {
            ctx->pc = 0x2089E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2089E4u;
            // 0x2089e8: 0x8e240734  lw          $a0, 0x734($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1844)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2089FCu;
            goto label_2089fc;
        }
    }
    ctx->pc = 0x2089ECu;
    // 0x2089ec: 0xc06de6c  jal         func_1B79B0
    ctx->pc = 0x2089ECu;
    SET_GPR_U32(ctx, 31, 0x2089F4u);
    ctx->pc = 0x1B79B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B79B0u, 0x2089ECu, 0x2089F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2089F4u;
label_2089f4:
    // 0x2089f4: 0xae200708  sw          $zero, 0x708($s1)
    ctx->pc = 0x2089f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1800), GPR_U32(ctx, 0));
    // 0x2089f8: 0x8e240734  lw          $a0, 0x734($s1)
    ctx->pc = 0x2089f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1844)));
label_2089fc:
    // 0x2089fc: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2089FCu;
    {
        const bool branch_taken_0x2089fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2089fc) {
            ctx->pc = 0x208A00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2089FCu;
            // 0x208a00: 0x8e2406f4  lw          $a0, 0x6F4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1780)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208A14u;
            goto label_208a14;
        }
    }
    ctx->pc = 0x208A04u;
    // 0x208a04: 0xc06de6c  jal         func_1B79B0
    ctx->pc = 0x208A04u;
    SET_GPR_U32(ctx, 31, 0x208A0Cu);
    ctx->pc = 0x1B79B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B79B0u, 0x208A04u, 0x208A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208A0Cu;
label_208a0c:
    // 0x208a0c: 0xae200734  sw          $zero, 0x734($s1)
    ctx->pc = 0x208a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1844), GPR_U32(ctx, 0));
    // 0x208a10: 0x8e2406f4  lw          $a0, 0x6F4($s1)
    ctx->pc = 0x208a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1780)));
label_208a14:
    // 0x208a14: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x208A14u;
    {
        const bool branch_taken_0x208a14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x208a14) {
            ctx->pc = 0x208A18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208A14u;
            // 0x208a18: 0x8e24070c  lw          $a0, 0x70C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1804)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208A2Cu;
            goto label_208a2c;
        }
    }
    ctx->pc = 0x208A1Cu;
    // 0x208a1c: 0xc06de6c  jal         func_1B79B0
    ctx->pc = 0x208A1Cu;
    SET_GPR_U32(ctx, 31, 0x208A24u);
    ctx->pc = 0x1B79B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B79B0u, 0x208A1Cu, 0x208A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208A24u;
label_208a24:
    // 0x208a24: 0xae2006f4  sw          $zero, 0x6F4($s1)
    ctx->pc = 0x208a24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1780), GPR_U32(ctx, 0));
    // 0x208a28: 0x8e24070c  lw          $a0, 0x70C($s1)
    ctx->pc = 0x208a28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1804)));
label_208a2c:
    // 0x208a2c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x208A2Cu;
    {
        const bool branch_taken_0x208a2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x208a2c) {
            ctx->pc = 0x208A30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208A2Cu;
            // 0x208a30: 0x8e240730  lw          $a0, 0x730($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1840)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208A44u;
            goto label_208a44;
        }
    }
    ctx->pc = 0x208A34u;
    // 0x208a34: 0xc06de6c  jal         func_1B79B0
    ctx->pc = 0x208A34u;
    SET_GPR_U32(ctx, 31, 0x208A3Cu);
    ctx->pc = 0x1B79B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B79B0u, 0x208A34u, 0x208A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208A3Cu;
label_208a3c:
    // 0x208a3c: 0xae20070c  sw          $zero, 0x70C($s1)
    ctx->pc = 0x208a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1804), GPR_U32(ctx, 0));
    // 0x208a40: 0x8e240730  lw          $a0, 0x730($s1)
    ctx->pc = 0x208a40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1840)));
label_208a44:
    // 0x208a44: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x208A44u;
    {
        const bool branch_taken_0x208a44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x208a44) {
            ctx->pc = 0x208A48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208A44u;
            // 0x208a48: 0x8e240738  lw          $a0, 0x738($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1848)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208A5Cu;
            goto label_208a5c;
        }
    }
    ctx->pc = 0x208A4Cu;
    // 0x208a4c: 0xc06de6c  jal         func_1B79B0
    ctx->pc = 0x208A4Cu;
    SET_GPR_U32(ctx, 31, 0x208A54u);
    ctx->pc = 0x1B79B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B79B0u, 0x208A4Cu, 0x208A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208A54u;
label_208a54:
    // 0x208a54: 0xae200730  sw          $zero, 0x730($s1)
    ctx->pc = 0x208a54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1840), GPR_U32(ctx, 0));
    // 0x208a58: 0x8e240738  lw          $a0, 0x738($s1)
    ctx->pc = 0x208a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1848)));
label_208a5c:
    // 0x208a5c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x208A5Cu;
    {
        const bool branch_taken_0x208a5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x208a5c) {
            ctx->pc = 0x208A60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208A5Cu;
            // 0x208a60: 0x8e241964  lw          $a0, 0x1964($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6500)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208A74u;
            goto label_208a74;
        }
    }
    ctx->pc = 0x208A64u;
    // 0x208a64: 0xc06de6c  jal         func_1B79B0
    ctx->pc = 0x208A64u;
    SET_GPR_U32(ctx, 31, 0x208A6Cu);
    ctx->pc = 0x1B79B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B79B0u, 0x208A64u, 0x208A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208A6Cu;
label_208a6c:
    // 0x208a6c: 0xae200738  sw          $zero, 0x738($s1)
    ctx->pc = 0x208a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1848), GPR_U32(ctx, 0));
    // 0x208a70: 0x8e241964  lw          $a0, 0x1964($s1)
    ctx->pc = 0x208a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6500)));
label_208a74:
    // 0x208a74: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x208A74u;
    {
        const bool branch_taken_0x208a74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x208a74) {
            ctx->pc = 0x208A78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208A74u;
            // 0x208a78: 0x8e241968  lw          $a0, 0x1968($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6504)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208A8Cu;
            goto label_208a8c;
        }
    }
    ctx->pc = 0x208A7Cu;
    // 0x208a7c: 0xc0c49c2  jal         func_312708
    ctx->pc = 0x208A7Cu;
    SET_GPR_U32(ctx, 31, 0x208A84u);
    ctx->pc = 0x312708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312708u, 0x208A7Cu, 0x208A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208A84u;
label_208a84:
    // 0x208a84: 0xae201964  sw          $zero, 0x1964($s1)
    ctx->pc = 0x208a84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6500), GPR_U32(ctx, 0));
    // 0x208a88: 0x8e241968  lw          $a0, 0x1968($s1)
    ctx->pc = 0x208a88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6504)));
label_208a8c:
    // 0x208a8c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x208A8Cu;
    {
        const bool branch_taken_0x208a8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x208a8c) {
            ctx->pc = 0x208A90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208A8Cu;
            // 0x208a90: 0x8e24196c  lw          $a0, 0x196C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6508)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208AA4u;
            goto label_208aa4;
        }
    }
    ctx->pc = 0x208A94u;
    // 0x208a94: 0xc0c49c2  jal         func_312708
    ctx->pc = 0x208A94u;
    SET_GPR_U32(ctx, 31, 0x208A9Cu);
    ctx->pc = 0x312708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312708u, 0x208A94u, 0x208A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208A9Cu;
label_208a9c:
    // 0x208a9c: 0xae201968  sw          $zero, 0x1968($s1)
    ctx->pc = 0x208a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6504), GPR_U32(ctx, 0));
    // 0x208aa0: 0x8e24196c  lw          $a0, 0x196C($s1)
    ctx->pc = 0x208aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6508)));
label_208aa4:
    // 0x208aa4: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x208AA4u;
    {
        const bool branch_taken_0x208aa4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x208aa4) {
            ctx->pc = 0x208AA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208AA4u;
            // 0x208aa8: 0x8e241970  lw          $a0, 0x1970($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6512)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208ABCu;
            goto label_208abc;
        }
    }
    ctx->pc = 0x208AACu;
    // 0x208aac: 0xc0c49c2  jal         func_312708
    ctx->pc = 0x208AACu;
    SET_GPR_U32(ctx, 31, 0x208AB4u);
    ctx->pc = 0x312708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312708u, 0x208AACu, 0x208AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208AB4u;
label_208ab4:
    // 0x208ab4: 0xae20196c  sw          $zero, 0x196C($s1)
    ctx->pc = 0x208ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6508), GPR_U32(ctx, 0));
    // 0x208ab8: 0x8e241970  lw          $a0, 0x1970($s1)
    ctx->pc = 0x208ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6512)));
label_208abc:
    // 0x208abc: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x208ABCu;
    {
        const bool branch_taken_0x208abc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x208abc) {
            ctx->pc = 0x208AC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208ABCu;
            // 0x208ac0: 0x8e241974  lw          $a0, 0x1974($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6516)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208AD4u;
            goto label_208ad4;
        }
    }
    ctx->pc = 0x208AC4u;
    // 0x208ac4: 0xc0c49c2  jal         func_312708
    ctx->pc = 0x208AC4u;
    SET_GPR_U32(ctx, 31, 0x208ACCu);
    ctx->pc = 0x312708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312708u, 0x208AC4u, 0x208ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208ACCu;
label_208acc:
    // 0x208acc: 0xae20196c  sw          $zero, 0x196C($s1)
    ctx->pc = 0x208accu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6508), GPR_U32(ctx, 0));
    // 0x208ad0: 0x8e241974  lw          $a0, 0x1974($s1)
    ctx->pc = 0x208ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6516)));
label_208ad4:
    // 0x208ad4: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x208AD4u;
    {
        const bool branch_taken_0x208ad4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x208ad4) {
            ctx->pc = 0x208AD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208AD4u;
            // 0x208ad8: 0x8e24196c  lw          $a0, 0x196C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6508)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208AECu;
            goto label_208aec;
        }
    }
    ctx->pc = 0x208ADCu;
    // 0x208adc: 0xc0c49c2  jal         func_312708
    ctx->pc = 0x208ADCu;
    SET_GPR_U32(ctx, 31, 0x208AE4u);
    ctx->pc = 0x312708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312708u, 0x208ADCu, 0x208AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208AE4u;
label_208ae4:
    // 0x208ae4: 0xae20196c  sw          $zero, 0x196C($s1)
    ctx->pc = 0x208ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6508), GPR_U32(ctx, 0));
    // 0x208ae8: 0x8e24196c  lw          $a0, 0x196C($s1)
    ctx->pc = 0x208ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6508)));
label_208aec:
    // 0x208aec: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x208AECu;
    {
        const bool branch_taken_0x208aec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x208aec) {
            ctx->pc = 0x208AF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208AECu;
            // 0x208af0: 0x8e24073c  lw          $a0, 0x73C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1852)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208B04u;
            goto label_208b04;
        }
    }
    ctx->pc = 0x208AF4u;
    // 0x208af4: 0xc0c49c2  jal         func_312708
    ctx->pc = 0x208AF4u;
    SET_GPR_U32(ctx, 31, 0x208AFCu);
    ctx->pc = 0x312708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312708u, 0x208AF4u, 0x208AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208AFCu;
label_208afc:
    // 0x208afc: 0xae20196c  sw          $zero, 0x196C($s1)
    ctx->pc = 0x208afcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6508), GPR_U32(ctx, 0));
    // 0x208b00: 0x8e24073c  lw          $a0, 0x73C($s1)
    ctx->pc = 0x208b00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1852)));
label_208b04:
    // 0x208b04: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x208B04u;
    {
        const bool branch_taken_0x208b04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x208b04) {
            ctx->pc = 0x208B08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208B04u;
            // 0x208b08: 0x8e240740  lw          $a0, 0x740($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1856)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208B1Cu;
            goto label_208b1c;
        }
    }
    ctx->pc = 0x208B0Cu;
    // 0x208b0c: 0xc0c49c2  jal         func_312708
    ctx->pc = 0x208B0Cu;
    SET_GPR_U32(ctx, 31, 0x208B14u);
    ctx->pc = 0x312708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312708u, 0x208B0Cu, 0x208B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208B14u;
label_208b14:
    // 0x208b14: 0xae20073c  sw          $zero, 0x73C($s1)
    ctx->pc = 0x208b14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1852), GPR_U32(ctx, 0));
    // 0x208b18: 0x8e240740  lw          $a0, 0x740($s1)
    ctx->pc = 0x208b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1856)));
label_208b1c:
    // 0x208b1c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x208B1Cu;
    {
        const bool branch_taken_0x208b1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x208b1c) {
            ctx->pc = 0x208B20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208B1Cu;
            // 0x208b20: 0x8e240744  lw          $a0, 0x744($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1860)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208B34u;
            goto label_208b34;
        }
    }
    ctx->pc = 0x208B24u;
    // 0x208b24: 0xc0c49c2  jal         func_312708
    ctx->pc = 0x208B24u;
    SET_GPR_U32(ctx, 31, 0x208B2Cu);
    ctx->pc = 0x312708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312708u, 0x208B24u, 0x208B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208B2Cu;
label_208b2c:
    // 0x208b2c: 0xae200740  sw          $zero, 0x740($s1)
    ctx->pc = 0x208b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1856), GPR_U32(ctx, 0));
    // 0x208b30: 0x8e240744  lw          $a0, 0x744($s1)
    ctx->pc = 0x208b30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1860)));
label_208b34:
    // 0x208b34: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x208B34u;
    {
        const bool branch_taken_0x208b34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x208b34) {
            ctx->pc = 0x208B38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208B34u;
            // 0x208b38: 0x8e240748  lw          $a0, 0x748($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1864)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208B4Cu;
            goto label_208b4c;
        }
    }
    ctx->pc = 0x208B3Cu;
    // 0x208b3c: 0xc0c49c2  jal         func_312708
    ctx->pc = 0x208B3Cu;
    SET_GPR_U32(ctx, 31, 0x208B44u);
    ctx->pc = 0x312708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312708u, 0x208B3Cu, 0x208B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208B44u;
label_208b44:
    // 0x208b44: 0xae200744  sw          $zero, 0x744($s1)
    ctx->pc = 0x208b44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1860), GPR_U32(ctx, 0));
    // 0x208b48: 0x8e240748  lw          $a0, 0x748($s1)
    ctx->pc = 0x208b48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1864)));
label_208b4c:
    // 0x208b4c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x208B4Cu;
    {
        const bool branch_taken_0x208b4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x208b4c) {
            ctx->pc = 0x208B50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208B4Cu;
            // 0x208b50: 0x8e24074c  lw          $a0, 0x74C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1868)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208B64u;
            goto label_208b64;
        }
    }
    ctx->pc = 0x208B54u;
    // 0x208b54: 0xc0c49c2  jal         func_312708
    ctx->pc = 0x208B54u;
    SET_GPR_U32(ctx, 31, 0x208B5Cu);
    ctx->pc = 0x312708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312708u, 0x208B54u, 0x208B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208B5Cu;
label_208b5c:
    // 0x208b5c: 0xae200748  sw          $zero, 0x748($s1)
    ctx->pc = 0x208b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1864), GPR_U32(ctx, 0));
    // 0x208b60: 0x8e24074c  lw          $a0, 0x74C($s1)
    ctx->pc = 0x208b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1868)));
label_208b64:
    // 0x208b64: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x208B64u;
    {
        const bool branch_taken_0x208b64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x208b64) {
            ctx->pc = 0x208B68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208B64u;
            // 0x208b68: 0x8e240750  lw          $a0, 0x750($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1872)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208B7Cu;
            goto label_208b7c;
        }
    }
    ctx->pc = 0x208B6Cu;
    // 0x208b6c: 0xc0c49c2  jal         func_312708
    ctx->pc = 0x208B6Cu;
    SET_GPR_U32(ctx, 31, 0x208B74u);
    ctx->pc = 0x312708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312708u, 0x208B6Cu, 0x208B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208B74u;
label_208b74:
    // 0x208b74: 0xae20074c  sw          $zero, 0x74C($s1)
    ctx->pc = 0x208b74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1868), GPR_U32(ctx, 0));
    // 0x208b78: 0x8e240750  lw          $a0, 0x750($s1)
    ctx->pc = 0x208b78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1872)));
label_208b7c:
    // 0x208b7c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x208B7Cu;
    {
        const bool branch_taken_0x208b7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x208B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208B7Cu;
        // 0x208b80: 0x26300754  addiu       $s0, $s1, 0x754 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1876));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208b7c) {
            ctx->pc = 0x208B90u;
            goto label_208b90;
        }
    }
    ctx->pc = 0x208B84u;
    // 0x208b84: 0xc0c49c2  jal         func_312708
    ctx->pc = 0x208B84u;
    SET_GPR_U32(ctx, 31, 0x208B8Cu);
    ctx->pc = 0x312708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312708u, 0x208B84u, 0x208B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208B8Cu;
label_208b8c:
    // 0x208b8c: 0xae200750  sw          $zero, 0x750($s1)
    ctx->pc = 0x208b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1872), GPR_U32(ctx, 0));
label_208b90:
    // 0x208b90: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x208b90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x208b94: 0x0  nop
    ctx->pc = 0x208b94u;
    // NOP
label_208b98:
    // 0x208b98: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x208b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x208b9c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x208B9Cu;
    {
        const bool branch_taken_0x208b9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x208BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208B9Cu;
        // 0x208ba0: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208b9c) {
            ctx->pc = 0x208BB0u;
            goto label_208bb0;
        }
    }
    ctx->pc = 0x208BA4u;
    // 0x208ba4: 0xc0c49c2  jal         func_312708
    ctx->pc = 0x208BA4u;
    SET_GPR_U32(ctx, 31, 0x208BACu);
    ctx->pc = 0x312708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312708u, 0x208BA4u, 0x208BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208BACu;
label_208bac:
    // 0x208bac: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x208bacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_208bb0:
    // 0x208bb0: 0x641fff9  bgez        $s2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x208BB0u;
    {
        const bool branch_taken_0x208bb0 = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x208BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208BB0u;
        // 0x208bb4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208bb0) {
            ctx->pc = 0x208B98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_208b98;
        }
    }
    ctx->pc = 0x208BB8u;
    // 0x208bb8: 0x26642fc0  addiu       $a0, $s3, 0x2FC0
    ctx->pc = 0x208bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 12224));
    // 0x208bbc: 0xc04d1fa  jal         func_1347E8
    ctx->pc = 0x208BBCu;
    SET_GPR_U32(ctx, 31, 0x208BC4u);
    ctx->pc = 0x208BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208BBCu;
    // 0x208bc0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1347E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1347E8u, 0x208BBCu, 0x208BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208BC4u;
label_208bc4:
    // 0x208bc4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x208bc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x208bc8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x208bc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x208bcc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x208bccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x208bd0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x208bd0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x208bd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x208bd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x208bd8: 0x3e00008  jr          $ra
    ctx->pc = 0x208BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208BD8u;
        // 0x208bdc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208BD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208BE0u;
}
