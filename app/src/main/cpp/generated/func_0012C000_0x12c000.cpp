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

// Function: func_0012C000
// Address: 0x12c000 - 0x12c0d8
void func_0012C000_0x12c000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0012C000_0x12c000");
#endif

    switch (ctx->pc) {
        case 0x12c0b4u: goto label_12c0b4;
        default: break;
    }

    ctx->pc = 0x12c000u;

    // 0x12c000: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12c000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12c004: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x12c004u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c008: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x12c008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x12c00c: 0x2ca20006  sltiu       $v0, $a1, 0x6
    ctx->pc = 0x12c00cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x12c010: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12C010u;
    {
        const bool branch_taken_0x12c010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C010u;
        // 0x12c014: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c010) {
            ctx->pc = 0x12C034u;
            goto label_12c034;
        }
    }
    ctx->pc = 0x12C018u;
    // 0x12c018: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x12c018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x12c01c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x12c01cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x12c020: 0x2442d1a0  addiu       $v0, $v0, -0x2E60
    ctx->pc = 0x12c020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955424));
    // 0x12c024: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12c024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12c028: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x12c028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12c02c: 0x800008  jr          $a0
    ctx->pc = 0x12C02Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12C034u: goto label_12c034;
            case 0x12C060u: goto label_12c060;
            case 0x12C06Cu: goto label_12c06c;
            case 0x12C078u: goto label_12c078;
            case 0x12C084u: goto label_12c084;
            case 0x12C090u: goto label_12c090;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C02Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x12C034u;
label_12c034:
    // 0x12c034: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x12c034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x12c038: 0x9043b010  lbu         $v1, -0x4FF0($v0)
    ctx->pc = 0x12c038u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x5CB010u));
    // 0x12c03c: 0x14600021  bnez        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x12C03Cu;
    {
        const bool branch_taken_0x12c03c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C03Cu;
        // 0x12c040: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c03c) {
            ctx->pc = 0x12C0C4u;
            goto label_12c0c4;
        }
    }
    ctx->pc = 0x12C044u;
    // 0x12c044: 0x94c205e2  lhu         $v0, 0x5E2($a2)
    ctx->pc = 0x12c044u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 1506)));
    // 0x12c048: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x12C048u;
    {
        const bool branch_taken_0x12c048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12c048) {
            ctx->pc = 0x12C04Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C048u;
            // 0x12c04c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C0C4u;
            goto label_12c0c4;
        }
    }
    ctx->pc = 0x12C050u;
    // 0x12c050: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x12c050u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x12c054: 0x94d005e0  lhu         $s0, 0x5E0($a2)
    ctx->pc = 0x12c054u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 1504)));
    // 0x12c058: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x12C058u;
    {
        const bool branch_taken_0x12c058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C058u;
        // 0x12c05c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c058) {
            ctx->pc = 0x12C0ACu;
            goto label_12c0ac;
        }
    }
    ctx->pc = 0x12C060u;
label_12c060:
    // 0x12c060: 0x94c305e2  lhu         $v1, 0x5E2($a2)
    ctx->pc = 0x12c060u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 1506)));
    // 0x12c064: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x12C064u;
    {
        const bool branch_taken_0x12c064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C064u;
        // 0x12c068: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c064) {
            ctx->pc = 0x12C098u;
            goto label_12c098;
        }
    }
    ctx->pc = 0x12C06Cu;
label_12c06c:
    // 0x12c06c: 0x94c305e2  lhu         $v1, 0x5E2($a2)
    ctx->pc = 0x12c06cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 1506)));
    // 0x12c070: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x12C070u;
    {
        const bool branch_taken_0x12c070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C070u;
        // 0x12c074: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c070) {
            ctx->pc = 0x12C098u;
            goto label_12c098;
        }
    }
    ctx->pc = 0x12C078u;
label_12c078:
    // 0x12c078: 0x94c305e2  lhu         $v1, 0x5E2($a2)
    ctx->pc = 0x12c078u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 1506)));
    // 0x12c07c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x12C07Cu;
    {
        const bool branch_taken_0x12c07c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C07Cu;
        // 0x12c080: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c07c) {
            ctx->pc = 0x12C098u;
            goto label_12c098;
        }
    }
    ctx->pc = 0x12C084u;
label_12c084:
    // 0x12c084: 0x94c305e2  lhu         $v1, 0x5E2($a2)
    ctx->pc = 0x12c084u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 1506)));
    // 0x12c088: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12C088u;
    {
        const bool branch_taken_0x12c088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C088u;
        // 0x12c08c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c088) {
            ctx->pc = 0x12C098u;
            goto label_12c098;
        }
    }
    ctx->pc = 0x12C090u;
label_12c090:
    // 0x12c090: 0x94c305e2  lhu         $v1, 0x5E2($a2)
    ctx->pc = 0x12c090u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 1506)));
    // 0x12c094: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x12c094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_12c098:
    // 0x12c098: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x12C098u;
    {
        const bool branch_taken_0x12c098 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x12c098) {
            ctx->pc = 0x12C09Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C098u;
            // 0x12c09c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C0C4u;
            goto label_12c0c4;
        }
    }
    ctx->pc = 0x12C0A0u;
    // 0x12c0a0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x12c0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x12c0a4: 0x94d005e0  lhu         $s0, 0x5E0($a2)
    ctx->pc = 0x12c0a4u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 1504)));
    // 0x12c0a8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x12c0a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_12c0ac:
    // 0x12c0ac: 0xc07ee0c  jal         func_1FB830
    ctx->pc = 0x12C0ACu;
    SET_GPR_U32(ctx, 31, 0x12C0B4u);
    ctx->pc = 0x12C0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C0ACu;
    // 0x12c0b0: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB830u, 0x12C0ACu, 0x12C0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C0B4u;
label_12c0b4:
    // 0x12c0b4: 0x202802a  slt         $s0, $s0, $v0
    ctx->pc = 0x12c0b4u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x12c0b8: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x12C0B8u;
    {
        const bool branch_taken_0x12c0b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C0B8u;
        // 0x12c0bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c0b8) {
            ctx->pc = 0x12C0C4u;
            goto label_12c0c4;
        }
    }
    ctx->pc = 0x12C0C0u;
    // 0x12c0c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12c0c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12c0c4:
    // 0x12c0c4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x12c0c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12c0c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12c0c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c0cc: 0x3e00008  jr          $ra
    ctx->pc = 0x12C0CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C0CCu;
        // 0x12c0d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C0CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C0D4u;
    // 0x12c0d4: 0x0  nop
    ctx->pc = 0x12c0d4u;
    // NOP
    ctx->pc = 0x12c0d8u;
}
