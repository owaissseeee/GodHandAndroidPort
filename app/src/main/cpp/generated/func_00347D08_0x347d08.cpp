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

// Function: func_00347D08
// Address: 0x347d08 - 0x347df8
void func_00347D08_0x347d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00347D08_0x347d08");
#endif

    switch (ctx->pc) {
        case 0x347d38u: goto label_347d38;
        case 0x347d80u: goto label_347d80;
        case 0x347d88u: goto label_347d88;
        case 0x347d9cu: goto label_347d9c;
        case 0x347da8u: goto label_347da8;
        case 0x347db0u: goto label_347db0;
        default: break;
    }

    ctx->pc = 0x347d08u;

    // 0x347d08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x347d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x347d0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x347d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x347d10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x347d10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347d14: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x347d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x347d18: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x347d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x347d1c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x347d1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347d20: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x347d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x347d24: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x347d24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347d28: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x347d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x347d2c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x347d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x347d30: 0xc0d1a0a  jal         func_346828
    ctx->pc = 0x347D30u;
    SET_GPR_U32(ctx, 31, 0x347D38u);
    ctx->pc = 0x347D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347D30u;
    // 0x347d34: 0xe0a02d  daddu       $s4, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346828u, 0x347D30u, 0x347D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347D38u;
label_347d38:
    // 0x347d38: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x347d38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347d3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x347d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x347d40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x347d40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347d44: 0x1222000c  beq         $s1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x347D44u;
    {
        const bool branch_taken_0x347d44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x347D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347D44u;
        // 0x347d48: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347d44) {
            ctx->pc = 0x347D78u;
            goto label_347d78;
        }
    }
    ctx->pc = 0x347D4Cu;
    // 0x347d4c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x347d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x347d50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x347d50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x347d54: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x347d54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x347d58: 0x24849110  addiu       $a0, $a0, -0x6EF0
    ctx->pc = 0x347d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938896));
    // 0x347d5c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x347d5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x347d60: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x347d60u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x347d64: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x347d64u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x347d68: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x347d68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x347d6c: 0x80d22f8  j           func_348BE0
    ctx->pc = 0x347D6Cu;
    ctx->pc = 0x347D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347D6Cu;
    // 0x347d70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348BE0u, 0x347D6Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x347D74u;
    // 0x347d74: 0x0  nop
    ctx->pc = 0x347d74u;
    // NOP
label_347d78:
    // 0x347d78: 0xc0d186c  jal         func_3461B0
    ctx->pc = 0x347D78u;
    SET_GPR_U32(ctx, 31, 0x347D80u);
    ctx->pc = 0x3461B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3461B0u, 0x347D78u, 0x347D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347D80u;
label_347d80:
    // 0x347d80: 0xc0cd654  jal         func_335950
    ctx->pc = 0x347D80u;
    SET_GPR_U32(ctx, 31, 0x347D88u);
    ctx->pc = 0x347D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347D80u;
    // 0x347d84: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335950u, 0x347D80u, 0x347D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347D88u;
label_347d88:
    // 0x347d88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x347d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347d8c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x347d8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347d90: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x347d90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347d94: 0xc0d1f20  jal         func_347C80
    ctx->pc = 0x347D94u;
    SET_GPR_U32(ctx, 31, 0x347D9Cu);
    ctx->pc = 0x347D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347D94u;
    // 0x347d98: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347C80u, 0x347D94u, 0x347D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347D9Cu;
label_347d9c:
    // 0x347d9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x347d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347da0: 0xc0d1e42  jal         func_347908
    ctx->pc = 0x347DA0u;
    SET_GPR_U32(ctx, 31, 0x347DA8u);
    ctx->pc = 0x347DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347DA0u;
    // 0x347da4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347908u, 0x347DA0u, 0x347DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347DA8u;
label_347da8:
    // 0x347da8: 0xc0d1e1a  jal         func_347868
    ctx->pc = 0x347DA8u;
    SET_GPR_U32(ctx, 31, 0x347DB0u);
    ctx->pc = 0x347DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347DA8u;
    // 0x347dac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347868u, 0x347DA8u, 0x347DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347DB0u;
label_347db0:
    // 0x347db0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x347db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x347db4: 0x8e0302e0  lw          $v1, 0x2E0($s0)
    ctx->pc = 0x347db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 736)));
    // 0x347db8: 0xae0202e4  sw          $v0, 0x2E4($s0)
    ctx->pc = 0x347db8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 740), GPR_U32(ctx, 2));
    // 0x347dbc: 0xae1302f4  sw          $s3, 0x2F4($s0)
    ctx->pc = 0x347dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 756), GPR_U32(ctx, 19));
    // 0x347dc0: 0xae1402f8  sw          $s4, 0x2F8($s0)
    ctx->pc = 0x347dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 760), GPR_U32(ctx, 20));
    // 0x347dc4: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x347DC4u;
    {
        const bool branch_taken_0x347dc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x347DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347DC4u;
        // 0x347dc8: 0xae1102dc  sw          $s1, 0x2DC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 732), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347dc4) {
            ctx->pc = 0x347DD0u;
            goto label_347dd0;
        }
    }
    ctx->pc = 0x347DCCu;
    // 0x347dcc: 0xae1102e8  sw          $s1, 0x2E8($s0)
    ctx->pc = 0x347dccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 744), GPR_U32(ctx, 17));
label_347dd0:
    // 0x347dd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x347dd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x347dd4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x347dd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x347dd8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x347dd8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x347ddc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x347ddcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x347de0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x347de0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x347de4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x347de4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x347de8: 0x3e00008  jr          $ra
    ctx->pc = 0x347DE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x347DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347DE8u;
        // 0x347dec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x347DE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x347DF0u;
    // 0x347df0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x347df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x347df4: 0x0  nop
    ctx->pc = 0x347df4u;
    // NOP
    ctx->pc = 0x347df8u;
}
