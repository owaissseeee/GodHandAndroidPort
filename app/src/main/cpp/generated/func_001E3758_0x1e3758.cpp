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

// Function: func_001E3758
// Address: 0x1e3758 - 0x1e3858
void func_001E3758_0x1e3758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001E3758_0x1e3758");
#endif

    switch (ctx->pc) {
        case 0x1e37c0u: goto label_1e37c0;
        case 0x1e37f0u: goto label_1e37f0;
        case 0x1e3808u: goto label_1e3808;
        case 0x1e3830u: goto label_1e3830;
        case 0x1e3848u: goto label_1e3848;
        default: break;
    }

    ctx->pc = 0x1e3758u;

    // 0x1e3758: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e3758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e375c: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x1e375cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1e3760: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e3760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e3764: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e3764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e3768: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e3768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e376c: 0x10a20018  beq         $a1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1E376Cu;
    {
        const bool branch_taken_0x1e376c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E3770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E376Cu;
        // 0x1e3770: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e376c) {
            ctx->pc = 0x1E37D0u;
            goto label_1e37d0;
        }
    }
    ctx->pc = 0x1E3774u;
    // 0x1e3774: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x1e3774u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1e3778: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E3778u;
    {
        const bool branch_taken_0x1e3778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3778) {
            ctx->pc = 0x1E377Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E3778u;
            // 0x1e377c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E3790u;
            goto label_1e3790;
        }
    }
    ctx->pc = 0x1E3780u;
    // 0x1e3780: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E3780u;
    {
        const bool branch_taken_0x1e3780 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3780) {
            ctx->pc = 0x1E37A0u;
            goto label_1e37a0;
        }
    }
    ctx->pc = 0x1E3788u;
    // 0x1e3788: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1E3788u;
    {
        const bool branch_taken_0x1e3788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E378Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3788u;
        // 0x1e378c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3788) {
            ctx->pc = 0x1E384Cu;
            goto label_1e384c;
        }
    }
    ctx->pc = 0x1E3790u;
label_1e3790:
    // 0x1e3790: 0x10a2001f  beq         $a1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1E3790u;
    {
        const bool branch_taken_0x1e3790 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e3790) {
            ctx->pc = 0x1E3810u;
            goto label_1e3810;
        }
    }
    ctx->pc = 0x1E3798u;
    // 0x1e3798: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1E3798u;
    {
        const bool branch_taken_0x1e3798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E379Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3798u;
        // 0x1e379c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3798) {
            ctx->pc = 0x1E384Cu;
            goto label_1e384c;
        }
    }
    ctx->pc = 0x1E37A0u;
label_1e37a0:
    // 0x1e37a0: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E37A0u;
    {
        const bool branch_taken_0x1e37a0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E37A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E37A0u;
        // 0x1e37a4: 0xa600049c  sh          $zero, 0x49C($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1180), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e37a0) {
            ctx->pc = 0x1E37B0u;
            goto label_1e37b0;
        }
    }
    ctx->pc = 0x1E37A8u;
    // 0x1e37a8: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1e37a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e37ac: 0xa602049c  sh          $v0, 0x49C($s0)
    ctx->pc = 0x1e37acu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1180), (uint16_t)GPR_U32(ctx, 2));
label_1e37b0:
    // 0x1e37b0: 0x10c00013  beqz        $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x1E37B0u;
    {
        const bool branch_taken_0x1e37b0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E37B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E37B0u;
        // 0x1e37b4: 0x8e040448  lw          $a0, 0x448($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1096)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e37b0) {
            ctx->pc = 0x1E3800u;
            goto label_1e3800;
        }
    }
    ctx->pc = 0x1E37B8u;
    // 0x1e37b8: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E37B8u;
    SET_GPR_U32(ctx, 31, 0x1E37C0u);
    ctx->pc = 0x1E37BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E37B8u;
    // 0x1e37bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E37B8u, 0x1E37C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E37C0u;
label_1e37c0:
    // 0x1e37c0: 0x9602049c  lhu         $v0, 0x49C($s0)
    ctx->pc = 0x1e37c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1180)));
    // 0x1e37c4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1e37c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1e37c8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1E37C8u;
    {
        const bool branch_taken_0x1e37c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E37CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E37C8u;
        // 0x1e37cc: 0xa602049c  sh          $v0, 0x49C($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1180), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e37c8) {
            ctx->pc = 0x1E3848u;
            goto label_1e3848;
        }
    }
    ctx->pc = 0x1E37D0u;
label_1e37d0:
    // 0x1e37d0: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E37D0u;
    {
        const bool branch_taken_0x1e37d0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E37D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E37D0u;
        // 0x1e37d4: 0xa600049e  sh          $zero, 0x49E($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1182), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e37d0) {
            ctx->pc = 0x1E37E0u;
            goto label_1e37e0;
        }
    }
    ctx->pc = 0x1E37D8u;
    // 0x1e37d8: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1e37d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e37dc: 0xa602049e  sh          $v0, 0x49E($s0)
    ctx->pc = 0x1e37dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1182), (uint16_t)GPR_U32(ctx, 2));
label_1e37e0:
    // 0x1e37e0: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E37E0u;
    {
        const bool branch_taken_0x1e37e0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E37E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E37E0u;
        // 0x1e37e4: 0x8e04044c  lw          $a0, 0x44C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e37e0) {
            ctx->pc = 0x1E3800u;
            goto label_1e3800;
        }
    }
    ctx->pc = 0x1E37E8u;
    // 0x1e37e8: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E37E8u;
    SET_GPR_U32(ctx, 31, 0x1E37F0u);
    ctx->pc = 0x1E37ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E37E8u;
    // 0x1e37ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E37E8u, 0x1E37F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E37F0u;
label_1e37f0:
    // 0x1e37f0: 0x9602049e  lhu         $v0, 0x49E($s0)
    ctx->pc = 0x1e37f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1182)));
    // 0x1e37f4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1e37f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1e37f8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1E37F8u;
    {
        const bool branch_taken_0x1e37f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E37FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E37F8u;
        // 0x1e37fc: 0xa602049e  sh          $v0, 0x49E($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1182), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e37f8) {
            ctx->pc = 0x1E3848u;
            goto label_1e3848;
        }
    }
    ctx->pc = 0x1E3800u;
label_1e3800:
    // 0x1e3800: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E3800u;
    SET_GPR_U32(ctx, 31, 0x1E3808u);
    ctx->pc = 0x1E3804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3800u;
    // 0x1e3804: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E3800u, 0x1E3808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3808u;
label_1e3808:
    // 0x1e3808: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1E3808u;
    {
        const bool branch_taken_0x1e3808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E380Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3808u;
        // 0x1e380c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3808) {
            ctx->pc = 0x1E384Cu;
            goto label_1e384c;
        }
    }
    ctx->pc = 0x1E3810u;
label_1e3810:
    // 0x1e3810: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E3810u;
    {
        const bool branch_taken_0x1e3810 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3810u;
        // 0x1e3814: 0xa60004a0  sh          $zero, 0x4A0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1184), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3810) {
            ctx->pc = 0x1E3820u;
            goto label_1e3820;
        }
    }
    ctx->pc = 0x1E3818u;
    // 0x1e3818: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1e3818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e381c: 0xa60204a0  sh          $v0, 0x4A0($s0)
    ctx->pc = 0x1e381cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1184), (uint16_t)GPR_U32(ctx, 2));
label_1e3820:
    // 0x1e3820: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E3820u;
    {
        const bool branch_taken_0x1e3820 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3820u;
        // 0x1e3824: 0x8e040450  lw          $a0, 0x450($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3820) {
            ctx->pc = 0x1E3840u;
            goto label_1e3840;
        }
    }
    ctx->pc = 0x1E3828u;
    // 0x1e3828: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E3828u;
    SET_GPR_U32(ctx, 31, 0x1E3830u);
    ctx->pc = 0x1E382Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3828u;
    // 0x1e382c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E3828u, 0x1E3830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3830u;
label_1e3830:
    // 0x1e3830: 0x960204a0  lhu         $v0, 0x4A0($s0)
    ctx->pc = 0x1e3830u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1184)));
    // 0x1e3834: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1e3834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1e3838: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E3838u;
    {
        const bool branch_taken_0x1e3838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E383Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3838u;
        // 0x1e383c: 0xa60204a0  sh          $v0, 0x4A0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1184), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3838) {
            ctx->pc = 0x1E3848u;
            goto label_1e3848;
        }
    }
    ctx->pc = 0x1E3840u;
label_1e3840:
    // 0x1e3840: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E3840u;
    SET_GPR_U32(ctx, 31, 0x1E3848u);
    ctx->pc = 0x1E3844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3840u;
    // 0x1e3844: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E3840u, 0x1E3848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3848u;
label_1e3848:
    // 0x1e3848: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e3848u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e384c:
    // 0x1e384c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e384cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3850: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3850u;
        // 0x1e3854: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E3858u;
}
