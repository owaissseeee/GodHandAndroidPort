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

// Function: func_001B0CE8
// Address: 0x1b0ce8 - 0x1b0d30
void func_001B0CE8_0x1b0ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001B0CE8_0x1b0ce8");
#endif

    switch (ctx->pc) {
        case 0x1b0cfcu: goto label_1b0cfc;
        default: break;
    }

    ctx->pc = 0x1b0ce8u;

    // 0x1b0ce8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b0ce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b0cec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b0cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b0cf0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b0cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b0cf4: 0xc06dba4  jal         func_1B6E90
    ctx->pc = 0x1B0CF4u;
    SET_GPR_U32(ctx, 31, 0x1B0CFCu);
    ctx->pc = 0x1B0CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0CF4u;
    // 0x1b0cf8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6E90u, 0x1B0CF4u, 0x1B0CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0CFCu;
label_1b0cfc:
    // 0x1b0cfc: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x1b0cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x1b0d00: 0x246382f0  addiu       $v1, $v1, -0x7D10
    ctx->pc = 0x1b0d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935280));
    // 0x1b0d04: 0xae030214  sw          $v1, 0x214($s0)
    ctx->pc = 0x1b0d04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 3));
    // 0x1b0d08: 0xfa000610  sqc2        $vf0, 0x610($s0)
    ctx->pc = 0x1b0d08u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1552), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1b0d0c: 0xfa000620  sqc2        $vf0, 0x620($s0)
    ctx->pc = 0x1b0d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1568), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1b0d10: 0xfa000640  sqc2        $vf0, 0x640($s0)
    ctx->pc = 0x1b0d10u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1600), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1b0d14: 0xfa000650  sqc2        $vf0, 0x650($s0)
    ctx->pc = 0x1b0d14u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1616), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1b0d18: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b0d18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0d1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b0d1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b0d20: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b0d20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b0d24: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0D24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0D24u;
        // 0x1b0d28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0D24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B0D2Cu;
    // 0x1b0d2c: 0x0  nop
    ctx->pc = 0x1b0d2cu;
    // NOP
    ctx->pc = 0x1b0d30u;
}
