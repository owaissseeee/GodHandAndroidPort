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

// Function: func_00349E30
// Address: 0x349e30 - 0x349ee8
void func_00349E30_0x349e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00349E30_0x349e30");
#endif

    switch (ctx->pc) {
        case 0x349e64u: goto label_349e64;
        case 0x349e74u: goto label_349e74;
        case 0x349e90u: goto label_349e90;
        case 0x349e9cu: goto label_349e9c;
        case 0x349ea8u: goto label_349ea8;
        case 0x349eb4u: goto label_349eb4;
        case 0x349ebcu: goto label_349ebc;
        case 0x349ec4u: goto label_349ec4;
        case 0x349eccu: goto label_349ecc;
        default: break;
    }

    ctx->pc = 0x349e30u;

    // 0x349e30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x349e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x349e34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x349e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x349e38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x349e38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x349e3c: 0x80d2792  j           func_349E48
    ctx->pc = 0x349E3Cu;
    ctx->pc = 0x349E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349E3Cu;
    // 0x349e40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349E48u;
    goto label_349e48;
    ctx->pc = 0x349E44u;
    // 0x349e44: 0x0  nop
    ctx->pc = 0x349e44u;
    // NOP
label_349e48:
    // 0x349e48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x349e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x349e4c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x349e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x349e50: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x349e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x349e54: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x349e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x349e58: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x349e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x349e5c: 0xc0d6872  jal         func_35A1C8
    ctx->pc = 0x349E5Cu;
    SET_GPR_U32(ctx, 31, 0x349E64u);
    ctx->pc = 0x349E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349E5Cu;
    // 0x349e60: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x349E5Cu, 0x349E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349E64u;
label_349e64:
    // 0x349e64: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x349E64u;
    {
        const bool branch_taken_0x349e64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x349E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349E64u;
        // 0x349e68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349e64) {
            ctx->pc = 0x349ED0u;
            goto label_349ed0;
        }
    }
    ctx->pc = 0x349E6Cu;
    // 0x349e6c: 0xc0d2ab8  jal         func_34AAE0
    ctx->pc = 0x349E6Cu;
    SET_GPR_U32(ctx, 31, 0x349E74u);
    ctx->pc = 0x34AAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34AAE0u, 0x349E6Cu, 0x349E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349E74u;
label_349e74:
    // 0x349e74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x349e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x349e78: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x349E78u;
    {
        const bool branch_taken_0x349e78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x349E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349E78u;
        // 0x349e7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349e78) {
            ctx->pc = 0x349E88u;
            goto label_349e88;
        }
    }
    ctx->pc = 0x349E80u;
    // 0x349e80: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x349E80u;
    {
        const bool branch_taken_0x349e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x349E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349E80u;
        // 0x349e84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349e80) {
            ctx->pc = 0x349ED0u;
            goto label_349ed0;
        }
    }
    ctx->pc = 0x349E88u;
label_349e88:
    // 0x349e88: 0xc0d27ba  jal         func_349EE8
    ctx->pc = 0x349E88u;
    SET_GPR_U32(ctx, 31, 0x349E90u);
    ctx->pc = 0x349EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349EE8u, 0x349E88u, 0x349E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349E90u;
label_349e90:
    // 0x349e90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x349e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349e94: 0xc0d27bc  jal         func_349EF0
    ctx->pc = 0x349E94u;
    SET_GPR_U32(ctx, 31, 0x349E9Cu);
    ctx->pc = 0x349E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349E94u;
    // 0x349e98: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349EF0u, 0x349E94u, 0x349E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349E9Cu;
label_349e9c:
    // 0x349e9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x349e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349ea0: 0xc0d29d2  jal         func_34A748
    ctx->pc = 0x349EA0u;
    SET_GPR_U32(ctx, 31, 0x349EA8u);
    ctx->pc = 0x349EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349EA0u;
    // 0x349ea4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34A748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34A748u, 0x349EA0u, 0x349EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349EA8u;
label_349ea8:
    // 0x349ea8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x349ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x349eac: 0xc0d2a06  jal         func_34A818
    ctx->pc = 0x349EACu;
    SET_GPR_U32(ctx, 31, 0x349EB4u);
    ctx->pc = 0x349EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349EACu;
    // 0x349eb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34A818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34A818u, 0x349EACu, 0x349EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349EB4u;
label_349eb4:
    // 0x349eb4: 0xc0d2ac6  jal         func_34AB18
    ctx->pc = 0x349EB4u;
    SET_GPR_U32(ctx, 31, 0x349EBCu);
    ctx->pc = 0x349EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349EB4u;
    // 0x349eb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34AB18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34AB18u, 0x349EB4u, 0x349EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349EBCu;
label_349ebc:
    // 0x349ebc: 0xc0d2afe  jal         func_34ABF8
    ctx->pc = 0x349EBCu;
    SET_GPR_U32(ctx, 31, 0x349EC4u);
    ctx->pc = 0x349EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349EBCu;
    // 0x349ec0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34ABF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34ABF8u, 0x349EBCu, 0x349EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349EC4u;
label_349ec4:
    // 0x349ec4: 0xc0d2768  jal         func_349DA0
    ctx->pc = 0x349EC4u;
    SET_GPR_U32(ctx, 31, 0x349ECCu);
    ctx->pc = 0x349EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349EC4u;
    // 0x349ec8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349DA0u, 0x349EC4u, 0x349ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349ECCu;
label_349ecc:
    // 0x349ecc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x349eccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_349ed0:
    // 0x349ed0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x349ed0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x349ed4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x349ed4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x349ed8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x349ed8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x349edc: 0x3e00008  jr          $ra
    ctx->pc = 0x349EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349EDCu;
        // 0x349ee0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349EDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x349EE4u;
    // 0x349ee4: 0x0  nop
    ctx->pc = 0x349ee4u;
    // NOP
    ctx->pc = 0x349ee8u;
}
