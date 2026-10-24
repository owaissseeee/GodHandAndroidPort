#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r600_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r600
{
// Function: getLastedDie__FP7cEmWrapi
// Address: 0x79ae08 - 0x79af38
void getLastedDie__FP7cEmWrapi_0x79ae08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getLastedDie__FP7cEmWrapi_0x79ae08");
#endif

    switch (ctx->pc) {
        case 0x79ae70u: goto label_79ae70;
        case 0x79ae88u: goto label_79ae88;
        case 0x79aea0u: goto label_79aea0;
        case 0x79aeb4u: goto label_79aeb4;
        case 0x79aef8u: goto label_79aef8;
        default: break;
    }

    ctx->pc = 0x79ae08u;

    // 0x79ae08: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x79ae08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x79ae0c: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x79ae0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x79ae10: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x79ae10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ae14: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x79ae14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x79ae18: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x79ae18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x79ae1c: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x79ae1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x79ae20: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x79ae20u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x79ae24: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x79ae24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x79ae28: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x79ae28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x79ae2c: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x79ae2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x79ae30: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x79ae30u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x79ae34: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x79ae34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x79ae38: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x79ae38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x79ae3c: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x79ae3cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ae40: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x79ae40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x79ae44: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x79ae44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x79ae48: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x79ae48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x79ae4c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x79ae4cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ae50: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x79ae50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x79ae54: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x79ae54u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ae58: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x79ae58u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x79ae5c: 0x3a2e823  subu        $sp, $sp, $v0
    ctx->pc = 0x79ae5cu;
    SET_GPR_S32(ctx, 29, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x79ae60: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x79ae60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ae64: 0x1a600008  blez        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x79AE64u;
    {
        const bool branch_taken_0x79ae64 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x79AE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AE64u;
        // 0x79ae68: 0x3a0b02d  daddu       $s6, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ae64) {
            ctx->pc = 0x79AE88u;
            goto label_79ae88;
        }
    }
    ctx->pc = 0x79AE6Cu;
    // 0x79ae6c: 0x0  nop
    ctx->pc = 0x79ae6cu;
    // NOP
label_79ae70:
    // 0x79ae70: 0x2c41821  addu        $v1, $s6, $a0
    ctx->pc = 0x79ae70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
    // 0x79ae74: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x79ae74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x79ae78: 0x93102a  slt         $v0, $a0, $s3
    ctx->pc = 0x79ae78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x79ae7c: 0x0  nop
    ctx->pc = 0x79ae7cu;
    // NOP
    // 0x79ae80: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x79AE80u;
    {
        const bool branch_taken_0x79ae80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AE80u;
        // 0x79ae84: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ae80) {
            ctx->pc = 0x79AE70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79ae70;
        }
    }
    ctx->pc = 0x79AE88u;
label_79ae88:
    // 0x79ae88: 0x1a600014  blez        $s3, . + 4 + (0x14 << 2)
    ctx->pc = 0x79AE88u;
    {
        const bool branch_taken_0x79ae88 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x79AE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AE88u;
        // 0x79ae8c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ae88) {
            ctx->pc = 0x79AEDCu;
            goto label_79aedc;
        }
    }
    ctx->pc = 0x79AE90u;
    // 0x79ae90: 0x8fd20000  lw          $s2, 0x0($fp)
    ctx->pc = 0x79ae90u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x79ae94: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x79ae94u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79ae98: 0x2c0802d  daddu       $s0, $s6, $zero
    ctx->pc = 0x79ae98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ae9c: 0x0  nop
    ctx->pc = 0x79ae9cu;
    // NOP
label_79aea0:
    // 0x79aea0: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x79aea0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x79aea4: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x79AEA4u;
    {
        const bool branch_taken_0x79aea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79aea4) {
            ctx->pc = 0x79AEA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AEA4u;
            // 0x79aea8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AECCu;
            goto label_79aecc;
        }
    }
    ctx->pc = 0x79AEACu;
    // 0x79aeac: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x79AEACu;
    SET_GPR_U32(ctx, 31, 0x79AEB4u);
    ctx->pc = 0x79AEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AEACu;
    // 0x79aeb0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x79AEACu, 0x79AEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AEB4u;
label_79aeb4:
    // 0x79aeb4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x79AEB4u;
    {
        const bool branch_taken_0x79aeb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79aeb4) {
            ctx->pc = 0x79AEB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AEB4u;
            // 0x79aeb8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AECCu;
            goto label_79aecc;
        }
    }
    ctx->pc = 0x79AEBCu;
    // 0x79aebc: 0xa2150000  sb          $s5, 0x0($s0)
    ctx->pc = 0x79aebcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 21));
    // 0x79aec0: 0x220b82d  daddu       $s7, $s1, $zero
    ctx->pc = 0x79aec0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aec4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x79aec4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x79aec8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x79aec8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_79aecc:
    // 0x79aecc: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x79aeccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x79aed0: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x79aed0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x79aed4: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x79AED4u;
    {
        const bool branch_taken_0x79aed4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AED4u;
        // 0x79aed8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aed4) {
            ctx->pc = 0x79AEA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79aea0;
        }
    }
    ctx->pc = 0x79AEDCu;
label_79aedc:
    // 0x79aedc: 0x293102a  slt         $v0, $s4, $s3
    ctx->pc = 0x79aedcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x79aee0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x79AEE0u;
    {
        const bool branch_taken_0x79aee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AEE0u;
        // 0x79aee4: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aee0) {
            ctx->pc = 0x79AF00u;
            goto label_79af00;
        }
    }
    ctx->pc = 0x79AEE8u;
    // 0x79aee8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79aee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79aeec: 0x8c622f84  lw          $v0, 0x2F84($v1)
    ctx->pc = 0x79aeecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12164)));
    // 0x79aef0: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79AEF0u;
    SET_GPR_U32(ctx, 31, 0x79AEF8u);
    ctx->pc = 0x79AEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AEF0u;
    // 0x79aef4: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79AEF0u, 0x79AEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AEF8u;
label_79aef8:
    // 0x79aef8: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x79AEF8u;
    {
        const bool branch_taken_0x79aef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x79aef8) {
            ctx->pc = 0x79AE88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79ae88;
        }
    }
    ctx->pc = 0x79AF00u;
label_79af00:
    // 0x79af00: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x79af00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79af04: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x79af04u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79af08: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x79af08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x79af0c: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x79af0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x79af10: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x79af10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x79af14: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x79af14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x79af18: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x79af18u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x79af1c: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x79af1cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x79af20: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x79af20u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79af24: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x79af24u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79af28: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x79af28u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79af2c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x79af2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79af30: 0x3e00008  jr          $ra
    ctx->pc = 0x79AF30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AF30u;
        // 0x79af34: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AF30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AF38u;
}
} // namespace gh_r600
