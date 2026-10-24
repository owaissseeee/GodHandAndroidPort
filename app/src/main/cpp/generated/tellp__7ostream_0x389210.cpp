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

// Function: tellp__7ostream
// Address: 0x389210 - 0x389268
void tellp__7ostream_0x389210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("tellp__7ostream_0x389210");
#endif

    switch (ctx->pc) {
        case 0x389238u: goto label_389238;
        default: break;
    }

    ctx->pc = 0x389210u;

    // 0x389210: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x389210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x389214: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x389214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389218: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x389218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x38921c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x38921cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x389220: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x389220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x389224: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x389224u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389228: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x389228u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x38922c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x38922cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x389230: 0xc0e38fc  jal         func_38E3F0
    ctx->pc = 0x389230u;
    SET_GPR_U32(ctx, 31, 0x389238u);
    ctx->pc = 0x389234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389230u;
    // 0x389234: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E3F0u, 0x389230u, 0x389238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389238u;
label_389238:
    // 0x389238: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x389238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38923c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x38923cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x389240: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x389240u;
    {
        const bool branch_taken_0x389240 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x389244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389240u;
        // 0x389244: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389240) {
            ctx->pc = 0x389258u;
            goto label_389258;
        }
    }
    ctx->pc = 0x389248u;
    // 0x389248: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x389248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x38924c: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x38924cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x389250: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x389250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x389254: 0xa062001a  sb          $v0, 0x1A($v1)
    ctx->pc = 0x389254u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
label_389258:
    // 0x389258: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x389258u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38925c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38925cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x389260: 0x3e00008  jr          $ra
    ctx->pc = 0x389260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x389264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389260u;
        // 0x389264: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x389268u;
}
