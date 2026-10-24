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

// Function: func_00381DC0
// Address: 0x381dc0 - 0x381e30
void func_00381DC0_0x381dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00381DC0_0x381dc0");
#endif

    switch (ctx->pc) {
        case 0x381de8u: goto label_381de8;
        case 0x381e1cu: goto label_381e1c;
        default: break;
    }

    ctx->pc = 0x381dc0u;

    // 0x381dc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x381dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x381dc4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x381dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x381dc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x381dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x381dcc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x381dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x381dd0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x381dd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x381dd4: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x381dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x381dd8: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x381DD8u;
    {
        const bool branch_taken_0x381dd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x381DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381DD8u;
        // 0x381ddc: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381dd8) {
            ctx->pc = 0x381E1Cu;
            goto label_381e1c;
        }
    }
    ctx->pc = 0x381DE0u;
    // 0x381de0: 0xc0cb716  jal         func_32DC58
    ctx->pc = 0x381DE0u;
    SET_GPR_U32(ctx, 31, 0x381DE8u);
    ctx->pc = 0x32DC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DC58u, 0x381DE0u, 0x381DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381DE8u;
label_381de8:
    // 0x381de8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x381de8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x381dec: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x381DECu;
    {
        const bool branch_taken_0x381dec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x381DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381DECu;
        // 0x381df0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381dec) {
            ctx->pc = 0x381E1Cu;
            goto label_381e1c;
        }
    }
    ctx->pc = 0x381DF4u;
    // 0x381df4: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x381DF4u;
    {
        const bool branch_taken_0x381df4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x381DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381DF4u;
        // 0x381df8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381df4) {
            ctx->pc = 0x381E1Cu;
            goto label_381e1c;
        }
    }
    ctx->pc = 0x381DFCu;
    // 0x381dfc: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x381DFCu;
    {
        const bool branch_taken_0x381dfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x381dfc) {
            ctx->pc = 0x381E00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x381DFCu;
            // 0x381e00: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x381E20u;
            goto label_381e20;
        }
    }
    ctx->pc = 0x381E04u;
    // 0x381e04: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x381e04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x381e08: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x381e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x381e0c: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x381e0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x381e10: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x381e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x381e14: 0xc0cb810  jal         func_32E040
    ctx->pc = 0x381E14u;
    SET_GPR_U32(ctx, 31, 0x381E1Cu);
    ctx->pc = 0x381E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381E14u;
    // 0x381e18: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E040u, 0x381E14u, 0x381E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381E1Cu;
label_381e1c:
    // 0x381e1c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x381e1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_381e20:
    // 0x381e20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x381e20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x381e24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x381e24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x381e28: 0x3e00008  jr          $ra
    ctx->pc = 0x381E28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x381E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381E28u;
        // 0x381e2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x381E28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x381E30u;
}
