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

// Function: __unpack_d
// Address: 0x31dfa8 - 0x31e048
void ps2___unpack_d_0x31dfa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___unpack_d_0x31dfa8");
#endif

    ctx->pc = 0x31dfa8u;

    // 0x31dfa8: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x31dfa8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31dfac: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x31dfacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31dfb0: 0x31b3a  dsrl        $v1, $v1, 12
    ctx->pc = 0x31dfb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 12);
    // 0x31dfb4: 0x227fe  dsrl32      $a0, $v0, 31
    ctx->pc = 0x31dfb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x31dfb8: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x31dfb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x31dfbc: 0x2153e  dsrl32      $v0, $v0, 20
    ctx->pc = 0x31dfbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 20));
    // 0x31dfc0: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x31dfc0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    // 0x31dfc4: 0x304407ff  andi        $a0, $v0, 0x7FF
    ctx->pc = 0x31dfc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x31dfc8: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31DFC8u;
    {
        const bool branch_taken_0x31dfc8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x31DFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DFC8u;
        // 0x31dfcc: 0x240207ff  addiu       $v0, $zero, 0x7FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dfc8) {
            ctx->pc = 0x31DFE0u;
            goto label_31dfe0;
        }
    }
    ctx->pc = 0x31DFD0u;
    // 0x31dfd0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x31dfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31dfd4: 0x3e00008  jr          $ra
    ctx->pc = 0x31DFD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31DFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DFD4u;
        // 0x31dfd8: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31DFD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31DFDCu;
    // 0x31dfdc: 0x0  nop
    ctx->pc = 0x31dfdcu;
    // NOP
label_31dfe0:
    // 0x31dfe0: 0x5482000f  bnel        $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x31DFE0u;
    {
        const bool branch_taken_0x31dfe0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x31dfe0) {
            ctx->pc = 0x31DFE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31DFE0u;
            // 0x31dfe4: 0x31a38  dsll        $v1, $v1, 8 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x31E020u;
            goto label_31e020;
        }
    }
    ctx->pc = 0x31DFE8u;
    // 0x31dfe8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31DFE8u;
    {
        const bool branch_taken_0x31dfe8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31DFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DFE8u;
        // 0x31dfec: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dfe8) {
            ctx->pc = 0x31DFF8u;
            goto label_31dff8;
        }
    }
    ctx->pc = 0x31DFF0u;
    // 0x31dff0: 0x3e00008  jr          $ra
    ctx->pc = 0x31DFF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31DFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DFF0u;
        // 0x31dff4: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31DFF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31DFF8u;
label_31dff8:
    // 0x31dff8: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x31dff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x31dffc: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x31dffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x31e000: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x31e000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31e004: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31E004u;
    {
        const bool branch_taken_0x31e004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E004u;
        // 0x31e008: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e004) {
            ctx->pc = 0x31E014u;
            goto label_31e014;
        }
    }
    ctx->pc = 0x31E00Cu;
    // 0x31e00c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x31E00Cu;
    {
        const bool branch_taken_0x31e00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E00Cu;
        // 0x31e010: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e00c) {
            ctx->pc = 0x31E018u;
            goto label_31e018;
        }
    }
    ctx->pc = 0x31E014u;
label_31e014:
    // 0x31e014: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x31e014u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_31e018:
    // 0x31e018: 0x3e00008  jr          $ra
    ctx->pc = 0x31E018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E018u;
        // 0x31e01c: 0xfca30010  sd          $v1, 0x10($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E020u;
label_31e020:
    // 0x31e020: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x31e020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x31e024: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x31e024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x31e028: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x31e028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x31e02c: 0x2484fc01  addiu       $a0, $a0, -0x3FF
    ctx->pc = 0x31e02cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966273));
    // 0x31e030: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x31e030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x31e034: 0xfca30010  sd          $v1, 0x10($a1)
    ctx->pc = 0x31e034u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 3));
    // 0x31e038: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x31e038u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x31e03c: 0x3e00008  jr          $ra
    ctx->pc = 0x31E03Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E03Cu;
        // 0x31e040: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E03Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E044u;
    // 0x31e044: 0x0  nop
    ctx->pc = 0x31e044u;
    // NOP
    ctx->pc = 0x31e048u;
}
