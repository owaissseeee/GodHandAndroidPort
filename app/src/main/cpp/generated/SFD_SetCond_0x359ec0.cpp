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

// Function: SFD_SetCond
// Address: 0x359ec0 - 0x359f78
void SFD_SetCond_0x359ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SFD_SetCond_0x359ec0");
#endif

    switch (ctx->pc) {
        case 0x359ef0u: goto label_359ef0;
        case 0x359f10u: goto label_359f10;
        case 0x359f48u: goto label_359f48;
        case 0x359f58u: goto label_359f58;
        default: break;
    }

    ctx->pc = 0x359ec0u;

    // 0x359ec0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x359ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x359ec4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x359ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x359ec8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x359ec8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359ecc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x359eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x359ed0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x359ed0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359ed4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x359ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x359ed8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x359ed8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359edc: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x359EDCu;
    {
        const bool branch_taken_0x359edc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x359EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359EDCu;
        // 0x359ee0: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359edc) {
            ctx->pc = 0x359F08u;
            goto label_359f08;
        }
    }
    ctx->pc = 0x359EE4u;
    // 0x359ee4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x359ee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359ee8: 0xc0d67de  jal         func_359F78
    ctx->pc = 0x359EE8u;
    SET_GPR_U32(ctx, 31, 0x359EF0u);
    ctx->pc = 0x359EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359EE8u;
    // 0x359eec: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x359F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359F78u, 0x359EE8u, 0x359EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359EF0u;
label_359ef0:
    // 0x359ef0: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x359ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x359ef4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x359ef4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x359ef8: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x359ef8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x359efc: 0xac32e0c0  sw          $s2, -0x1F40($at)
    ctx->pc = 0x359efcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959296), GPR_U32(ctx, 18));
    // 0x359f00: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x359F00u;
    {
        const bool branch_taken_0x359f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x359F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359F00u;
        // 0x359f04: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359f00) {
            ctx->pc = 0x359F5Cu;
            goto label_359f5c;
        }
    }
    ctx->pc = 0x359F08u;
label_359f08:
    // 0x359f08: 0xc0d37b2  jal         func_34DEC8
    ctx->pc = 0x359F08u;
    SET_GPR_U32(ctx, 31, 0x359F10u);
    ctx->pc = 0x34DEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DEC8u, 0x359F08u, 0x359F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359F10u;
label_359f10:
    // 0x359f10: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x359f10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x359f14: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x359F14u;
    {
        const bool branch_taken_0x359f14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x359F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359F14u;
        // 0x359f18: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359f14) {
            ctx->pc = 0x359F38u;
            goto label_359f38;
        }
    }
    ctx->pc = 0x359F1Cu;
    // 0x359f1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x359f1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359f20: 0x34a50112  ori         $a1, $a1, 0x112
    ctx->pc = 0x359f20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)274);
    // 0x359f24: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x359f24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x359f28: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x359f28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x359f2c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x359f2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x359f30: 0x80d375c  j           func_34DD70
    ctx->pc = 0x359F30u;
    ctx->pc = 0x359F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359F30u;
    // 0x359f34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x359F30u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x359F38u;
label_359f38:
    // 0x359f38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x359f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359f3c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x359f3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359f40: 0xc0d6800  jal         func_35A000
    ctx->pc = 0x359F40u;
    SET_GPR_U32(ctx, 31, 0x359F48u);
    ctx->pc = 0x359F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359F40u;
    // 0x359f44: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A000u, 0x359F40u, 0x359F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359F48u;
label_359f48:
    // 0x359f48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x359f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359f4c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x359f4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359f50: 0xc0d6814  jal         func_35A050
    ctx->pc = 0x359F50u;
    SET_GPR_U32(ctx, 31, 0x359F58u);
    ctx->pc = 0x359F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359F50u;
    // 0x359f54: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A050u, 0x359F50u, 0x359F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359F58u;
label_359f58:
    // 0x359f58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x359f58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_359f5c:
    // 0x359f5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x359f5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359f60: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x359f60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x359f64: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x359f64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x359f68: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x359f68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x359f6c: 0x3e00008  jr          $ra
    ctx->pc = 0x359F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x359F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359F6Cu;
        // 0x359f70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359F6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x359F74u;
    // 0x359f74: 0x0  nop
    ctx->pc = 0x359f74u;
    // NOP
    ctx->pc = 0x359f78u;
}
