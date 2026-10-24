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

// Function: cDataManager_loadWait
// Address: 0x1fe8a0 - 0x1fe9b8
void cDataManager_loadWait_0x1fe8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cDataManager_loadWait_0x1fe8a0");
#endif

    switch (ctx->pc) {
        case 0x1fe8d0u: goto label_1fe8d0;
        case 0x1fe8f0u: goto label_1fe8f0;
        case 0x1fe908u: goto label_1fe908;
        case 0x1fe938u: goto label_1fe938;
        case 0x1fe940u: goto label_1fe940;
        case 0x1fe948u: goto label_1fe948;
        case 0x1fe954u: goto label_1fe954;
        case 0x1fe974u: goto label_1fe974;
        default: break;
    }

    ctx->pc = 0x1fe8a0u;

    // 0x1fe8a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1fe8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1fe8a4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1fe8a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1fe8a8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1fe8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1fe8ac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1fe8acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe8b0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1fe8b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1fe8b4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1fe8b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe8b8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1fe8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1fe8bc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1fe8bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe8c0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1fe8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1fe8c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fe8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fe8c8: 0xc07fb80  jal         func_1FEE00
    ctx->pc = 0x1FE8C8u;
    SET_GPR_U32(ctx, 31, 0x1FE8D0u);
    ctx->pc = 0x1FE8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE8C8u;
    // 0x1fe8cc: 0xe0a02d  daddu       $s4, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEE00u, 0x1FE8C8u, 0x1FE8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE8D0u;
label_1fe8d0:
    // 0x1fe8d0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1fe8d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe8d4: 0x620000a  bltz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x1FE8D4u;
    {
        const bool branch_taken_0x1fe8d4 = (GPR_S64(ctx, 17) < 0);
        if (branch_taken_0x1fe8d4) {
            ctx->pc = 0x1FE900u;
            goto label_1fe900;
        }
    }
    ctx->pc = 0x1FE8DCu;
    // 0x1fe8dc: 0x2410005c  addiu       $s0, $zero, 0x5C
    ctx->pc = 0x1fe8dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x1fe8e0: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x1fe8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1fe8e4: 0x2308018  mult        $s0, $s1, $s0
    ctx->pc = 0x1fe8e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x1fe8e8: 0xc07fc24  jal         func_1FF090
    ctx->pc = 0x1FE8E8u;
    SET_GPR_U32(ctx, 31, 0x1FE8F0u);
    ctx->pc = 0x1FE8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE8E8u;
    // 0x1fe8ec: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF090u, 0x1FE8E8u, 0x1FE8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE8F0u;
label_1fe8f0:
    // 0x1fe8f0: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1fe8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1fe8f4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1fe8f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1fe8f8: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1FE8F8u;
    {
        const bool branch_taken_0x1fe8f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE8F8u;
        // 0x1fe8fc: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe8f8) {
            ctx->pc = 0x1FE998u;
            goto label_1fe998;
        }
    }
    ctx->pc = 0x1FE900u;
label_1fe900:
    // 0x1fe900: 0xc07fba8  jal         func_1FEEA0
    ctx->pc = 0x1FE900u;
    SET_GPR_U32(ctx, 31, 0x1FE908u);
    ctx->pc = 0x1FE904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE900u;
    // 0x1fe904: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEEA0u, 0x1FE900u, 0x1FE908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE908u;
label_1fe908:
    // 0x1fe908: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1fe908u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe90c: 0x6210003  bgez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FE90Cu;
    {
        const bool branch_taken_0x1fe90c = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x1FE910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE90Cu;
        // 0x1fe910: 0x2404005c  addiu       $a0, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe90c) {
            ctx->pc = 0x1FE91Cu;
            goto label_1fe91c;
        }
    }
    ctx->pc = 0x1FE914u;
    // 0x1fe914: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1FE914u;
    {
        const bool branch_taken_0x1fe914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE914u;
        // 0x1fe918: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe914) {
            ctx->pc = 0x1FE998u;
            goto label_1fe998;
        }
    }
    ctx->pc = 0x1FE91Cu;
label_1fe91c:
    // 0x1fe91c: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1fe91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1fe920: 0x2242018  mult        $a0, $s1, $a0
    ctx->pc = 0x1fe920u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1fe924: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1fe924u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe928: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1fe928u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe92c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fe92cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe930: 0xc07fc60  jal         func_1FF180
    ctx->pc = 0x1FE930u;
    SET_GPR_U32(ctx, 31, 0x1FE938u);
    ctx->pc = 0x1FE934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE930u;
    // 0x1fe934: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF180u, 0x1FE930u, 0x1FE938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE938u;
label_1fe938:
    // 0x1fe938: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FE938u;
    {
        const bool branch_taken_0x1fe938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE938u;
        // 0x1fe93c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe938) {
            ctx->pc = 0x1FE948u;
            goto label_1fe948;
        }
    }
    ctx->pc = 0x1FE940u;
label_1fe940:
    // 0x1fe940: 0xc0b5494  jal         func_2D5250
    ctx->pc = 0x1FE940u;
    SET_GPR_U32(ctx, 31, 0x1FE948u);
    ctx->pc = 0x1FE944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE940u;
    // 0x1fe944: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5250u, 0x1FE940u, 0x1FE948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE948u;
label_1fe948:
    // 0x1fe948: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x1fe948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1fe94c: 0xc07fc8e  jal         func_1FF238
    ctx->pc = 0x1FE94Cu;
    SET_GPR_U32(ctx, 31, 0x1FE954u);
    ctx->pc = 0x1FE950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE94Cu;
    // 0x1fe950: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF238u, 0x1FE94Cu, 0x1FE954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE954u;
label_1fe954:
    // 0x1fe954: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FE954u;
    {
        const bool branch_taken_0x1fe954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe954) {
            ctx->pc = 0x1FE940u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fe940;
        }
    }
    ctx->pc = 0x1FE95Cu;
    // 0x1fe95c: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FE95Cu;
    {
        const bool branch_taken_0x1fe95c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE95Cu;
        // 0x1fe960: 0x2404005c  addiu       $a0, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe95c) {
            ctx->pc = 0x1FE97Cu;
            goto label_1fe97c;
        }
    }
    ctx->pc = 0x1FE964u;
    // 0x1fe964: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1fe964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1fe968: 0x2242018  mult        $a0, $s1, $a0
    ctx->pc = 0x1fe968u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1fe96c: 0xc07fc24  jal         func_1FF090
    ctx->pc = 0x1FE96Cu;
    SET_GPR_U32(ctx, 31, 0x1FE974u);
    ctx->pc = 0x1FE970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE96Cu;
    // 0x1fe970: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF090u, 0x1FE96Cu, 0x1FE974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE974u;
label_1fe974:
    // 0x1fe974: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FE974u;
    {
        const bool branch_taken_0x1fe974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE974u;
        // 0x1fe978: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe974) {
            ctx->pc = 0x1FE998u;
            goto label_1fe998;
        }
    }
    ctx->pc = 0x1FE97Cu;
label_1fe97c:
    // 0x1fe97c: 0x2402005c  addiu       $v0, $zero, 0x5C
    ctx->pc = 0x1fe97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x1fe980: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x1fe980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1fe984: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x1fe984u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1fe988: 0x2403ff9c  addiu       $v1, $zero, -0x64
    ctx->pc = 0x1fe988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
    // 0x1fe98c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1fe98cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1fe990: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1fe990u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x1fe994: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1fe994u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1fe998:
    // 0x1fe998: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1fe998u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1fe99c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1fe99cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fe9a0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1fe9a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fe9a4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1fe9a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fe9a8: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1fe9a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fe9ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fe9acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe9b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE9B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE9B0u;
        // 0x1fe9b4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE9B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE9B8u;
}
