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

// Function: cObjBaseArray_SearchOM
// Address: 0x14fd98 - 0x14fe08
void cObjBaseArray_SearchOM_0x14fd98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cObjBaseArray_SearchOM_0x14fd98");
#endif

    switch (ctx->pc) {
        case 0x14fdb8u: goto label_14fdb8;
        default: break;
    }

    ctx->pc = 0x14fd98u;

    // 0x14fd98: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x14fd98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14fd9c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x14fd9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x14fda0: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x14fda0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x14fda4: 0xc4102b  sltu        $v0, $a2, $a0
    ctx->pc = 0x14fda4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x14fda8: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x14FDA8u;
    {
        const bool branch_taken_0x14fda8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FDA8u;
        // 0x14fdac: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fda8) {
            ctx->pc = 0x14FDFCu;
            goto label_14fdfc;
        }
    }
    ctx->pc = 0x14FDB0u;
    // 0x14fdb0: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x14fdb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14fdb4: 0x0  nop
    ctx->pc = 0x14fdb4u;
    // NOP
label_14fdb8:
    // 0x14fdb8: 0x948302fe  lhu         $v1, 0x2FE($a0)
    ctx->pc = 0x14fdb8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 766)));
    // 0x14fdbc: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x14fdbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x14fdc0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14FDC0u;
    {
        const bool branch_taken_0x14fdc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14FDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FDC0u;
        // 0x14fdc4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fdc0) {
            ctx->pc = 0x14FDD0u;
            goto label_14fdd0;
        }
    }
    ctx->pc = 0x14FDC8u;
    // 0x14fdc8: 0x28620500  slti        $v0, $v1, 0x500
    ctx->pc = 0x14fdc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1280) ? 1 : 0);
    // 0x14fdcc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x14fdccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14fdd0:
    // 0x14fdd0: 0x30e200ff  andi        $v0, $a3, 0xFF
    ctx->pc = 0x14fdd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x14fdd4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14FDD4u;
    {
        const bool branch_taken_0x14fdd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FDD4u;
        // 0x14fdd8: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fdd4) {
            ctx->pc = 0x14FDF0u;
            goto label_14fdf0;
        }
    }
    ctx->pc = 0x14FDDCu;
    // 0x14fddc: 0xdc820538  ld          $v0, 0x538($a0)
    ctx->pc = 0x14fddcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 1336)));
    // 0x14fde0: 0x14450004  bne         $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x14FDE0u;
    {
        const bool branch_taken_0x14fde0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x14FDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FDE0u;
        // 0x14fde4: 0xc8102b  sltu        $v0, $a2, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fde0) {
            ctx->pc = 0x14FDF4u;
            goto label_14fdf4;
        }
    }
    ctx->pc = 0x14FDE8u;
    // 0x14fde8: 0x3e00008  jr          $ra
    ctx->pc = 0x14FDE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14FDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FDE8u;
        // 0x14fdec: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14FDE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14FDF0u;
label_14fdf0:
    // 0x14fdf0: 0xc8102b  sltu        $v0, $a2, $t0
    ctx->pc = 0x14fdf0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_14fdf4:
    // 0x14fdf4: 0x5440fff0  bnel        $v0, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x14FDF4u;
    {
        const bool branch_taken_0x14fdf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14fdf4) {
            ctx->pc = 0x14FDF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14FDF4u;
            // 0x14fdf8: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14FDB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14fdb8;
        }
    }
    ctx->pc = 0x14FDFCu;
label_14fdfc:
    // 0x14fdfc: 0x3e00008  jr          $ra
    ctx->pc = 0x14FDFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14FE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FDFCu;
        // 0x14fe00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14FDFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14FE04u;
    // 0x14fe04: 0x0  nop
    ctx->pc = 0x14fe04u;
    // NOP
    ctx->pc = 0x14fe08u;
}
