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

// Function: GetObjClassDesc_19EDE0
// Address: 0x19ede0 - 0x19ee30
void GetObjClassDesc_19EDE0_0x19ede0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetObjClassDesc_19EDE0_0x19ede0");
#endif

    switch (ctx->pc) {
        case 0x19ee04u: goto label_19ee04;
        case 0x19ee1cu: goto label_19ee1c;
        default: break;
    }

    ctx->pc = 0x19ede0u;

    // 0x19ede0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19ede0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19ede4: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x19ede4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x19ede8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19ede8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19edec: 0x8c625e98  lw          $v0, 0x5E98($v1)
    ctx->pc = 0x19edecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785E98u));
    // 0x19edf0: 0x24705e98  addiu       $s0, $v1, 0x5E98
    ctx->pc = 0x19edf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 24216));
    // 0x19edf4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19EDF4u;
    {
        const bool branch_taken_0x19edf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19EDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EDF4u;
        // 0x19edf8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19edf4) {
            ctx->pc = 0x19EE1Cu;
            goto label_19ee1c;
        }
    }
    ctx->pc = 0x19EDFCu;
    // 0x19edfc: 0xc070efa  jal         func_1C3BE8
    ctx->pc = 0x19EDFCu;
    SET_GPR_U32(ctx, 31, 0x19EE04u);
    ctx->pc = 0x1C3BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3BE8u, 0x19EDFCu, 0x19EE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EE04u;
label_19ee04:
    // 0x19ee04: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x19ee04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x19ee08: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x19ee08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x19ee0c: 0x24a566d8  addiu       $a1, $a1, 0x66D8
    ctx->pc = 0x19ee0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26328));
    // 0x19ee10: 0x24c65798  addiu       $a2, $a2, 0x5798
    ctx->pc = 0x19ee10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22424));
    // 0x19ee14: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x19EE14u;
    SET_GPR_U32(ctx, 31, 0x19EE1Cu);
    ctx->pc = 0x19EE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EE14u;
    // 0x19ee18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x19EE14u, 0x19EE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EE1Cu;
label_19ee1c:
    // 0x19ee1c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19ee1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ee20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19ee20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ee24: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19ee24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19ee28: 0x3e00008  jr          $ra
    ctx->pc = 0x19EE28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19EE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EE28u;
        // 0x19ee2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19EE28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19EE30u;
}
