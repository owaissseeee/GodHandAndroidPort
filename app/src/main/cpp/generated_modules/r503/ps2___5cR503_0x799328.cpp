#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r503_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r503
{
// Function: __5cR503
// Address: 0x799328 - 0x799428
void ps2___5cR503_0x799328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___5cR503_0x799328");
#endif

    switch (ctx->pc) {
        case 0x799360u: goto label_799360;
        case 0x799388u: goto label_799388;
        case 0x79939cu: goto label_79939c;
        case 0x7993b0u: goto label_7993b0;
        case 0x7993bcu: goto label_7993bc;
        case 0x7993d4u: goto label_7993d4;
        case 0x7993f4u: goto label_7993f4;
        case 0x799408u: goto label_799408;
        default: break;
    }

    ctx->pc = 0x799328u;

    // 0x799328: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x799328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x79932c: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79932cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799330: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x799330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x799334: 0x24a59430  addiu       $a1, $a1, -0x6BD0
    ctx->pc = 0x799334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939696));
    // 0x799338: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x799338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x79933c: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x79933cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x799340: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x799340u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799344: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x799344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x799348: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x799348u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x79934c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x79934cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799350: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x799350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x799354: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799358: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x799358u;
    SET_GPR_U32(ctx, 31, 0x799360u);
    ctx->pc = 0x79935Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799358u;
    // 0x79935c: 0x3c12005f  lui         $s2, 0x5F (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)95 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799358u, 0x799360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799360u;
label_799360:
    // 0x799360: 0x8e438658  lw          $v1, -0x79A8($s2)
    ctx->pc = 0x799360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294936152)));
    // 0x799364: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x799364u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x799368: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x79936c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x79936cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x799370: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x799370u;
    {
        const bool branch_taken_0x799370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799370u;
        // 0x799374: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799370) {
            ctx->pc = 0x79938Cu;
            goto label_79938c;
        }
    }
    ctx->pc = 0x799378u;
    // 0x799378: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799378u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79937c: 0x24a59b00  addiu       $a1, $a1, -0x6500
    ctx->pc = 0x79937cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941440));
    // 0x799380: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x799380u;
    SET_GPR_U32(ctx, 31, 0x799388u);
    ctx->pc = 0x799384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799380u;
    // 0x799384: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799380u, 0x799388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799388u;
label_799388:
    // 0x799388: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x799388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
label_79938c:
    // 0x79938c: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79938cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799390: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x799390u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799394: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x799394u;
    SET_GPR_U32(ctx, 31, 0x79939Cu);
    ctx->pc = 0x799398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799394u;
    // 0x799398: 0x24a594e8  addiu       $a1, $a1, -0x6B18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799394u, 0x79939Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79939Cu;
label_79939c:
    // 0x79939c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x79939cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x7993a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7993a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7993a4: 0x2470ea60  addiu       $s0, $v1, -0x15A0
    ctx->pc = 0x7993a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961760));
    // 0x7993a8: 0xc0b0ab8  jal         func_2C2AE0
    ctx->pc = 0x7993A8u;
    SET_GPR_U32(ctx, 31, 0x7993B0u);
    ctx->pc = 0x7993ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993A8u;
    // 0x7993ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2AE0u, 0x7993A8u, 0x7993B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993B0u;
label_7993b0:
    // 0x7993b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x7993b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993b4: 0xc0b0a68  jal         func_2C29A0
    ctx->pc = 0x7993B4u;
    SET_GPR_U32(ctx, 31, 0x7993BCu);
    ctx->pc = 0x7993B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993B4u;
    // 0x7993b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29A0u, 0x7993B4u, 0x7993BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993BCu;
label_7993bc:
    // 0x7993bc: 0x8e438658  lw          $v1, -0x79A8($s2)
    ctx->pc = 0x7993bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294936152)));
    // 0x7993c0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x7993c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x7993c4: 0x440000b  bltz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x7993C4u;
    {
        const bool branch_taken_0x7993c4 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x7993C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993C4u;
        // 0x7993c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993c4) {
            ctx->pc = 0x7993F4u;
            goto label_7993f4;
        }
    }
    ctx->pc = 0x7993CCu;
    // 0x7993cc: 0xc0b0ab8  jal         func_2C2AE0
    ctx->pc = 0x7993CCu;
    SET_GPR_U32(ctx, 31, 0x7993D4u);
    ctx->pc = 0x7993D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993CCu;
    // 0x7993d0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2AE0u, 0x7993CCu, 0x7993D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993D4u;
label_7993d4:
    // 0x7993d4: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x7993d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
    // 0x7993d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7993d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x7993dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993e0: 0x24e798a8  addiu       $a3, $a3, -0x6758
    ctx->pc = 0x7993e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294940840));
    // 0x7993e4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x7993e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7993e8: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x7993e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993ec: 0xc0b09d4  jal         func_2C2750
    ctx->pc = 0x7993ECu;
    SET_GPR_U32(ctx, 31, 0x7993F4u);
    ctx->pc = 0x7993F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993ECu;
    // 0x7993f0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2750u, 0x7993ECu, 0x7993F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993F4u;
label_7993f4:
    // 0x7993f4: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x7993f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x7993f8: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x7993f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x7993fc: 0x24a599a0  addiu       $a1, $a1, -0x6660
    ctx->pc = 0x7993fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941088));
    // 0x799400: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x799400u;
    SET_GPR_U32(ctx, 31, 0x799408u);
    ctx->pc = 0x799404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799400u;
    // 0x799404: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799400u, 0x799408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799408u;
label_799408:
    // 0x799408: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x799408u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79940c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x79940cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799410: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x799410u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799414: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x799414u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799418: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x799418u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79941c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79941cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799420: 0x3e00008  jr          $ra
    ctx->pc = 0x799420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799420u;
        // 0x799424: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799428u;
}
} // namespace gh_r503
