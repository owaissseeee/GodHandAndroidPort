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

// Function: func_0034CC40
// Address: 0x34cc40 - 0x34cc78
void func_0034CC40_0x34cc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034CC40_0x34cc40");
#endif

    switch (ctx->pc) {
        case 0x34cc40u: goto label_34cc40;
        case 0x34cc44u: goto label_34cc44;
        case 0x34cc48u: goto label_34cc48;
        case 0x34cc4cu: goto label_34cc4c;
        case 0x34cc50u: goto label_34cc50;
        case 0x34cc54u: goto label_34cc54;
        case 0x34cc58u: goto label_34cc58;
        case 0x34cc5cu: goto label_34cc5c;
        case 0x34cc60u: goto label_34cc60;
        case 0x34cc64u: goto label_34cc64;
        case 0x34cc68u: goto label_34cc68;
        case 0x34cc6cu: goto label_34cc6c;
        case 0x34cc70u: goto label_34cc70;
        case 0x34cc74u: goto label_34cc74;
        default: break;
    }

    ctx->pc = 0x34cc40u;

label_34cc40:
    // 0x34cc40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34cc40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_34cc44:
    // 0x34cc44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34cc44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_34cc48:
    // 0x34cc48: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x34cc48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_34cc4c:
    // 0x34cc4c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x34cc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_34cc50:
    // 0x34cc50: 0x40f809  jalr        $v0
label_34cc54:
    if (ctx->pc == 0x34CC54u) {
        ctx->pc = 0x34CC58u;
        goto label_34cc58;
    }
    ctx->pc = 0x34CC50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x34CC58u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34CC50u, 0x34CC58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34CC58u;
label_34cc58:
    // 0x34cc58: 0x3c030076  lui         $v1, 0x76
    ctx->pc = 0x34cc58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)118 << 16));
label_34cc5c:
    // 0x34cc5c: 0x8c640db0  lw          $a0, 0xDB0($v1)
    ctx->pc = 0x34cc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3504)));
label_34cc60:
    // 0x34cc60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34cc60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_34cc64:
    // 0x34cc64: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x34cc64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
label_34cc68:
    // 0x34cc68: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x34cc68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_34cc6c:
    // 0x34cc6c: 0x3e00008  jr          $ra
label_34cc70:
    if (ctx->pc == 0x34CC70u) {
        ctx->pc = 0x34CC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CC6Cu;
        // 0x34cc70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34CC74u;
        goto label_34cc74;
    }
    ctx->pc = 0x34CC6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34CC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CC6Cu;
        // 0x34cc70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34CC6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34CC74u;
label_34cc74:
    // 0x34cc74: 0x0  nop
    ctx->pc = 0x34cc74u;
    // NOP
    ctx->pc = 0x34cc78u;
}
