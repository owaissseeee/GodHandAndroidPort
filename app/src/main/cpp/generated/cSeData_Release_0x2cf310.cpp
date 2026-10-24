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

// Function: cSeData_Release
// Address: 0x2cf310 - 0x2cf440
void cSeData_Release_0x2cf310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSeData_Release_0x2cf310");
#endif

    switch (ctx->pc) {
        case 0x2cf334u: goto label_2cf334;
        case 0x2cf33cu: goto label_2cf33c;
        case 0x2cf354u: goto label_2cf354;
        case 0x2cf360u: goto label_2cf360;
        case 0x2cf378u: goto label_2cf378;
        case 0x2cf388u: goto label_2cf388;
        case 0x2cf39cu: goto label_2cf39c;
        case 0x2cf3b0u: goto label_2cf3b0;
        case 0x2cf3ccu: goto label_2cf3cc;
        case 0x2cf3d4u: goto label_2cf3d4;
        case 0x2cf3e8u: goto label_2cf3e8;
        case 0x2cf3fcu: goto label_2cf3fc;
        case 0x2cf410u: goto label_2cf410;
        case 0x2cf420u: goto label_2cf420;
        default: break;
    }

    ctx->pc = 0x2cf310u;

    // 0x2cf310: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cf310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cf314: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cf314u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf318: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2cf318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2cf31c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cf31cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cf320: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cf320u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf324: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2cf324u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2cf328: 0x8e05002c  lw          $a1, 0x2C($s0)
    ctx->pc = 0x2cf328u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2cf32c: 0xc0b2f9a  jal         func_2CBE68
    ctx->pc = 0x2CF32Cu;
    SET_GPR_U32(ctx, 31, 0x2CF334u);
    ctx->pc = 0x2CF330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF32Cu;
    // 0x2cf330: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBE68u, 0x2CF32Cu, 0x2CF334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF334u;
label_2cf334:
    // 0x2cf334: 0xc0b3e0c  jal         func_2CF830
    ctx->pc = 0x2CF334u;
    SET_GPR_U32(ctx, 31, 0x2CF33Cu);
    ctx->pc = 0x2CF338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF334u;
    // 0x2cf338: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF830u, 0x2CF334u, 0x2CF33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF33Cu;
label_2cf33c:
    // 0x2cf33c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CF33Cu;
    {
        const bool branch_taken_0x2cf33c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cf33c) {
            ctx->pc = 0x2CF340u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CF33Cu;
            // 0x2cf340: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CF358u;
            goto label_2cf358;
        }
    }
    ctx->pc = 0x2CF344u;
    // 0x2cf344: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x2cf344u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x2cf348: 0x8e050038  lw          $a1, 0x38($s0)
    ctx->pc = 0x2cf348u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x2cf34c: 0xc0803d4  jal         func_200F50
    ctx->pc = 0x2CF34Cu;
    SET_GPR_U32(ctx, 31, 0x2CF354u);
    ctx->pc = 0x2CF350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF34Cu;
    // 0x2cf350: 0x24843f20  addiu       $a0, $a0, 0x3F20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200F50u, 0x2CF34Cu, 0x2CF354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF354u;
label_2cf354:
    // 0x2cf354: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cf354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cf358:
    // 0x2cf358: 0xc0b3f4e  jal         func_2CFD38
    ctx->pc = 0x2CF358u;
    SET_GPR_U32(ctx, 31, 0x2CF360u);
    ctx->pc = 0x2CF35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF358u;
    // 0x2cf35c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFD38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFD38u, 0x2CF358u, 0x2CF360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF360u;
label_2cf360:
    // 0x2cf360: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2cf360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cf364: 0x5443000e  bnel        $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2CF364u;
    {
        const bool branch_taken_0x2cf364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2cf364) {
            ctx->pc = 0x2CF368u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CF364u;
            // 0x2cf368: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CF3A0u;
            goto label_2cf3a0;
        }
    }
    ctx->pc = 0x2CF36Cu;
    // 0x2cf36c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cf36cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf370: 0xc0b3f4e  jal         func_2CFD38
    ctx->pc = 0x2CF370u;
    SET_GPR_U32(ctx, 31, 0x2CF378u);
    ctx->pc = 0x2CF374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF370u;
    // 0x2cf374: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFD38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFD38u, 0x2CF370u, 0x2CF378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF378u;
label_2cf378:
    // 0x2cf378: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CF378u;
    {
        const bool branch_taken_0x2cf378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cf378) {
            ctx->pc = 0x2CF37Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CF378u;
            // 0x2cf37c: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CF3A0u;
            goto label_2cf3a0;
        }
    }
    ctx->pc = 0x2CF380u;
    // 0x2cf380: 0xc0c8c00  jal         func_323000
    ctx->pc = 0x2CF380u;
    SET_GPR_U32(ctx, 31, 0x2CF388u);
    ctx->pc = 0x2CF384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF380u;
    // 0x2cf384: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323000u, 0x2CF380u, 0x2CF388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF388u;
label_2cf388:
    // 0x2cf388: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2cf388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cf38c: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CF38Cu;
    {
        const bool branch_taken_0x2cf38c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2cf38c) {
            ctx->pc = 0x2CF390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CF38Cu;
            // 0x2cf390: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CF3A0u;
            goto label_2cf3a0;
        }
    }
    ctx->pc = 0x2CF394u;
    // 0x2cf394: 0xc0c8bd6  jal         func_322F58
    ctx->pc = 0x2CF394u;
    SET_GPR_U32(ctx, 31, 0x2CF39Cu);
    ctx->pc = 0x322F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322F58u, 0x2CF394u, 0x2CF39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF39Cu;
label_2cf39c:
    // 0x2cf39c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2cf39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2cf3a0:
    // 0x2cf3a0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2CF3A0u;
    {
        const bool branch_taken_0x2cf3a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF3A0u;
        // 0x2cf3a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf3a0) {
            ctx->pc = 0x2CF3D4u;
            goto label_2cf3d4;
        }
    }
    ctx->pc = 0x2CF3A8u;
    // 0x2cf3a8: 0xc0b3f4e  jal         func_2CFD38
    ctx->pc = 0x2CF3A8u;
    SET_GPR_U32(ctx, 31, 0x2CF3B0u);
    ctx->pc = 0x2CF3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF3A8u;
    // 0x2cf3ac: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFD38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFD38u, 0x2CF3A8u, 0x2CF3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF3B0u;
label_2cf3b0:
    // 0x2cf3b0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CF3B0u;
    {
        const bool branch_taken_0x2cf3b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cf3b0) {
            ctx->pc = 0x2CF3CCu;
            goto label_2cf3cc;
        }
    }
    ctx->pc = 0x2CF3B8u;
    // 0x2cf3b8: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x2cf3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2cf3bc: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CF3BCu;
    {
        const bool branch_taken_0x2cf3bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF3BCu;
        // 0x2cf3c0: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf3bc) {
            ctx->pc = 0x2CF3CCu;
            goto label_2cf3cc;
        }
    }
    ctx->pc = 0x2CF3C4u;
    // 0x2cf3c4: 0xc0aa5a0  jal         func_2A9680
    ctx->pc = 0x2CF3C4u;
    SET_GPR_U32(ctx, 31, 0x2CF3CCu);
    ctx->pc = 0x2A9680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9680u, 0x2CF3C4u, 0x2CF3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF3CCu;
label_2cf3cc:
    // 0x2cf3cc: 0xc0dd69e  jal         func_375A78
    ctx->pc = 0x2CF3CCu;
    SET_GPR_U32(ctx, 31, 0x2CF3D4u);
    ctx->pc = 0x2CF3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF3CCu;
    // 0x2cf3d0: 0x8604002c  lh          $a0, 0x2C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x375A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375A78u, 0x2CF3CCu, 0x2CF3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF3D4u;
label_2cf3d4:
    // 0x2cf3d4: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x2cf3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2cf3d8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CF3D8u;
    {
        const bool branch_taken_0x2cf3d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf3d8) {
            ctx->pc = 0x2CF3DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CF3D8u;
            // 0x2cf3dc: 0x8e05001c  lw          $a1, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CF3ECu;
            goto label_2cf3ec;
        }
    }
    ctx->pc = 0x2CF3E0u;
    // 0x2cf3e0: 0xc0ed694  jal         func_3B5A50
    ctx->pc = 0x2CF3E0u;
    SET_GPR_U32(ctx, 31, 0x2CF3E8u);
    ctx->pc = 0x3B5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5A50u, 0x2CF3E0u, 0x2CF3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF3E8u;
label_2cf3e8:
    // 0x2cf3e8: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x2cf3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2cf3ec:
    // 0x2cf3ec: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CF3ECu;
    {
        const bool branch_taken_0x2cf3ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf3ec) {
            ctx->pc = 0x2CF3F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CF3ECu;
            // 0x2cf3f0: 0x8e050024  lw          $a1, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CF400u;
            goto label_2cf400;
        }
    }
    ctx->pc = 0x2CF3F4u;
    // 0x2cf3f4: 0xc0b3f92  jal         func_2CFE48
    ctx->pc = 0x2CF3F4u;
    SET_GPR_U32(ctx, 31, 0x2CF3FCu);
    ctx->pc = 0x2CF3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF3F4u;
    // 0x2cf3f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFE48u, 0x2CF3F4u, 0x2CF3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF3FCu;
label_2cf3fc:
    // 0x2cf3fc: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x2cf3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_2cf400:
    // 0x2cf400: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CF400u;
    {
        const bool branch_taken_0x2cf400 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF400u;
        // 0x2cf404: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf400) {
            ctx->pc = 0x2CF414u;
            goto label_2cf414;
        }
    }
    ctx->pc = 0x2CF408u;
    // 0x2cf408: 0xc0aa5a0  jal         func_2A9680
    ctx->pc = 0x2CF408u;
    SET_GPR_U32(ctx, 31, 0x2CF410u);
    ctx->pc = 0x2CF40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF408u;
    // 0x2cf40c: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9680u, 0x2CF408u, 0x2CF410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF410u;
label_2cf410:
    // 0x2cf410: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cf410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cf414:
    // 0x2cf414: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cf414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf418: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2CF418u;
    SET_GPR_U32(ctx, 31, 0x2CF420u);
    ctx->pc = 0x2CF41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF418u;
    // 0x2cf41c: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2CF418u, 0x2CF420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF420u;
label_2cf420:
    // 0x2cf420: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2cf420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cf424: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cf424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cf428: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x2cf428u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x2cf42c: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x2cf42cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x2cf430: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2cf430u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cf434: 0x3e00008  jr          $ra
    ctx->pc = 0x2CF434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF434u;
        // 0x2cf438: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CF434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CF43Cu;
    // 0x2cf43c: 0x0  nop
    ctx->pc = 0x2cf43cu;
    // NOP
    ctx->pc = 0x2cf440u;
}
