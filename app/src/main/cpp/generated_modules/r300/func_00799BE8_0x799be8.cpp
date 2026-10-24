#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r300_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r300
{
// Function: func_00799BE8
// Address: 0x799be8 - 0x799d10
void func_00799BE8_0x799be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799BE8_0x799be8");
#endif

    switch (ctx->pc) {
        case 0x799c14u: goto label_799c14;
        case 0x799c18u: goto label_799c18;
        case 0x799c50u: goto label_799c50;
        case 0x799d04u: goto label_799d04;
        default: break;
    }

    ctx->pc = 0x799be8u;

    // 0x799be8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x799be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x799bec: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x799becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x799bf0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x799bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x799bf4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799bf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x799bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x799bfc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799c00: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x799c00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799c04: 0x8c432f84  lw          $v1, 0x2F84($v0)
    ctx->pc = 0x799c04u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x799c08: 0x3c100075  lui         $s0, 0x75
    ctx->pc = 0x799c08u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)117 << 16));
    // 0x799c0c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799C0Cu;
    SET_GPR_U32(ctx, 31, 0x799C14u);
    ctx->pc = 0x799C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C0Cu;
    // 0x799c10: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799C0Cu, 0x799C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C14u;
label_799c14:
    // 0x799c14: 0x8e024c30  lw          $v0, 0x4C30($s0)
    ctx->pc = 0x799c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 19504)));
label_799c18:
    // 0x799c18: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x799c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x799c1c: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x799c1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x799c20: 0x10c30034  beq         $a2, $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x799C20u;
    {
        const bool branch_taken_0x799c20 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x799C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C20u;
        // 0x799c24: 0x240f03b3  addiu       $t7, $zero, 0x3B3 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 947));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c20) {
            ctx->pc = 0x799CF4u;
            goto label_799cf4;
        }
    }
    ctx->pc = 0x799C28u;
    // 0x799c28: 0x3c0e8000  lui         $t6, 0x8000
    ctx->pc = 0x799c28u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)32768 << 16));
    // 0x799c2c: 0x3c0d007a  lui         $t5, 0x7A
    ctx->pc = 0x799c2cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)122 << 16));
    // 0x799c30: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x799c30u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
    // 0x799c34: 0x3c0c2000  lui         $t4, 0x2000
    ctx->pc = 0x799c34u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)8192 << 16));
    // 0x799c38: 0x3c0b1000  lui         $t3, 0x1000
    ctx->pc = 0x799c38u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)4096 << 16));
    // 0x799c3c: 0x3c0a0800  lui         $t2, 0x800
    ctx->pc = 0x799c3cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)2048 << 16));
    // 0x799c40: 0x3c090400  lui         $t1, 0x400
    ctx->pc = 0x799c40u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)1024 << 16));
    // 0x799c44: 0x3c080075  lui         $t0, 0x75
    ctx->pc = 0x799c44u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)117 << 16));
    // 0x799c48: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x799c48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799c4c: 0x0  nop
    ctx->pc = 0x799c4cu;
    // NOP
label_799c50:
    // 0x799c50: 0x94a202fe  lhu         $v0, 0x2FE($a1)
    ctx->pc = 0x799c50u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 766)));
    // 0x799c54: 0x144f0022  bne         $v0, $t7, . + 4 + (0x22 << 2)
    ctx->pc = 0x799C54u;
    {
        const bool branch_taken_0x799c54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x799C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C54u;
        // 0x799c58: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c54) {
            ctx->pc = 0x799CE0u;
            goto label_799ce0;
        }
    }
    ctx->pc = 0x799C5Cu;
    // 0x799c5c: 0x8c820250  lw          $v0, 0x250($a0)
    ctx->pc = 0x799c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 592)));
    // 0x799c60: 0x4e1024  and         $v0, $v0, $t6
    ctx->pc = 0x799c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
    // 0x799c64: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x799C64u;
    {
        const bool branch_taken_0x799c64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C64u;
        // 0x799c68: 0x8da3ae80  lw          $v1, -0x5180($t5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294946432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c64) {
            ctx->pc = 0x799CE0u;
            goto label_799ce0;
        }
    }
    ctx->pc = 0x799C6Cu;
    // 0x799c6c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x799c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x799c70: 0x54440006  bnel        $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x799C70u;
    {
        const bool branch_taken_0x799c70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x799c70) {
            ctx->pc = 0x799C74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799C70u;
            // 0x799c74: 0x8c620070  lw          $v0, 0x70($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799C8Cu;
            goto label_799c8c;
        }
    }
    ctx->pc = 0x799C78u;
    // 0x799c78: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x799c78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
    // 0x799c7c: 0x8ce38658  lw          $v1, -0x79A8($a3)
    ctx->pc = 0x799c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294936152)));
    // 0x799c80: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x799c84: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x799C84u;
    {
        const bool branch_taken_0x799c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C84u;
        // 0x799c88: 0x4c1025  or          $v0, $v0, $t4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c84) {
            ctx->pc = 0x799CDCu;
            goto label_799cdc;
        }
    }
    ctx->pc = 0x799C8Cu;
label_799c8c:
    // 0x799c8c: 0x54440006  bnel        $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x799C8Cu;
    {
        const bool branch_taken_0x799c8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x799c8c) {
            ctx->pc = 0x799C90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799C8Cu;
            // 0x799c90: 0x8c6200c0  lw          $v0, 0xC0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799CA8u;
            goto label_799ca8;
        }
    }
    ctx->pc = 0x799C94u;
    // 0x799c94: 0xac600070  sw          $zero, 0x70($v1)
    ctx->pc = 0x799c94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 112), GPR_U32(ctx, 0));
    // 0x799c98: 0x8ce38658  lw          $v1, -0x79A8($a3)
    ctx->pc = 0x799c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294936152)));
    // 0x799c9c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x799ca0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x799CA0u;
    {
        const bool branch_taken_0x799ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CA0u;
        // 0x799ca4: 0x4b1025  or          $v0, $v0, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ca0) {
            ctx->pc = 0x799CDCu;
            goto label_799cdc;
        }
    }
    ctx->pc = 0x799CA8u;
label_799ca8:
    // 0x799ca8: 0x54440006  bnel        $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x799CA8u;
    {
        const bool branch_taken_0x799ca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x799ca8) {
            ctx->pc = 0x799CACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799CA8u;
            // 0x799cac: 0x8c620110  lw          $v0, 0x110($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 272)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799CC4u;
            goto label_799cc4;
        }
    }
    ctx->pc = 0x799CB0u;
    // 0x799cb0: 0xac6000c0  sw          $zero, 0xC0($v1)
    ctx->pc = 0x799cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 192), GPR_U32(ctx, 0));
    // 0x799cb4: 0x8ce38658  lw          $v1, -0x79A8($a3)
    ctx->pc = 0x799cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294936152)));
    // 0x799cb8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x799cbc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x799CBCu;
    {
        const bool branch_taken_0x799cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CBCu;
        // 0x799cc0: 0x4a1025  or          $v0, $v0, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799cbc) {
            ctx->pc = 0x799CDCu;
            goto label_799cdc;
        }
    }
    ctx->pc = 0x799CC4u;
label_799cc4:
    // 0x799cc4: 0x54450007  bnel        $v0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x799CC4u;
    {
        const bool branch_taken_0x799cc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x799cc4) {
            ctx->pc = 0x799CC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799CC4u;
            // 0x799cc8: 0x8d034c30  lw          $v1, 0x4C30($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 19504)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799CE4u;
            goto label_799ce4;
        }
    }
    ctx->pc = 0x799CCCu;
    // 0x799ccc: 0xac600110  sw          $zero, 0x110($v1)
    ctx->pc = 0x799cccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 272), GPR_U32(ctx, 0));
    // 0x799cd0: 0x8ce38658  lw          $v1, -0x79A8($a3)
    ctx->pc = 0x799cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294936152)));
    // 0x799cd4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x799cd8: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x799cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
label_799cdc:
    // 0x799cdc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x799cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_799ce0:
    // 0x799ce0: 0x8d034c30  lw          $v1, 0x4C30($t0)
    ctx->pc = 0x799ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 19504)));
label_799ce4:
    // 0x799ce4: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x799ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x799ce8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x799ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x799cec: 0x54c2ffd8  bnel        $a2, $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x799CECu;
    {
        const bool branch_taken_0x799cec = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x799cec) {
            ctx->pc = 0x799CF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799CECu;
            // 0x799cf0: 0x8cc50000  lw          $a1, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799C50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799c50;
        }
    }
    ctx->pc = 0x799CF4u;
label_799cf4:
    // 0x799cf4: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x799cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x799cf8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799cfc: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799CFCu;
    SET_GPR_U32(ctx, 31, 0x799D04u);
    ctx->pc = 0x799D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799CFCu;
    // 0x799d00: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799CFCu, 0x799D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D04u;
label_799d04:
    // 0x799d04: 0x1000ffc4  b           . + 4 + (-0x3C << 2)
    ctx->pc = 0x799D04u;
    {
        const bool branch_taken_0x799d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D04u;
        // 0x799d08: 0x8e024c30  lw          $v0, 0x4C30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 19504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d04) {
            ctx->pc = 0x799C18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799c18;
        }
    }
    ctx->pc = 0x799D0Cu;
    // 0x799d0c: 0x0  nop
    ctx->pc = 0x799d0cu;
    // NOP
    ctx->pc = 0x799d10u;
}
} // namespace gh_r300
