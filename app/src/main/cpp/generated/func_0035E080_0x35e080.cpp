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

// Function: func_0035E080
// Address: 0x35e080 - 0x35e0f0
void func_0035E080_0x35e080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035E080_0x35e080");
#endif

    switch (ctx->pc) {
        case 0x35e0a4u: goto label_35e0a4;
        default: break;
    }

    ctx->pc = 0x35e080u;

    // 0x35e080: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35e080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35e084: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35e084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35e088: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35e088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35e08c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x35e08cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e090: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35e090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35e094: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x35e094u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x35e098: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x35e098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x35e09c: 0xc0d75ee  jal         func_35D7B8
    ctx->pc = 0x35E09Cu;
    SET_GPR_U32(ctx, 31, 0x35E0A4u);
    ctx->pc = 0x35E0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E09Cu;
    // 0x35e0a0: 0x245000b0  addiu       $s0, $v0, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D7B8u, 0x35E09Cu, 0x35E0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E0A4u;
label_35e0a4:
    // 0x35e0a4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x35E0A4u;
    {
        const bool branch_taken_0x35e0a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35e0a4) {
            ctx->pc = 0x35E0A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35E0A4u;
            // 0x35e0a8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35E0BCu;
            goto label_35e0bc;
        }
    }
    ctx->pc = 0x35E0ACu;
    // 0x35e0ac: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x35e0acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x35e0b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35e0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35e0b4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x35e0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x35e0b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35e0b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_35e0bc:
    // 0x35e0bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35e0bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35e0c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35e0c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35e0c4: 0x3e00008  jr          $ra
    ctx->pc = 0x35E0C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35E0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E0C4u;
        // 0x35e0c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E0C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35E0CCu;
    // 0x35e0cc: 0x0  nop
    ctx->pc = 0x35e0ccu;
    // NOP
    // 0x35e0d0: 0x0  nop
    ctx->pc = 0x35e0d0u;
    // NOP
    // 0x35e0d4: 0x0  nop
    ctx->pc = 0x35e0d4u;
    // NOP
    // 0x35e0d8: 0x0  nop
    ctx->pc = 0x35e0d8u;
    // NOP
    // 0x35e0dc: 0x0  nop
    ctx->pc = 0x35e0dcu;
    // NOP
    // 0x35e0e0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x35e0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x35e0e4: 0x0  nop
    ctx->pc = 0x35e0e4u;
    // NOP
    // 0x35e0e8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x35e0e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x35e0ec: 0x0  nop
    ctx->pc = 0x35e0ecu;
    // NOP
    ctx->pc = 0x35e0f0u;
}
