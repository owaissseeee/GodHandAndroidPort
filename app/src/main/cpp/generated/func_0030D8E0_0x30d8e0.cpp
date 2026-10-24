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

// Function: func_0030D8E0
// Address: 0x30d8e0 - 0x30da08
void func_0030D8E0_0x30d8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0030D8E0_0x30d8e0");
#endif

    switch (ctx->pc) {
        case 0x30d950u: goto label_30d950;
        case 0x30d964u: goto label_30d964;
        case 0x30d994u: goto label_30d994;
        case 0x30d9a4u: goto label_30d9a4;
        case 0x30d9b0u: goto label_30d9b0;
        case 0x30d9bcu: goto label_30d9bc;
        case 0x30d9dcu: goto label_30d9dc;
        case 0x30d9e8u: goto label_30d9e8;
        default: break;
    }

    ctx->pc = 0x30d8e0u;

    // 0x30d8e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x30d8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x30d8e4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x30d8e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d8e8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x30d8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x30d8ec: 0x24a3ff00  addiu       $v1, $a1, -0x100
    ctx->pc = 0x30d8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967040));
    // 0x30d8f0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x30d8f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x30d8f4: 0x24140101  addiu       $s4, $zero, 0x101
    ctx->pc = 0x30d8f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x30d8f8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x30d8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x30d8fc: 0x2c620012  sltiu       $v0, $v1, 0x12
    ctx->pc = 0x30d8fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
    // 0x30d900: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x30d900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x30d904: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x30d904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x30d908: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x30D908u;
    {
        const bool branch_taken_0x30d908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D908u;
        // 0x30d90c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d908) {
            ctx->pc = 0x30D948u;
            goto label_30d948;
        }
    }
    ctx->pc = 0x30D910u;
    // 0x30d910: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x30d910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x30d914: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x30d914u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30d918: 0x24420590  addiu       $v0, $v0, 0x590
    ctx->pc = 0x30d918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1424));
    // 0x30d91c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x30d91cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x30d920: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x30d920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30d924: 0x800008  jr          $a0
    ctx->pc = 0x30D924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x30D92Cu: goto label_30d92c;
            case 0x30D934u: goto label_30d934;
            case 0x30D93Cu: goto label_30d93c;
            case 0x30D944u: goto label_30d944;
            case 0x30D948u: goto label_30d948;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D924u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x30D92Cu;
label_30d92c:
    // 0x30d92c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x30D92Cu;
    {
        const bool branch_taken_0x30d92c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D92Cu;
        // 0x30d930: 0x2414010a  addiu       $s4, $zero, 0x10A (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 266));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d92c) {
            ctx->pc = 0x30D948u;
            goto label_30d948;
        }
    }
    ctx->pc = 0x30D934u;
label_30d934:
    // 0x30d934: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x30D934u;
    {
        const bool branch_taken_0x30d934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D934u;
        // 0x30d938: 0x24140106  addiu       $s4, $zero, 0x106 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 262));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d934) {
            ctx->pc = 0x30D948u;
            goto label_30d948;
        }
    }
    ctx->pc = 0x30D93Cu;
label_30d93c:
    // 0x30d93c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x30D93Cu;
    {
        const bool branch_taken_0x30d93c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D93Cu;
        // 0x30d940: 0x24140108  addiu       $s4, $zero, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d93c) {
            ctx->pc = 0x30D948u;
            goto label_30d948;
        }
    }
    ctx->pc = 0x30D944u;
label_30d944:
    // 0x30d944: 0x24140112  addiu       $s4, $zero, 0x112
    ctx->pc = 0x30d944u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 274));
label_30d948:
    // 0x30d948: 0xc0c1e46  jal         func_307918
    ctx->pc = 0x30D948u;
    SET_GPR_U32(ctx, 31, 0x30D950u);
    ctx->pc = 0x30D94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D948u;
    // 0x30d94c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307918u, 0x30D948u, 0x30D950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D950u;
label_30d950:
    // 0x30d950: 0x3c130058  lui         $s3, 0x58
    ctx->pc = 0x30d950u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)88 << 16));
    // 0x30d954: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x30d954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d958: 0x26730d40  addiu       $s3, $s3, 0xD40
    ctx->pc = 0x30d958u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3392));
    // 0x30d95c: 0xc07fe8a  jal         func_1FFA28
    ctx->pc = 0x30D95Cu;
    SET_GPR_U32(ctx, 31, 0x30D964u);
    ctx->pc = 0x30D960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D95Cu;
    // 0x30d960: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFA28u, 0x30D95Cu, 0x30D964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D964u;
label_30d964:
    // 0x30d964: 0x3c110075  lui         $s1, 0x75
    ctx->pc = 0x30d964u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)117 << 16));
    // 0x30d968: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x30d968u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x30d96c: 0x26103f20  addiu       $s0, $s0, 0x3F20
    ctx->pc = 0x30d96cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16160));
    // 0x30d970: 0x8e262c38  lw          $a2, 0x2C38($s1)
    ctx->pc = 0x30d970u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x752C38u));
    // 0x30d974: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x30d974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d978: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30d978u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d97c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x30d97cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d980: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x30d980u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d984: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x30d984u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d988: 0x26312c38  addiu       $s1, $s1, 0x2C38
    ctx->pc = 0x30d988u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 11320));
    // 0x30d98c: 0xc0802e2  jal         func_200B88
    ctx->pc = 0x30D98Cu;
    SET_GPR_U32(ctx, 31, 0x30D994u);
    ctx->pc = 0x30D990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D98Cu;
    // 0x30d990: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200B88u, 0x30D98Cu, 0x30D994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D994u;
label_30d994:
    // 0x30d994: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x30d994u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d998: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30d998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d99c: 0xc080442  jal         func_201108
    ctx->pc = 0x30D99Cu;
    SET_GPR_U32(ctx, 31, 0x30D9A4u);
    ctx->pc = 0x30D9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D99Cu;
    // 0x30d9a0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201108u, 0x30D99Cu, 0x30D9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D9A4u;
label_30d9a4:
    // 0x30d9a4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x30d9a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d9a8: 0xc0c1e46  jal         func_307918
    ctx->pc = 0x30D9A8u;
    SET_GPR_U32(ctx, 31, 0x30D9B0u);
    ctx->pc = 0x30D9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D9A8u;
    // 0x30d9ac: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307918u, 0x30D9A8u, 0x30D9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D9B0u;
label_30d9b0:
    // 0x30d9b0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x30d9b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d9b4: 0xc07fe8a  jal         func_1FFA28
    ctx->pc = 0x30D9B4u;
    SET_GPR_U32(ctx, 31, 0x30D9BCu);
    ctx->pc = 0x30D9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D9B4u;
    // 0x30d9b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFA28u, 0x30D9B4u, 0x30D9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D9BCu;
label_30d9bc:
    // 0x30d9bc: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x30d9bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x30d9c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30d9c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d9c4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x30d9c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d9c8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x30d9c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d9cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x30d9ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d9d0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x30d9d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d9d4: 0xc0802e2  jal         func_200B88
    ctx->pc = 0x30D9D4u;
    SET_GPR_U32(ctx, 31, 0x30D9DCu);
    ctx->pc = 0x30D9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D9D4u;
    // 0x30d9d8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200B88u, 0x30D9D4u, 0x30D9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D9DCu;
label_30d9dc:
    // 0x30d9dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30d9dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d9e0: 0xc080442  jal         func_201108
    ctx->pc = 0x30D9E0u;
    SET_GPR_U32(ctx, 31, 0x30D9E8u);
    ctx->pc = 0x30D9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D9E0u;
    // 0x30d9e4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201108u, 0x30D9E0u, 0x30D9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D9E8u;
label_30d9e8:
    // 0x30d9e8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x30d9e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x30d9ec: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x30d9ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30d9f0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x30d9f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30d9f4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x30d9f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30d9f8: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x30d9f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30d9fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30d9fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30da00: 0x3e00008  jr          $ra
    ctx->pc = 0x30DA00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30DA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DA00u;
        // 0x30da04: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30DA00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30DA08u;
}
