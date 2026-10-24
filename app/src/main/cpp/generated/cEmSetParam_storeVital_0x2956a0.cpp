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

// Function: cEmSetParam_storeVital
// Address: 0x2956a0 - 0x2956f0
void cEmSetParam_storeVital_0x2956a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEmSetParam_storeVital_0x2956a0");
#endif

    switch (ctx->pc) {
        case 0x2956d0u: goto label_2956d0;
        case 0x2956e0u: goto label_2956e0;
        default: break;
    }

    ctx->pc = 0x2956a0u;

    // 0x2956a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2956a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2956a4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2956a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2956a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2956a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2956ac: 0x94c50640  lhu         $a1, 0x640($a2)
    ctx->pc = 0x2956acu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 1600)));
    // 0x2956b0: 0x2ca20040  sltiu       $v0, $a1, 0x40
    ctx->pc = 0x2956b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x2956b4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2956B4u;
    {
        const bool branch_taken_0x2956b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2956B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2956B4u;
        // 0x2956b8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2956b4) {
            ctx->pc = 0x2956E4u;
            goto label_2956e4;
        }
    }
    ctx->pc = 0x2956BCu;
    // 0x2956bc: 0x84c6054a  lh          $a2, 0x54A($a2)
    ctx->pc = 0x2956bcu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 1354)));
    // 0x2956c0: 0x18c00005  blez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2956C0u;
    {
        const bool branch_taken_0x2956c0 = (GPR_S64(ctx, 6) <= 0);
        if (branch_taken_0x2956c0) {
            ctx->pc = 0x2956D8u;
            goto label_2956d8;
        }
    }
    ctx->pc = 0x2956C8u;
    // 0x2956c8: 0xc0a5534  jal         func_2954D0
    ctx->pc = 0x2956C8u;
    SET_GPR_U32(ctx, 31, 0x2956D0u);
    ctx->pc = 0x2954D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2954D0u, 0x2956C8u, 0x2956D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2956D0u;
label_2956d0:
    // 0x2956d0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2956D0u;
    {
        const bool branch_taken_0x2956d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2956D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2956D0u;
        // 0x2956d4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2956d0) {
            ctx->pc = 0x2956E4u;
            goto label_2956e4;
        }
    }
    ctx->pc = 0x2956D8u;
label_2956d8:
    // 0x2956d8: 0xc0a5534  jal         func_2954D0
    ctx->pc = 0x2956D8u;
    SET_GPR_U32(ctx, 31, 0x2956E0u);
    ctx->pc = 0x2956DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2956D8u;
    // 0x2956dc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2954D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2954D0u, 0x2956D8u, 0x2956E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2956E0u;
label_2956e0:
    // 0x2956e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2956e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2956e4:
    // 0x2956e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2956E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2956E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2956E4u;
        // 0x2956e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2956E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2956ECu;
    // 0x2956ec: 0x0  nop
    ctx->pc = 0x2956ecu;
    // NOP
    ctx->pc = 0x2956f0u;
}
