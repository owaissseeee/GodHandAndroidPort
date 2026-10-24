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

// Function: func_00344C98
// Address: 0x344c98 - 0x344d50
void func_00344C98_0x344c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00344C98_0x344c98");
#endif

    switch (ctx->pc) {
        case 0x344d00u: goto label_344d00;
        case 0x344d08u: goto label_344d08;
        case 0x344d24u: goto label_344d24;
        default: break;
    }

    ctx->pc = 0x344c98u;

    // 0x344c98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x344c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x344c9c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x344c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x344ca0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x344ca0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344ca4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x344ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x344ca8: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x344ca8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344cac: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x344cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x344cb0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x344cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x344cb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x344cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x344cb8: 0x8ca30058  lw          $v1, 0x58($a1)
    ctx->pc = 0x344cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x344cbc: 0x2c620003  sltiu       $v0, $v1, 0x3
    ctx->pc = 0x344cbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x344cc0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x344CC0u;
    {
        const bool branch_taken_0x344cc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x344CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344CC0u;
        // 0x344cc4: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344cc0) {
            ctx->pc = 0x344CD8u;
            goto label_344cd8;
        }
    }
    ctx->pc = 0x344CC8u;
    // 0x344cc8: 0x5460000d  bnel        $v1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x344CC8u;
    {
        const bool branch_taken_0x344cc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x344cc8) {
            ctx->pc = 0x344CCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x344CC8u;
            // 0x344ccc: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x344D00u;
            goto label_344d00;
        }
    }
    ctx->pc = 0x344CD0u;
    // 0x344cd0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x344CD0u;
    {
        const bool branch_taken_0x344cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x344CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344CD0u;
        // 0x344cd4: 0x3c040045  lui         $a0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344cd0) {
            ctx->pc = 0x344CF8u;
            goto label_344cf8;
        }
    }
    ctx->pc = 0x344CD8u;
label_344cd8:
    // 0x344cd8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x344cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x344cdc: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x344CDCu;
    {
        const bool branch_taken_0x344cdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x344CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344CDCu;
        // 0x344ce0: 0x3c040045  lui         $a0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344cdc) {
            ctx->pc = 0x344CF8u;
            goto label_344cf8;
        }
    }
    ctx->pc = 0x344CE4u;
    // 0x344ce4: 0x80a2006c  lb          $v0, 0x6C($a1)
    ctx->pc = 0x344ce4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 108)));
    // 0x344ce8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x344CE8u;
    {
        const bool branch_taken_0x344ce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x344ce8) {
            ctx->pc = 0x344D00u;
            goto label_344d00;
        }
    }
    ctx->pc = 0x344CF0u;
    // 0x344cf0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x344CF0u;
    {
        const bool branch_taken_0x344cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x344CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344CF0u;
        // 0x344cf4: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344cf0) {
            ctx->pc = 0x344D00u;
            goto label_344d00;
        }
    }
    ctx->pc = 0x344CF8u;
label_344cf8:
    // 0x344cf8: 0xc0d22f8  jal         func_348BE0
    ctx->pc = 0x344CF8u;
    SET_GPR_U32(ctx, 31, 0x344D00u);
    ctx->pc = 0x344CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344CF8u;
    // 0x344cfc: 0x248478b8  addiu       $a0, $a0, 0x78B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348BE0u, 0x344CF8u, 0x344D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344D00u;
label_344d00:
    // 0x344d00: 0xc0d1566  jal         func_345598
    ctx->pc = 0x344D00u;
    SET_GPR_U32(ctx, 31, 0x344D08u);
    ctx->pc = 0x345598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345598u, 0x344D00u, 0x344D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344D08u;
label_344d08:
    // 0x344d08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x344d08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344d0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x344d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x344d10: 0x56020008  bnel        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x344D10u;
    {
        const bool branch_taken_0x344d10 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x344d10) {
            ctx->pc = 0x344D14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x344D10u;
            // 0x344d14: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x344D34u;
            goto label_344d34;
        }
    }
    ctx->pc = 0x344D18u;
    // 0x344d18: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x344d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344d1c: 0xc0d81f2  jal         func_3607C8
    ctx->pc = 0x344D1Cu;
    SET_GPR_U32(ctx, 31, 0x344D24u);
    ctx->pc = 0x344D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344D1Cu;
    // 0x344d20: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3607C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3607C8u, 0x344D1Cu, 0x344D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344D24u;
label_344d24:
    // 0x344d24: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x344d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x344d28: 0x501026  xor         $v0, $v0, $s0
    ctx->pc = 0x344d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 16));
    // 0x344d2c: 0x62880a  movz        $s1, $v1, $v0
    ctx->pc = 0x344d2cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
    // 0x344d30: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x344d30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_344d34:
    // 0x344d34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x344d34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x344d38: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x344d38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x344d3c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x344d3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x344d40: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x344d40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x344d44: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x344d44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x344d48: 0x3e00008  jr          $ra
    ctx->pc = 0x344D48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344D48u;
        // 0x344d4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344D48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344D50u;
}
