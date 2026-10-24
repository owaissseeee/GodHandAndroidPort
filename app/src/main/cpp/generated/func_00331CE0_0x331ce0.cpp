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

// Function: func_00331CE0
// Address: 0x331ce0 - 0x331d40
void func_00331CE0_0x331ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00331CE0_0x331ce0");
#endif

    ctx->pc = 0x331ce0u;

    // 0x331ce0: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x331ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x331ce4: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x331ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x331ce8: 0x24638454  addiu       $v1, $v1, -0x7BAC
    ctx->pc = 0x331ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935636));
    // 0x331cec: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x331cecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x331cf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x331cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x331cf4: 0x3c06003e  lui         $a2, 0x3E
    ctx->pc = 0x331cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)62 << 16));
    // 0x331cf8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x331cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x331cfc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x331cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x331d00: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x331d00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x331d04: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x331d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x331d08: 0x14850007  bne         $a0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x331D08u;
    {
        const bool branch_taken_0x331d08 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x331D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331D08u;
        // 0x331d0c: 0xacc28484  sw          $v0, -0x7B7C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4294935684), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331d08) {
            ctx->pc = 0x331D28u;
            goto label_331d28;
        }
    }
    ctx->pc = 0x331D10u;
    // 0x331d10: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x331d10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x331d14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x331d14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x331d18: 0x248440b8  addiu       $a0, $a0, 0x40B8
    ctx->pc = 0x331d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16568));
    // 0x331d1c: 0x80ec7ca  j           func_3B1F28
    ctx->pc = 0x331D1Cu;
    ctx->pc = 0x331D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331D1Cu;
    // 0x331d20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1F28u, 0x331D1Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x331D24u;
    // 0x331d24: 0x0  nop
    ctx->pc = 0x331d24u;
    // NOP
label_331d28:
    // 0x331d28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x331d28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x331d2c: 0x3e00008  jr          $ra
    ctx->pc = 0x331D2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x331D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331D2Cu;
        // 0x331d30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x331D2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x331D34u;
    // 0x331d34: 0x0  nop
    ctx->pc = 0x331d34u;
    // NOP
    // 0x331d38: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x331d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
    // 0x331d3c: 0x0  nop
    ctx->pc = 0x331d3cu;
    // NOP
    ctx->pc = 0x331d40u;
}
