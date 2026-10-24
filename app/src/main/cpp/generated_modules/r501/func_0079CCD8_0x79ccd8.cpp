#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r501_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r501
{
// Function: func_0079CCD8
// Address: 0x79ccd8 - 0x79cf18
void func_0079CCD8_0x79ccd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079CCD8_0x79ccd8");
#endif

    switch (ctx->pc) {
        case 0x79ccecu: goto label_79ccec;
        case 0x79cd00u: goto label_79cd00;
        case 0x79cdb8u: goto label_79cdb8;
        case 0x79cdf0u: goto label_79cdf0;
        case 0x79cea0u: goto label_79cea0;
        default: break;
    }

    ctx->pc = 0x79ccd8u;

    // 0x79ccd8: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x79ccd8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ccdc: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x79ccdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x79cce0: 0x2c820002  sltiu       $v0, $a0, 0x2
    ctx->pc = 0x79cce0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x79cce4: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x79CCE4u;
    {
        const bool branch_taken_0x79cce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79cce4) {
            ctx->pc = 0x79CCE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79CCE4u;
            // 0x79cce8: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79CCF4u;
            goto label_79ccf4;
        }
    }
    ctx->pc = 0x79CCECu;
label_79ccec:
    // 0x79ccec: 0x3e00008  jr          $ra
    ctx->pc = 0x79CCECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79CCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CCECu;
        // 0x79ccf0: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79CCECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79CCF4u;
label_79ccf4:
    // 0x79ccf4: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x79ccf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x79ccf8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79CCF8u;
    {
        const bool branch_taken_0x79ccf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79CCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CCF8u;
        // 0x79ccfc: 0x38820004  xori        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ccf8) {
            ctx->pc = 0x79CD08u;
            goto label_79cd08;
        }
    }
    ctx->pc = 0x79CD00u;
label_79cd00:
    // 0x79cd00: 0x3e00008  jr          $ra
    ctx->pc = 0x79CD00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79CD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CD00u;
        // 0x79cd04: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79CD00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79CD08u;
label_79cd08:
    // 0x79cd08: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x79CD08u;
    {
        const bool branch_taken_0x79cd08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79CD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CD08u;
        // 0x79cd0c: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79cd08) {
            ctx->pc = 0x79CD30u;
            goto label_79cd30;
        }
    }
    ctx->pc = 0x79CD10u;
    // 0x79cd10: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x79CD10u;
    {
        const bool branch_taken_0x79cd10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79cd10) {
            ctx->pc = 0x79CCECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79ccec;
        }
    }
    ctx->pc = 0x79CD18u;
    // 0x79cd18: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x79cd18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x79cd1c: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x79cd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x79cd20: 0x1043fff2  beq         $v0, $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x79CD20u;
    {
        const bool branch_taken_0x79cd20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x79CD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CD20u;
        // 0x79cd24: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79cd20) {
            ctx->pc = 0x79CCECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79ccec;
        }
    }
    ctx->pc = 0x79CD28u;
    // 0x79cd28: 0x3e00008  jr          $ra
    ctx->pc = 0x79CD28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79CD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CD28u;
        // 0x79cd2c: 0x244209f8  addiu       $v0, $v0, 0x9F8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2552));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79CD28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79CD30u;
label_79cd30:
    // 0x79cd30: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x79CD30u;
    {
        const bool branch_taken_0x79cd30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79CD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CD30u;
        // 0x79cd34: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79cd30) {
            ctx->pc = 0x79CD00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79cd00;
        }
    }
    ctx->pc = 0x79CD38u;
    // 0x79cd38: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x79CD38u;
    {
        const bool branch_taken_0x79cd38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79CD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CD38u;
        // 0x79cd3c: 0x38820002  xori        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79cd38) {
            ctx->pc = 0x79CD74u;
            goto label_79cd74;
        }
    }
    ctx->pc = 0x79CD40u;
    // 0x79cd40: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x79CD40u;
    {
        const bool branch_taken_0x79cd40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79CD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CD40u;
        // 0x79cd44: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79cd40) {
            ctx->pc = 0x79CCECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79ccec;
        }
    }
    ctx->pc = 0x79CD48u;
    // 0x79cd48: 0xdd040000  ld          $a0, 0x0($t0)
    ctx->pc = 0x79cd48u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x79cd4c: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x79cd4cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x79cd50: 0xdd030008  ld          $v1, 0x8($t0)
    ctx->pc = 0x79cd50u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x79cd54: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x79cd54u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x79cd58: 0xdd040010  ld          $a0, 0x10($t0)
    ctx->pc = 0x79cd58u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x79cd5c: 0xfcc40010  sd          $a0, 0x10($a2)
    ctx->pc = 0x79cd5cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 4));
    // 0x79cd60: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x79cd60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x79cd64: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x79cd64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x79cd68: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x79cd68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x79cd6c: 0x3e00008  jr          $ra
    ctx->pc = 0x79CD6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79CD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CD6Cu;
        // 0x79cd70: 0xacc30004  sw          $v1, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79CD6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79CD74u;
label_79cd74:
    // 0x79cd74: 0x1040ffe2  beqz        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x79CD74u;
    {
        const bool branch_taken_0x79cd74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79CD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CD74u;
        // 0x79cd78: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79cd74) {
            ctx->pc = 0x79CD00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79cd00;
        }
    }
    ctx->pc = 0x79CD7Cu;
    // 0x79cd7c: 0x8d070008  lw          $a3, 0x8($t0)
    ctx->pc = 0x79cd7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x79cd80: 0x8ca90008  lw          $t1, 0x8($a1)
    ctx->pc = 0x79cd80u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x79cd84: 0xdd0b0010  ld          $t3, 0x10($t0)
    ctx->pc = 0x79cd84u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x79cd88: 0xe91823  subu        $v1, $a3, $t1
    ctx->pc = 0x79cd88u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x79cd8c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x79cd8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x79cd90: 0x32023  negu        $a0, $v1
    ctx->pc = 0x79cd90u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x79cd94: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x79cd94u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x79cd98: 0x28630040  slti        $v1, $v1, 0x40
    ctx->pc = 0x79cd98u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x79cd9c: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x79CD9Cu;
    {
        const bool branch_taken_0x79cd9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79CDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CD9Cu;
        // 0x79cda0: 0xdcaa0010  ld          $t2, 0x10($a1) (Delay Slot)
        SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79cd9c) {
            ctx->pc = 0x79CE14u;
            goto label_79ce14;
        }
    }
    ctx->pc = 0x79CDA4u;
    // 0x79cda4: 0x127102a  slt         $v0, $t1, $a3
    ctx->pc = 0x79cda4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x79cda8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x79CDA8u;
    {
        const bool branch_taken_0x79cda8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79CDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CDA8u;
        // 0x79cdac: 0x8d080004  lw          $t0, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79cda8) {
            ctx->pc = 0x79CDDCu;
            goto label_79cddc;
        }
    }
    ctx->pc = 0x79CDB0u;
    // 0x79cdb0: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x79cdb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x79cdb4: 0x0  nop
    ctx->pc = 0x79cdb4u;
    // NOP
label_79cdb8:
    // 0x79cdb8: 0xa107a  dsrl        $v0, $t2, 1
    ctx->pc = 0x79cdb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) >> 1);
    // 0x79cdbc: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x79cdbcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x79cdc0: 0x31430001  andi        $v1, $t2, 0x1
    ctx->pc = 0x79cdc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x79cdc4: 0x127202a  slt         $a0, $t1, $a3
    ctx->pc = 0x79cdc4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x79cdc8: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x79cdc8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x79cdcc: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x79CDCCu;
    {
        const bool branch_taken_0x79cdcc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x79cdcc) {
            ctx->pc = 0x79CDB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79cdb8;
        }
    }
    ctx->pc = 0x79CDD4u;
    // 0x79cdd4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x79CDD4u;
    {
        const bool branch_taken_0x79cdd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79CDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CDD4u;
        // 0x79cdd8: 0xe9102a  slt         $v0, $a3, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79cdd4) {
            ctx->pc = 0x79CDE4u;
            goto label_79cde4;
        }
    }
    ctx->pc = 0x79CDDCu;
label_79cddc:
    // 0x79cddc: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x79cddcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x79cde0: 0xe9102a  slt         $v0, $a3, $t1
    ctx->pc = 0x79cde0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_79cde4:
    // 0x79cde4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x79CDE4u;
    {
        const bool branch_taken_0x79cde4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79cde4) {
            ctx->pc = 0x79CE38u;
            goto label_79ce38;
        }
    }
    ctx->pc = 0x79CDECu;
    // 0x79cdec: 0x1273823  subu        $a3, $t1, $a3
    ctx->pc = 0x79cdecu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
label_79cdf0:
    // 0x79cdf0: 0xb187a  dsrl        $v1, $t3, 1
    ctx->pc = 0x79cdf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) >> 1);
    // 0x79cdf4: 0x31620001  andi        $v0, $t3, 0x1
    ctx->pc = 0x79cdf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x79cdf8: 0x435825  or          $t3, $v0, $v1
    ctx->pc = 0x79cdf8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x79cdfc: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x79cdfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x79ce00: 0x0  nop
    ctx->pc = 0x79ce00u;
    // NOP
    // 0x79ce04: 0x14e0fffa  bnez        $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x79CE04u;
    {
        const bool branch_taken_0x79ce04 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x79ce04) {
            ctx->pc = 0x79CDF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79cdf0;
        }
    }
    ctx->pc = 0x79CE0Cu;
    // 0x79ce0c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x79CE0Cu;
    {
        const bool branch_taken_0x79ce0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79CE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CE0Cu;
        // 0x79ce10: 0x120382d  daddu       $a3, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ce0c) {
            ctx->pc = 0x79CE38u;
            goto label_79ce38;
        }
    }
    ctx->pc = 0x79CE14u;
label_79ce14:
    // 0x79ce14: 0x127102a  slt         $v0, $t1, $a3
    ctx->pc = 0x79ce14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x79ce18: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x79CE18u;
    {
        const bool branch_taken_0x79ce18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79CE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CE18u;
        // 0x79ce1c: 0x8d080004  lw          $t0, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ce18) {
            ctx->pc = 0x79CE2Cu;
            goto label_79ce2c;
        }
    }
    ctx->pc = 0x79CE20u;
    // 0x79ce20: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x79ce20u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ce24: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x79CE24u;
    {
        const bool branch_taken_0x79ce24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79CE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CE24u;
        // 0x79ce28: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ce24) {
            ctx->pc = 0x79CE38u;
            goto label_79ce38;
        }
    }
    ctx->pc = 0x79CE2Cu;
label_79ce2c:
    // 0x79ce2c: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x79ce2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ce30: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x79ce30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x79ce34: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x79ce34u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79ce38:
    // 0x79ce38: 0x11050024  beq         $t0, $a1, . + 4 + (0x24 << 2)
    ctx->pc = 0x79CE38u;
    {
        const bool branch_taken_0x79ce38 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 5));
        ctx->pc = 0x79CE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CE38u;
        // 0x79ce3c: 0x16a102d  daddu       $v0, $t3, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ce38) {
            ctx->pc = 0x79CECCu;
            goto label_79cecc;
        }
    }
    ctx->pc = 0x79CE40u;
    // 0x79ce40: 0x15000002  bnez        $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x79CE40u;
    {
        const bool branch_taken_0x79ce40 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x79CE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CE40u;
        // 0x79ce44: 0x14b102f  dsubu       $v0, $t2, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) - GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ce40) {
            ctx->pc = 0x79CE4Cu;
            goto label_79ce4c;
        }
    }
    ctx->pc = 0x79CE48u;
    // 0x79ce48: 0x16a102f  dsubu       $v0, $t3, $t2
    ctx->pc = 0x79ce48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) - GPR_U64(ctx, 10));
label_79ce4c:
    // 0x79ce4c: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79CE4Cu;
    {
        const bool branch_taken_0x79ce4c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x79CE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CE4Cu;
        // 0x79ce50: 0x2182f  dsubu       $v1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ce4c) {
            ctx->pc = 0x79CE64u;
            goto label_79ce64;
        }
    }
    ctx->pc = 0x79CE54u;
    // 0x79ce54: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x79ce54u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x79ce58: 0xfcc20010  sd          $v0, 0x10($a2)
    ctx->pc = 0x79ce58u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
    // 0x79ce5c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x79CE5Cu;
    {
        const bool branch_taken_0x79ce5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79CE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CE5Cu;
        // 0x79ce60: 0xacc00004  sw          $zero, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ce5c) {
            ctx->pc = 0x79CE74u;
            goto label_79ce74;
        }
    }
    ctx->pc = 0x79CE64u;
label_79ce64:
    // 0x79ce64: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x79ce64u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x79ce68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x79ce68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79ce6c: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x79ce6cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x79ce70: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x79ce70u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_79ce74:
    // 0x79ce74: 0xdcc50010  ld          $a1, 0x10($a2)
    ctx->pc = 0x79ce74u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x79ce78: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x79ce78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79ce7c: 0x21178  dsll        $v0, $v0, 5
    ctx->pc = 0x79ce7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 5);
    // 0x79ce80: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x79ce80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x79ce84: 0x64a3ffff  daddiu      $v1, $a1, -0x1
    ctx->pc = 0x79ce84u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
    // 0x79ce88: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x79ce88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x79ce8c: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x79CE8Cu;
    {
        const bool branch_taken_0x79ce8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79CE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CE8Cu;
        // 0x79ce90: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ce8c) {
            ctx->pc = 0x79CEDCu;
            goto label_79cedc;
        }
    }
    ctx->pc = 0x79CE94u;
    // 0x79ce94: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x79ce94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79ce98: 0x52978  dsll        $a1, $a1, 5
    ctx->pc = 0x79ce98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 5);
    // 0x79ce9c: 0x5293a  dsrl        $a1, $a1, 4
    ctx->pc = 0x79ce9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 4);
label_79cea0:
    // 0x79cea0: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x79cea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x79cea4: 0x72078  dsll        $a0, $a3, 1
    ctx->pc = 0x79cea4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << 1);
    // 0x79cea8: 0x6483ffff  daddiu      $v1, $a0, -0x1
    ctx->pc = 0x79cea8u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)4294967295);
    // 0x79ceac: 0xfcc40010  sd          $a0, 0x10($a2)
    ctx->pc = 0x79ceacu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 4));
    // 0x79ceb0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x79ceb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x79ceb4: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x79ceb4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x79ceb8: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x79ceb8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x79cebc: 0x1060fff8  beqz        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x79CEBCu;
    {
        const bool branch_taken_0x79cebc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79CEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CEBCu;
        // 0x79cec0: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79cebc) {
            ctx->pc = 0x79CEA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79cea0;
        }
    }
    ctx->pc = 0x79CEC4u;
    // 0x79cec4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x79CEC4u;
    {
        const bool branch_taken_0x79cec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79CEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CEC4u;
        // 0x79cec8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79cec4) {
            ctx->pc = 0x79CEDCu;
            goto label_79cedc;
        }
    }
    ctx->pc = 0x79CECCu;
label_79cecc:
    // 0x79cecc: 0xacc80004  sw          $t0, 0x4($a2)
    ctx->pc = 0x79ceccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
    // 0x79ced0: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x79ced0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x79ced4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x79ced4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ced8: 0xfcc20010  sd          $v0, 0x10($a2)
    ctx->pc = 0x79ced8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
label_79cedc:
    // 0x79cedc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x79cedcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x79cee0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x79cee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79cee4: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x79cee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x79cee8: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x79cee8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x79ceec: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x79CEECu;
    {
        const bool branch_taken_0x79ceec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79CEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CEECu;
        // 0x79cef0: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ceec) {
            ctx->pc = 0x79CF10u;
            goto label_79cf10;
        }
    }
    ctx->pc = 0x79CEF4u;
    // 0x79cef4: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x79cef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x79cef8: 0x5207a  dsrl        $a0, $a1, 1
    ctx->pc = 0x79cef8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) >> 1);
    // 0x79cefc: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x79cefcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x79cf00: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x79cf00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x79cf04: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79cf04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79cf08: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x79cf08u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x79cf0c: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x79cf0cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
label_79cf10:
    // 0x79cf10: 0x3e00008  jr          $ra
    ctx->pc = 0x79CF10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79CF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CF10u;
        // 0x79cf14: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79CF10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79CF18u;
}
} // namespace gh_r501
