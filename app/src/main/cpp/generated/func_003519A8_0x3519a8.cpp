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

// Function: func_003519A8
// Address: 0x3519a8 - 0x351a08
void func_003519A8_0x3519a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003519A8_0x3519a8");
#endif

    switch (ctx->pc) {
        case 0x3519d4u: goto label_3519d4;
        case 0x3519e8u: goto label_3519e8;
        default: break;
    }

    ctx->pc = 0x3519a8u;

    // 0x3519a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3519a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3519ac: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x3519acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3519b0: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x3519b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x3519b4: 0x24700d6c  addiu       $s0, $v1, 0xD6C
    ctx->pc = 0x3519b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 3436));
    // 0x3519b8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x3519b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x3519bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3519bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3519c0: 0x8c650d98  lw          $a1, 0xD98($v1)
    ctx->pc = 0x3519c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3480)));
    // 0x3519c4: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x3519C4u;
    {
        const bool branch_taken_0x3519c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3519C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3519C4u;
        // 0x3519c8: 0x24640d9c  addiu       $a0, $v1, 0xD9C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 3484));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3519c4) {
            ctx->pc = 0x3519F4u;
            goto label_3519f4;
        }
    }
    ctx->pc = 0x3519CCu;
    // 0x3519cc: 0xc0d4aa8  jal         func_352AA0
    ctx->pc = 0x3519CCu;
    SET_GPR_U32(ctx, 31, 0x3519D4u);
    ctx->pc = 0x3519D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3519CCu;
    // 0x3519d0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x352AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x352AA0u, 0x3519CCu, 0x3519D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3519D4u;
label_3519d4:
    // 0x3519d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3519d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3519d8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3519d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3519dc: 0x27a60024  addiu       $a2, $sp, 0x24
    ctx->pc = 0x3519dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x3519e0: 0xc0d6c3a  jal         func_35B0E8
    ctx->pc = 0x3519E0u;
    SET_GPR_U32(ctx, 31, 0x3519E8u);
    ctx->pc = 0x3519E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3519E0u;
    // 0x3519e4: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35B0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B0E8u, 0x3519E0u, 0x3519E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3519E8u;
label_3519e8:
    // 0x3519e8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x3519e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x3519ec: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x3519ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3519f0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3519f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3519f4:
    // 0x3519f4: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x3519f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3519f8: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x3519f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3519fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3519FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x351A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3519FCu;
        // 0x351a00: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3519FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x351A04u;
    // 0x351a04: 0x0  nop
    ctx->pc = 0x351a04u;
    // NOP
    ctx->pc = 0x351a08u;
}
