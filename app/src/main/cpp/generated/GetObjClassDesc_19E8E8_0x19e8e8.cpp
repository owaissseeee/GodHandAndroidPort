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

// Function: GetObjClassDesc_19E8E8
// Address: 0x19e8e8 - 0x19e938
void GetObjClassDesc_19E8E8_0x19e8e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetObjClassDesc_19E8E8_0x19e8e8");
#endif

    switch (ctx->pc) {
        case 0x19e90cu: goto label_19e90c;
        case 0x19e924u: goto label_19e924;
        default: break;
    }

    ctx->pc = 0x19e8e8u;

    // 0x19e8e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19e8e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19e8ec: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x19e8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x19e8f0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19e8f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19e8f4: 0x8c625e78  lw          $v0, 0x5E78($v1)
    ctx->pc = 0x19e8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785E78u));
    // 0x19e8f8: 0x24705e78  addiu       $s0, $v1, 0x5E78
    ctx->pc = 0x19e8f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 24184));
    // 0x19e8fc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19E8FCu;
    {
        const bool branch_taken_0x19e8fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E8FCu;
        // 0x19e900: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e8fc) {
            ctx->pc = 0x19E924u;
            goto label_19e924;
        }
    }
    ctx->pc = 0x19E904u;
    // 0x19e904: 0xc070efa  jal         func_1C3BE8
    ctx->pc = 0x19E904u;
    SET_GPR_U32(ctx, 31, 0x19E90Cu);
    ctx->pc = 0x1C3BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3BE8u, 0x19E904u, 0x19E90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E90Cu;
label_19e90c:
    // 0x19e90c: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x19e90cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x19e910: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x19e910u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x19e914: 0x24a56508  addiu       $a1, $a1, 0x6508
    ctx->pc = 0x19e914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25864));
    // 0x19e918: 0x24c65798  addiu       $a2, $a2, 0x5798
    ctx->pc = 0x19e918u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22424));
    // 0x19e91c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x19E91Cu;
    SET_GPR_U32(ctx, 31, 0x19E924u);
    ctx->pc = 0x19E920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E91Cu;
    // 0x19e920: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x19E91Cu, 0x19E924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E924u;
label_19e924:
    // 0x19e924: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19e924u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e928: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19e928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e92c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19e92cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e930: 0x3e00008  jr          $ra
    ctx->pc = 0x19E930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E930u;
        // 0x19e934: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E938u;
}
