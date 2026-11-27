#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include "r600_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r600
{
// Function: func_0079ACD0
// Address: 0x79acd0 - 0x79ad38
void func_0079ACD0_0x79acd0(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079ACD0_0x79acd0");
#endif

    if (__builtin_expect(ctx->pc != 0x79acd0u, 0)) {
        switch (ctx->pc) {
            case 0x79ace8u: goto label_79ace8;
            case 0x79acf0u: goto label_79acf0;
            case 0x79acf8u: goto label_79acf8;
            case 0x79ad0cu: goto label_79ad0c;
            case 0x79ad1cu: goto label_79ad1c;
            case 0x79ad2cu: goto label_79ad2c;
            default: break;
        }
    }



    // 0x79acd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x79acd4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x79acd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x79acd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x79acd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x79acdc: 0x3c100060  lui         $s0, 0x60
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x79ace0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79ace0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79ace4: 0x3c11003c  lui         $s1, 0x3C
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
label_79ace8:
    // 0x79ace8: 0xc0b6dac  jal         func_2DB6B0
    SET_GPR_U32(ctx, 31, 0x79ACF0u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->callDirectStatic(rdram, ctx, &Getplayer_0x2db6b0, 0x2DB6B0u, 0x79ACF0u)) {
        return;
    }
label_79acf0:
    // 0x79acf0: 0xc04afd4  jal         func_12BF50
    SET_GPR_U32(ctx, 31, 0x79ACF8u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ACF0u;
    // 0x79acf4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BF50u;
    if (!runtime->callDirectStatic(rdram, ctx, &pl00_ckAtkActBtnEnable_0x12bf50, 0x12BF50u, 0x79ACF8u)) {
        return;
    }
label_79acf8:
    // 0x79acf8: 0x2604ea60  addiu       $a0, $s0, -0x15A0
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
    // 0x79acfc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79ACFCu;
    {
        const bool branch_taken_0x79acfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ACFCu;
        // 0x79ad00: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79acfc) {
            ctx->pc = 0x79AD14u;
            goto label_79ad14;
        }
    }
    // 0x79ad04: 0xc0b0a54  jal         func_2C2950
    SET_GPR_U32(ctx, 31, 0x79AD0Cu);
    ctx->pc = 0x2C2950u;
    if (!runtime->callDirectStatic(rdram, ctx, &cSceAtManager_SetEnable_2C2950_0x2c2950, 0x2C2950u, 0x79AD0Cu)) {
        return;
    }
label_79ad0c:
    // 0x79ad0c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x79AD0Cu;
    {
        const bool branch_taken_0x79ad0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD0Cu;
        // 0x79ad10: 0x8e222f84  lw          $v0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ad0c) {
            ctx->pc = 0x79AD20u;
            goto label_79ad20;
        }
    }
label_79ad14:
    // 0x79ad14: 0xc0b0a7e  jal         func_2C29F8
    SET_GPR_U32(ctx, 31, 0x79AD1Cu);
    ctx->pc = 0x2C29F8u;
    if (!runtime->callDirectStatic(rdram, ctx, &cSceAtManager_SetDisableById_0x2c29f8, 0x2C29F8u, 0x79AD1Cu)) {
        return;
    }
label_79ad1c:
    // 0x79ad1c: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x79ad1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
label_79ad20:
    // 0x79ad20: 0x24050001  addiu       $a1, $zero, 0x1
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79ad24: 0xc0b56a8  jal         func_2D5AA0
    SET_GPR_U32(ctx, 31, 0x79AD2Cu);
    ctx->pc = 0x79AD28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AD24u;
    // 0x79ad28: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79AD24u, 0x79AD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_79ad2c:
    // 0x79ad2c: 0x1000ffee  b           . + 4 + (-0x12 << 2)
    ctx->pc = 0x79AD2Cu;
    {
        const bool branch_taken_0x79ad2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x79ad2c) {
            ctx->pc = 0x79ACE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79ace8;
        }
    }
    // 0x79ad34: 0x0  nop
    // NOP
    ctx->pc = 0x79ad38u;
}
} // namespace gh_r600
