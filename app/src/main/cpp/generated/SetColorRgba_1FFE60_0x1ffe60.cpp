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

// Function: SetColorRgba_1FFE60
// Address: 0x1ffe60 - 0x1ffeb8
void SetColorRgba_1FFE60_0x1ffe60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetColorRgba_1FFE60_0x1ffe60");
#endif

    switch (ctx->pc) {
        case 0x1ffe88u: goto label_1ffe88;
        case 0x1ffe9cu: goto label_1ffe9c;
        default: break;
    }

    ctx->pc = 0x1ffe60u;

    // 0x1ffe60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ffe60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ffe64: 0x310900ff  andi        $t1, $t0, 0xFF
    ctx->pc = 0x1ffe64u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x1ffe68: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ffe68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1ffe6c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1ffe6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1ffe70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ffe70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffe74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ffe74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ffe78: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x1ffe78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1ffe7c: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x1ffe7cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1ffe80: 0xc080132  jal         func_2004C8
    ctx->pc = 0x1FFE80u;
    SET_GPR_U32(ctx, 31, 0x1FFE88u);
    ctx->pc = 0x1FFE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFE80u;
    // 0x1ffe84: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2004C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2004C8u, 0x1FFE80u, 0x1FFE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFE88u;
label_1ffe88:
    // 0x1ffe88: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ffe88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ffe8c: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FFE8Cu;
    {
        const bool branch_taken_0x1ffe8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ffe8c) {
            ctx->pc = 0x1FFE90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FFE8Cu;
            // 0x1ffe90: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FFEA0u;
            goto label_1ffea0;
        }
    }
    ctx->pc = 0x1FFE94u;
    // 0x1ffe94: 0xc07ffe0  jal         func_1FFF80
    ctx->pc = 0x1FFE94u;
    SET_GPR_U32(ctx, 31, 0x1FFE9Cu);
    ctx->pc = 0x1FFE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFE94u;
    // 0x1ffe98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFF80u, 0x1FFE94u, 0x1FFE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFE9Cu;
label_1ffe9c:
    // 0x1ffe9c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ffe9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ffea0:
    // 0x1ffea0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ffea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ffea4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FFEA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FFEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFEA4u;
        // 0x1ffea8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FFEA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FFEACu;
    // 0x1ffeac: 0x0  nop
    ctx->pc = 0x1ffeacu;
    // NOP
    // 0x1ffeb0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1ffeb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ffeb4: 0x0  nop
    ctx->pc = 0x1ffeb4u;
    // NOP
    ctx->pc = 0x1ffeb8u;
}
