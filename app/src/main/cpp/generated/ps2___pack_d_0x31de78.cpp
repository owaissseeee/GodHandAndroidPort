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

// Function: __pack_d
// Address: 0x31de78 - 0x31dfa8
void ps2___pack_d_0x31de78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___pack_d_0x31de78");
#endif

    ctx->pc = 0x31de78u;

    // 0x31de78: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x31de78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31de7c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x31de7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31de80: 0x8c880004  lw          $t0, 0x4($a0)
    ctx->pc = 0x31de80u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x31de84: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x31de84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x31de88: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31DE88u;
    {
        const bool branch_taken_0x31de88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DE88u;
        // 0x31de8c: 0xdc850010  ld          $a1, 0x10($a0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31de88) {
            ctx->pc = 0x31DEA4u;
            goto label_31dea4;
        }
    }
    ctx->pc = 0x31DE90u;
    // 0x31de90: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x31de90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x31de94: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x31de94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x31de98: 0x240707ff  addiu       $a3, $zero, 0x7FF
    ctx->pc = 0x31de98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
    // 0x31de9c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x31DE9Cu;
    {
        const bool branch_taken_0x31de9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DE9Cu;
        // 0x31dea0: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31de9c) {
            ctx->pc = 0x31DF48u;
            goto label_31df48;
        }
    }
    ctx->pc = 0x31DEA4u;
label_31dea4:
    // 0x31dea4: 0x38620004  xori        $v0, $v1, 0x4
    ctx->pc = 0x31dea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x31dea8: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x31DEA8u;
    {
        const bool branch_taken_0x31dea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31dea8) {
            ctx->pc = 0x31DEACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31DEA8u;
            // 0x31deac: 0x240707ff  addiu       $a3, $zero, 0x7FF (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31DF04u;
            goto label_31df04;
        }
    }
    ctx->pc = 0x31DEB0u;
    // 0x31deb0: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x31deb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x31deb4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31DEB4u;
    {
        const bool branch_taken_0x31deb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31deb4) {
            ctx->pc = 0x31DEC4u;
            goto label_31dec4;
        }
    }
    ctx->pc = 0x31DEBCu;
    // 0x31debc: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x31DEBCu;
    {
        const bool branch_taken_0x31debc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DEBCu;
        // 0x31dec0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31debc) {
            ctx->pc = 0x31DF48u;
            goto label_31df48;
        }
    }
    ctx->pc = 0x31DEC4u;
label_31dec4:
    // 0x31dec4: 0x10a00020  beqz        $a1, . + 4 + (0x20 << 2)
    ctx->pc = 0x31DEC4u;
    {
        const bool branch_taken_0x31dec4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x31dec4) {
            ctx->pc = 0x31DF48u;
            goto label_31df48;
        }
    }
    ctx->pc = 0x31DECCu;
    // 0x31decc: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x31deccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x31ded0: 0x2862fc02  slti        $v0, $v1, -0x3FE
    ctx->pc = 0x31ded0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294966274) ? 1 : 0);
    // 0x31ded4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x31DED4u;
    {
        const bool branch_taken_0x31ded4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DED4u;
        // 0x31ded8: 0x2402fc02  addiu       $v0, $zero, -0x3FE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966274));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ded4) {
            ctx->pc = 0x31DEF4u;
            goto label_31def4;
        }
    }
    ctx->pc = 0x31DEDCu;
    // 0x31dedc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x31dedcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31dee0: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x31dee0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x31dee4: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x31DEE4u;
    {
        const bool branch_taken_0x31dee4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31DEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DEE4u;
        // 0x31dee8: 0x452816  dsrlv       $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dee4) {
            ctx->pc = 0x31DF44u;
            goto label_31df44;
        }
    }
    ctx->pc = 0x31DEECu;
    // 0x31deec: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x31DEECu;
    {
        const bool branch_taken_0x31deec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DEECu;
        // 0x31def0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31deec) {
            ctx->pc = 0x31DF44u;
            goto label_31df44;
        }
    }
    ctx->pc = 0x31DEF4u;
label_31def4:
    // 0x31def4: 0x28620400  slti        $v0, $v1, 0x400
    ctx->pc = 0x31def4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x31def8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31DEF8u;
    {
        const bool branch_taken_0x31def8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31DEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DEF8u;
        // 0x31defc: 0x246703ff  addiu       $a3, $v1, 0x3FF (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1023));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31def8) {
            ctx->pc = 0x31DF0Cu;
            goto label_31df0c;
        }
    }
    ctx->pc = 0x31DF00u;
    // 0x31df00: 0x240707ff  addiu       $a3, $zero, 0x7FF
    ctx->pc = 0x31df00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
label_31df04:
    // 0x31df04: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x31DF04u;
    {
        const bool branch_taken_0x31df04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DF04u;
        // 0x31df08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31df04) {
            ctx->pc = 0x31DF48u;
            goto label_31df48;
        }
    }
    ctx->pc = 0x31DF0Cu;
label_31df0c:
    // 0x31df0c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x31df0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x31df10: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x31df10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x31df14: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31DF14u;
    {
        const bool branch_taken_0x31df14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x31df14) {
            ctx->pc = 0x31DF18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31DF14u;
            // 0x31df18: 0x64a5007f  daddiu      $a1, $a1, 0x7F (Delay Slot)
            SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)127);
            ctx->in_delay_slot = false;
            ctx->pc = 0x31DF28u;
            goto label_31df28;
        }
    }
    ctx->pc = 0x31DF1Cu;
    // 0x31df1c: 0x30a30100  andi        $v1, $a1, 0x100
    ctx->pc = 0x31df1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)256);
    // 0x31df20: 0x64a20080  daddiu      $v0, $a1, 0x80
    ctx->pc = 0x31df20u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)128);
    // 0x31df24: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x31df24u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_31df28:
    // 0x31df28: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x31df28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31df2c: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x31df2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x31df30: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x31df30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x31df34: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x31DF34u;
    {
        const bool branch_taken_0x31df34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31df34) {
            ctx->pc = 0x31DF38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31DF34u;
            // 0x31df38: 0x52a3a  dsrl        $a1, $a1, 8 (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x31DF48u;
            goto label_31df48;
        }
    }
    ctx->pc = 0x31DF3Cu;
    // 0x31df3c: 0x5287a  dsrl        $a1, $a1, 1
    ctx->pc = 0x31df3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 1);
    // 0x31df40: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x31df40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_31df44:
    // 0x31df44: 0x52a3a  dsrl        $a1, $a1, 8
    ctx->pc = 0x31df44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 8);
label_31df48:
    // 0x31df48: 0x3403fff0  ori         $v1, $zero, 0xFFF0
    ctx->pc = 0x31df48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65520);
    // 0x31df4c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x31df4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x31df50: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x31df50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31df54: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x31df54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x31df58: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x31df58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x31df5c: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x31df5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x31df60: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x31df60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x31df64: 0x30e307ff  andi        $v1, $a3, 0x7FF
    ctx->pc = 0x31df64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2047);
    // 0x31df68: 0x3c02800f  lui         $v0, 0x800F
    ctx->pc = 0x31df68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32783 << 16));
    // 0x31df6c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31df6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31df70: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x31df70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x31df74: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31df74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31df78: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x31df78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x31df7c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31df7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31df80: 0x31d3c  dsll32      $v1, $v1, 20
    ctx->pc = 0x31df80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 20));
    // 0x31df84: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x31df84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x31df88: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x31df88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31df8c: 0x4207a  dsrl        $a0, $a0, 1
    ctx->pc = 0x31df8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 1);
    // 0x31df90: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x31df90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x31df94: 0x817fc  dsll32      $v0, $t0, 31
    ctx->pc = 0x31df94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 31));
    // 0x31df98: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x31df98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x31df9c: 0x3e00008  jr          $ra
    ctx->pc = 0x31DF9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31DFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DF9Cu;
        // 0x31dfa0: 0xc21025  or          $v0, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31DF9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31DFA4u;
    // 0x31dfa4: 0x0  nop
    ctx->pc = 0x31dfa4u;
    // NOP
    ctx->pc = 0x31dfa8u;
}
