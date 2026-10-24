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

// Function: func_002FFAD0
// Address: 0x2ffad0 - 0x2ffb10
void func_002FFAD0_0x2ffad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002FFAD0_0x2ffad0");
#endif

    switch (ctx->pc) {
        case 0x2ffaecu: goto label_2ffaec;
        default: break;
    }

    ctx->pc = 0x2ffad0u;

    // 0x2ffad0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ffad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ffad4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ffad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2ffad8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ffad8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffadc: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FFADCu;
    {
        const bool branch_taken_0x2ffadc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFADCu;
        // 0x2ffae0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffadc) {
            ctx->pc = 0x2FFAFCu;
            goto label_2ffafc;
        }
    }
    ctx->pc = 0x2FFAE4u;
    // 0x2ffae4: 0xc0bef32  jal         func_2FBCC8
    ctx->pc = 0x2FFAE4u;
    SET_GPR_U32(ctx, 31, 0x2FFAECu);
    ctx->pc = 0x2FBCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBCC8u, 0x2FFAE4u, 0x2FFAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFAECu;
label_2ffaec:
    // 0x2ffaec: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x2ffaecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x2ffaf0: 0x2463e238  addiu       $v1, $v1, -0x1DC8
    ctx->pc = 0x2ffaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959672));
    // 0x2ffaf4: 0xae0300f0  sw          $v1, 0xF0($s0)
    ctx->pc = 0x2ffaf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 3));
    // 0x2ffaf8: 0xfa0002b0  sqc2        $vf0, 0x2B0($s0)
    ctx->pc = 0x2ffaf8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 688), _mm_castps_si128(ctx->vu0_vf[0]));
label_2ffafc:
    // 0x2ffafc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2ffafcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffb00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ffb00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ffb04: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ffb04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ffb08: 0x3e00008  jr          $ra
    ctx->pc = 0x2FFB08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FFB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFB08u;
        // 0x2ffb0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FFB08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FFB10u;
}
