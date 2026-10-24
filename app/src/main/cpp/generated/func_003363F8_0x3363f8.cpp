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

// Function: func_003363F8
// Address: 0x3363f8 - 0x336498
void func_003363F8_0x3363f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003363F8_0x3363f8");
#endif

    switch (ctx->pc) {
        case 0x336414u: goto label_336414;
        case 0x33642cu: goto label_33642c;
        case 0x336440u: goto label_336440;
        case 0x336470u: goto label_336470;
        default: break;
    }

    ctx->pc = 0x3363f8u;

    // 0x3363f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3363f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3363fc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3363fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x336400: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x336400u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336404: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x336404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x336408: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x336408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x33640c: 0xc0e9637  jal         func_3A58DC
    ctx->pc = 0x33640Cu;
    SET_GPR_U32(ctx, 31, 0x336414u);
    ctx->pc = 0x336410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33640Cu;
    // 0x336410: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A58DCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A58DCu, 0x33640Cu, 0x336414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336414u;
label_336414:
    // 0x336414: 0x2c420012  sltiu       $v0, $v0, 0x12
    ctx->pc = 0x336414u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
    // 0x336418: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x336418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33641c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33641Cu;
    {
        const bool branch_taken_0x33641c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x336420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33641Cu;
        // 0x336420: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33641c) {
            ctx->pc = 0x33642Cu;
            goto label_33642c;
        }
    }
    ctx->pc = 0x336424u;
    // 0x336424: 0xc0cd8cc  jal         func_336330
    ctx->pc = 0x336424u;
    SET_GPR_U32(ctx, 31, 0x33642Cu);
    ctx->pc = 0x336330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336330u, 0x336424u, 0x33642Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33642Cu;
label_33642c:
    // 0x33642c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33642cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336430: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x336430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336434: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x336434u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x336438: 0xc0cd8de  jal         func_336378
    ctx->pc = 0x336438u;
    SET_GPR_U32(ctx, 31, 0x336440u);
    ctx->pc = 0x33643Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336438u;
    // 0x33643c: 0xafb00000  sw          $s0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336378u, 0x336438u, 0x336440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336440u;
label_336440:
    // 0x336440: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x336440u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x336444: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x336444u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336448: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x336448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33644c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x33644cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336450: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x336450u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x336454: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x336454u;
    {
        const bool branch_taken_0x336454 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x336458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336454u;
        // 0x336458: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336454) {
            ctx->pc = 0x336460u;
            goto label_336460;
        }
    }
    ctx->pc = 0x33645Cu;
    // 0x33645c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x33645cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_336460:
    // 0x336460: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x336460u;
    {
        const bool branch_taken_0x336460 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x336464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336460u;
        // 0x336464: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336460) {
            ctx->pc = 0x336480u;
            goto label_336480;
        }
    }
    ctx->pc = 0x336468u;
    // 0x336468: 0xc0cd8d8  jal         func_336360
    ctx->pc = 0x336468u;
    SET_GPR_U32(ctx, 31, 0x336470u);
    ctx->pc = 0x33646Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336468u;
    // 0x33646c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336360u, 0x336468u, 0x336470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336470u;
label_336470:
    // 0x336470: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x336470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x336474: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x336474u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x336478: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x336478u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x33647c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x33647cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_336480:
    // 0x336480: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x336480u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x336484: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x336484u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x336488: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x336488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33648c: 0x3e00008  jr          $ra
    ctx->pc = 0x33648Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x336490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33648Cu;
        // 0x336490: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33648Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x336494u;
    // 0x336494: 0x0  nop
    ctx->pc = 0x336494u;
    // NOP
    ctx->pc = 0x336498u;
}
