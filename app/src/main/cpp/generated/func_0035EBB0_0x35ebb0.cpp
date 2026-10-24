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

// Function: func_0035EBB0
// Address: 0x35ebb0 - 0x35ed08
void func_0035EBB0_0x35ebb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035EBB0_0x35ebb0");
#endif

    switch (ctx->pc) {
        case 0x35ebd8u: goto label_35ebd8;
        default: break;
    }

    ctx->pc = 0x35ebb0u;

    // 0x35ebb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35ebb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35ebb4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35ebb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35ebb8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x35ebb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ebbc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x35ebbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x35ebc0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x35ebc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ebc4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x35ebc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ebc8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35ebc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35ebcc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x35ebccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x35ebd0: 0xc0d7b42  jal         func_35ED08
    ctx->pc = 0x35EBD0u;
    SET_GPR_U32(ctx, 31, 0x35EBD8u);
    ctx->pc = 0x35EBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EBD0u;
    // 0x35ebd4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35ED08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35ED08u, 0x35EBD0u, 0x35EBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EBD8u;
label_35ebd8:
    // 0x35ebd8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35ebd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35ebdc: 0x54430044  bnel        $v0, $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x35EBDCu;
    {
        const bool branch_taken_0x35ebdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x35ebdc) {
            ctx->pc = 0x35EBE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35EBDCu;
            // 0x35ebe0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35ECF0u;
            goto label_35ecf0;
        }
    }
    ctx->pc = 0x35EBE4u;
    // 0x35ebe4: 0x2e220065  sltiu       $v0, $s1, 0x65
    ctx->pc = 0x35ebe4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)101) ? 1 : 0);
    // 0x35ebe8: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x35EBE8u;
    {
        const bool branch_taken_0x35ebe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35EBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EBE8u;
        // 0x35ebec: 0xae110034  sw          $s1, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ebe8) {
            ctx->pc = 0x35ECC8u;
            goto label_35ecc8;
        }
    }
    ctx->pc = 0x35EBF0u;
    // 0x35ebf0: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x35ebf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x35ebf4: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x35ebf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x35ebf8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x35ebf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35ebfc: 0x8c639ce0  lw          $v1, -0x6320($v1)
    ctx->pc = 0x35ebfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941920)));
    // 0x35ec00: 0x600008  jr          $v1
    ctx->pc = 0x35EC00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x35EC08u: goto label_35ec08;
            case 0x35EC28u: goto label_35ec28;
            case 0x35EC48u: goto label_35ec48;
            case 0x35EC68u: goto label_35ec68;
            case 0x35EC88u: goto label_35ec88;
            case 0x35ECA8u: goto label_35eca8;
            case 0x35ECC8u: goto label_35ecc8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35EC00u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x35EC08u;
label_35ec08:
    // 0x35ec08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35ec08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ec0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35ec0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35ec10: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x35ec10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ec14: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35ec14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35ec18: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35ec18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35ec1c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x35ec1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35ec20: 0x80d7b6a  j           func_35EDA8
    ctx->pc = 0x35EC20u;
    ctx->pc = 0x35EC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EC20u;
    // 0x35ec24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35EDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35EDA8u, 0x35EC20u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35EC28u;
label_35ec28:
    // 0x35ec28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35ec28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ec2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35ec2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35ec30: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x35ec30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ec34: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35ec34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35ec38: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35ec38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35ec3c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x35ec3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35ec40: 0x80d7ba6  j           func_35EE98
    ctx->pc = 0x35EC40u;
    ctx->pc = 0x35EC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EC40u;
    // 0x35ec44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35EE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35EE98u, 0x35EC40u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35EC48u;
label_35ec48:
    // 0x35ec48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35ec48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ec4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35ec4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35ec50: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x35ec50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ec54: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35ec54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35ec58: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35ec58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35ec5c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x35ec5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35ec60: 0x80d7bae  j           func_35EEB8
    ctx->pc = 0x35EC60u;
    ctx->pc = 0x35EC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EC60u;
    // 0x35ec64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35EEB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35EEB8u, 0x35EC60u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35EC68u;
label_35ec68:
    // 0x35ec68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35ec68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ec6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35ec6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35ec70: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x35ec70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ec74: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35ec74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35ec78: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35ec78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35ec7c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x35ec7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35ec80: 0x80d7bb6  j           func_35EED8
    ctx->pc = 0x35EC80u;
    ctx->pc = 0x35EC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EC80u;
    // 0x35ec84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35EED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35EED8u, 0x35EC80u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35EC88u;
label_35ec88:
    // 0x35ec88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35ec88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ec8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35ec8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35ec90: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x35ec90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ec94: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35ec94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35ec98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35ec98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35ec9c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x35ec9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35eca0: 0x80d7bbe  j           func_35EEF8
    ctx->pc = 0x35ECA0u;
    ctx->pc = 0x35ECA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35ECA0u;
    // 0x35eca4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35EEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35EEF8u, 0x35ECA0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35ECA8u;
label_35eca8:
    // 0x35eca8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35eca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ecac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35ecacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35ecb0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x35ecb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ecb4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35ecb4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35ecb8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35ecb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35ecbc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x35ecbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35ecc0: 0x80d7b72  j           func_35EDC8
    ctx->pc = 0x35ECC0u;
    ctx->pc = 0x35ECC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35ECC0u;
    // 0x35ecc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35EDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35EDC8u, 0x35ECC0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35ECC8u;
label_35ecc8:
    // 0x35ecc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35ecc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35eccc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35ecccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35ecd0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x35ecd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ecd4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35ecd4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35ecd8: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x35ecd8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x35ecdc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35ecdcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35ece0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x35ece0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35ece4: 0x24c69ca0  addiu       $a2, $a2, -0x6360
    ctx->pc = 0x35ece4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941856));
    // 0x35ece8: 0x80d7ef6  j           func_35FBD8
    ctx->pc = 0x35ECE8u;
    ctx->pc = 0x35ECECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35ECE8u;
    // 0x35ecec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35FBD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35FBD8u, 0x35ECE8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35ECF0u;
label_35ecf0:
    // 0x35ecf0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35ecf0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35ecf4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35ecf4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35ecf8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x35ecf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35ecfc: 0x3e00008  jr          $ra
    ctx->pc = 0x35ECFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35ED00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35ECFCu;
        // 0x35ed00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35ECFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35ED04u;
    // 0x35ed04: 0x0  nop
    ctx->pc = 0x35ed04u;
    // NOP
    ctx->pc = 0x35ed08u;
}
