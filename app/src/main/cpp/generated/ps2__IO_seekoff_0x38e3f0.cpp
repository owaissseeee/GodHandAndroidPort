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

// Function: _IO_seekoff
// Address: 0x38e3f0 - 0x38e490
void ps2__IO_seekoff_0x38e3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__IO_seekoff_0x38e3f0");
#endif

    switch (ctx->pc) {
        case 0x38e3f0u: goto label_38e3f0;
        case 0x38e3f4u: goto label_38e3f4;
        case 0x38e3f8u: goto label_38e3f8;
        case 0x38e3fcu: goto label_38e3fc;
        case 0x38e400u: goto label_38e400;
        case 0x38e404u: goto label_38e404;
        case 0x38e408u: goto label_38e408;
        case 0x38e40cu: goto label_38e40c;
        case 0x38e410u: goto label_38e410;
        case 0x38e414u: goto label_38e414;
        case 0x38e418u: goto label_38e418;
        case 0x38e41cu: goto label_38e41c;
        case 0x38e420u: goto label_38e420;
        case 0x38e424u: goto label_38e424;
        case 0x38e428u: goto label_38e428;
        case 0x38e42cu: goto label_38e42c;
        case 0x38e430u: goto label_38e430;
        case 0x38e434u: goto label_38e434;
        case 0x38e438u: goto label_38e438;
        case 0x38e43cu: goto label_38e43c;
        case 0x38e440u: goto label_38e440;
        case 0x38e444u: goto label_38e444;
        case 0x38e448u: goto label_38e448;
        case 0x38e44cu: goto label_38e44c;
        case 0x38e450u: goto label_38e450;
        case 0x38e454u: goto label_38e454;
        case 0x38e458u: goto label_38e458;
        case 0x38e45cu: goto label_38e45c;
        case 0x38e460u: goto label_38e460;
        case 0x38e464u: goto label_38e464;
        case 0x38e468u: goto label_38e468;
        case 0x38e46cu: goto label_38e46c;
        case 0x38e470u: goto label_38e470;
        case 0x38e474u: goto label_38e474;
        case 0x38e478u: goto label_38e478;
        case 0x38e47cu: goto label_38e47c;
        case 0x38e480u: goto label_38e480;
        case 0x38e484u: goto label_38e484;
        case 0x38e488u: goto label_38e488;
        case 0x38e48cu: goto label_38e48c;
        default: break;
    }

    ctx->pc = 0x38e3f0u;

label_38e3f0:
    // 0x38e3f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x38e3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_38e3f4:
    // 0x38e3f4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x38e3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_38e3f8:
    // 0x38e3f8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x38e3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_38e3fc:
    // 0x38e3fc: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x38e3fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_38e400:
    // 0x38e400: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x38e400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_38e404:
    // 0x38e404: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x38e404u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_38e408:
    // 0x38e408: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38e408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_38e40c:
    // 0x38e40c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x38e40cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_38e410:
    // 0x38e410: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38e410u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38e414:
    // 0x38e414: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x38e414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_38e418:
    // 0x38e418: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_38e41c:
    if (ctx->pc == 0x38E41Cu) {
        ctx->pc = 0x38E41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E418u;
        // 0x38e41c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E420u;
        goto label_38e420;
    }
    ctx->pc = 0x38E418u;
    {
        const bool branch_taken_0x38e418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E418u;
        // 0x38e41c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e418) {
            ctx->pc = 0x38E454u;
            goto label_38e454;
        }
    }
    ctx->pc = 0x38E420u;
label_38e420:
    // 0x38e420: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x38e420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38e424:
    // 0x38e424: 0x16420009  bne         $s2, $v0, . + 4 + (0x9 << 2)
label_38e428:
    if (ctx->pc == 0x38E428u) {
        ctx->pc = 0x38E42Cu;
        goto label_38e42c;
    }
    ctx->pc = 0x38E424u;
    {
        const bool branch_taken_0x38e424 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x38e424) {
            ctx->pc = 0x38E44Cu;
            goto label_38e44c;
        }
    }
    ctx->pc = 0x38E42Cu;
label_38e42c:
    // 0x38e42c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x38e42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_38e430:
    // 0x38e430: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x38e430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_38e434:
    // 0x38e434: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_38e438:
    if (ctx->pc == 0x38E438u) {
        ctx->pc = 0x38E43Cu;
        goto label_38e43c;
    }
    ctx->pc = 0x38E434u;
    {
        const bool branch_taken_0x38e434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38e434) {
            ctx->pc = 0x38E44Cu;
            goto label_38e44c;
        }
    }
    ctx->pc = 0x38E43Cu;
label_38e43c:
    // 0x38e43c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x38e43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_38e440:
    // 0x38e440: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x38e440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_38e444:
    // 0x38e444: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x38e444u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_38e448:
    // 0x38e448: 0x222882f  dsubu       $s1, $s1, $v0
    ctx->pc = 0x38e448u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) - GPR_U64(ctx, 2));
label_38e44c:
    // 0x38e44c: 0xc0e30e8  jal         func_38C3A0
label_38e450:
    if (ctx->pc == 0x38E450u) {
        ctx->pc = 0x38E450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E44Cu;
        // 0x38e450: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E454u;
        goto label_38e454;
    }
    ctx->pc = 0x38E44Cu;
    SET_GPR_U32(ctx, 31, 0x38E454u);
    ctx->pc = 0x38E450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E44Cu;
    // 0x38e450: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38C3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C3A0u, 0x38E44Cu, 0x38E454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E454u;
label_38e454:
    // 0x38e454: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x38e454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_38e458:
    // 0x38e458: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38e458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38e45c:
    // 0x38e45c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x38e45cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38e460:
    // 0x38e460: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x38e460u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_38e464:
    // 0x38e464: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x38e464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_38e468:
    // 0x38e468: 0x40f809  jalr        $v0
label_38e46c:
    if (ctx->pc == 0x38E46Cu) {
        ctx->pc = 0x38E46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E468u;
        // 0x38e46c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E470u;
        goto label_38e470;
    }
    ctx->pc = 0x38E468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38E470u);
        ctx->pc = 0x38E46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E468u;
        // 0x38e46c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38E468u, 0x38E470u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38E470u;
label_38e470:
    // 0x38e470: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x38e470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_38e474:
    // 0x38e474: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x38e474u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_38e478:
    // 0x38e478: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x38e478u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_38e47c:
    // 0x38e47c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x38e47cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_38e480:
    // 0x38e480: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38e480u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_38e484:
    // 0x38e484: 0x3e00008  jr          $ra
label_38e488:
    if (ctx->pc == 0x38E488u) {
        ctx->pc = 0x38E488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E484u;
        // 0x38e488: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E48Cu;
        goto label_38e48c;
    }
    ctx->pc = 0x38E484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38E488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E484u;
        // 0x38e488: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38E484u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38E48Cu;
label_38e48c:
    // 0x38e48c: 0x0  nop
    ctx->pc = 0x38e48cu;
    // NOP
    ctx->pc = 0x38e490u;
}
