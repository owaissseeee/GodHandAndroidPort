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

// Function: func_00354E08
// Address: 0x354e08 - 0x354ec8
void func_00354E08_0x354e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00354E08_0x354e08");
#endif

    switch (ctx->pc) {
        case 0x354e38u: goto label_354e38;
        case 0x354e54u: goto label_354e54;
        case 0x354e74u: goto label_354e74;
        case 0x354e9cu: goto label_354e9c;
        default: break;
    }

    ctx->pc = 0x354e08u;

    // 0x354e08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x354e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x354e0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x354e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x354e10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x354e10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354e14: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x354e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x354e18: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x354e18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354e1c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x354e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x354e20: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x354e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x354e24: 0x26130d30  addiu       $s3, $s0, 0xD30
    ctx->pc = 0x354e24u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 3376));
    // 0x354e28: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x354e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x354e2c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x354e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x354e30: 0xc0d55b2  jal         func_3556C8
    ctx->pc = 0x354E30u;
    SET_GPR_U32(ctx, 31, 0x354E38u);
    ctx->pc = 0x354E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354E30u;
    // 0x354e34: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3556C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3556C8u, 0x354E30u, 0x354E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354E38u;
label_354e38:
    // 0x354e38: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x354e38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354e3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x354e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354e40: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x354e40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354e44: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x354E44u;
    {
        const bool branch_taken_0x354e44 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x354E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354E44u;
        // 0x354e48: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354e44) {
            ctx->pc = 0x354E7Cu;
            goto label_354e7c;
        }
    }
    ctx->pc = 0x354E4Cu;
    // 0x354e4c: 0xc0d53b2  jal         func_354EC8
    ctx->pc = 0x354E4Cu;
    SET_GPR_U32(ctx, 31, 0x354E54u);
    ctx->pc = 0x354EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354EC8u, 0x354E4Cu, 0x354E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354E54u;
label_354e54:
    // 0x354e54: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x354e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x354e58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x354e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354e5c: 0x8c460014  lw          $a2, 0x14($v0)
    ctx->pc = 0x354e5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x354e60: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x354e60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354e64: 0xae66027c  sw          $a2, 0x27C($s3)
    ctx->pc = 0x354e64u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 636), GPR_U32(ctx, 6));
    // 0x354e68: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x354e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x354e6c: 0xc0d6d9e  jal         func_35B678
    ctx->pc = 0x354E6Cu;
    SET_GPR_U32(ctx, 31, 0x354E74u);
    ctx->pc = 0x354E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354E6Cu;
    // 0x354e70: 0xae630280  sw          $v1, 0x280($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 640), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35B678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B678u, 0x354E6Cu, 0x354E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354E74u;
label_354e74:
    // 0x354e74: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x354E74u;
    {
        const bool branch_taken_0x354e74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x354E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354E74u;
        // 0x354e78: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354e74) {
            ctx->pc = 0x354E88u;
            goto label_354e88;
        }
    }
    ctx->pc = 0x354E7Cu;
label_354e7c:
    // 0x354e7c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x354E7Cu;
    {
        const bool branch_taken_0x354e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354E7Cu;
        // 0x354e80: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354e7c) {
            ctx->pc = 0x354EA8u;
            goto label_354ea8;
        }
    }
    ctx->pc = 0x354E84u;
    // 0x354e84: 0x0  nop
    ctx->pc = 0x354e84u;
    // NOP
label_354e88:
    // 0x354e88: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x354e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x354e8c: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x354E8Cu;
    {
        const bool branch_taken_0x354e8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x354e8c) {
            ctx->pc = 0x354E90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x354E8Cu;
            // 0x354e90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x354EA8u;
            goto label_354ea8;
        }
    }
    ctx->pc = 0x354E94u;
    // 0x354e94: 0xc0d55ec  jal         func_3557B0
    ctx->pc = 0x354E94u;
    SET_GPR_U32(ctx, 31, 0x354E9Cu);
    ctx->pc = 0x354E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354E94u;
    // 0x354e98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3557B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3557B0u, 0x354E94u, 0x354E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354E9Cu;
label_354e9c:
    // 0x354e9c: 0xae420058  sw          $v0, 0x58($s2)
    ctx->pc = 0x354e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 2));
    // 0x354ea0: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x354ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x354ea4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x354ea4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_354ea8:
    // 0x354ea8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x354ea8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x354eac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x354eacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x354eb0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x354eb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x354eb4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x354eb4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x354eb8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x354eb8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x354ebc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x354ebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x354ec0: 0x3e00008  jr          $ra
    ctx->pc = 0x354EC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x354EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354EC0u;
        // 0x354ec4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x354EC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x354EC8u;
}
