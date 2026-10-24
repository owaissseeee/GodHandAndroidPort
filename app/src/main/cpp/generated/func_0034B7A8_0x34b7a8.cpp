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

// Function: func_0034B7A8
// Address: 0x34b7a8 - 0x34b818
void func_0034B7A8_0x34b7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034B7A8_0x34b7a8");
#endif

    switch (ctx->pc) {
        case 0x34b7c8u: goto label_34b7c8;
        case 0x34b7d8u: goto label_34b7d8;
        default: break;
    }

    ctx->pc = 0x34b7a8u;

    // 0x34b7a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34b7a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34b7ac: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x34b7acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x34b7b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34b7b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x34b7b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34b7b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b7b8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x34b7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x34b7bc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x34b7bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x34b7c0: 0xc0d70ce  jal         func_35C338
    ctx->pc = 0x34B7C0u;
    SET_GPR_U32(ctx, 31, 0x34B7C8u);
    ctx->pc = 0x34B7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B7C0u;
    // 0x34b7c4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C338u, 0x34B7C0u, 0x34B7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B7C8u;
label_34b7c8:
    // 0x34b7c8: 0x1051000d  beq         $v0, $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x34B7C8u;
    {
        const bool branch_taken_0x34b7c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x34B7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B7C8u;
        // 0x34b7cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b7c8) {
            ctx->pc = 0x34B800u;
            goto label_34b800;
        }
    }
    ctx->pc = 0x34B7D0u;
    // 0x34b7d0: 0xc0d328c  jal         func_34CA30
    ctx->pc = 0x34B7D0u;
    SET_GPR_U32(ctx, 31, 0x34B7D8u);
    ctx->pc = 0x34B7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B7D0u;
    // 0x34b7d4: 0x8e05211c  lw          $a1, 0x211C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8476)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34CA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34CA30u, 0x34B7D0u, 0x34B7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B7D8u;
label_34b7d8:
    // 0x34b7d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34b7d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b7dc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x34b7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x34b7e0: 0x14510007  bne         $v0, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x34B7E0u;
    {
        const bool branch_taken_0x34b7e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x34B7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B7E0u;
        // 0x34b7e4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b7e0) {
            ctx->pc = 0x34B800u;
            goto label_34b800;
        }
    }
    ctx->pc = 0x34B7E8u;
    // 0x34b7e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34b7e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34b7ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x34b7ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34b7f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34b7f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34b7f4: 0x80d70c8  j           func_35C320
    ctx->pc = 0x34B7F4u;
    ctx->pc = 0x34B7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B7F4u;
    // 0x34b7f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C320u, 0x34B7F4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x34B7FCu;
    // 0x34b7fc: 0x0  nop
    ctx->pc = 0x34b7fcu;
    // NOP
label_34b800:
    // 0x34b800: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34b800u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34b804: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x34b804u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34b808: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34b808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34b80c: 0x3e00008  jr          $ra
    ctx->pc = 0x34B80Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34B810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B80Cu;
        // 0x34b810: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34B80Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34B814u;
    // 0x34b814: 0x0  nop
    ctx->pc = 0x34b814u;
    // NOP
    ctx->pc = 0x34b818u;
}
