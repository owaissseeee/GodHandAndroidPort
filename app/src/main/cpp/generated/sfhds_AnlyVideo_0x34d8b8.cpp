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

// Function: sfhds_AnlyVideo
// Address: 0x34d8b8 - 0x34da50
void sfhds_AnlyVideo_0x34d8b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sfhds_AnlyVideo_0x34d8b8");
#endif

    switch (ctx->pc) {
        case 0x34d8fcu: goto label_34d8fc;
        case 0x34d914u: goto label_34d914;
        case 0x34d92cu: goto label_34d92c;
        case 0x34d954u: goto label_34d954;
        case 0x34d968u: goto label_34d968;
        case 0x34d998u: goto label_34d998;
        case 0x34d9b0u: goto label_34d9b0;
        case 0x34d9c8u: goto label_34d9c8;
        case 0x34d9e0u: goto label_34d9e0;
        case 0x34d9f8u: goto label_34d9f8;
        case 0x34da10u: goto label_34da10;
        case 0x34da28u: goto label_34da28;
        default: break;
    }

    ctx->pc = 0x34d8b8u;

    // 0x34d8b8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x34d8b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x34d8bc: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x34d8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x34d8c0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x34d8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x34d8c4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x34d8c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d8c8: 0x2446e318  addiu       $a2, $v0, -0x1CE8
    ctx->pc = 0x34d8c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959896));
    // 0x34d8cc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x34d8ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x34d8d0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x34d8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x34d8d4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x34d8d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d8d8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x34d8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x34d8dc: 0x26130008  addiu       $s3, $s0, 0x8
    ctx->pc = 0x34d8dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x34d8e0: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x34d8e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x34d8e4: 0x2614000c  addiu       $s4, $s0, 0xC
    ctx->pc = 0x34d8e4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x34d8e8: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x34d8e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x34d8ec: 0x325500ff  andi        $s5, $s2, 0xFF
    ctx->pc = 0x34d8ecu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x34d8f0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x34d8f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x34d8f4: 0xc0d36a2  jal         func_34DA88
    ctx->pc = 0x34D8F4u;
    SET_GPR_U32(ctx, 31, 0x34D8FCu);
    ctx->pc = 0x34D8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D8F4u;
    // 0x34d8f8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DA88u, 0x34D8F4u, 0x34D8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D8FCu;
label_34d8fc:
    // 0x34d8fc: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x34d8fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x34d900: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x34d900u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x34d904: 0x24c6e388  addiu       $a2, $a2, -0x1C78
    ctx->pc = 0x34d904u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960008));
    // 0x34d908: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34d908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d90c: 0xc0d36a2  jal         func_34DA88
    ctx->pc = 0x34D90Cu;
    SET_GPR_U32(ctx, 31, 0x34D914u);
    ctx->pc = 0x34D910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D90Cu;
    // 0x34d910: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DA88u, 0x34D90Cu, 0x34D914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D914u;
label_34d914:
    // 0x34d914: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34d914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d918: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x34d918u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x34d91c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x34d91cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d920: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x34d920u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d924: 0xc0d7900  jal         func_35E400
    ctx->pc = 0x34D924u;
    SET_GPR_U32(ctx, 31, 0x34D92Cu);
    ctx->pc = 0x34D928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D924u;
    // 0x34d928: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35E400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35E400u, 0x34D924u, 0x34D92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D92Cu;
label_34d92c:
    // 0x34d92c: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x34d92cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x34d930: 0x24c6e4b0  addiu       $a2, $a2, -0x1B50
    ctx->pc = 0x34d930u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960304));
    // 0x34d934: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34d934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d938: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x34d938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d93c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34D93Cu;
    {
        const bool branch_taken_0x34d93c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34D940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D93Cu;
        // 0x34d940: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d93c) {
            ctx->pc = 0x34D94Cu;
            goto label_34d94c;
        }
    }
    ctx->pc = 0x34D944u;
    // 0x34d944: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x34d944u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x34d948: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x34d948u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
label_34d94c:
    // 0x34d94c: 0xc0d36a2  jal         func_34DA88
    ctx->pc = 0x34D94Cu;
    SET_GPR_U32(ctx, 31, 0x34D954u);
    ctx->pc = 0x34DA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DA88u, 0x34D94Cu, 0x34D954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D954u;
label_34d954:
    // 0x34d954: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34d954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d958: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x34d958u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x34d95c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x34d95cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d960: 0xc0d7662  jal         func_35D988
    ctx->pc = 0x34D960u;
    SET_GPR_U32(ctx, 31, 0x34D968u);
    ctx->pc = 0x34D964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D960u;
    // 0x34d964: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D988u, 0x34D960u, 0x34D968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D968u;
label_34d968:
    // 0x34d968: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x34d968u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x34d96c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x34d96cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34d970: 0x24c6e520  addiu       $a2, $a2, -0x1AE0
    ctx->pc = 0x34d970u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960416));
    // 0x34d974: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34d974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d978: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x34d978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d97c: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x34d97cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x34d980: 0x3102b  sltu        $v0, $zero, $v1
    ctx->pc = 0x34d980u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x34d984: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x34d984u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x34d988: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x34D988u;
    {
        const bool branch_taken_0x34d988 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34D98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D988u;
        // 0x34d98c: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d988) {
            ctx->pc = 0x34DA2Cu;
            goto label_34da2c;
        }
    }
    ctx->pc = 0x34D990u;
    // 0x34d990: 0xc0d36a2  jal         func_34DA88
    ctx->pc = 0x34D990u;
    SET_GPR_U32(ctx, 31, 0x34D998u);
    ctx->pc = 0x34DA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DA88u, 0x34D990u, 0x34D998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D998u;
label_34d998:
    // 0x34d998: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x34d998u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x34d99c: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x34d99cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x34d9a0: 0x24c6e590  addiu       $a2, $a2, -0x1A70
    ctx->pc = 0x34d9a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960528));
    // 0x34d9a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34d9a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d9a8: 0xc0d36a2  jal         func_34DA88
    ctx->pc = 0x34D9A8u;
    SET_GPR_U32(ctx, 31, 0x34D9B0u);
    ctx->pc = 0x34D9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D9A8u;
    // 0x34d9ac: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DA88u, 0x34D9A8u, 0x34D9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D9B0u;
label_34d9b0:
    // 0x34d9b0: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x34d9b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x34d9b4: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x34d9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x34d9b8: 0x24c6e600  addiu       $a2, $a2, -0x1A00
    ctx->pc = 0x34d9b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960640));
    // 0x34d9bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34d9bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d9c0: 0xc0d36a2  jal         func_34DA88
    ctx->pc = 0x34D9C0u;
    SET_GPR_U32(ctx, 31, 0x34D9C8u);
    ctx->pc = 0x34D9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D9C0u;
    // 0x34d9c4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DA88u, 0x34D9C0u, 0x34D9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D9C8u;
label_34d9c8:
    // 0x34d9c8: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x34d9c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x34d9cc: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x34d9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x34d9d0: 0x24c6e670  addiu       $a2, $a2, -0x1990
    ctx->pc = 0x34d9d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960752));
    // 0x34d9d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34d9d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d9d8: 0xc0d36a2  jal         func_34DA88
    ctx->pc = 0x34D9D8u;
    SET_GPR_U32(ctx, 31, 0x34D9E0u);
    ctx->pc = 0x34D9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D9D8u;
    // 0x34d9dc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DA88u, 0x34D9D8u, 0x34D9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D9E0u;
label_34d9e0:
    // 0x34d9e0: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x34d9e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x34d9e4: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x34d9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x34d9e8: 0x24c6e6e8  addiu       $a2, $a2, -0x1918
    ctx->pc = 0x34d9e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960872));
    // 0x34d9ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34d9ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d9f0: 0xc0d36a2  jal         func_34DA88
    ctx->pc = 0x34D9F0u;
    SET_GPR_U32(ctx, 31, 0x34D9F8u);
    ctx->pc = 0x34D9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D9F0u;
    // 0x34d9f4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DA88u, 0x34D9F0u, 0x34D9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D9F8u;
label_34d9f8:
    // 0x34d9f8: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x34d9f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x34d9fc: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x34d9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x34da00: 0x24c6e758  addiu       $a2, $a2, -0x18A8
    ctx->pc = 0x34da00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960984));
    // 0x34da04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34da04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34da08: 0xc0d36a2  jal         func_34DA88
    ctx->pc = 0x34DA08u;
    SET_GPR_U32(ctx, 31, 0x34DA10u);
    ctx->pc = 0x34DA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34DA08u;
    // 0x34da0c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DA88u, 0x34DA08u, 0x34DA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DA10u;
label_34da10:
    // 0x34da10: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x34da10u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x34da14: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x34da14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x34da18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34da18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34da1c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x34da1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34da20: 0xc0d36a2  jal         func_34DA88
    ctx->pc = 0x34DA20u;
    SET_GPR_U32(ctx, 31, 0x34DA28u);
    ctx->pc = 0x34DA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34DA20u;
    // 0x34da24: 0x24c6e7e0  addiu       $a2, $a2, -0x1820 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DA88u, 0x34DA20u, 0x34DA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DA28u;
label_34da28:
    // 0x34da28: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x34da28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_34da2c:
    // 0x34da2c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x34da2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34da30: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x34da30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34da34: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x34da34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34da38: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x34da38u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34da3c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x34da3cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34da40: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x34da40u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34da44: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x34da44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34da48: 0x3e00008  jr          $ra
    ctx->pc = 0x34DA48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34DA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DA48u;
        // 0x34da4c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34DA48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34DA50u;
}
