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

// Function: func_00335E60
// Address: 0x335e60 - 0x335f20
void func_00335E60_0x335e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00335E60_0x335e60");
#endif

    switch (ctx->pc) {
        case 0x335ea0u: goto label_335ea0;
        case 0x335eb4u: goto label_335eb4;
        case 0x335ed0u: goto label_335ed0;
        case 0x335ed8u: goto label_335ed8;
        default: break;
    }

    ctx->pc = 0x335e60u;

    // 0x335e60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x335e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x335e64: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x335e64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x335e68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x335e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x335e6c: 0x2463a5f0  addiu       $v1, $v1, -0x5A10
    ctx->pc = 0x335e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944240));
    // 0x335e70: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x335e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x335e74: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x335e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x335e78: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x335e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x335e7c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x335e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x335e80: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x335e80u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3DA5F0u));
    // 0x335e84: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x335e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x335e88: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x335E88u;
    {
        const bool branch_taken_0x335e88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x335E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335E88u;
        // 0x335e8c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335e88) {
            ctx->pc = 0x335F00u;
            goto label_335f00;
        }
    }
    ctx->pc = 0x335E90u;
    // 0x335e90: 0x3c13003e  lui         $s3, 0x3E
    ctx->pc = 0x335e90u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)62 << 16));
    // 0x335e94: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x335e94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x335e98: 0x2670a5f8  addiu       $s0, $s3, -0x5A08
    ctx->pc = 0x335e98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294944248));
    // 0x335e9c: 0x2411001f  addiu       $s1, $zero, 0x1F
    ctx->pc = 0x335e9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_335ea0:
    // 0x335ea0: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x335ea0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x335ea4: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x335EA4u;
    {
        const bool branch_taken_0x335ea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x335ea4) {
            ctx->pc = 0x335EA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x335EA4u;
            // 0x335ea8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x335EB8u;
            goto label_335eb8;
        }
    }
    ctx->pc = 0x335EACu;
    // 0x335eac: 0xc0cd540  jal         func_335500
    ctx->pc = 0x335EACu;
    SET_GPR_U32(ctx, 31, 0x335EB4u);
    ctx->pc = 0x335EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335EACu;
    // 0x335eb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335500u, 0x335EACu, 0x335EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335EB4u;
label_335eb4:
    // 0x335eb4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x335eb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_335eb8:
    // 0x335eb8: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x335EB8u;
    {
        const bool branch_taken_0x335eb8 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x335EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335EB8u;
        // 0x335ebc: 0x26100238  addiu       $s0, $s0, 0x238 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 568));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335eb8) {
            ctx->pc = 0x335EA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_335ea0;
        }
    }
    ctx->pc = 0x335EC0u;
    // 0x335ec0: 0x2664a5f8  addiu       $a0, $s3, -0x5A08
    ctx->pc = 0x335ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294944248));
    // 0x335ec4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x335ec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335ec8: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x335EC8u;
    SET_GPR_U32(ctx, 31, 0x335ED0u);
    ctx->pc = 0x335ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335EC8u;
    // 0x335ecc: 0x24064700  addiu       $a2, $zero, 0x4700 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x335EC8u, 0x335ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335ED0u;
label_335ed0:
    // 0x335ed0: 0xc0cd776  jal         func_335DD8
    ctx->pc = 0x335ED0u;
    SET_GPR_U32(ctx, 31, 0x335ED8u);
    ctx->pc = 0x335DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335DD8u, 0x335ED0u, 0x335ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335ED8u;
label_335ed8:
    // 0x335ed8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x335ed8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x335edc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x335edcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335ee0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x335ee0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x335ee4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x335ee4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335ee8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x335ee8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x335eec: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x335eecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x335ef0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x335ef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x335ef4: 0x80cd746  j           func_335D18
    ctx->pc = 0x335EF4u;
    ctx->pc = 0x335EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335EF4u;
    // 0x335ef8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D18u, 0x335EF4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x335EFCu;
    // 0x335efc: 0x0  nop
    ctx->pc = 0x335efcu;
    // NOP
label_335f00:
    // 0x335f00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x335f00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x335f04: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x335f04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x335f08: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x335f08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x335f0c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x335f0cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x335f10: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x335f10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x335f14: 0x3e00008  jr          $ra
    ctx->pc = 0x335F14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x335F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335F14u;
        // 0x335f18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335F14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x335F1Cu;
    // 0x335f1c: 0x0  nop
    ctx->pc = 0x335f1cu;
    // NOP
    ctx->pc = 0x335f20u;
}
