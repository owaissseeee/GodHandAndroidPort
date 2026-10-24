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

// Function: func_0035E030
// Address: 0x35e030 - 0x35e080
void func_0035E030_0x35e030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035E030_0x35e030");
#endif

    switch (ctx->pc) {
        case 0x35e054u: goto label_35e054;
        default: break;
    }

    ctx->pc = 0x35e030u;

    // 0x35e030: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35e030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35e034: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35e034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35e038: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35e038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35e03c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x35e03cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e040: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35e040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35e044: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x35e044u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x35e048: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x35e048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x35e04c: 0xc0d75ee  jal         func_35D7B8
    ctx->pc = 0x35E04Cu;
    SET_GPR_U32(ctx, 31, 0x35E054u);
    ctx->pc = 0x35E050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E04Cu;
    // 0x35e050: 0x245000b0  addiu       $s0, $v0, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D7B8u, 0x35E04Cu, 0x35E054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E054u;
label_35e054:
    // 0x35e054: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x35E054u;
    {
        const bool branch_taken_0x35e054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35e054) {
            ctx->pc = 0x35E058u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35E054u;
            // 0x35e058: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35E06Cu;
            goto label_35e06c;
        }
    }
    ctx->pc = 0x35E05Cu;
    // 0x35e05c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x35e05cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x35e060: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35e060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35e064: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x35e064u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x35e068: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35e068u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_35e06c:
    // 0x35e06c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35e06cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35e070: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35e070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35e074: 0x3e00008  jr          $ra
    ctx->pc = 0x35E074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35E078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E074u;
        // 0x35e078: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E074u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35E07Cu;
    // 0x35e07c: 0x0  nop
    ctx->pc = 0x35e07cu;
    // NOP
    ctx->pc = 0x35e080u;
}
