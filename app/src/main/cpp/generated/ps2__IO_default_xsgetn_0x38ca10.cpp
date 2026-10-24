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

// Function: _IO_default_xsgetn
// Address: 0x38ca10 - 0x38cb28
void ps2__IO_default_xsgetn_0x38ca10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__IO_default_xsgetn_0x38ca10");
#endif

    switch (ctx->pc) {
        case 0x38ca48u: goto label_38ca48;
        case 0x38ca90u: goto label_38ca90;
        case 0x38cac0u: goto label_38cac0;
        case 0x38caf4u: goto label_38caf4;
        default: break;
    }

    ctx->pc = 0x38ca10u;

    // 0x38ca10: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x38ca10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x38ca14: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x38ca14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x38ca18: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x38ca18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x38ca1c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x38ca1cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ca20: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x38ca20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x38ca24: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x38ca24u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x38ca28: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x38ca28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x38ca2c: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x38ca2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ca30: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x38ca30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x38ca34: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x38ca34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ca38: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x38ca38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x38ca3c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x38ca3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ca40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38ca40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x38ca44: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x38ca44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_38ca48:
    // 0x38ca48: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x38ca48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x38ca4c: 0x453023  subu        $a2, $v0, $a1
    ctx->pc = 0x38ca4cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x38ca50: 0x18c00024  blez        $a2, . + 4 + (0x24 << 2)
    ctx->pc = 0x38CA50u;
    {
        const bool branch_taken_0x38ca50 = (GPR_S64(ctx, 6) <= 0);
        if (branch_taken_0x38ca50) {
            ctx->pc = 0x38CAE4u;
            goto label_38cae4;
        }
    }
    ctx->pc = 0x38CA58u;
    // 0x38ca58: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x38ca58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x38ca5c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x38ca5cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x38ca60: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x38ca60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x38ca64: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x38CA64u;
    {
        const bool branch_taken_0x38ca64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38CA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CA64u;
        // 0x38ca68: 0x13103c  dsll32      $v0, $s3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ca64) {
            ctx->pc = 0x38CA70u;
            goto label_38ca70;
        }
    }
    ctx->pc = 0x38CA6Cu;
    // 0x38ca6c: 0x2303e  dsrl32      $a2, $v0, 0
    ctx->pc = 0x38ca6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) >> (32 + 0));
label_38ca70:
    // 0x38ca70: 0x28c20015  slti        $v0, $a2, 0x15
    ctx->pc = 0x38ca70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x38ca74: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x38CA74u;
    {
        const bool branch_taken_0x38ca74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38CA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CA74u;
        // 0x38ca78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ca74) {
            ctx->pc = 0x38CAA0u;
            goto label_38caa0;
        }
    }
    ctx->pc = 0x38CA7Cu;
    // 0x38ca7c: 0x6803c  dsll32      $s0, $a2, 0
    ctx->pc = 0x38ca7cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) << (32 + 0));
    // 0x38ca80: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x38ca80u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x38ca84: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x38ca84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ca88: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x38CA88u;
    SET_GPR_U32(ctx, 31, 0x38CA90u);
    ctx->pc = 0x38CA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38CA88u;
    // 0x38ca8c: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x38CA88u, 0x38CA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38CA90u;
label_38ca90:
    // 0x38ca90: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x38ca90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x38ca94: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x38ca94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x38ca98: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x38CA98u;
    {
        const bool branch_taken_0x38ca98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38CA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CA98u;
        // 0x38ca9c: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ca98) {
            ctx->pc = 0x38CAE0u;
            goto label_38cae0;
        }
    }
    ctx->pc = 0x38CAA0u;
label_38caa0:
    // 0x38caa0: 0x18c0000f  blez        $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x38CAA0u;
    {
        const bool branch_taken_0x38caa0 = (GPR_S64(ctx, 6) <= 0);
        ctx->pc = 0x38CAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CAA0u;
        // 0x38caa4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38caa0) {
            ctx->pc = 0x38CAE0u;
            goto label_38cae0;
        }
    }
    ctx->pc = 0x38CAA8u;
    // 0x38caa8: 0x6803c  dsll32      $s0, $a2, 0
    ctx->pc = 0x38caa8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) << (32 + 0));
    // 0x38caac: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x38caacu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x38cab0: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x38cab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x38cab4: 0x462000a  bltzl       $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x38CAB4u;
    {
        const bool branch_taken_0x38cab4 = (GPR_S64(ctx, 3) < 0);
        if (branch_taken_0x38cab4) {
            ctx->pc = 0x38CAB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38CAB4u;
            // 0x38cab8: 0xae450004  sw          $a1, 0x4($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38CAE0u;
            goto label_38cae0;
        }
    }
    ctx->pc = 0x38CABCu;
    // 0x38cabc: 0x0  nop
    ctx->pc = 0x38cabcu;
    // NOP
label_38cac0:
    // 0x38cac0: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x38cac0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x38cac4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x38cac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x38cac8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x38cac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x38cacc: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x38caccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x38cad0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x38cad0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x38cad4: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x38CAD4u;
    {
        const bool branch_taken_0x38cad4 = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x38cad4) {
            ctx->pc = 0x38CAC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38cac0;
        }
    }
    ctx->pc = 0x38CADCu;
    // 0x38cadc: 0xae450004  sw          $a1, 0x4($s2)
    ctx->pc = 0x38cadcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 5));
label_38cae0:
    // 0x38cae0: 0x2709823  subu        $s3, $s3, $s0
    ctx->pc = 0x38cae0u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_38cae4:
    // 0x38cae4: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x38CAE4u;
    {
        const bool branch_taken_0x38cae4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x38CAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CAE4u;
        // 0x38cae8: 0x2931023  subu        $v0, $s4, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38cae4) {
            ctx->pc = 0x38CB00u;
            goto label_38cb00;
        }
    }
    ctx->pc = 0x38CAECu;
    // 0x38caec: 0xc0e316e  jal         func_38C5B8
    ctx->pc = 0x38CAECu;
    SET_GPR_U32(ctx, 31, 0x38CAF4u);
    ctx->pc = 0x38CAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38CAECu;
    // 0x38caf0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38C5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C5B8u, 0x38CAECu, 0x38CAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38CAF4u;
label_38caf4:
    // 0x38caf4: 0x5455ffd4  bnel        $v0, $s5, . + 4 + (-0x2C << 2)
    ctx->pc = 0x38CAF4u;
    {
        const bool branch_taken_0x38caf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x38caf4) {
            ctx->pc = 0x38CAF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38CAF4u;
            // 0x38caf8: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38CA48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38ca48;
        }
    }
    ctx->pc = 0x38CAFCu;
    // 0x38cafc: 0x2931023  subu        $v0, $s4, $s3
    ctx->pc = 0x38cafcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
label_38cb00:
    // 0x38cb00: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x38cb00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x38cb04: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x38cb04u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x38cb08: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x38cb08u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x38cb0c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x38cb0cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38cb10: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x38cb10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38cb14: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x38cb14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38cb18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38cb18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38cb1c: 0x3e00008  jr          $ra
    ctx->pc = 0x38CB1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38CB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CB1Cu;
        // 0x38cb20: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38CB1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38CB24u;
    // 0x38cb24: 0x0  nop
    ctx->pc = 0x38cb24u;
    // NOP
    ctx->pc = 0x38cb28u;
}
