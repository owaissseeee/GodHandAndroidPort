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

// Function: func_0035AF68
// Address: 0x35af68 - 0x35b058
void func_0035AF68_0x35af68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035AF68_0x35af68");
#endif

    switch (ctx->pc) {
        case 0x35af98u: goto label_35af98;
        case 0x35afecu: goto label_35afec;
        case 0x35affcu: goto label_35affc;
        case 0x35b018u: goto label_35b018;
        case 0x35b028u: goto label_35b028;
        default: break;
    }

    ctx->pc = 0x35af68u;

    // 0x35af68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35af68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35af6c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35af6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35af70: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x35af70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35af74: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x35af74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x35af78: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x35af78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35af7c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x35af7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x35af80: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x35af80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35af84: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x35af84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x35af88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35af88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35af8c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x35af8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x35af90: 0xc0d37b2  jal         func_34DEC8
    ctx->pc = 0x35AF90u;
    SET_GPR_U32(ctx, 31, 0x35AF98u);
    ctx->pc = 0x35AF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AF90u;
    // 0x35af94: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DEC8u, 0x35AF90u, 0x35AF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AF98u;
label_35af98:
    // 0x35af98: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x35af98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x35af9c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x35AF9Cu;
    {
        const bool branch_taken_0x35af9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35AFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AF9Cu;
        // 0x35afa0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35af9c) {
            ctx->pc = 0x35AFC8u;
            goto label_35afc8;
        }
    }
    ctx->pc = 0x35AFA4u;
    // 0x35afa4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35afa4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35afa8: 0x34a50129  ori         $a1, $a1, 0x129
    ctx->pc = 0x35afa8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)297);
    // 0x35afac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35afacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35afb0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35afb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35afb4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x35afb4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35afb8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x35afb8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35afbc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x35afbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35afc0: 0x80d375c  j           func_34DD70
    ctx->pc = 0x35AFC0u;
    ctx->pc = 0x35AFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AFC0u;
    // 0x35afc4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x35AFC0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35AFC8u;
label_35afc8:
    // 0x35afc8: 0x1240000f  beqz        $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x35AFC8u;
    {
        const bool branch_taken_0x35afc8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x35AFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AFC8u;
        // 0x35afcc: 0x26300d30  addiu       $s0, $s1, 0xD30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 3376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35afc8) {
            ctx->pc = 0x35B008u;
            goto label_35b008;
        }
    }
    ctx->pc = 0x35AFD0u;
    // 0x35afd0: 0xae1302e8  sw          $s3, 0x2E8($s0)
    ctx->pc = 0x35afd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 744), GPR_U32(ctx, 19));
    // 0x35afd4: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x35afd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x35afd8: 0xae1202d4  sw          $s2, 0x2D4($s0)
    ctx->pc = 0x35afd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 724), GPR_U32(ctx, 18));
    // 0x35afdc: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x35afdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x35afe0: 0xae1402e4  sw          $s4, 0x2E4($s0)
    ctx->pc = 0x35afe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 740), GPR_U32(ctx, 20));
    // 0x35afe4: 0xc0d6800  jal         func_35A000
    ctx->pc = 0x35AFE4u;
    SET_GPR_U32(ctx, 31, 0x35AFECu);
    ctx->pc = 0x35AFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AFE4u;
    // 0x35afe8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A000u, 0x35AFE4u, 0x35AFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AFECu;
label_35afec:
    // 0x35afec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35afecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35aff0: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x35aff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x35aff4: 0xc0d6800  jal         func_35A000
    ctx->pc = 0x35AFF4u;
    SET_GPR_U32(ctx, 31, 0x35AFFCu);
    ctx->pc = 0x35AFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AFF4u;
    // 0x35aff8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A000u, 0x35AFF4u, 0x35AFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AFFCu;
label_35affc:
    // 0x35affc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x35AFFCu;
    {
        const bool branch_taken_0x35affc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35B000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AFFCu;
        // 0x35b000: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35affc) {
            ctx->pc = 0x35B038u;
            goto label_35b038;
        }
    }
    ctx->pc = 0x35B004u;
    // 0x35b004: 0x0  nop
    ctx->pc = 0x35b004u;
    // NOP
label_35b008:
    // 0x35b008: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x35b008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x35b00c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x35b00cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35b010: 0xc0d6800  jal         func_35A000
    ctx->pc = 0x35B010u;
    SET_GPR_U32(ctx, 31, 0x35B018u);
    ctx->pc = 0x35B014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B010u;
    // 0x35b014: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A000u, 0x35B010u, 0x35B018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B018u;
label_35b018:
    // 0x35b018: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35b018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b01c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x35b01cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x35b020: 0xc0d6800  jal         func_35A000
    ctx->pc = 0x35B020u;
    SET_GPR_U32(ctx, 31, 0x35B028u);
    ctx->pc = 0x35B024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B020u;
    // 0x35b024: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A000u, 0x35B020u, 0x35B028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B028u;
label_35b028:
    // 0x35b028: 0xae1302e8  sw          $s3, 0x2E8($s0)
    ctx->pc = 0x35b028u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 744), GPR_U32(ctx, 19));
    // 0x35b02c: 0xae1402e4  sw          $s4, 0x2E4($s0)
    ctx->pc = 0x35b02cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 740), GPR_U32(ctx, 20));
    // 0x35b030: 0xae0002d4  sw          $zero, 0x2D4($s0)
    ctx->pc = 0x35b030u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 724), GPR_U32(ctx, 0));
    // 0x35b034: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35b034u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_35b038:
    // 0x35b038: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35b038u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b03c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35b03cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35b040: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35b040u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35b044: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x35b044u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35b048: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x35b048u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35b04c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x35b04cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35b050: 0x3e00008  jr          $ra
    ctx->pc = 0x35B050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35B054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B050u;
        // 0x35b054: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B050u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B058u;
}
