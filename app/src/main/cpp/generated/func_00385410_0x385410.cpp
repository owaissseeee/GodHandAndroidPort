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

// Function: func_00385410
// Address: 0x385410 - 0x3854b0
void func_00385410_0x385410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00385410_0x385410");
#endif

    switch (ctx->pc) {
        case 0x385460u: goto label_385460;
        case 0x38549cu: goto label_38549c;
        default: break;
    }

    ctx->pc = 0x385410u;

    // 0x385410: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x385410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x385414: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x385414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x385418: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x385418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x38541c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38541cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x385420: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x385420u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385424: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x385424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x385428: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x385428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x38542c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x38542Cu;
    {
        const bool branch_taken_0x38542c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x385430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38542Cu;
        // 0x385430: 0x24900484  addiu       $s0, $a0, 0x484 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 1156));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38542c) {
            ctx->pc = 0x385460u;
            goto label_385460;
        }
    }
    ctx->pc = 0x385434u;
    // 0x385434: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x385434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x385438: 0x2862fff2  slti        $v0, $v1, -0xE
    ctx->pc = 0x385438u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967282) ? 1 : 0);
    // 0x38543c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x38543Cu;
    {
        const bool branch_taken_0x38543c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x385440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38543Cu;
        // 0x385440: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38543c) {
            ctx->pc = 0x385448u;
            goto label_385448;
        }
    }
    ctx->pc = 0x385444u;
    // 0x385444: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x385444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_385448:
    // 0x385448: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x385448u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x38544c: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x38544cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x385450: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x385450u;
    {
        const bool branch_taken_0x385450 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x385450) {
            ctx->pc = 0x385454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x385450u;
            // 0x385454: 0x8e220038  lw          $v0, 0x38($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x385464u;
            goto label_385464;
        }
    }
    ctx->pc = 0x385458u;
    // 0x385458: 0xc0caa30  jal         func_32A8C0
    ctx->pc = 0x385458u;
    SET_GPR_U32(ctx, 31, 0x385460u);
    ctx->pc = 0x38545Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385458u;
    // 0x38545c: 0x8e050020  lw          $a1, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A8C0u, 0x385458u, 0x385460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385460u;
label_385460:
    // 0x385460: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x385460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_385464:
    // 0x385464: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x385464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x385468: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x385468u;
    {
        const bool branch_taken_0x385468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x385468) {
            ctx->pc = 0x38546Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x385468u;
            // 0x38546c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3854A0u;
            goto label_3854a0;
        }
    }
    ctx->pc = 0x385470u;
    // 0x385470: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x385470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x385474: 0x2862000f  slti        $v0, $v1, 0xF
    ctx->pc = 0x385474u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x385478: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x385478u;
    {
        const bool branch_taken_0x385478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38547Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385478u;
        // 0x38547c: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385478) {
            ctx->pc = 0x385484u;
            goto label_385484;
        }
    }
    ctx->pc = 0x385480u;
    // 0x385480: 0x2402fff1  addiu       $v0, $zero, -0xF
    ctx->pc = 0x385480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
label_385484:
    // 0x385484: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x385484u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x385488: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x385488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x38548c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x38548Cu;
    {
        const bool branch_taken_0x38548c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x38548c) {
            ctx->pc = 0x385490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38548Cu;
            // 0x385490: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3854A0u;
            goto label_3854a0;
        }
    }
    ctx->pc = 0x385494u;
    // 0x385494: 0xc0caa30  jal         func_32A8C0
    ctx->pc = 0x385494u;
    SET_GPR_U32(ctx, 31, 0x38549Cu);
    ctx->pc = 0x385498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385494u;
    // 0x385498: 0x8e050020  lw          $a1, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A8C0u, 0x385494u, 0x38549Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38549Cu;
label_38549c:
    // 0x38549c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x38549cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3854a0:
    // 0x3854a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3854a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3854a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3854a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3854a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3854A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3854ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3854A8u;
        // 0x3854ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3854A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3854B0u;
}
