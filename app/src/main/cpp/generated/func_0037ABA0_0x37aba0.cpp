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

// Function: func_0037ABA0
// Address: 0x37aba0 - 0x37ac68
void func_0037ABA0_0x37aba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037ABA0_0x37aba0");
#endif

    ctx->pc = 0x37aba0u;

    // 0x37aba0: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x37aba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x37aba4: 0x3042a000  andi        $v0, $v0, 0xA000
    ctx->pc = 0x37aba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)40960);
    // 0x37aba8: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x37ABA8u;
    {
        const bool branch_taken_0x37aba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37aba8) {
            ctx->pc = 0x37AC5Cu;
            goto label_37ac5c;
        }
    }
    ctx->pc = 0x37ABB0u;
    // 0x37abb0: 0x80a40008  lb          $a0, 0x8($a1)
    ctx->pc = 0x37abb0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x37abb4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x37abb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x37abb8: 0x2c830009  sltiu       $v1, $a0, 0x9
    ctx->pc = 0x37abb8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x37abbc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x37abbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37abc0: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x37ABC0u;
    {
        const bool branch_taken_0x37abc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x37ABC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37ABC0u;
        // 0x37abc4: 0x94450000  lhu         $a1, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37abc0) {
            ctx->pc = 0x37AC58u;
            goto label_37ac58;
        }
    }
    ctx->pc = 0x37ABC8u;
    // 0x37abc8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x37abc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x37abcc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x37abccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x37abd0: 0x2442bb20  addiu       $v0, $v0, -0x44E0
    ctx->pc = 0x37abd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949664));
    // 0x37abd4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x37abd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x37abd8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x37abd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x37abdc: 0x800008  jr          $a0
    ctx->pc = 0x37ABDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x37ABE4u: goto label_37abe4;
            case 0x37ABF8u: goto label_37abf8;
            case 0x37AC0Cu: goto label_37ac0c;
            case 0x37AC2Cu: goto label_37ac2c;
            case 0x37AC4Cu: goto label_37ac4c;
            case 0x37AC54u: goto label_37ac54;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37ABDCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x37ABE4u;
label_37abe4:
    // 0x37abe4: 0x30a20010  andi        $v0, $a1, 0x10
    ctx->pc = 0x37abe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16);
    // 0x37abe8: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x37ABE8u;
    {
        const bool branch_taken_0x37abe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37abe8) {
            ctx->pc = 0x37ABECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37ABE8u;
            // 0x37abec: 0x30a5ffef  andi        $a1, $a1, 0xFFEF (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65519);
            ctx->in_delay_slot = false;
            ctx->pc = 0x37AC3Cu;
            goto label_37ac3c;
        }
    }
    ctx->pc = 0x37ABF0u;
    // 0x37abf0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x37ABF0u;
    {
        const bool branch_taken_0x37abf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37ABF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37ABF0u;
        // 0x37abf4: 0x30a5ffdf  andi        $a1, $a1, 0xFFDF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65503);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37abf0) {
            ctx->pc = 0x37AC44u;
            goto label_37ac44;
        }
    }
    ctx->pc = 0x37ABF8u;
label_37abf8:
    // 0x37abf8: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x37abf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x37abfc: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x37ABFCu;
    {
        const bool branch_taken_0x37abfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37abfc) {
            ctx->pc = 0x37AC00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37ABFCu;
            // 0x37ac00: 0x30a5fffe  andi        $a1, $a1, 0xFFFE (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65534);
            ctx->in_delay_slot = false;
            ctx->pc = 0x37AC1Cu;
            goto label_37ac1c;
        }
    }
    ctx->pc = 0x37AC04u;
    // 0x37ac04: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x37AC04u;
    {
        const bool branch_taken_0x37ac04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37AC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AC04u;
        // 0x37ac08: 0x30a5fffd  andi        $a1, $a1, 0xFFFD (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65533);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ac04) {
            ctx->pc = 0x37AC24u;
            goto label_37ac24;
        }
    }
    ctx->pc = 0x37AC0Cu;
label_37ac0c:
    // 0x37ac0c: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x37ac0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x37ac10: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x37AC10u;
    {
        const bool branch_taken_0x37ac10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37ac10) {
            ctx->pc = 0x37AC14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37AC10u;
            // 0x37ac14: 0x30a5fffd  andi        $a1, $a1, 0xFFFD (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65533);
            ctx->in_delay_slot = false;
            ctx->pc = 0x37AC24u;
            goto label_37ac24;
        }
    }
    ctx->pc = 0x37AC18u;
    // 0x37ac18: 0x30a5fffe  andi        $a1, $a1, 0xFFFE
    ctx->pc = 0x37ac18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65534);
label_37ac1c:
    // 0x37ac1c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x37AC1Cu;
    {
        const bool branch_taken_0x37ac1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37AC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AC1Cu;
        // 0x37ac20: 0x34a50002  ori         $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ac1c) {
            ctx->pc = 0x37AC58u;
            goto label_37ac58;
        }
    }
    ctx->pc = 0x37AC24u;
label_37ac24:
    // 0x37ac24: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x37AC24u;
    {
        const bool branch_taken_0x37ac24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37AC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AC24u;
        // 0x37ac28: 0x34a50001  ori         $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ac24) {
            ctx->pc = 0x37AC58u;
            goto label_37ac58;
        }
    }
    ctx->pc = 0x37AC2Cu;
label_37ac2c:
    // 0x37ac2c: 0x30a20010  andi        $v0, $a1, 0x10
    ctx->pc = 0x37ac2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16);
    // 0x37ac30: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x37AC30u;
    {
        const bool branch_taken_0x37ac30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37ac30) {
            ctx->pc = 0x37AC34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37AC30u;
            // 0x37ac34: 0x30a5ffdf  andi        $a1, $a1, 0xFFDF (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65503);
            ctx->in_delay_slot = false;
            ctx->pc = 0x37AC44u;
            goto label_37ac44;
        }
    }
    ctx->pc = 0x37AC38u;
    // 0x37ac38: 0x30a5ffef  andi        $a1, $a1, 0xFFEF
    ctx->pc = 0x37ac38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65519);
label_37ac3c:
    // 0x37ac3c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x37AC3Cu;
    {
        const bool branch_taken_0x37ac3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37AC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AC3Cu;
        // 0x37ac40: 0x34a50020  ori         $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ac3c) {
            ctx->pc = 0x37AC58u;
            goto label_37ac58;
        }
    }
    ctx->pc = 0x37AC44u;
label_37ac44:
    // 0x37ac44: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x37AC44u;
    {
        const bool branch_taken_0x37ac44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37AC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AC44u;
        // 0x37ac48: 0x34a50010  ori         $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ac44) {
            ctx->pc = 0x37AC58u;
            goto label_37ac58;
        }
    }
    ctx->pc = 0x37AC4Cu;
label_37ac4c:
    // 0x37ac4c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x37AC4Cu;
    {
        const bool branch_taken_0x37ac4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37AC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AC4Cu;
        // 0x37ac50: 0x38a50002  xori        $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ac4c) {
            ctx->pc = 0x37AC58u;
            goto label_37ac58;
        }
    }
    ctx->pc = 0x37AC54u;
label_37ac54:
    // 0x37ac54: 0x38a50001  xori        $a1, $a1, 0x1
    ctx->pc = 0x37ac54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
label_37ac58:
    // 0x37ac58: 0xa4c50000  sh          $a1, 0x0($a2)
    ctx->pc = 0x37ac58u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 5));
label_37ac5c:
    // 0x37ac5c: 0x3e00008  jr          $ra
    ctx->pc = 0x37AC5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37AC5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37AC64u;
    // 0x37ac64: 0x0  nop
    ctx->pc = 0x37ac64u;
    // NOP
    ctx->pc = 0x37ac68u;
}
