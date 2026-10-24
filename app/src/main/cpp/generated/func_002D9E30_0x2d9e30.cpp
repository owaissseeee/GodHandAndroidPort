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

// Function: func_002D9E30
// Address: 0x2d9e30 - 0x2d9e98
void func_002D9E30_0x2d9e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002D9E30_0x2d9e30");
#endif

    switch (ctx->pc) {
        case 0x2d9e54u: goto label_2d9e54;
        default: break;
    }

    ctx->pc = 0x2d9e30u;

    // 0x2d9e30: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x2d9e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x2d9e34: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d9e34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d9e38: 0x2442d388  addiu       $v0, $v0, -0x2C78
    ctx->pc = 0x2d9e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955912));
    // 0x2d9e3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d9e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d9e40: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x2d9e40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2d9e44: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D9E44u;
    {
        const bool branch_taken_0x2d9e44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9E44u;
        // 0x2d9e48: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9e44) {
            ctx->pc = 0x2D9E54u;
            goto label_2d9e54;
        }
    }
    ctx->pc = 0x2D9E4Cu;
    // 0x2d9e4c: 0xc0c3d68  jal         func_30F5A0
    ctx->pc = 0x2D9E4Cu;
    SET_GPR_U32(ctx, 31, 0x2D9E54u);
    ctx->pc = 0x30F5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F5A0u, 0x2D9E4Cu, 0x2D9E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9E54u;
label_2d9e54:
    // 0x2d9e54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d9e54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d9e58: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9E58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9E58u;
        // 0x2d9e5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9E58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D9E60u;
    // 0x2d9e60: 0x27bd0170  addiu       $sp, $sp, 0x170
    ctx->pc = 0x2d9e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x2d9e64: 0x0  nop
    ctx->pc = 0x2d9e64u;
    // NOP
    // 0x2d9e68: 0x27bd0120  addiu       $sp, $sp, 0x120
    ctx->pc = 0x2d9e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2d9e6c: 0x0  nop
    ctx->pc = 0x2d9e6cu;
    // NOP
    // 0x2d9e70: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2d9e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d9e74: 0x0  nop
    ctx->pc = 0x2d9e74u;
    // NOP
    // 0x2d9e78: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2d9e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d9e7c: 0x0  nop
    ctx->pc = 0x2d9e7cu;
    // NOP
    // 0x2d9e80: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2d9e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2d9e84: 0x0  nop
    ctx->pc = 0x2d9e84u;
    // NOP
    // 0x2d9e88: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2d9e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d9e8c: 0x0  nop
    ctx->pc = 0x2d9e8cu;
    // NOP
    // 0x2d9e90: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2d9e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d9e94: 0x0  nop
    ctx->pc = 0x2d9e94u;
    // NOP
    ctx->pc = 0x2d9e98u;
}
