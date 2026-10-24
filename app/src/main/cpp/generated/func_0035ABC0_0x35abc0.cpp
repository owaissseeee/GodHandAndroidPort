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

// Function: func_0035ABC0
// Address: 0x35abc0 - 0x35ac58
void func_0035ABC0_0x35abc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035ABC0_0x35abc0");
#endif

    switch (ctx->pc) {
        case 0x35abc0u: goto label_35abc0;
        case 0x35abc4u: goto label_35abc4;
        case 0x35abc8u: goto label_35abc8;
        case 0x35abccu: goto label_35abcc;
        case 0x35abd0u: goto label_35abd0;
        case 0x35abd4u: goto label_35abd4;
        case 0x35abd8u: goto label_35abd8;
        case 0x35abdcu: goto label_35abdc;
        case 0x35abe0u: goto label_35abe0;
        case 0x35abe4u: goto label_35abe4;
        case 0x35abe8u: goto label_35abe8;
        case 0x35abecu: goto label_35abec;
        case 0x35abf0u: goto label_35abf0;
        case 0x35abf4u: goto label_35abf4;
        case 0x35abf8u: goto label_35abf8;
        case 0x35abfcu: goto label_35abfc;
        case 0x35ac00u: goto label_35ac00;
        case 0x35ac04u: goto label_35ac04;
        case 0x35ac08u: goto label_35ac08;
        case 0x35ac0cu: goto label_35ac0c;
        case 0x35ac10u: goto label_35ac10;
        case 0x35ac14u: goto label_35ac14;
        case 0x35ac18u: goto label_35ac18;
        case 0x35ac1cu: goto label_35ac1c;
        case 0x35ac20u: goto label_35ac20;
        case 0x35ac24u: goto label_35ac24;
        case 0x35ac28u: goto label_35ac28;
        case 0x35ac2cu: goto label_35ac2c;
        case 0x35ac30u: goto label_35ac30;
        case 0x35ac34u: goto label_35ac34;
        case 0x35ac38u: goto label_35ac38;
        case 0x35ac3cu: goto label_35ac3c;
        case 0x35ac40u: goto label_35ac40;
        case 0x35ac44u: goto label_35ac44;
        case 0x35ac48u: goto label_35ac48;
        case 0x35ac4cu: goto label_35ac4c;
        case 0x35ac50u: goto label_35ac50;
        case 0x35ac54u: goto label_35ac54;
        default: break;
    }

    ctx->pc = 0x35abc0u;

label_35abc0:
    // 0x35abc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x35abc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_35abc4:
    // 0x35abc4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x35abc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_35abc8:
    // 0x35abc8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x35abc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_35abcc:
    // 0x35abcc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x35abccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_35abd0:
    // 0x35abd0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x35abd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_35abd4:
    // 0x35abd4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x35abd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_35abd8:
    // 0x35abd8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x35abd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_35abdc:
    // 0x35abdc: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x35abdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_35abe0:
    // 0x35abe0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x35abe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_35abe4:
    // 0x35abe4: 0xc0d37da  jal         func_34DF68
label_35abe8:
    if (ctx->pc == 0x35ABE8u) {
        ctx->pc = 0x35ABE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35ABE4u;
        // 0x35abe8: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35ABECu;
        goto label_35abec;
    }
    ctx->pc = 0x35ABE4u;
    SET_GPR_U32(ctx, 31, 0x35ABECu);
    ctx->pc = 0x35ABE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35ABE4u;
    // 0x35abe8: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DF68u, 0x35ABE4u, 0x35ABECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35ABECu;
label_35abec:
    // 0x35abec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35abecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_35abf0:
    // 0x35abf0: 0xc0d6872  jal         func_35A1C8
label_35abf4:
    if (ctx->pc == 0x35ABF4u) {
        ctx->pc = 0x35ABF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35ABF0u;
        // 0x35abf4: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35ABF8u;
        goto label_35abf8;
    }
    ctx->pc = 0x35ABF0u;
    SET_GPR_U32(ctx, 31, 0x35ABF8u);
    ctx->pc = 0x35ABF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35ABF0u;
    // 0x35abf4: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x35ABF0u, 0x35ABF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35ABF8u;
label_35abf8:
    // 0x35abf8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35abf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_35abfc:
    // 0x35abfc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35abfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_35ac00:
    // 0x35ac00: 0x26300d30  addiu       $s0, $s1, 0xD30
    ctx->pc = 0x35ac00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 3376));
label_35ac04:
    // 0x35ac04: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x35ac04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_35ac08:
    // 0x35ac08: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x35ac08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_35ac0c:
    // 0x35ac0c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x35ac0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_35ac10:
    // 0x35ac10: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_35ac14:
    if (ctx->pc == 0x35AC14u) {
        ctx->pc = 0x35AC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AC10u;
        // 0x35ac14: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35AC18u;
        goto label_35ac18;
    }
    ctx->pc = 0x35AC10u;
    {
        const bool branch_taken_0x35ac10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35AC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AC10u;
        // 0x35ac14: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ac10) {
            ctx->pc = 0x35AC20u;
            goto label_35ac20;
        }
    }
    ctx->pc = 0x35AC18u;
label_35ac18:
    // 0x35ac18: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x35ac18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_35ac1c:
    // 0x35ac1c: 0x2442ac58  addiu       $v0, $v0, -0x53A8
    ctx->pc = 0x35ac1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945880));
label_35ac20:
    // 0x35ac20: 0x40f809  jalr        $v0
label_35ac24:
    if (ctx->pc == 0x35AC24u) {
        ctx->pc = 0x35AC28u;
        goto label_35ac28;
    }
    ctx->pc = 0x35AC20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x35AC28u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35AC20u, 0x35AC28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x35AC28u;
label_35ac28:
    // 0x35ac28: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x35ac28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_35ac2c:
    // 0x35ac2c: 0xc0d37e0  jal         func_34DF80
label_35ac30:
    if (ctx->pc == 0x35AC30u) {
        ctx->pc = 0x35AC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AC2Cu;
        // 0x35ac30: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35AC34u;
        goto label_35ac34;
    }
    ctx->pc = 0x35AC2Cu;
    SET_GPR_U32(ctx, 31, 0x35AC34u);
    ctx->pc = 0x35AC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AC2Cu;
    // 0x35ac30: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DF80u, 0x35AC2Cu, 0x35AC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AC34u;
label_35ac34:
    // 0x35ac34: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x35ac34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35ac38:
    // 0x35ac38: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x35ac38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_35ac3c:
    // 0x35ac3c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x35ac3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_35ac40:
    // 0x35ac40: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x35ac40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_35ac44:
    // 0x35ac44: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x35ac44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_35ac48:
    // 0x35ac48: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x35ac48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_35ac4c:
    // 0x35ac4c: 0x3e00008  jr          $ra
label_35ac50:
    if (ctx->pc == 0x35AC50u) {
        ctx->pc = 0x35AC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AC4Cu;
        // 0x35ac50: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35AC54u;
        goto label_35ac54;
    }
    ctx->pc = 0x35AC4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35AC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AC4Cu;
        // 0x35ac50: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35AC4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35AC54u;
label_35ac54:
    // 0x35ac54: 0x0  nop
    ctx->pc = 0x35ac54u;
    // NOP
    ctx->pc = 0x35ac58u;
}
