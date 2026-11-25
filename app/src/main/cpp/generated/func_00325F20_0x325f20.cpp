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

// Function: func_00325F20
// Address: 0x325f20 - 0x325fa8
void func_00325F20_0x325f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00325F20_0x325f20");
#endif

    if (__builtin_expect(ctx->pc != 0x325f20u, 0)) {
        switch (ctx->pc) {
            case 0x325f30u: goto label_325f30;
            case 0x325f38u: goto label_325f38;
            case 0x325f40u: goto label_325f40;
            case 0x325f48u: goto label_325f48;
            default: break;
        }
    }


    // 0x325f20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x325f24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x325f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x325f28: 0xc0cefee  jal         func_33BFB8
    ctx->pc = 0x325F28u;
    SET_GPR_U32(ctx, 31, 0x325F30u);
    if (!runtime->callDirectStatic(rdram, ctx, &func_0033BFB8_0x33bfb8, 0x33bfb8u, 0x325f30u)) {
        return;
    }
    ctx->pc = 0x325F30u;
label_325f30:
    // 0x325f30: 0xc0c977c  jal         func_325DF0
    ctx->pc = 0x325F30u;
    SET_GPR_U32(ctx, 31, 0x325F38u);
    if (!runtime->callDirectStatic(rdram, ctx, &func_00325DF0_0x325df0, 0x325df0u, 0x325f38u)) {
        return;
    }
    ctx->pc = 0x325F38u;
label_325f38:
    // 0x325f38: 0xc0c97ea  jal         func_325FA8
    ctx->pc = 0x325F38u;
    SET_GPR_U32(ctx, 31, 0x325F40u);
    if (!runtime->callDirectStatic(rdram, ctx, &func_00325FA8_0x325fa8, 0x325fa8u, 0x325f40u)) {
        return;
    }
    ctx->pc = 0x325F40u;
label_325f40:
    // 0x325f40: 0xc0c97be  jal         func_325EF8
    ctx->pc = 0x325F40u;
    SET_GPR_U32(ctx, 31, 0x325F48u);
    if (!runtime->callDirectStatic(rdram, ctx, &SetFlagAndForward_325EF8_0x325ef8, 0x325ef8u, 0x325f48u)) {
        return;
    }
    ctx->pc = 0x325F48u;
label_325f48:
    // 0x325f48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x325f48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x325f4c: 0x80ceffa  j           func_33BFE8
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325F4Cu;
    // 0x325f50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33BFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33BFE8u, 0x325F4Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    // 0x325f54: 0x0  nop
    // NOP
    // 0x325f58: 0x27bd0010  addiu       $sp, $sp, 0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x325f5c: 0x0  nop
    // NOP
    // 0x325f60: 0x27bd0010  addiu       $sp, $sp, 0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x325f64: 0x0  nop
    // NOP
    // 0x325f68: 0x27bd0010  addiu       $sp, $sp, 0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x325f6c: 0x0  nop
    // NOP
    // 0x325f70: 0x27bd0010  addiu       $sp, $sp, 0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x325f74: 0x0  nop
    // NOP
    // 0x325f78: 0x27bd0010  addiu       $sp, $sp, 0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x325f7c: 0x0  nop
    // NOP
    // 0x325f80: 0x27bd0050  addiu       $sp, $sp, 0x50
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x325f84: 0x0  nop
    // NOP
    // 0x325f88: 0x27bd0010  addiu       $sp, $sp, 0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x325f8c: 0x0  nop
    // NOP
    // 0x325f90: 0x27bd0010  addiu       $sp, $sp, 0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x325f94: 0x0  nop
    // NOP
    // 0x325f98: 0x27bd0010  addiu       $sp, $sp, 0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x325f9c: 0x0  nop
    // NOP
    // 0x325fa0: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x325fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x325fa4: 0x0  nop
    // NOP
    ctx->pc = 0x325fa8u;
}