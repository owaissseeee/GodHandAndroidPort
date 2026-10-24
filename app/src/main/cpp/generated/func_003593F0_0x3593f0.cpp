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

// Function: func_003593F0
// Address: 0x3593f0 - 0x359480
void func_003593F0_0x3593f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003593F0_0x3593f0");
#endif

    switch (ctx->pc) {
        case 0x359444u: goto label_359444;
        default: break;
    }

    ctx->pc = 0x3593f0u;

    // 0x3593f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3593f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3593f4: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x3593f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3593f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3593f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3593fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3593fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359400: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x359400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x359404: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x359404u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x359408: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x359408u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x35940c: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x35940cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x359410: 0xdd060000  ld          $a2, 0x0($t0)
    ctx->pc = 0x359410u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x359414: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x359414u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x359418: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x359418u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35941c: 0x4c00013  bltz        $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x35941Cu;
    {
        const bool branch_taken_0x35941c = (GPR_S64(ctx, 6) < 0);
        ctx->pc = 0x359420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35941Cu;
        // 0x359420: 0x651821  addu        $v1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35941c) {
            ctx->pc = 0x35946Cu;
            goto label_35946c;
        }
    }
    ctx->pc = 0x359424u;
    // 0x359424: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x359424u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x359428: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x359428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x35942c: 0x24841348  addiu       $a0, $a0, 0x1348
    ctx->pc = 0x35942cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4936));
    // 0x359430: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x359430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x359434: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x359434u;
    {
        const bool branch_taken_0x359434 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x359438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359434u;
        // 0x359438: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359434) {
            ctx->pc = 0x35946Cu;
            goto label_35946c;
        }
    }
    ctx->pc = 0x35943Cu;
    // 0x35943c: 0xc0d6520  jal         func_359480
    ctx->pc = 0x35943Cu;
    SET_GPR_U32(ctx, 31, 0x359444u);
    ctx->pc = 0x359440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35943Cu;
    // 0x359440: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x359480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359480u, 0x35943Cu, 0x359444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359444u;
label_359444:
    // 0x359444: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x359444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359448: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x359448u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x35944c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x35944cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x359450: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x359450u;
    {
        const bool branch_taken_0x359450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x359454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359450u;
        // 0x359454: 0x34a50421  ori         $a1, $a1, 0x421 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1057);
        ctx->in_delay_slot = false;
        if (branch_taken_0x359450) {
            ctx->pc = 0x359468u;
            goto label_359468;
        }
    }
    ctx->pc = 0x359458u;
    // 0x359458: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x359458u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35945c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x35945cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x359460: 0x80d375c  j           func_34DD70
    ctx->pc = 0x359460u;
    ctx->pc = 0x359464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359460u;
    // 0x359464: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x359460u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x359468u;
label_359468:
    // 0x359468: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x359468u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35946c:
    // 0x35946c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35946cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359470: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x359470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x359474: 0x3e00008  jr          $ra
    ctx->pc = 0x359474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x359478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359474u;
        // 0x359478: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35947Cu;
    // 0x35947c: 0x0  nop
    ctx->pc = 0x35947cu;
    // NOP
    ctx->pc = 0x359480u;
}
