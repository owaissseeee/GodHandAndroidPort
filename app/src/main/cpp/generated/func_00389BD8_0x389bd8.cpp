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

// Function: func_00389BD8
// Address: 0x389bd8 - 0x389c38
void func_00389BD8_0x389bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00389BD8_0x389bd8");
#endif

    switch (ctx->pc) {
        case 0x389bfcu: goto label_389bfc;
        case 0x389c04u: goto label_389c04;
        case 0x389c20u: goto label_389c20;
        default: break;
    }

    ctx->pc = 0x389bd8u;

    // 0x389bd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x389bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x389bdc: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x389bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x389be0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x389be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x389be4: 0x8c626748  lw          $v0, 0x6748($v1)
    ctx->pc = 0x389be4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x786748u));
    // 0x389be8: 0x24706748  addiu       $s0, $v1, 0x6748
    ctx->pc = 0x389be8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 26440));
    // 0x389bec: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x389BECu;
    {
        const bool branch_taken_0x389bec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x389BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389BECu;
        // 0x389bf0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389bec) {
            ctx->pc = 0x389C20u;
            goto label_389c20;
        }
    }
    ctx->pc = 0x389BF4u;
    // 0x389bf4: 0xc0e29f8  jal         func_38A7E0
    ctx->pc = 0x389BF4u;
    SET_GPR_U32(ctx, 31, 0x389BFCu);
    ctx->pc = 0x38A7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A7E0u, 0x389BF4u, 0x389BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389BFCu;
label_389bfc:
    // 0x389bfc: 0xc0e28d0  jal         func_38A340
    ctx->pc = 0x389BFCu;
    SET_GPR_U32(ctx, 31, 0x389C04u);
    ctx->pc = 0x38A340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A340u, 0x389BFCu, 0x389C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389C04u;
label_389c04:
    // 0x389c04: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x389c04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x389c08: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x389c08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x389c0c: 0x24a5d1d8  addiu       $a1, $a1, -0x2E28
    ctx->pc = 0x389c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955480));
    // 0x389c10: 0x24c6d1e8  addiu       $a2, $a2, -0x2E18
    ctx->pc = 0x389c10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955496));
    // 0x389c14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x389c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389c18: 0xc0c7ba0  jal         func_31EE80
    ctx->pc = 0x389C18u;
    SET_GPR_U32(ctx, 31, 0x389C20u);
    ctx->pc = 0x389C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389C18u;
    // 0x389c1c: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EE80u, 0x389C18u, 0x389C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389C20u;
label_389c20:
    // 0x389c20: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x389c20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389c24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x389c24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x389c28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x389c28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x389c2c: 0x3e00008  jr          $ra
    ctx->pc = 0x389C2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x389C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389C2Cu;
        // 0x389c30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389C2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x389C34u;
    // 0x389c34: 0x0  nop
    ctx->pc = 0x389c34u;
    // NOP
    ctx->pc = 0x389c38u;
}
