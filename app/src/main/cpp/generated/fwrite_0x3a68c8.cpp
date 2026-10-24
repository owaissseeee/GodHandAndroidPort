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

// Function: fwrite
// Address: 0x3a68c8 - 0x3a6950
void fwrite_0x3a68c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fwrite_0x3a68c8");
#endif

    switch (ctx->pc) {
        case 0x3a6910u: goto label_3a6910;
        default: break;
    }

    ctx->pc = 0x3a68c8u;

    // 0x3a68c8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3a68c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3a68cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a68ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a68d0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3a68d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3a68d4: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x3a68d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3a68d8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3a68d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3a68dc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3a68dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a68e0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3a68e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3a68e4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3a68e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a68e8: 0x2508818  mult        $s1, $s2, $s0
    ctx->pc = 0x3a68e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x3a68ec: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x3a68ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x3a68f0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3a68f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3a68f4: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x3a68f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a68f8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3a68f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x3a68fc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3a68fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6900: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x3a6900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x3a6904: 0xafb10014  sw          $s1, 0x14($sp)
    ctx->pc = 0x3a6904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 17));
    // 0x3a6908: 0xc0eb874  jal         func_3AE1D0
    ctx->pc = 0x3A6908u;
    SET_GPR_U32(ctx, 31, 0x3A6910u);
    ctx->pc = 0x3A690Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6908u;
    // 0x3a690c: 0xafb10008  sw          $s1, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE1D0u, 0x3A6908u, 0x3A6910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6910u;
label_3a6910:
    // 0x3a6910: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A6910u;
    {
        const bool branch_taken_0x3a6910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6910u;
        // 0x3a6914: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6910) {
            ctx->pc = 0x3A6934u;
            goto label_3a6934;
        }
    }
    ctx->pc = 0x3A6918u;
    // 0x3a6918: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3A6918u;
    {
        const bool branch_taken_0x3a6918 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a6918) {
            ctx->pc = 0x3A691Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A6918u;
            // 0x3a691c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A6920u;
            goto label_3a6920;
        }
    }
    ctx->pc = 0x3A6920u;
label_3a6920:
    // 0x3a6920: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x3a6920u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3a6924: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x3a6924u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x3a6928: 0x1012  mflo        $v0
    ctx->pc = 0x3a6928u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3a692c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3A692Cu;
    {
        const bool branch_taken_0x3a692c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A692Cu;
        // 0x3a6930: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a692c) {
            ctx->pc = 0x3A693Cu;
            goto label_3a693c;
        }
    }
    ctx->pc = 0x3A6934u;
label_3a6934:
    // 0x3a6934: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3a6934u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6938: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3a6938u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3a693c:
    // 0x3a693c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3a693cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3a6940: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3a6940u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a6944: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3a6944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a6948: 0x3e00008  jr          $ra
    ctx->pc = 0x3A6948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A694Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6948u;
        // 0x3a694c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A6948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A6950u;
}
