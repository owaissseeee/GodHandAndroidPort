#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r022_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r022
{
// Function: move_Get__5cR022
// Address: 0x79ae28 - 0x79b040
void move_Get__5cR022_0x79ae28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("move_Get__5cR022_0x79ae28");
#endif

    switch (ctx->pc) {
        case 0x79aec4u: goto label_79aec4;
        case 0x79af90u: goto label_79af90;
        case 0x79b01cu: goto label_79b01c;
        default: break;
    }

    ctx->pc = 0x79ae28u;

    // 0x79ae28: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x79ae28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x79ae2c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x79ae2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x79ae30: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x79ae30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x79ae34: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x79ae34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x79ae38: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x79ae38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ae3c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x79ae3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x79ae40: 0x24427a24  addiu       $v0, $v0, 0x7A24
    ctx->pc = 0x79ae40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31268));
    // 0x79ae44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79ae44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79ae48: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x79ae48u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A28u));
    // 0x79ae4c: 0x4610007  bgez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x79AE4Cu;
    {
        const bool branch_taken_0x79ae4c = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x79AE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AE4Cu;
        // 0x79ae50: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ae4c) {
            ctx->pc = 0x79AE6Cu;
            goto label_79ae6c;
        }
    }
    ctx->pc = 0x79AE54u;
    // 0x79ae54: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x79ae54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x79ae58: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x79ae58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x79ae5c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79AE5Cu;
    {
        const bool branch_taken_0x79ae5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AE5Cu;
        // 0x79ae60: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ae5c) {
            ctx->pc = 0x79AE6Cu;
            goto label_79ae6c;
        }
    }
    ctx->pc = 0x79AE64u;
    // 0x79ae64: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x79AE64u;
    {
        const bool branch_taken_0x79ae64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AE64u;
        // 0x79ae68: 0xa6020000  sh          $v0, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ae64) {
            ctx->pc = 0x79B028u;
            goto label_79b028;
        }
    }
    ctx->pc = 0x79AE6Cu;
label_79ae6c:
    // 0x79ae6c: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x79ae6cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x79ae70: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x79ae70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79ae74: 0x10710049  beq         $v1, $s1, . + 4 + (0x49 << 2)
    ctx->pc = 0x79AE74u;
    {
        const bool branch_taken_0x79ae74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x79AE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AE74u;
        // 0x79ae78: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ae74) {
            ctx->pc = 0x79AF9Cu;
            goto label_79af9c;
        }
    }
    ctx->pc = 0x79AE7Cu;
    // 0x79ae7c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x79AE7Cu;
    {
        const bool branch_taken_0x79ae7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79ae7c) {
            ctx->pc = 0x79AE80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AE7Cu;
            // 0x79ae80: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AE94u;
            goto label_79ae94;
        }
    }
    ctx->pc = 0x79AE84u;
    // 0x79ae84: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x79AE84u;
    {
        const bool branch_taken_0x79ae84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x79ae84) {
            ctx->pc = 0x79AE88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AE84u;
            // 0x79ae88: 0x8e0500c0  lw          $a1, 0xC0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AEA4u;
            goto label_79aea4;
        }
    }
    ctx->pc = 0x79AE8Cu;
    // 0x79ae8c: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x79AE8Cu;
    {
        const bool branch_taken_0x79ae8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AE8Cu;
        // 0x79ae90: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ae8c) {
            ctx->pc = 0x79B02Cu;
            goto label_79b02c;
        }
    }
    ctx->pc = 0x79AE94u;
label_79ae94:
    // 0x79ae94: 0x10620054  beq         $v1, $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x79AE94u;
    {
        const bool branch_taken_0x79ae94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x79AE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AE94u;
        // 0x79ae98: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ae94) {
            ctx->pc = 0x79AFE8u;
            goto label_79afe8;
        }
    }
    ctx->pc = 0x79AE9Cu;
    // 0x79ae9c: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x79AE9Cu;
    {
        const bool branch_taken_0x79ae9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AE9Cu;
        // 0x79aea0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ae9c) {
            ctx->pc = 0x79B02Cu;
            goto label_79b02c;
        }
    }
    ctx->pc = 0x79AEA4u;
label_79aea4:
    // 0x79aea4: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x79aea4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x79aea8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x79aea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x79aeac: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x79aeacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x79aeb0: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x79aeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x79aeb4: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x79aeb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x79aeb8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x79aeb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x79aebc: 0xc07e99e  jal         func_1FA678
    ctx->pc = 0x79AEBCu;
    SET_GPR_U32(ctx, 31, 0x79AEC4u);
    ctx->pc = 0x79AEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AEBCu;
    // 0x79aec0: 0xaca2002c  sw          $v0, 0x2C($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA678u, 0x79AEBCu, 0x79AEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AEC4u;
label_79aec4:
    // 0x79aec4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x79aec4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aec8: 0x10710008  beq         $v1, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x79AEC8u;
    {
        const bool branch_taken_0x79aec8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x79AECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AEC8u;
        // 0x79aecc: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aec8) {
            ctx->pc = 0x79AEECu;
            goto label_79aeec;
        }
    }
    ctx->pc = 0x79AED0u;
    // 0x79aed0: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x79AED0u;
    {
        const bool branch_taken_0x79aed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AED0u;
        // 0x79aed4: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aed0) {
            ctx->pc = 0x79AF70u;
            goto label_79af70;
        }
    }
    ctx->pc = 0x79AED8u;
    // 0x79aed8: 0x14600026  bnez        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x79AED8u;
    {
        const bool branch_taken_0x79aed8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AED8u;
        // 0x79aedc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aed8) {
            ctx->pc = 0x79AF74u;
            goto label_79af74;
        }
    }
    ctx->pc = 0x79AEE0u;
    // 0x79aee0: 0x8e0400bc  lw          $a0, 0xBC($s0)
    ctx->pc = 0x79aee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x79aee4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x79AEE4u;
    {
        const bool branch_taken_0x79aee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AEE4u;
        // 0x79aee8: 0x24031001  addiu       $v1, $zero, 0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aee4) {
            ctx->pc = 0x79AF44u;
            goto label_79af44;
        }
    }
    ctx->pc = 0x79AEECu;
label_79aeec:
    // 0x79aeec: 0x26427a24  addiu       $v0, $s2, 0x7A24
    ctx->pc = 0x79aeecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 31268));
    // 0x79aef0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x79aef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x79aef4: 0x460000b  bltz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x79AEF4u;
    {
        const bool branch_taken_0x79aef4 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x79AEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AEF4u;
        // 0x79aef8: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aef4) {
            ctx->pc = 0x79AF24u;
            goto label_79af24;
        }
    }
    ctx->pc = 0x79AEFCu;
    // 0x79aefc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x79aefcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x79af00: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x79AF00u;
    {
        const bool branch_taken_0x79af00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AF00u;
        // 0x79af04: 0x26427a24  addiu       $v0, $s2, 0x7A24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 31268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79af00) {
            ctx->pc = 0x79AF28u;
            goto label_79af28;
        }
    }
    ctx->pc = 0x79AF08u;
    // 0x79af08: 0x8e0400bc  lw          $a0, 0xBC($s0)
    ctx->pc = 0x79af08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x79af0c: 0x24031000  addiu       $v1, $zero, 0x1000
    ctx->pc = 0x79af0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x79af10: 0x24051001  addiu       $a1, $zero, 0x1001
    ctx->pc = 0x79af10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
    // 0x79af14: 0xa4830090  sh          $v1, 0x90($a0)
    ctx->pc = 0x79af14u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 144), (uint16_t)GPR_U32(ctx, 3));
    // 0x79af18: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x79af18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x79af1c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x79AF1Cu;
    {
        const bool branch_taken_0x79af1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AF1Cu;
        // 0x79af20: 0xa4450090  sh          $a1, 0x90($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 144), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79af1c) {
            ctx->pc = 0x79AF6Cu;
            goto label_79af6c;
        }
    }
    ctx->pc = 0x79AF24u;
label_79af24:
    // 0x79af24: 0x26427a24  addiu       $v0, $s2, 0x7A24
    ctx->pc = 0x79af24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 31268));
label_79af28:
    // 0x79af28: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x79af28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
    // 0x79af2c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x79af2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x79af30: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x79af30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x79af34: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x79AF34u;
    {
        const bool branch_taken_0x79af34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AF34u;
        // 0x79af38: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79af34) {
            ctx->pc = 0x79AF70u;
            goto label_79af70;
        }
    }
    ctx->pc = 0x79AF3Cu;
    // 0x79af3c: 0x8e0400bc  lw          $a0, 0xBC($s0)
    ctx->pc = 0x79af3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x79af40: 0x24031000  addiu       $v1, $zero, 0x1000
    ctx->pc = 0x79af40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_79af44:
    // 0x79af44: 0x24051002  addiu       $a1, $zero, 0x1002
    ctx->pc = 0x79af44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4098));
    // 0x79af48: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x79af48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x79af4c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79af4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79af50: 0xa4830090  sh          $v1, 0x90($a0)
    ctx->pc = 0x79af50u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 144), (uint16_t)GPR_U32(ctx, 3));
    // 0x79af54: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x79af54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x79af58: 0xa4450090  sh          $a1, 0x90($v0)
    ctx->pc = 0x79af58u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 144), (uint16_t)GPR_U32(ctx, 5));
    // 0x79af5c: 0x8e0300bc  lw          $v1, 0xBC($s0)
    ctx->pc = 0x79af5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x79af60: 0xc460003c  lwc1        $f0, 0x3C($v1)
    ctx->pc = 0x79af60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79af64: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x79af64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x79af68: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x79af68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
label_79af6c:
    // 0x79af6c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79af6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_79af70:
    // 0x79af70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79af70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79af74:
    // 0x79af74: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x79af74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x79af78: 0x24060161  addiu       $a2, $zero, 0x161
    ctx->pc = 0x79af78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
    // 0x79af7c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79af7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79af80: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79af80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79af84: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79af84u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79af88: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x79AF88u;
    SET_GPR_U32(ctx, 31, 0x79AF90u);
    ctx->pc = 0x79AF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AF88u;
    // 0x79af8c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79AF88u, 0x79AF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AF90u;
label_79af90:
    // 0x79af90: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x79af90u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x79af94: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x79af94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x79af98: 0xa6030002  sh          $v1, 0x2($s0)
    ctx->pc = 0x79af98u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 3));
label_79af9c:
    // 0x79af9c: 0x8e0200b8  lw          $v0, 0xB8($s0)
    ctx->pc = 0x79af9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x79afa0: 0x3c0142a0  lui         $at, 0x42A0
    ctx->pc = 0x79afa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17056 << 16));
    // 0x79afa4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79afa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79afa8: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x79afa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79afac: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x79afacu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x79afb0: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x79afb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x79afb4: 0x8e0300b8  lw          $v1, 0xB8($s0)
    ctx->pc = 0x79afb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x79afb8: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x79afb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x79afbc: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x79afbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79afc0: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x79afc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79afc4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x79afc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79afc8: 0x0  nop
    ctx->pc = 0x79afc8u;
    // NOP
    // 0x79afcc: 0x45020017  bc1fl       . + 4 + (0x17 << 2)
    ctx->pc = 0x79AFCCu;
    {
        const bool branch_taken_0x79afcc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x79afcc) {
            ctx->pc = 0x79AFD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AFCCu;
            // 0x79afd0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B02Cu;
            goto label_79b02c;
        }
    }
    ctx->pc = 0x79AFD4u;
    // 0x79afd4: 0xe4610038  swc1        $f1, 0x38($v1)
    ctx->pc = 0x79afd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x79afd8: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x79afd8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x79afdc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79afdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79afe0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x79AFE0u;
    {
        const bool branch_taken_0x79afe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AFE0u;
        // 0x79afe4: 0xa6020002  sh          $v0, 0x2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79afe0) {
            ctx->pc = 0x79B028u;
            goto label_79b028;
        }
    }
    ctx->pc = 0x79AFE8u;
label_79afe8:
    // 0x79afe8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x79afe8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x79afec: 0xdc437640  ld          $v1, 0x7640($v0)
    ctx->pc = 0x79afecu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 30272)));
    // 0x79aff0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x79aff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x79aff4: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x79AFF4u;
    {
        const bool branch_taken_0x79aff4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AFF4u;
        // 0x79aff8: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aff4) {
            ctx->pc = 0x79B028u;
            goto label_79b028;
        }
    }
    ctx->pc = 0x79AFFCu;
    // 0x79affc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79affcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b000: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x79b000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x79b004: 0x2406015e  addiu       $a2, $zero, 0x15E
    ctx->pc = 0x79b004u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x79b008: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79b008u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79b00c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79b00cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79b010: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79b010u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b014: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x79B014u;
    SET_GPR_U32(ctx, 31, 0x79B01Cu);
    ctx->pc = 0x79B018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B014u;
    // 0x79b018: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79B014u, 0x79B01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B01Cu;
label_79b01c:
    // 0x79b01c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x79b01cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x79b020: 0xa6000002  sh          $zero, 0x2($s0)
    ctx->pc = 0x79b020u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x79b024: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x79b024u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
label_79b028:
    // 0x79b028: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x79b028u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_79b02c:
    // 0x79b02c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x79b02cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79b030: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x79b030u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79b034: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79b034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79b038: 0x3e00008  jr          $ra
    ctx->pc = 0x79B038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B038u;
        // 0x79b03c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B038u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B040u;
}
} // namespace gh_r022
