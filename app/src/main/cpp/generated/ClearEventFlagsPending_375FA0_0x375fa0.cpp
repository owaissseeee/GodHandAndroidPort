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

// Function: ClearEventFlagsPending_375FA0
// Address: 0x375fa0 - 0x376008
void ClearEventFlagsPending_375FA0_0x375fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClearEventFlagsPending_375FA0_0x375fa0");
#endif

    switch (ctx->pc) {
        case 0x375fd4u: goto label_375fd4;
        case 0x375ff4u: goto label_375ff4;
        default: break;
    }

    ctx->pc = 0x375fa0u;

    // 0x375fa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x375fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x375fa4: 0x3c020077  lui         $v0, 0x77
    ctx->pc = 0x375fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
    // 0x375fa8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x375fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x375fac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x375facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x375fb0: 0x2450a790  addiu       $s0, $v0, -0x5870
    ctx->pc = 0x375fb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944656));
    // 0x375fb4: 0x96030022  lhu         $v1, 0x22($s0)
    ctx->pc = 0x375fb4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x76A7B2u));
    // 0x375fb8: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x375fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x375fbc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x375FBCu;
    {
        const bool branch_taken_0x375fbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x375FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375FBCu;
        // 0x375fc0: 0x3062ffef  andi        $v0, $v1, 0xFFEF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65519);
        ctx->in_delay_slot = false;
        if (branch_taken_0x375fbc) {
            ctx->pc = 0x375FD8u;
            goto label_375fd8;
        }
    }
    ctx->pc = 0x375FC4u;
    // 0x375fc4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x375fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x375fc8: 0xa6020022  sh          $v0, 0x22($s0)
    ctx->pc = 0x375fc8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 34), (uint16_t)GPR_U32(ctx, 2));
    // 0x375fcc: 0xc0df66c  jal         func_37D9B0
    ctx->pc = 0x375FCCu;
    SET_GPR_U32(ctx, 31, 0x375FD4u);
    ctx->pc = 0x375FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375FCCu;
    // 0x375fd0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D9B0u, 0x375FCCu, 0x375FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375FD4u;
label_375fd4:
    // 0x375fd4: 0x96030022  lhu         $v1, 0x22($s0)
    ctx->pc = 0x375fd4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 34)));
label_375fd8:
    // 0x375fd8: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x375fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x375fdc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x375FDCu;
    {
        const bool branch_taken_0x375fdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x375FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375FDCu;
        // 0x375fe0: 0x3062ffdf  andi        $v0, $v1, 0xFFDF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65503);
        ctx->in_delay_slot = false;
        if (branch_taken_0x375fdc) {
            ctx->pc = 0x375FF4u;
            goto label_375ff4;
        }
    }
    ctx->pc = 0x375FE4u;
    // 0x375fe4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x375fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x375fe8: 0xa6020022  sh          $v0, 0x22($s0)
    ctx->pc = 0x375fe8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 34), (uint16_t)GPR_U32(ctx, 2));
    // 0x375fec: 0xc0df66c  jal         func_37D9B0
    ctx->pc = 0x375FECu;
    SET_GPR_U32(ctx, 31, 0x375FF4u);
    ctx->pc = 0x375FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375FECu;
    // 0x375ff0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D9B0u, 0x375FECu, 0x375FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375FF4u;
label_375ff4:
    // 0x375ff4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x375ff4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x375ff8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x375ff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x375ffc: 0x3e00008  jr          $ra
    ctx->pc = 0x375FFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x376000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375FFCu;
        // 0x376000: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375FFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x376004u;
    // 0x376004: 0x0  nop
    ctx->pc = 0x376004u;
    // NOP
    ctx->pc = 0x376008u;
}
