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

// Function: cSeData_AddLoadBits
// Address: 0x2cfcb0 - 0x2cfd38
void cSeData_AddLoadBits_0x2cfcb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSeData_AddLoadBits_0x2cfcb0");
#endif

    switch (ctx->pc) {
        case 0x2cfcd4u: goto label_2cfcd4;
        case 0x2cfcecu: goto label_2cfcec;
        case 0x2cfd10u: goto label_2cfd10;
        case 0x2cfd1cu: goto label_2cfd1c;
        default: break;
    }

    ctx->pc = 0x2cfcb0u;

label_2cfcb0:
    // 0x2cfcb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cfcb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cfcb4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2cfcb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2cfcb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cfcb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cfcbc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cfcbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfcc0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2cfcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2cfcc4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2cfcc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2cfcc8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2cfcc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x2cfccc: 0xc0b3f4e  jal         func_2CFD38
    ctx->pc = 0x2CFCCCu;
    SET_GPR_U32(ctx, 31, 0x2CFCD4u);
    ctx->pc = 0x2CFCD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFCCCu;
    // 0x2cfcd0: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFD38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFD38u, 0x2CFCCCu, 0x2CFCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFCD4u;
label_2cfcd4:
    // 0x2cfcd4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2cfcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cfcd8: 0x54430013  bnel        $v0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2CFCD8u;
    {
        const bool branch_taken_0x2cfcd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2cfcd8) {
            ctx->pc = 0x2CFCDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CFCD8u;
            // 0x2cfcdc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CFD28u;
            goto label_2cfd28;
        }
    }
    ctx->pc = 0x2CFCE0u;
    // 0x2cfce0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cfce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfce4: 0xc0b3f4e  jal         func_2CFD38
    ctx->pc = 0x2CFCE4u;
    SET_GPR_U32(ctx, 31, 0x2CFCECu);
    ctx->pc = 0x2CFCE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFCE4u;
    // 0x2cfce8: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFD38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFD38u, 0x2CFCE4u, 0x2CFCECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFCECu;
label_2cfcec:
    // 0x2cfcec: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2CFCECu;
    {
        const bool branch_taken_0x2cfcec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CFCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFCECu;
        // 0x2cfcf0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfcec) {
            ctx->pc = 0x2CFD20u;
            goto label_2cfd20;
        }
    }
    ctx->pc = 0x2CFCF4u;
    // 0x2cfcf4: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x2cfcf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2cfcf8: 0x8ca60020  lw          $a2, 0x20($a1)
    ctx->pc = 0x2cfcf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x2cfcfc: 0x10c50004  beq         $a2, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CFCFCu;
    {
        const bool branch_taken_0x2cfcfc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x2CFD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFCFCu;
        // 0x2cfd00: 0xc53023  subu        $a2, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfcfc) {
            ctx->pc = 0x2CFD10u;
            goto label_2cfd10;
        }
    }
    ctx->pc = 0x2CFD04u;
    // 0x2cfd04: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2cfd04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2cfd08: 0xc0aa592  jal         func_2A9648
    ctx->pc = 0x2CFD08u;
    SET_GPR_U32(ctx, 31, 0x2CFD10u);
    ctx->pc = 0x2CFD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFD08u;
    // 0x2cfd0c: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9648u, 0x2CFD08u, 0x2CFD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFD10u;
label_2cfd10:
    // 0x2cfd10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cfd10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfd14: 0xc0b3f2c  jal         func_2CFCB0
    ctx->pc = 0x2CFD14u;
    SET_GPR_U32(ctx, 31, 0x2CFD1Cu);
    ctx->pc = 0x2CFD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFD14u;
    // 0x2cfd18: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFCB0u;
    goto label_2cfcb0;
    ctx->pc = 0x2CFD1Cu;
label_2cfd1c:
    // 0x2cfd1c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2cfd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2cfd20:
    // 0x2cfd20: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2cfd20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2cfd24: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2cfd24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2cfd28:
    // 0x2cfd28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cfd28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cfd2c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CFD2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CFD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFD2Cu;
        // 0x2cfd30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CFD2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CFD34u;
    // 0x2cfd34: 0x0  nop
    ctx->pc = 0x2cfd34u;
    // NOP
    ctx->pc = 0x2cfd38u;
}
