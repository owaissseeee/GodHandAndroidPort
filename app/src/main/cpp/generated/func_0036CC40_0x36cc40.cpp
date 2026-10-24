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

// Function: func_0036CC40
// Address: 0x36cc40 - 0x36cc78
void func_0036CC40_0x36cc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036CC40_0x36cc40");
#endif

    switch (ctx->pc) {
        case 0x36cc40u: goto label_36cc40;
        case 0x36cc44u: goto label_36cc44;
        case 0x36cc48u: goto label_36cc48;
        case 0x36cc4cu: goto label_36cc4c;
        case 0x36cc50u: goto label_36cc50;
        case 0x36cc54u: goto label_36cc54;
        case 0x36cc58u: goto label_36cc58;
        case 0x36cc5cu: goto label_36cc5c;
        case 0x36cc60u: goto label_36cc60;
        case 0x36cc64u: goto label_36cc64;
        case 0x36cc68u: goto label_36cc68;
        case 0x36cc6cu: goto label_36cc6c;
        case 0x36cc70u: goto label_36cc70;
        case 0x36cc74u: goto label_36cc74;
        default: break;
    }

    ctx->pc = 0x36cc40u;

label_36cc40:
    // 0x36cc40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36cc40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_36cc44:
    // 0x36cc44: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x36cc44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_36cc48:
    // 0x36cc48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36cc48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_36cc4c:
    // 0x36cc4c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x36cc4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_36cc50:
    // 0x36cc50: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x36cc50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_36cc54:
    // 0x36cc54: 0x90450014  lbu         $a1, 0x14($v0)
    ctx->pc = 0x36cc54u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 20)));
label_36cc58:
    // 0x36cc58: 0x90460015  lbu         $a2, 0x15($v0)
    ctx->pc = 0x36cc58u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 21)));
label_36cc5c:
    // 0x36cc5c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_36cc60:
    if (ctx->pc == 0x36CC60u) {
        ctx->pc = 0x36CC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CC5Cu;
        // 0x36cc60: 0x90470016  lbu         $a3, 0x16($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36CC64u;
        goto label_36cc64;
    }
    ctx->pc = 0x36CC5Cu;
    {
        const bool branch_taken_0x36cc5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x36CC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CC5Cu;
        // 0x36cc60: 0x90470016  lbu         $a3, 0x16($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36cc5c) {
            ctx->pc = 0x36CC6Cu;
            goto label_36cc6c;
        }
    }
    ctx->pc = 0x36CC64u;
label_36cc64:
    // 0x36cc64: 0x60f809  jalr        $v1
label_36cc68:
    if (ctx->pc == 0x36CC68u) {
        ctx->pc = 0x36CC6Cu;
        goto label_36cc6c;
    }
    ctx->pc = 0x36CC64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x36CC6Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36CC64u, 0x36CC6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36CC6Cu;
label_36cc6c:
    // 0x36cc6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36cc6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_36cc70:
    // 0x36cc70: 0x3e00008  jr          $ra
label_36cc74:
    if (ctx->pc == 0x36CC74u) {
        ctx->pc = 0x36CC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CC70u;
        // 0x36cc74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36CC78u;
        goto label_fallthrough_0x36cc70;
    }
    ctx->pc = 0x36CC70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36CC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CC70u;
        // 0x36cc74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36CC70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x36cc70:
    ctx->pc = 0x36CC78u;
}
