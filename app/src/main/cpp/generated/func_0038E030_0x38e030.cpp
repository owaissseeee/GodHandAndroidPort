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

// Function: func_0038E030
// Address: 0x38e030 - 0x38e138
void func_0038E030_0x38e030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0038E030_0x38e030");
#endif

    switch (ctx->pc) {
        case 0x38e060u: goto label_38e060;
        case 0x38e090u: goto label_38e090;
        case 0x38e094u: goto label_38e094;
        case 0x38e0a0u: goto label_38e0a0;
        case 0x38e108u: goto label_38e108;
        default: break;
    }

    ctx->pc = 0x38e030u;

    // 0x38e030: 0x90a70000  lbu         $a3, 0x0($a1)
    ctx->pc = 0x38e030u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x38e034: 0x2402005e  addiu       $v0, $zero, 0x5E
    ctx->pc = 0x38e034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
    // 0x38e038: 0x14e20005  bne         $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x38E038u;
    {
        const bool branch_taken_0x38e038 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x38E03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E038u;
        // 0x38e03c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e038) {
            ctx->pc = 0x38E050u;
            goto label_38e050;
        }
    }
    ctx->pc = 0x38E040u;
    // 0x38e040: 0x90a70000  lbu         $a3, 0x0($a1)
    ctx->pc = 0x38e040u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x38e044: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x38e044u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38e048: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x38E048u;
    {
        const bool branch_taken_0x38e048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E048u;
        // 0x38e04c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e048) {
            ctx->pc = 0x38E054u;
            goto label_38e054;
        }
    }
    ctx->pc = 0x38E050u;
label_38e050:
    // 0x38e050: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x38e050u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38e054:
    // 0x38e054: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x38e054u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x38e058: 0x248200ff  addiu       $v0, $a0, 0xFF
    ctx->pc = 0x38e058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 255));
    // 0x38e05c: 0x0  nop
    ctx->pc = 0x38e05cu;
    // NOP
label_38e060:
    // 0x38e060: 0xa0490000  sb          $t1, 0x0($v0)
    ctx->pc = 0x38e060u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 9));
    // 0x38e064: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x38e064u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x38e068: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x38e068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x38e06c: 0x0  nop
    ctx->pc = 0x38e06cu;
    // NOP
    // 0x38e070: 0x0  nop
    ctx->pc = 0x38e070u;
    // NOP
    // 0x38e074: 0x501fffa  bgez        $t0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x38E074u;
    {
        const bool branch_taken_0x38e074 = (GPR_S64(ctx, 8) >= 0);
        if (branch_taken_0x38e074) {
            ctx->pc = 0x38E060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38e060;
        }
    }
    ctx->pc = 0x38E07Cu;
    // 0x38e07c: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x38E07Cu;
    {
        const bool branch_taken_0x38e07c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x38E080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E07Cu;
        // 0x38e080: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e07c) {
            ctx->pc = 0x38E08Cu;
            goto label_38e08c;
        }
    }
    ctx->pc = 0x38E084u;
    // 0x38e084: 0x3e00008  jr          $ra
    ctx->pc = 0x38E084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38E088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E084u;
        // 0x38e088: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38E084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38E08Cu;
label_38e08c:
    // 0x38e08c: 0x494823  subu        $t1, $v0, $t1
    ctx->pc = 0x38e08cu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_38e090:
    // 0x38e090: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x38e090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_38e094:
    // 0x38e094: 0x24a60001  addiu       $a2, $a1, 0x1
    ctx->pc = 0x38e094u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x38e098: 0xa0490000  sb          $t1, 0x0($v0)
    ctx->pc = 0x38e098u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 9));
    // 0x38e09c: 0x90a80000  lbu         $t0, 0x0($a1)
    ctx->pc = 0x38e09cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_38e0a0:
    // 0x38e0a0: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x38e0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x38e0a4: 0x1102000e  beq         $t0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x38E0A4u;
    {
        const bool branch_taken_0x38e0a4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x38E0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E0A4u;
        // 0x38e0a8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e0a4) {
            ctx->pc = 0x38E0E0u;
            goto label_38e0e0;
        }
    }
    ctx->pc = 0x38E0ACu;
    // 0x38e0ac: 0x2902002e  slti        $v0, $t0, 0x2E
    ctx->pc = 0x38e0acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)46) ? 1 : 0);
    // 0x38e0b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x38E0B0u;
    {
        const bool branch_taken_0x38e0b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E0B0u;
        // 0x38e0b4: 0x2402005d  addiu       $v0, $zero, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e0b0) {
            ctx->pc = 0x38E0C8u;
            goto label_38e0c8;
        }
    }
    ctx->pc = 0x38E0B8u;
    // 0x38e0b8: 0x11000007  beqz        $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x38E0B8u;
    {
        const bool branch_taken_0x38e0b8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E0B8u;
        // 0x38e0bc: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e0b8) {
            ctx->pc = 0x38E0D8u;
            goto label_38e0d8;
        }
    }
    ctx->pc = 0x38E0C0u;
    // 0x38e0c0: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x38E0C0u;
    {
        const bool branch_taken_0x38e0c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E0C0u;
        // 0x38e0c4: 0x871021  addu        $v0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e0c0) {
            ctx->pc = 0x38E094u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38e094;
        }
    }
    ctx->pc = 0x38E0C8u;
label_38e0c8:
    // 0x38e0c8: 0x11020018  beq         $t0, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x38E0C8u;
    {
        const bool branch_taken_0x38e0c8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x38E0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E0C8u;
        // 0x38e0cc: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e0c8) {
            ctx->pc = 0x38E12Cu;
            goto label_38e12c;
        }
    }
    ctx->pc = 0x38E0D0u;
    // 0x38e0d0: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x38E0D0u;
    {
        const bool branch_taken_0x38e0d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E0D0u;
        // 0x38e0d4: 0x871021  addu        $v0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e0d0) {
            ctx->pc = 0x38E094u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38e094;
        }
    }
    ctx->pc = 0x38E0D8u;
label_38e0d8:
    // 0x38e0d8: 0x3e00008  jr          $ra
    ctx->pc = 0x38E0D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38E0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E0D8u;
        // 0x38e0dc: 0x24c2ffff  addiu       $v0, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38E0D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38E0E0u;
label_38e0e0:
    // 0x38e0e0: 0x90c80000  lbu         $t0, 0x0($a2)
    ctx->pc = 0x38e0e0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x38e0e4: 0x2402005d  addiu       $v0, $zero, 0x5D
    ctx->pc = 0x38e0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    // 0x38e0e8: 0x11020003  beq         $t0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38E0E8u;
    {
        const bool branch_taken_0x38e0e8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x38E0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E0E8u;
        // 0x38e0ec: 0x107102a  slt         $v0, $t0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e0e8) {
            ctx->pc = 0x38E0F8u;
            goto label_38e0f8;
        }
    }
    ctx->pc = 0x38E0F0u;
    // 0x38e0f0: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x38E0F0u;
    {
        const bool branch_taken_0x38e0f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38e0f0) {
            ctx->pc = 0x38E0F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38E0F0u;
            // 0x38e0f4: 0x24c50001  addiu       $a1, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38E100u;
            goto label_38e100;
        }
    }
    ctx->pc = 0x38E0F8u;
label_38e0f8:
    // 0x38e0f8: 0x1000ffe5  b           . + 4 + (-0x1B << 2)
    ctx->pc = 0x38E0F8u;
    {
        const bool branch_taken_0x38e0f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E0F8u;
        // 0x38e0fc: 0x2407002d  addiu       $a3, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e0f8) {
            ctx->pc = 0x38E090u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38e090;
        }
    }
    ctx->pc = 0x38E100u;
label_38e100:
    // 0x38e100: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x38e100u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x38e104: 0x0  nop
    ctx->pc = 0x38e104u;
    // NOP
label_38e108:
    // 0x38e108: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x38e108u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x38e10c: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x38e10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x38e110: 0xe8182a  slt         $v1, $a3, $t0
    ctx->pc = 0x38e110u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x38e114: 0xa0490000  sb          $t1, 0x0($v0)
    ctx->pc = 0x38e114u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 9));
    // 0x38e118: 0x0  nop
    ctx->pc = 0x38e118u;
    // NOP
    // 0x38e11c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x38E11Cu;
    {
        const bool branch_taken_0x38e11c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x38e11c) {
            ctx->pc = 0x38E108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38e108;
        }
    }
    ctx->pc = 0x38E124u;
    // 0x38e124: 0x1000ffde  b           . + 4 + (-0x22 << 2)
    ctx->pc = 0x38E124u;
    {
        const bool branch_taken_0x38e124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E124u;
        // 0x38e128: 0x90a80000  lbu         $t0, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e124) {
            ctx->pc = 0x38E0A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38e0a0;
        }
    }
    ctx->pc = 0x38E12Cu;
label_38e12c:
    // 0x38e12c: 0x3e00008  jr          $ra
    ctx->pc = 0x38E12Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38E130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E12Cu;
        // 0x38e130: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38E12Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38E134u;
    // 0x38e134: 0x0  nop
    ctx->pc = 0x38e134u;
    // NOP
    ctx->pc = 0x38e138u;
}
