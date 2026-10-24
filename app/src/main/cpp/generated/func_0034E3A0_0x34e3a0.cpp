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

// Function: func_0034E3A0
// Address: 0x34e3a0 - 0x34e460
void func_0034E3A0_0x34e3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034E3A0_0x34e3a0");
#endif

    switch (ctx->pc) {
        case 0x34e3a0u: goto label_34e3a0;
        case 0x34e3a4u: goto label_34e3a4;
        case 0x34e3a8u: goto label_34e3a8;
        case 0x34e3acu: goto label_34e3ac;
        case 0x34e3b0u: goto label_34e3b0;
        case 0x34e3b4u: goto label_34e3b4;
        case 0x34e3b8u: goto label_34e3b8;
        case 0x34e3bcu: goto label_34e3bc;
        case 0x34e3c0u: goto label_34e3c0;
        case 0x34e3c4u: goto label_34e3c4;
        case 0x34e3c8u: goto label_34e3c8;
        case 0x34e3ccu: goto label_34e3cc;
        case 0x34e3d0u: goto label_34e3d0;
        case 0x34e3d4u: goto label_34e3d4;
        case 0x34e3d8u: goto label_34e3d8;
        case 0x34e3dcu: goto label_34e3dc;
        case 0x34e3e0u: goto label_34e3e0;
        case 0x34e3e4u: goto label_34e3e4;
        case 0x34e3e8u: goto label_34e3e8;
        case 0x34e3ecu: goto label_34e3ec;
        case 0x34e3f0u: goto label_34e3f0;
        case 0x34e3f4u: goto label_34e3f4;
        case 0x34e3f8u: goto label_34e3f8;
        case 0x34e3fcu: goto label_34e3fc;
        case 0x34e400u: goto label_34e400;
        case 0x34e404u: goto label_34e404;
        case 0x34e408u: goto label_34e408;
        case 0x34e40cu: goto label_34e40c;
        case 0x34e410u: goto label_34e410;
        case 0x34e414u: goto label_34e414;
        case 0x34e418u: goto label_34e418;
        case 0x34e41cu: goto label_34e41c;
        case 0x34e420u: goto label_34e420;
        case 0x34e424u: goto label_34e424;
        case 0x34e428u: goto label_34e428;
        case 0x34e42cu: goto label_34e42c;
        case 0x34e430u: goto label_34e430;
        case 0x34e434u: goto label_34e434;
        case 0x34e438u: goto label_34e438;
        case 0x34e43cu: goto label_34e43c;
        case 0x34e440u: goto label_34e440;
        case 0x34e444u: goto label_34e444;
        case 0x34e448u: goto label_34e448;
        case 0x34e44cu: goto label_34e44c;
        case 0x34e450u: goto label_34e450;
        case 0x34e454u: goto label_34e454;
        case 0x34e458u: goto label_34e458;
        case 0x34e45cu: goto label_34e45c;
        default: break;
    }

    ctx->pc = 0x34e3a0u;

label_34e3a0:
    // 0x34e3a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x34e3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_34e3a4:
    // 0x34e3a4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x34e3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_34e3a8:
    // 0x34e3a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34e3a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_34e3ac:
    // 0x34e3ac: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x34e3acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_34e3b0:
    // 0x34e3b0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x34e3b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_34e3b4:
    // 0x34e3b4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x34e3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_34e3b8:
    // 0x34e3b8: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x34e3b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_34e3bc:
    // 0x34e3bc: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x34e3bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_34e3c0:
    // 0x34e3c0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x34e3c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_34e3c4:
    // 0x34e3c4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x34e3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_34e3c8:
    // 0x34e3c8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x34e3c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_34e3cc:
    // 0x34e3cc: 0xc0d30ae  jal         func_34C2B8
label_34e3d0:
    if (ctx->pc == 0x34E3D0u) {
        ctx->pc = 0x34E3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E3CCu;
        // 0x34e3d0: 0x8e051f84  lw          $a1, 0x1F84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8068)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34E3D4u;
        goto label_34e3d4;
    }
    ctx->pc = 0x34E3CCu;
    SET_GPR_U32(ctx, 31, 0x34E3D4u);
    ctx->pc = 0x34E3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E3CCu;
    // 0x34e3d0: 0x8e051f84  lw          $a1, 0x1F84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8068)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34C2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34C2B8u, 0x34E3CCu, 0x34E3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E3D4u;
label_34e3d4:
    // 0x34e3d4: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
label_34e3d8:
    if (ctx->pc == 0x34E3D8u) {
        ctx->pc = 0x34E3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E3D4u;
        // 0x34e3d8: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34E3DCu;
        goto label_34e3dc;
    }
    ctx->pc = 0x34E3D4u;
    {
        const bool branch_taken_0x34e3d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34e3d4) {
            ctx->pc = 0x34E3D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34E3D4u;
            // 0x34e3d8: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34E448u;
            goto label_34e448;
        }
    }
    ctx->pc = 0x34E3DCu;
label_34e3dc:
    // 0x34e3dc: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x34e3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_34e3e0:
    // 0x34e3e0: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x34e3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_34e3e4:
    // 0x34e3e4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x34e3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_34e3e8:
    // 0x34e3e8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x34e3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_34e3ec:
    // 0x34e3ec: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x34e3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_34e3f0:
    // 0x34e3f0: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x34e3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_34e3f4:
    // 0x34e3f4: 0xae650000  sw          $a1, 0x0($s3)
    ctx->pc = 0x34e3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 5));
label_34e3f8:
    // 0x34e3f8: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x34e3f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_34e3fc:
    // 0x34e3fc: 0x28c20800  slti        $v0, $a2, 0x800
    ctx->pc = 0x34e3fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2048) ? 1 : 0);
label_34e400:
    // 0x34e400: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_34e404:
    if (ctx->pc == 0x34E404u) {
        ctx->pc = 0x34E404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E400u;
        // 0x34e404: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34E408u;
        goto label_34e408;
    }
    ctx->pc = 0x34E400u;
    {
        const bool branch_taken_0x34e400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34E404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E400u;
        // 0x34e404: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e400) {
            ctx->pc = 0x34E444u;
            goto label_34e444;
        }
    }
    ctx->pc = 0x34E408u;
label_34e408:
    // 0x34e408: 0x8e0237ac  lw          $v0, 0x37AC($s0)
    ctx->pc = 0x34e408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 14252)));
label_34e40c:
    // 0x34e40c: 0x10a2000d  beq         $a1, $v0, . + 4 + (0xD << 2)
label_34e410:
    if (ctx->pc == 0x34E410u) {
        ctx->pc = 0x34E410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E40Cu;
        // 0x34e410: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34E414u;
        goto label_34e414;
    }
    ctx->pc = 0x34E40Cu;
    {
        const bool branch_taken_0x34e40c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x34E410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E40Cu;
        // 0x34e410: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e40c) {
            ctx->pc = 0x34E444u;
            goto label_34e444;
        }
    }
    ctx->pc = 0x34E414u;
label_34e414:
    // 0x34e414: 0x8e0237a8  lw          $v0, 0x37A8($s0)
    ctx->pc = 0x34e414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 14248)));
label_34e418:
    // 0x34e418: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x34e418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
label_34e41c:
    // 0x34e41c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_34e420:
    if (ctx->pc == 0x34E420u) {
        ctx->pc = 0x34E420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E41Cu;
        // 0x34e420: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34E424u;
        goto label_34e424;
    }
    ctx->pc = 0x34E41Cu;
    {
        const bool branch_taken_0x34e41c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34E420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E41Cu;
        // 0x34e420: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e41c) {
            ctx->pc = 0x34E444u;
            goto label_34e444;
        }
    }
    ctx->pc = 0x34E424u;
label_34e424:
    // 0x34e424: 0x8e0237a0  lw          $v0, 0x37A0($s0)
    ctx->pc = 0x34e424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 14240)));
label_34e428:
    // 0x34e428: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_34e42c:
    if (ctx->pc == 0x34E42Cu) {
        ctx->pc = 0x34E42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E428u;
        // 0x34e42c: 0x8e0437a4  lw          $a0, 0x37A4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 14244)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34E430u;
        goto label_34e430;
    }
    ctx->pc = 0x34E428u;
    {
        const bool branch_taken_0x34e428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E428u;
        // 0x34e42c: 0x8e0437a4  lw          $a0, 0x37A4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 14244)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e428) {
            ctx->pc = 0x34E438u;
            goto label_34e438;
        }
    }
    ctx->pc = 0x34E430u;
label_34e430:
    // 0x34e430: 0x40f809  jalr        $v0
label_34e434:
    if (ctx->pc == 0x34E434u) {
        ctx->pc = 0x34E438u;
        goto label_34e438;
    }
    ctx->pc = 0x34E430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x34E438u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34E430u, 0x34E438u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34E438u;
label_34e438:
    // 0x34e438: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x34e438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_34e43c:
    // 0x34e43c: 0xae0237ac  sw          $v0, 0x37AC($s0)
    ctx->pc = 0x34e43cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 14252), GPR_U32(ctx, 2));
label_34e440:
    // 0x34e440: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34e440u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34e444:
    // 0x34e444: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x34e444u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_34e448:
    // 0x34e448: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x34e448u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_34e44c:
    // 0x34e44c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x34e44cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_34e450:
    // 0x34e450: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x34e450u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_34e454:
    // 0x34e454: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x34e454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_34e458:
    // 0x34e458: 0x3e00008  jr          $ra
label_34e45c:
    if (ctx->pc == 0x34E45Cu) {
        ctx->pc = 0x34E45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E458u;
        // 0x34e45c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34E460u;
        goto label_fallthrough_0x34e458;
    }
    ctx->pc = 0x34E458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34E45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E458u;
        // 0x34e45c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34E458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x34e458:
    ctx->pc = 0x34E460u;
}
