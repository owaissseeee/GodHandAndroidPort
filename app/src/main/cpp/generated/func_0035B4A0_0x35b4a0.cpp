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

// Function: func_0035B4A0
// Address: 0x35b4a0 - 0x35b500
void func_0035B4A0_0x35b4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035B4A0_0x35b4a0");
#endif

    switch (ctx->pc) {
        case 0x35b4d0u: goto label_35b4d0;
        case 0x35b4e0u: goto label_35b4e0;
        case 0x35b4f0u: goto label_35b4f0;
        default: break;
    }

    ctx->pc = 0x35b4a0u;

    // 0x35b4a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35b4a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35b4a4: 0x2ca20002  sltiu       $v0, $a1, 0x2
    ctx->pc = 0x35b4a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x35b4a8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x35b4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x35b4ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35b4acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b4b0: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x35B4B0u;
    {
        const bool branch_taken_0x35b4b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35B4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B4B0u;
        // 0x35b4b4: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b4b0) {
            ctx->pc = 0x35B4F0u;
            goto label_35b4f0;
        }
    }
    ctx->pc = 0x35B4B8u;
    // 0x35b4b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x35b4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35b4bc: 0x54a2000d  bnel        $a1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x35B4BCu;
    {
        const bool branch_taken_0x35b4bc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x35b4bc) {
            ctx->pc = 0x35B4C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35B4BCu;
            // 0x35b4c0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35B4F4u;
            goto label_35b4f4;
        }
    }
    ctx->pc = 0x35B4C4u;
    // 0x35b4c4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x35b4c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b4c8: 0xc0d6d6e  jal         func_35B5B8
    ctx->pc = 0x35B4C8u;
    SET_GPR_U32(ctx, 31, 0x35B4D0u);
    ctx->pc = 0x35B4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B4C8u;
    // 0x35b4cc: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35B5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B5B8u, 0x35B4C8u, 0x35B4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B4D0u;
label_35b4d0:
    // 0x35b4d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35b4d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b4d4: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x35b4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35b4d8: 0xc0d6d40  jal         func_35B500
    ctx->pc = 0x35B4D8u;
    SET_GPR_U32(ctx, 31, 0x35B4E0u);
    ctx->pc = 0x35B4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B4D8u;
    // 0x35b4dc: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35B500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B500u, 0x35B4D8u, 0x35B4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B4E0u;
label_35b4e0:
    // 0x35b4e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35b4e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b4e4: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x35b4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35b4e8: 0xc0d6d5a  jal         func_35B568
    ctx->pc = 0x35B4E8u;
    SET_GPR_U32(ctx, 31, 0x35B4F0u);
    ctx->pc = 0x35B4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B4E8u;
    // 0x35b4ec: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35B568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B568u, 0x35B4E8u, 0x35B4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B4F0u;
label_35b4f0:
    // 0x35b4f0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x35b4f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_35b4f4:
    // 0x35b4f4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x35b4f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35b4f8: 0x3e00008  jr          $ra
    ctx->pc = 0x35B4F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35B4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B4F8u;
        // 0x35b4fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B4F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B500u;
}
