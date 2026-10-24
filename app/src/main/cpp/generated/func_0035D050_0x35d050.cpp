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

// Function: func_0035D050
// Address: 0x35d050 - 0x35d0d0
void func_0035D050_0x35d050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035D050_0x35d050");
#endif

    switch (ctx->pc) {
        case 0x35d070u: goto label_35d070;
        case 0x35d080u: goto label_35d080;
        case 0x35d090u: goto label_35d090;
        default: break;
    }

    ctx->pc = 0x35d050u;

    // 0x35d050: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35d050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35d054: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x35d054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x35d058: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35d058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35d05c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35d05cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d060: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35d060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35d064: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35d064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35d068: 0xc0d70ce  jal         func_35C338
    ctx->pc = 0x35D068u;
    SET_GPR_U32(ctx, 31, 0x35D070u);
    ctx->pc = 0x35D06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D068u;
    // 0x35d06c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C338u, 0x35D068u, 0x35D070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D070u;
label_35d070:
    // 0x35d070: 0x10510011  beq         $v0, $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x35D070u;
    {
        const bool branch_taken_0x35d070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x35D074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D070u;
        // 0x35d074: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d070) {
            ctx->pc = 0x35D0B8u;
            goto label_35d0b8;
        }
    }
    ctx->pc = 0x35D078u;
    // 0x35d078: 0xc0d328c  jal         func_34CA30
    ctx->pc = 0x35D078u;
    SET_GPR_U32(ctx, 31, 0x35D080u);
    ctx->pc = 0x35D07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D078u;
    // 0x35d07c: 0x8e052160  lw          $a1, 0x2160($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8544)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34CA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34CA30u, 0x35D078u, 0x35D080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D080u;
label_35d080:
    // 0x35d080: 0x1451000d  bne         $v0, $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x35D080u;
    {
        const bool branch_taken_0x35d080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x35D084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D080u;
        // 0x35d084: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d080) {
            ctx->pc = 0x35D0B8u;
            goto label_35d0b8;
        }
    }
    ctx->pc = 0x35D088u;
    // 0x35d088: 0xc0d7434  jal         func_35D0D0
    ctx->pc = 0x35D088u;
    SET_GPR_U32(ctx, 31, 0x35D090u);
    ctx->pc = 0x35D0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D0D0u, 0x35D088u, 0x35D090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D090u;
label_35d090:
    // 0x35d090: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x35D090u;
    {
        const bool branch_taken_0x35d090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35D094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D090u;
        // 0x35d094: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d090) {
            ctx->pc = 0x35D0B8u;
            goto label_35d0b8;
        }
    }
    ctx->pc = 0x35D098u;
    // 0x35d098: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35d098u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35d09c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35d09cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35d0a0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x35d0a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x35d0a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35d0a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35d0a8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x35d0a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35d0ac: 0x80d70c8  j           func_35C320
    ctx->pc = 0x35D0ACu;
    ctx->pc = 0x35D0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D0ACu;
    // 0x35d0b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C320u, 0x35D0ACu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35D0B4u;
    // 0x35d0b4: 0x0  nop
    ctx->pc = 0x35d0b4u;
    // NOP
label_35d0b8:
    // 0x35d0b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35d0b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35d0bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35d0bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35d0c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35d0c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35d0c4: 0x3e00008  jr          $ra
    ctx->pc = 0x35D0C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35D0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D0C4u;
        // 0x35d0c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D0C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D0CCu;
    // 0x35d0cc: 0x0  nop
    ctx->pc = 0x35d0ccu;
    // NOP
    ctx->pc = 0x35d0d0u;
}
