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

// Function: sgetc__9streambuf
// Address: 0x38b9a0 - 0x38b9f0
void sgetc__9streambuf_0x38b9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sgetc__9streambuf_0x38b9a0");
#endif

    switch (ctx->pc) {
        case 0x38b9ccu: goto label_38b9cc;
        default: break;
    }

    ctx->pc = 0x38b9a0u;

    // 0x38b9a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38b9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38b9a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38b9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x38b9a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38b9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38b9ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38b9acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38b9b0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x38b9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x38b9b4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x38b9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x38b9b8: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x38b9b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x38b9bc: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x38B9BCu;
    {
        const bool branch_taken_0x38b9bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38b9bc) {
            ctx->pc = 0x38B9C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38B9BCu;
            // 0x38b9c0: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38B9E0u;
            goto label_38b9e0;
        }
    }
    ctx->pc = 0x38B9C4u;
    // 0x38b9c4: 0xc0e316e  jal         func_38C5B8
    ctx->pc = 0x38B9C4u;
    SET_GPR_U32(ctx, 31, 0x38B9CCu);
    ctx->pc = 0x38C5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C5B8u, 0x38B9C4u, 0x38B9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B9CCu;
label_38b9cc:
    // 0x38b9cc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x38b9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x38b9d0: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x38B9D0u;
    {
        const bool branch_taken_0x38b9d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x38B9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B9D0u;
        // 0x38b9d4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b9d0) {
            ctx->pc = 0x38B9E0u;
            goto label_38b9e0;
        }
    }
    ctx->pc = 0x38B9D8u;
    // 0x38b9d8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x38b9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x38b9dc: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x38b9dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_38b9e0:
    // 0x38b9e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38b9e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38b9e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38b9e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38b9e8: 0x3e00008  jr          $ra
    ctx->pc = 0x38B9E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38B9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B9E8u;
        // 0x38b9ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38B9E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38B9F0u;
}
