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

// Function: cSnd_BgmEvSet
// Address: 0x2d1c78 - 0x2d1d00
void cSnd_BgmEvSet_0x2d1c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSnd_BgmEvSet_0x2d1c78");
#endif

    switch (ctx->pc) {
        case 0x2d1c9cu: goto label_2d1c9c;
        case 0x2d1cacu: goto label_2d1cac;
        case 0x2d1cb4u: goto label_2d1cb4;
        case 0x2d1cdcu: goto label_2d1cdc;
        default: break;
    }

    ctx->pc = 0x2d1c78u;

    // 0x2d1c78: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d1c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d1c7c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2d1c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2d1c80: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2d1c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2d1c84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d1c84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1c88: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2d1c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2d1c8c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2d1c8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1c90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d1c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d1c94: 0xc0b48ac  jal         func_2D22B0
    ctx->pc = 0x2D1C94u;
    SET_GPR_U32(ctx, 31, 0x2D1C9Cu);
    ctx->pc = 0x2D1C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1C94u;
    // 0x2d1c98: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D22B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D22B0u, 0x2D1C94u, 0x2D1C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1C9Cu;
label_2d1c9c:
    // 0x2d1c9c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D1C9Cu;
    {
        const bool branch_taken_0x2d1c9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1c9c) {
            ctx->pc = 0x2D1CACu;
            goto label_2d1cac;
        }
    }
    ctx->pc = 0x2D1CA4u;
    // 0x2d1ca4: 0xc0b32c4  jal         func_2CCB10
    ctx->pc = 0x2D1CA4u;
    SET_GPR_U32(ctx, 31, 0x2D1CACu);
    ctx->pc = 0x2D1CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1CA4u;
    // 0x2d1ca8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CCB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CCB10u, 0x2D1CA4u, 0x2D1CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1CACu;
label_2d1cac:
    // 0x2d1cac: 0xc0b488a  jal         func_2D2228
    ctx->pc = 0x2D1CACu;
    SET_GPR_U32(ctx, 31, 0x2D1CB4u);
    ctx->pc = 0x2D1CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1CACu;
    // 0x2d1cb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2228u, 0x2D1CACu, 0x2D1CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1CB4u;
label_2d1cb4:
    // 0x2d1cb4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D1CB4u;
    {
        const bool branch_taken_0x2d1cb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1CB4u;
        // 0x2d1cb8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1cb4) {
            ctx->pc = 0x2D1CE4u;
            goto label_2d1ce4;
        }
    }
    ctx->pc = 0x2D1CBCu;
    // 0x2d1cbc: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x2d1cbcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x2d1cc0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d1cc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1cc4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2d1cc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1cc8: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2d1cc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d1ccc: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x2d1cccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x2d1cd0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2d1cd0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1cd4: 0xc0b3270  jal         func_2CC9C0
    ctx->pc = 0x2D1CD4u;
    SET_GPR_U32(ctx, 31, 0x2D1CDCu);
    ctx->pc = 0x2D1CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1CD4u;
    // 0x2d1cd8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC9C0u, 0x2D1CD4u, 0x2D1CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1CDCu;
label_2d1cdc:
    // 0x2d1cdc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2D1CDCu;
    {
        const bool branch_taken_0x2d1cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1CDCu;
        // 0x2d1ce0: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1cdc) {
            ctx->pc = 0x2D1CE8u;
            goto label_2d1ce8;
        }
    }
    ctx->pc = 0x2D1CE4u;
label_2d1ce4:
    // 0x2d1ce4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d1ce4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d1ce8:
    // 0x2d1ce8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2d1ce8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d1cec: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2d1cecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d1cf0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2d1cf0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d1cf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d1cf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d1cf8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1CF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1CF8u;
        // 0x2d1cfc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D1CF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D1D00u;
}
