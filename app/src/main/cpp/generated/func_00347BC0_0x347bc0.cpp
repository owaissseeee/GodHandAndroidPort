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

// Function: func_00347BC0
// Address: 0x347bc0 - 0x347c80
void func_00347BC0_0x347bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00347BC0_0x347bc0");
#endif

    switch (ctx->pc) {
        case 0x347be8u: goto label_347be8;
        case 0x347c20u: goto label_347c20;
        case 0x347c30u: goto label_347c30;
        case 0x347c3cu: goto label_347c3c;
        case 0x347c44u: goto label_347c44;
        default: break;
    }

    ctx->pc = 0x347bc0u;

    // 0x347bc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x347bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x347bc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x347bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x347bc8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x347bc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347bcc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x347bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x347bd0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x347bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x347bd4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x347bd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347bd8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x347bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x347bdc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x347bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x347be0: 0xc0d1a0a  jal         func_346828
    ctx->pc = 0x347BE0u;
    SET_GPR_U32(ctx, 31, 0x347BE8u);
    ctx->pc = 0x347BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347BE0u;
    // 0x347be4: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346828u, 0x347BE0u, 0x347BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347BE8u;
label_347be8:
    // 0x347be8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x347be8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347bec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x347becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x347bf0: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x347bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x347bf4: 0x12220008  beq         $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x347BF4u;
    {
        const bool branch_taken_0x347bf4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x347BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347BF4u;
        // 0x347bf8: 0x248490a8  addiu       $a0, $a0, -0x6F58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938792));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347bf4) {
            ctx->pc = 0x347C18u;
            goto label_347c18;
        }
    }
    ctx->pc = 0x347BFCu;
    // 0x347bfc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x347bfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x347c00: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x347c00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x347c04: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x347c04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x347c08: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x347c08u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x347c0c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x347c0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x347c10: 0x80d22f8  j           func_348BE0
    ctx->pc = 0x347C10u;
    ctx->pc = 0x347C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347C10u;
    // 0x347c14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348BE0u, 0x347C10u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x347C18u;
label_347c18:
    // 0x347c18: 0xc0cd654  jal         func_335950
    ctx->pc = 0x347C18u;
    SET_GPR_U32(ctx, 31, 0x347C20u);
    ctx->pc = 0x347C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347C18u;
    // 0x347c1c: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335950u, 0x347C18u, 0x347C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347C20u;
label_347c20:
    // 0x347c20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x347c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347c24: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x347c24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347c28: 0xc0d1ebe  jal         func_347AF8
    ctx->pc = 0x347C28u;
    SET_GPR_U32(ctx, 31, 0x347C30u);
    ctx->pc = 0x347C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347C28u;
    // 0x347c2c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347AF8u, 0x347C28u, 0x347C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347C30u;
label_347c30:
    // 0x347c30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x347c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347c34: 0xc0d1e42  jal         func_347908
    ctx->pc = 0x347C34u;
    SET_GPR_U32(ctx, 31, 0x347C3Cu);
    ctx->pc = 0x347C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347C34u;
    // 0x347c38: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347908u, 0x347C34u, 0x347C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347C3Cu;
label_347c3c:
    // 0x347c3c: 0xc0d1e1a  jal         func_347868
    ctx->pc = 0x347C3Cu;
    SET_GPR_U32(ctx, 31, 0x347C44u);
    ctx->pc = 0x347C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347C3Cu;
    // 0x347c40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347868u, 0x347C3Cu, 0x347C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347C44u;
label_347c44:
    // 0x347c44: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x347c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x347c48: 0x8e0302e0  lw          $v1, 0x2E0($s0)
    ctx->pc = 0x347c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 736)));
    // 0x347c4c: 0xae0202e4  sw          $v0, 0x2E4($s0)
    ctx->pc = 0x347c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 740), GPR_U32(ctx, 2));
    // 0x347c50: 0xae1202ec  sw          $s2, 0x2EC($s0)
    ctx->pc = 0x347c50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 748), GPR_U32(ctx, 18));
    // 0x347c54: 0xae1302f0  sw          $s3, 0x2F0($s0)
    ctx->pc = 0x347c54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 752), GPR_U32(ctx, 19));
    // 0x347c58: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x347C58u;
    {
        const bool branch_taken_0x347c58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x347C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347C58u;
        // 0x347c5c: 0xae1102dc  sw          $s1, 0x2DC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 732), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347c58) {
            ctx->pc = 0x347C64u;
            goto label_347c64;
        }
    }
    ctx->pc = 0x347C60u;
    // 0x347c60: 0xae1102e8  sw          $s1, 0x2E8($s0)
    ctx->pc = 0x347c60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 744), GPR_U32(ctx, 17));
label_347c64:
    // 0x347c64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x347c64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x347c68: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x347c68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x347c6c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x347c6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x347c70: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x347c70u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x347c74: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x347c74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x347c78: 0x3e00008  jr          $ra
    ctx->pc = 0x347C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x347C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347C78u;
        // 0x347c7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x347C78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x347C80u;
}
