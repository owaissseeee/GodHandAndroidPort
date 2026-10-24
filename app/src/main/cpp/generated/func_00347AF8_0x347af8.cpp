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

// Function: func_00347AF8
// Address: 0x347af8 - 0x347bc0
void func_00347AF8_0x347af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00347AF8_0x347af8");
#endif

    switch (ctx->pc) {
        case 0x347b1cu: goto label_347b1c;
        case 0x347b44u: goto label_347b44;
        case 0x347b5cu: goto label_347b5c;
        case 0x347b74u: goto label_347b74;
        case 0x347b8cu: goto label_347b8c;
        case 0x347ba4u: goto label_347ba4;
        default: break;
    }

    ctx->pc = 0x347af8u;

    // 0x347af8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x347af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x347afc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x347afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x347b00: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x347b00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347b04: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x347b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x347b08: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x347b08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347b0c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x347b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x347b10: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x347b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x347b14: 0xc0d1a0a  jal         func_346828
    ctx->pc = 0x347B14u;
    SET_GPR_U32(ctx, 31, 0x347B1Cu);
    ctx->pc = 0x347B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347B14u;
    // 0x347b18: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346828u, 0x347B14u, 0x347B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347B1Cu;
label_347b1c:
    // 0x347b1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x347b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x347b20: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x347b20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347b24: 0x27a80004  addiu       $t0, $sp, 0x4
    ctx->pc = 0x347b24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x347b28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x347b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347b2c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x347b2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347b30: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x347B30u;
    {
        const bool branch_taken_0x347b30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x347B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347B30u;
        // 0x347b34: 0x27a90008  addiu       $t1, $sp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347b30) {
            ctx->pc = 0x347B50u;
            goto label_347b50;
        }
    }
    ctx->pc = 0x347B38u;
    // 0x347b38: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x347b38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x347b3c: 0xc0d22f8  jal         func_348BE0
    ctx->pc = 0x347B3Cu;
    SET_GPR_U32(ctx, 31, 0x347B44u);
    ctx->pc = 0x347B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347B3Cu;
    // 0x347b40: 0x24849040  addiu       $a0, $a0, -0x6FC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348BE0u, 0x347B3Cu, 0x347B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347B44u;
label_347b44:
    // 0x347b44: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x347B44u;
    {
        const bool branch_taken_0x347b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x347B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347B44u;
        // 0x347b48: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347b44) {
            ctx->pc = 0x347BA8u;
            goto label_347ba8;
        }
    }
    ctx->pc = 0x347B4Cu;
    // 0x347b4c: 0x0  nop
    ctx->pc = 0x347b4cu;
    // NOP
label_347b50:
    // 0x347b50: 0x8e2601a4  lw          $a2, 0x1A4($s1)
    ctx->pc = 0x347b50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 420)));
    // 0x347b54: 0xc0c916c  jal         func_3245B0
    ctx->pc = 0x347B54u;
    SET_GPR_U32(ctx, 31, 0x347B5Cu);
    ctx->pc = 0x347B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347B54u;
    // 0x347b58: 0x8e310048  lw          $s1, 0x48($s1) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3245B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3245B0u, 0x347B54u, 0x347B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347B5Cu;
label_347b5c:
    // 0x347b5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x347b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347b60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x347b60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347b64: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x347B64u;
    {
        const bool branch_taken_0x347b64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x347B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347B64u;
        // 0x347b68: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347b64) {
            ctx->pc = 0x347B98u;
            goto label_347b98;
        }
    }
    ctx->pc = 0x347B6Cu;
    // 0x347b6c: 0xc0c91f4  jal         func_3247D0
    ctx->pc = 0x347B6Cu;
    SET_GPR_U32(ctx, 31, 0x347B74u);
    ctx->pc = 0x3247D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3247D0u, 0x347B6Cu, 0x347B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347B74u;
label_347b74:
    // 0x347b74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x347b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347b78: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x347b78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x347b7c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x347b7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347b80: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x347b80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x347b84: 0xc0cd58e  jal         func_335638
    ctx->pc = 0x347B84u;
    SET_GPR_U32(ctx, 31, 0x347B8Cu);
    ctx->pc = 0x347B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347B84u;
    // 0x347b88: 0x8fa80008  lw          $t0, 0x8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335638u, 0x347B84u, 0x347B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347B8Cu;
label_347b8c:
    // 0x347b8c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x347B8Cu;
    {
        const bool branch_taken_0x347b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x347B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347B8Cu;
        // 0x347b90: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347b8c) {
            ctx->pc = 0x347BA8u;
            goto label_347ba8;
        }
    }
    ctx->pc = 0x347B94u;
    // 0x347b94: 0x0  nop
    ctx->pc = 0x347b94u;
    // NOP
label_347b98:
    // 0x347b98: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x347b98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x347b9c: 0xc0d22f8  jal         func_348BE0
    ctx->pc = 0x347B9Cu;
    SET_GPR_U32(ctx, 31, 0x347BA4u);
    ctx->pc = 0x347BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347B9Cu;
    // 0x347ba0: 0x24849070  addiu       $a0, $a0, -0x6F90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348BE0u, 0x347B9Cu, 0x347BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347BA4u;
label_347ba4:
    // 0x347ba4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x347ba4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_347ba8:
    // 0x347ba8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x347ba8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x347bac: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x347bacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x347bb0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x347bb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x347bb4: 0x3e00008  jr          $ra
    ctx->pc = 0x347BB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x347BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347BB4u;
        // 0x347bb8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x347BB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x347BBCu;
    // 0x347bbc: 0x0  nop
    ctx->pc = 0x347bbcu;
    // NOP
    ctx->pc = 0x347bc0u;
}
