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

// Function: _IO_file_setbuf
// Address: 0x392a30 - 0x392a80
void ps2__IO_file_setbuf_0x392a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__IO_file_setbuf_0x392a30");
#endif

    switch (ctx->pc) {
        case 0x392a44u: goto label_392a44;
        default: break;
    }

    ctx->pc = 0x392a30u;

    // 0x392a30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x392a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x392a34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x392a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x392a38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x392a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x392a3c: 0xc0e32ca  jal         func_38CB28
    ctx->pc = 0x392A3Cu;
    SET_GPR_U32(ctx, 31, 0x392A44u);
    ctx->pc = 0x392A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392A3Cu;
    // 0x392a40: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CB28u, 0x392A3Cu, 0x392A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392A44u;
label_392a44:
    // 0x392a44: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x392A44u;
    {
        const bool branch_taken_0x392a44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x392a44) {
            ctx->pc = 0x392A48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x392A44u;
            // 0x392a48: 0x8e03001c  lw          $v1, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x392A54u;
            goto label_392a54;
        }
    }
    ctx->pc = 0x392A4Cu;
    // 0x392a4c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x392A4Cu;
    {
        const bool branch_taken_0x392a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x392A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392A4Cu;
        // 0x392a50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392a4c) {
            ctx->pc = 0x392A70u;
            goto label_392a70;
        }
    }
    ctx->pc = 0x392A54u;
label_392a54:
    // 0x392a54: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x392a54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x392a58: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x392a58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x392a5c: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x392a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x392a60: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x392a60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x392a64: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x392a64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x392a68: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x392a68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x392a6c: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x392a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_392a70:
    // 0x392a70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x392a70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x392a74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x392a74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x392a78: 0x3e00008  jr          $ra
    ctx->pc = 0x392A78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x392A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392A78u;
        // 0x392a7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x392A78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x392A80u;
}
