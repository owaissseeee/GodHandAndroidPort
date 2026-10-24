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

// Function: func_0034CC78
// Address: 0x34cc78 - 0x34ccb0
void func_0034CC78_0x34cc78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034CC78_0x34cc78");
#endif

    switch (ctx->pc) {
        case 0x34cc78u: goto label_34cc78;
        case 0x34cc7cu: goto label_34cc7c;
        case 0x34cc80u: goto label_34cc80;
        case 0x34cc84u: goto label_34cc84;
        case 0x34cc88u: goto label_34cc88;
        case 0x34cc8cu: goto label_34cc8c;
        case 0x34cc90u: goto label_34cc90;
        case 0x34cc94u: goto label_34cc94;
        case 0x34cc98u: goto label_34cc98;
        case 0x34cc9cu: goto label_34cc9c;
        case 0x34cca0u: goto label_34cca0;
        case 0x34cca4u: goto label_34cca4;
        case 0x34cca8u: goto label_34cca8;
        case 0x34ccacu: goto label_34ccac;
        default: break;
    }

    ctx->pc = 0x34cc78u;

label_34cc78:
    // 0x34cc78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34cc78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_34cc7c:
    // 0x34cc7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34cc7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_34cc80:
    // 0x34cc80: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x34cc80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_34cc84:
    // 0x34cc84: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x34cc84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_34cc88:
    // 0x34cc88: 0x40f809  jalr        $v0
label_34cc8c:
    if (ctx->pc == 0x34CC8Cu) {
        ctx->pc = 0x34CC90u;
        goto label_34cc90;
    }
    ctx->pc = 0x34CC88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x34CC90u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34CC88u, 0x34CC90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34CC90u;
label_34cc90:
    // 0x34cc90: 0x3c030076  lui         $v1, 0x76
    ctx->pc = 0x34cc90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)118 << 16));
label_34cc94:
    // 0x34cc94: 0x8c640db4  lw          $a0, 0xDB4($v1)
    ctx->pc = 0x34cc94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3508)));
label_34cc98:
    // 0x34cc98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34cc98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_34cc9c:
    // 0x34cc9c: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x34cc9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
label_34cca0:
    // 0x34cca0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x34cca0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_34cca4:
    // 0x34cca4: 0x3e00008  jr          $ra
label_34cca8:
    if (ctx->pc == 0x34CCA8u) {
        ctx->pc = 0x34CCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CCA4u;
        // 0x34cca8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34CCACu;
        goto label_34ccac;
    }
    ctx->pc = 0x34CCA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34CCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CCA4u;
        // 0x34cca8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34CCA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34CCACu;
label_34ccac:
    // 0x34ccac: 0x0  nop
    ctx->pc = 0x34ccacu;
    // NOP
    ctx->pc = 0x34ccb0u;
}
