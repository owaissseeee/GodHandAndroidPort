#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r102_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r102
{
// Function: func_0079ADC8
// Address: 0x79adc8 - 0x79ae80
void func_0079ADC8_0x79adc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079ADC8_0x79adc8");
#endif

    switch (ctx->pc) {
        case 0x79ae08u: goto label_79ae08;
        case 0x79ae14u: goto label_79ae14;
        case 0x79ae64u: goto label_79ae64;
        default: break;
    }

    ctx->pc = 0x79adc8u;

    // 0x79adc8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x79adc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x79adcc: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x79adccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x79add0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x79add0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x79add4: 0x244474a0  addiu       $a0, $v0, 0x74A0
    ctx->pc = 0x79add4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x79add8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x79add8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x79addc: 0x240303bc  addiu       $v1, $zero, 0x3BC
    ctx->pc = 0x79addcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 956));
    // 0x79ade0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x79ade0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x79ade4: 0x3c12003c  lui         $s2, 0x3C
    ctx->pc = 0x79ade4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
    // 0x79ade8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x79ade8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x79adec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79adecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79adf0: 0x8c820610  lw          $v0, 0x610($a0)
    ctx->pc = 0x79adf0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747AB0u));
    // 0x79adf4: 0x1043000a  beq         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x79ADF4u;
    {
        const bool branch_taken_0x79adf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x79ADF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ADF4u;
        // 0x79adf8: 0x3c13005f  lui         $s3, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)95 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79adf4) {
            ctx->pc = 0x79AE20u;
            goto label_79ae20;
        }
    }
    ctx->pc = 0x79ADFCu;
    // 0x79adfc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x79adfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ae00: 0x241003bc  addiu       $s0, $zero, 0x3BC
    ctx->pc = 0x79ae00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 956));
    // 0x79ae04: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x79ae04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_79ae08:
    // 0x79ae08: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79ae08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79ae0c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79AE0Cu;
    SET_GPR_U32(ctx, 31, 0x79AE14u);
    ctx->pc = 0x79AE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AE0Cu;
    // 0x79ae10: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79AE0Cu, 0x79AE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AE14u;
label_79ae14:
    // 0x79ae14: 0x8e220610  lw          $v0, 0x610($s1)
    ctx->pc = 0x79ae14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1552)));
    // 0x79ae18: 0x1450fffb  bne         $v0, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x79AE18u;
    {
        const bool branch_taken_0x79ae18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x79AE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AE18u;
        // 0x79ae1c: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ae18) {
            ctx->pc = 0x79AE08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79ae08;
        }
    }
    ctx->pc = 0x79AE20u;
label_79ae20:
    // 0x79ae20: 0x8e638658  lw          $v1, -0x79A8($s3)
    ctx->pc = 0x79ae20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294936152)));
    // 0x79ae24: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x79ae24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x79ae28: 0x3c050200  lui         $a1, 0x200
    ctx->pc = 0x79ae28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)512 << 16));
    // 0x79ae2c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79ae2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79ae30: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x79ae30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x79ae34: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x79ae34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x79ae38: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x79ae38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x79ae3c: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x79ae3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x79ae40: 0x8e648658  lw          $a0, -0x79A8($s3)
    ctx->pc = 0x79ae40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294936152)));
    // 0x79ae44: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x79ae44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x79ae48: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x79ae48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x79ae4c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x79ae4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x79ae50: 0x8c62d6e8  lw          $v0, -0x2918($v1)
    ctx->pc = 0x79ae50u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3BD6E8u));
    // 0x79ae54: 0xa0461a14  sb          $a2, 0x1A14($v0)
    ctx->pc = 0x79ae54u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 6676), (uint8_t)GPR_U32(ctx, 6));
    // 0x79ae58: 0x8e432f84  lw          $v1, 0x2F84($s2)
    ctx->pc = 0x79ae58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x79ae5c: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79AE5Cu;
    SET_GPR_U32(ctx, 31, 0x79AE64u);
    ctx->pc = 0x79AE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AE5Cu;
    // 0x79ae60: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79AE5Cu, 0x79AE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AE64u;
label_79ae64:
    // 0x79ae64: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x79ae64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79ae68: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x79ae68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79ae6c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x79ae6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79ae70: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x79ae70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79ae74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79ae74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79ae78: 0x3e00008  jr          $ra
    ctx->pc = 0x79AE78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AE78u;
        // 0x79ae7c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AE78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AE80u;
}
} // namespace gh_r102
