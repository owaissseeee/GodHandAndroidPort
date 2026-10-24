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

// Function: func_0032E3A0
// Address: 0x32e3a0 - 0x32e488
void func_0032E3A0_0x32e3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032E3A0_0x32e3a0");
#endif

    switch (ctx->pc) {
        case 0x32e3ccu: goto label_32e3cc;
        case 0x32e400u: goto label_32e400;
        case 0x32e410u: goto label_32e410;
        case 0x32e41cu: goto label_32e41c;
        case 0x32e430u: goto label_32e430;
        default: break;
    }

    ctx->pc = 0x32e3a0u;

    // 0x32e3a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32e3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32e3a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32e3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32e3a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32e3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x32e3ac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x32e3acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x32e3b0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x32e3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x32e3b4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x32e3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x32e3b8: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x32E3B8u;
    {
        const bool branch_taken_0x32e3b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x32E3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E3B8u;
        // 0x32e3bc: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e3b8) {
            ctx->pc = 0x32E3D8u;
            goto label_32e3d8;
        }
    }
    ctx->pc = 0x32E3C0u;
    // 0x32e3c0: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x32e3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x32e3c4: 0xc0cff2c  jal         func_33FCB0
    ctx->pc = 0x32E3C4u;
    SET_GPR_U32(ctx, 31, 0x32E3CCu);
    ctx->pc = 0x32E3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E3C4u;
    // 0x32e3c8: 0x24842e58  addiu       $a0, $a0, 0x2E58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FCB0u, 0x32E3C4u, 0x32E3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E3CCu;
label_32e3cc:
    // 0x32e3cc: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x32E3CCu;
    {
        const bool branch_taken_0x32e3cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E3CCu;
        // 0x32e3d0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e3cc) {
            ctx->pc = 0x32E464u;
            goto label_32e464;
        }
    }
    ctx->pc = 0x32E3D4u;
    // 0x32e3d4: 0x0  nop
    ctx->pc = 0x32e3d4u;
    // NOP
label_32e3d8:
    // 0x32e3d8: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x32e3d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x32e3dc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x32e3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x32e3e0: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x32e3e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x32e3e4: 0x5040001f  beql        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x32E3E4u;
    {
        const bool branch_taken_0x32e3e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e3e4) {
            ctx->pc = 0x32E3E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32E3E4u;
            // 0x32e3e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32E464u;
            goto label_32e464;
        }
    }
    ctx->pc = 0x32E3ECu;
    // 0x32e3ec: 0x8c920004  lw          $s2, 0x4($a0)
    ctx->pc = 0x32e3ecu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x32e3f0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x32e3f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e3f4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x32e3f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e3f8: 0xc0cbd32  jal         func_32F4C8
    ctx->pc = 0x32E3F8u;
    SET_GPR_U32(ctx, 31, 0x32E400u);
    ctx->pc = 0x32E3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E3F8u;
    // 0x32e3fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F4C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F4C8u, 0x32E3F8u, 0x32E400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E400u;
label_32e400:
    // 0x32e400: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x32e400u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e404: 0x1a600017  blez        $s3, . + 4 + (0x17 << 2)
    ctx->pc = 0x32E404u;
    {
        const bool branch_taken_0x32e404 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x32E408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E404u;
        // 0x32e408: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e404) {
            ctx->pc = 0x32E464u;
            goto label_32e464;
        }
    }
    ctx->pc = 0x32E40Cu;
    // 0x32e40c: 0x0  nop
    ctx->pc = 0x32e40cu;
    // NOP
label_32e410:
    // 0x32e410: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x32e410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e414: 0xc0cbd34  jal         func_32F4D0
    ctx->pc = 0x32E414u;
    SET_GPR_U32(ctx, 31, 0x32E41Cu);
    ctx->pc = 0x32E418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E414u;
    // 0x32e418: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F4D0u, 0x32E414u, 0x32E41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E41Cu;
label_32e41c:
    // 0x32e41c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32e41cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e420: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x32e420u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e424: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x32e424u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x32e428: 0xc0cbd38  jal         func_32F4E0
    ctx->pc = 0x32E428u;
    SET_GPR_U32(ctx, 31, 0x32E430u);
    ctx->pc = 0x32E42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E428u;
    // 0x32e42c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F4E0u, 0x32E428u, 0x32E430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E430u;
label_32e430:
    // 0x32e430: 0x2028018  mult        $s0, $s0, $v0
    ctx->pc = 0x32e430u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x32e434: 0x233282a  slt         $a1, $s1, $s3
    ctx->pc = 0x32e434u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x32e438: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x32e438u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x32e43c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x32e43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x32e440: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x32e440u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x32e444: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x32e444u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e448: 0x2444001f  addiu       $a0, $v0, 0x1F
    ctx->pc = 0x32e448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
    // 0x32e44c: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x32e44cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x32e450: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x32e450u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x32e454: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x32e454u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x32e458: 0x14a0ffed  bnez        $a1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x32E458u;
    {
        const bool branch_taken_0x32e458 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x32E45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E458u;
        // 0x32e45c: 0x283a021  addu        $s4, $s4, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e458) {
            ctx->pc = 0x32E410u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32e410;
        }
    }
    ctx->pc = 0x32E460u;
    // 0x32e460: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x32e460u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_32e464:
    // 0x32e464: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32e464u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32e468: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32e468u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32e46c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x32e46cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32e470: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x32e470u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x32e474: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x32e474u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32e478: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x32e478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x32e47c: 0x3e00008  jr          $ra
    ctx->pc = 0x32E47Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32E480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E47Cu;
        // 0x32e480: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32E47Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32E484u;
    // 0x32e484: 0x0  nop
    ctx->pc = 0x32e484u;
    // NOP
    ctx->pc = 0x32e488u;
}
