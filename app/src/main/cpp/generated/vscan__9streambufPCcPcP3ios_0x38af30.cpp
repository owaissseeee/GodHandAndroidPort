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

// Function: vscan__9streambufPCcPcP3ios
// Address: 0x38af30 - 0x38af78
void vscan__9streambufPCcPcP3ios_0x38af30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("vscan__9streambufPCcPcP3ios_0x38af30");
#endif

    switch (ctx->pc) {
        case 0x38af4cu: goto label_38af4c;
        default: break;
    }

    ctx->pc = 0x38af30u;

    // 0x38af30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x38af30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x38af34: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x38af34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x38af38: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x38af38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38af3c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x38af3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x38af40: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x38af40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x38af44: 0xc0e34ae  jal         func_38D2B8
    ctx->pc = 0x38AF44u;
    SET_GPR_U32(ctx, 31, 0x38AF4Cu);
    ctx->pc = 0x38AF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38AF44u;
    // 0x38af48: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D2B8u, 0x38AF44u, 0x38AF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38AF4Cu;
label_38af4c:
    // 0x38af4c: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x38AF4Cu;
    {
        const bool branch_taken_0x38af4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x38AF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AF4Cu;
        // 0x38af50: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38af4c) {
            ctx->pc = 0x38AF64u;
            goto label_38af64;
        }
    }
    ctx->pc = 0x38AF54u;
    // 0x38af54: 0x9202001a  lbu         $v0, 0x1A($s0)
    ctx->pc = 0x38af54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x38af58: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x38af58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38af5c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x38af5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x38af60: 0xa202001a  sb          $v0, 0x1A($s0)
    ctx->pc = 0x38af60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26), (uint8_t)GPR_U32(ctx, 2));
label_38af64:
    // 0x38af64: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x38af64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38af68: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x38af68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38af6c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x38af6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38af70: 0x3e00008  jr          $ra
    ctx->pc = 0x38AF70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38AF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AF70u;
        // 0x38af74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38AF70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38AF78u;
}
