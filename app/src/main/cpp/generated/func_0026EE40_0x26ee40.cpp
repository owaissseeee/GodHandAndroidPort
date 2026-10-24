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

// Function: func_0026EE40
// Address: 0x26ee40 - 0x26ef60
void func_0026EE40_0x26ee40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0026EE40_0x26ee40");
#endif

    switch (ctx->pc) {
        case 0x26ee70u: goto label_26ee70;
        case 0x26eedcu: goto label_26eedc;
        case 0x26ef44u: goto label_26ef44;
        default: break;
    }

    ctx->pc = 0x26ee40u;

    // 0x26ee40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x26ee40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x26ee44: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x26ee44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x26ee48: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x26ee48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x26ee4c: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x26ee4cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    // 0x26ee50: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x26ee50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x26ee54: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x26ee54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ee58: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26ee58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x26ee5c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x26ee5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ee60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26ee60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26ee64: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x26ee64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ee68: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x26EE68u;
    SET_GPR_U32(ctx, 31, 0x26EE70u);
    ctx->pc = 0x26EE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EE68u;
    // 0x26ee6c: 0x26049b70  addiu       $a0, $s0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x26EE68u, 0x26EE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EE70u;
label_26ee70:
    // 0x26ee70: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x26ee70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x26ee74: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x26ee74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x26ee78: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26EE78u;
    {
        const bool branch_taken_0x26ee78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EE78u;
        // 0x26ee7c: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ee78) {
            ctx->pc = 0x26EE98u;
            goto label_26ee98;
        }
    }
    ctx->pc = 0x26EE80u;
    // 0x26ee80: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x26ee80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x26ee84: 0x24425c30  addiu       $v0, $v0, 0x5C30
    ctx->pc = 0x26ee84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23600));
    // 0x26ee88: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x26ee88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26ee8c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x26ee8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26ee90: 0x800008  jr          $a0
    ctx->pc = 0x26EE90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26EE98u: goto label_26ee98;
            case 0x26EEA8u: goto label_26eea8;
            case 0x26EEC0u: goto label_26eec0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26EE90u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x26EE98u;
label_26ee98:
    // 0x26ee98: 0x1117c2  srl         $v0, $s1, 31
    ctx->pc = 0x26ee98u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 31));
    // 0x26ee9c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x26ee9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x26eea0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x26EEA0u;
    {
        const bool branch_taken_0x26eea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EEA0u;
        // 0x26eea4: 0x28843  sra         $s1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26eea0) {
            ctx->pc = 0x26EEC4u;
            goto label_26eec4;
        }
    }
    ctx->pc = 0x26EEA8u;
label_26eea8:
    // 0x26eea8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x26eea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26eeac: 0x26230003  addiu       $v1, $s1, 0x3
    ctx->pc = 0x26eeacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x26eeb0: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x26eeb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x26eeb4: 0x222180b  movn        $v1, $s1, $v0
    ctx->pc = 0x26eeb4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 17));
    // 0x26eeb8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26EEB8u;
    {
        const bool branch_taken_0x26eeb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EEB8u;
        // 0x26eebc: 0x38883  sra         $s1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26eeb8) {
            ctx->pc = 0x26EEC4u;
            goto label_26eec4;
        }
    }
    ctx->pc = 0x26EEC0u;
label_26eec0:
    // 0x26eec0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x26eec0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26eec4:
    // 0x26eec4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x26eec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26eec8: 0x26049b70  addiu       $a0, $s0, -0x6490
    ctx->pc = 0x26eec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
    // 0x26eecc: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x26eeccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x26eed0: 0x2880a  movz        $s1, $zero, $v0
    ctx->pc = 0x26eed0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
    // 0x26eed4: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x26EED4u;
    SET_GPR_U32(ctx, 31, 0x26EEDCu);
    ctx->pc = 0x26EED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EED4u;
    // 0x26eed8: 0xae7116dc  sw          $s1, 0x16DC($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 5852), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x26EED4u, 0x26EEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EEDCu;
label_26eedc:
    // 0x26eedc: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x26eedcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x26eee0: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x26eee0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x26eee4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26EEE4u;
    {
        const bool branch_taken_0x26eee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EEE4u;
        // 0x26eee8: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26eee4) {
            ctx->pc = 0x26EF04u;
            goto label_26ef04;
        }
    }
    ctx->pc = 0x26EEECu;
    // 0x26eeec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x26eeecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x26eef0: 0x24425c50  addiu       $v0, $v0, 0x5C50
    ctx->pc = 0x26eef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23632));
    // 0x26eef4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x26eef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26eef8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x26eef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26eefc: 0x800008  jr          $a0
    ctx->pc = 0x26EEFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26EF04u: goto label_26ef04;
            case 0x26EF14u: goto label_26ef14;
            case 0x26EF2Cu: goto label_26ef2c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26EEFCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x26EF04u;
label_26ef04:
    // 0x26ef04: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x26ef04u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x26ef08: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x26ef08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x26ef0c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x26EF0Cu;
    {
        const bool branch_taken_0x26ef0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EF0Cu;
        // 0x26ef10: 0x29043  sra         $s2, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ef0c) {
            ctx->pc = 0x26EF30u;
            goto label_26ef30;
        }
    }
    ctx->pc = 0x26EF14u;
label_26ef14:
    // 0x26ef14: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x26ef14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26ef18: 0x26430003  addiu       $v1, $s2, 0x3
    ctx->pc = 0x26ef18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
    // 0x26ef1c: 0x52102a  slt         $v0, $v0, $s2
    ctx->pc = 0x26ef1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x26ef20: 0x242180b  movn        $v1, $s2, $v0
    ctx->pc = 0x26ef20u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 18));
    // 0x26ef24: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26EF24u;
    {
        const bool branch_taken_0x26ef24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EF24u;
        // 0x26ef28: 0x39083  sra         $s2, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ef24) {
            ctx->pc = 0x26EF30u;
            goto label_26ef30;
        }
    }
    ctx->pc = 0x26EF2Cu;
label_26ef2c:
    // 0x26ef2c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x26ef2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26ef30:
    // 0x26ef30: 0x1a400004  blez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x26EF30u;
    {
        const bool branch_taken_0x26ef30 = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x26EF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EF30u;
        // 0x26ef34: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ef30) {
            ctx->pc = 0x26EF44u;
            goto label_26ef44;
        }
    }
    ctx->pc = 0x26EF38u;
    // 0x26ef38: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x26ef38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x26ef3c: 0xc0a4806  jal         func_292018
    ctx->pc = 0x26EF3Cu;
    SET_GPR_U32(ctx, 31, 0x26EF44u);
    ctx->pc = 0x26EF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EF3Cu;
    // 0x26ef40: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292018u, 0x26EF3Cu, 0x26EF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EF44u;
label_26ef44:
    // 0x26ef44: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x26ef44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26ef48: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x26ef48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26ef4c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26ef4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26ef50: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x26ef50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26ef54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26ef54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26ef58: 0x3e00008  jr          $ra
    ctx->pc = 0x26EF58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26EF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EF58u;
        // 0x26ef5c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26EF58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26EF60u;
}
