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

// Function: ColiseumEmSelect_close
// Address: 0x1f38a0 - 0x1f38f0
void ColiseumEmSelect_close_0x1f38a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ColiseumEmSelect_close_0x1f38a0");
#endif

    switch (ctx->pc) {
        case 0x1f38b8u: goto label_1f38b8;
        case 0x1f38e0u: goto label_1f38e0;
        default: break;
    }

    ctx->pc = 0x1f38a0u;

    // 0x1f38a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f38a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f38a4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1f38a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1f38a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f38a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f38ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f38acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f38b0: 0xc07d1b8  jal         func_1F46E0
    ctx->pc = 0x1F38B0u;
    SET_GPR_U32(ctx, 31, 0x1F38B8u);
    ctx->pc = 0x1F38B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F38B0u;
    // 0x1f38b4: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F46E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F46E0u, 0x1F38B0u, 0x1F38B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F38B8u;
label_1f38b8:
    // 0x1f38b8: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x1f38b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x1f38bc: 0x8c432384  lw          $v1, 0x2384($v0)
    ctx->pc = 0x1f38bcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C2384u));
    // 0x1f38c0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1f38c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f38c4: 0xac8000a8  sw          $zero, 0xA8($a0)
    ctx->pc = 0x1f38c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 0));
    // 0x1f38c8: 0xac8000ac  sw          $zero, 0xAC($a0)
    ctx->pc = 0x1f38c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 172), GPR_U32(ctx, 0));
    // 0x1f38cc: 0x8e0537d8  lw          $a1, 0x37D8($s0)
    ctx->pc = 0x1f38ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 14296)));
    // 0x1f38d0: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F38D0u;
    {
        const bool branch_taken_0x1f38d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F38D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F38D0u;
        // 0x1f38d4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f38d0) {
            ctx->pc = 0x1F38E4u;
            goto label_1f38e4;
        }
    }
    ctx->pc = 0x1F38D8u;
    // 0x1f38d8: 0xc0aa5a0  jal         func_2A9680
    ctx->pc = 0x1F38D8u;
    SET_GPR_U32(ctx, 31, 0x1F38E0u);
    ctx->pc = 0x1F38DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F38D8u;
    // 0x1f38dc: 0x8ca4ffe0  lw          $a0, -0x20($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9680u, 0x1F38D8u, 0x1F38E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F38E0u;
label_1f38e0:
    // 0x1f38e0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1f38e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f38e4:
    // 0x1f38e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f38e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f38e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F38E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F38ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F38E8u;
        // 0x1f38ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F38E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F38F0u;
}
