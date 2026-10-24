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

// Function: tellg__7istream
// Address: 0x387a60 - 0x387ab8
void tellg__7istream_0x387a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("tellg__7istream_0x387a60");
#endif

    switch (ctx->pc) {
        case 0x387a88u: goto label_387a88;
        default: break;
    }

    ctx->pc = 0x387a60u;

    // 0x387a60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x387a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x387a64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x387a64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387a68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x387a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x387a6c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x387a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x387a70: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x387a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x387a74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x387a74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387a78: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x387a78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x387a7c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x387a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x387a80: 0xc0e38fc  jal         func_38E3F0
    ctx->pc = 0x387A80u;
    SET_GPR_U32(ctx, 31, 0x387A88u);
    ctx->pc = 0x387A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387A80u;
    // 0x387a84: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E3F0u, 0x387A80u, 0x387A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387A88u;
label_387a88:
    // 0x387a88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x387a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387a8c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x387a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x387a90: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x387A90u;
    {
        const bool branch_taken_0x387a90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x387A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387A90u;
        // 0x387a94: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387a90) {
            ctx->pc = 0x387AA8u;
            goto label_387aa8;
        }
    }
    ctx->pc = 0x387A98u;
    // 0x387a98: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x387a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x387a9c: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x387a9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x387aa0: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x387aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x387aa4: 0xa062001a  sb          $v0, 0x1A($v1)
    ctx->pc = 0x387aa4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
label_387aa8:
    // 0x387aa8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x387aa8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387aac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x387aacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x387ab0: 0x3e00008  jr          $ra
    ctx->pc = 0x387AB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x387AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387AB0u;
        // 0x387ab4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x387AB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x387AB8u;
}
