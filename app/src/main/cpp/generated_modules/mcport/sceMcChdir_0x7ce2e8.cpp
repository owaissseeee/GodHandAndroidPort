#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: sceMcChdir
// Address: 0x7ce2e8 - 0x7ce428
void sceMcChdir_0x7ce2e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceMcChdir_0x7ce2e8");
#endif

    switch (ctx->pc) {
        case 0x7ce344u: goto label_7ce344;
        case 0x7ce368u: goto label_7ce368;
        case 0x7ce398u: goto label_7ce398;
        case 0x7ce3a8u: goto label_7ce3a8;
        case 0x7ce3d8u: goto label_7ce3d8;
        case 0x7ce3e8u: goto label_7ce3e8;
        default: break;
    }

    ctx->pc = 0x7ce2e8u;

    // 0x7ce2e8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x7ce2e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x7ce2ec: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7ce2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7ce2f0: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x7ce2f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x7ce2f4: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x7ce2f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x7ce2f8: 0x24571980  addiu       $s7, $v0, 0x1980
    ctx->pc = 0x7ce2f8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 6528));
    // 0x7ce2fc: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x7ce2fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x7ce300: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x7ce300u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ce304: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x7ce304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x7ce308: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x7ce308u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ce30c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x7ce30cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x7ce310: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x7ce310u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ce314: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x7ce314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x7ce318: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x7ce318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x7ce31c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x7ce31cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x7ce320: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x7ce320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x7ce324: 0x8ee20024  lw          $v0, 0x24($s7)
    ctx->pc = 0x7ce324u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7D19A4u));
    // 0x7ce328: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7CE328u;
    {
        const bool branch_taken_0x7ce328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CE32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CE328u;
        // 0x7ce32c: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ce328) {
            ctx->pc = 0x7CE338u;
            goto label_7ce338;
        }
    }
    ctx->pc = 0x7CE330u;
    // 0x7ce330: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x7CE330u;
    {
        const bool branch_taken_0x7ce330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CE334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CE330u;
        // 0x7ce334: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ce330) {
            ctx->pc = 0x7CE3FCu;
            goto label_7ce3fc;
        }
    }
    ctx->pc = 0x7CE338u;
label_7ce338:
    // 0x7ce338: 0x3c13007d  lui         $s3, 0x7D
    ctx->pc = 0x7ce338u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)125 << 16));
    // 0x7ce33c: 0xc0ebf3c  jal         func_3AFCF0
    ctx->pc = 0x7CE33Cu;
    SET_GPR_U32(ctx, 31, 0x7CE344u);
    ctx->pc = 0x7CE340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CE33Cu;
    // 0x7ce340: 0x8e6407b4  lw          $a0, 0x7B4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1972)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCF0u, 0x7CE33Cu, 0x7CE344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CE344u;
label_7ce344:
    // 0x7ce344: 0x440002d  bltz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x7CE344u;
    {
        const bool branch_taken_0x7ce344 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x7CE348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CE344u;
        // 0x7ce348: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ce344) {
            ctx->pc = 0x7CE3FCu;
            goto label_7ce3fc;
        }
    }
    ctx->pc = 0x7CE34Cu;
    // 0x7ce34c: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x7CE34Cu;
    {
        const bool branch_taken_0x7ce34c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x7ce34c) {
            ctx->pc = 0x7CE360u;
            goto label_7ce360;
        }
    }
    ctx->pc = 0x7CE354u;
    // 0x7ce354: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x7ce354u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x7ce358: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7CE358u;
    {
        const bool branch_taken_0x7ce358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CE35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CE358u;
        // 0x7ce35c: 0x3c02007d  lui         $v0, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ce358) {
            ctx->pc = 0x7CE370u;
            goto label_7ce370;
        }
    }
    ctx->pc = 0x7CE360u;
label_7ce360:
    // 0x7ce360: 0xc0ebf30  jal         func_3AFCC0
    ctx->pc = 0x7CE360u;
    SET_GPR_U32(ctx, 31, 0x7CE368u);
    ctx->pc = 0x7CE364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CE360u;
    // 0x7ce364: 0x8e6407b4  lw          $a0, 0x7B4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1972)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCC0u, 0x7CE360u, 0x7CE368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CE368u;
label_7ce368:
    // 0x7ce368: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x7CE368u;
    {
        const bool branch_taken_0x7ce368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CE36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CE368u;
        // 0x7ce36c: 0x2402ff2e  addiu       $v0, $zero, -0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ce368) {
            ctx->pc = 0x7CE3FCu;
            goto label_7ce3fc;
        }
    }
    ctx->pc = 0x7CE370u;
label_7ce370:
    // 0x7ce370: 0x3c10007d  lui         $s0, 0x7D
    ctx->pc = 0x7ce370u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)125 << 16));
    // 0x7ce374: 0x24511a30  addiu       $s1, $v0, 0x1A30
    ctx->pc = 0x7ce374u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 6704));
    // 0x7ce378: 0x26101f40  addiu       $s0, $s0, 0x1F40
    ctx->pc = 0x7ce378u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8000));
    // 0x7ce37c: 0xac541a30  sw          $s4, 0x1A30($v0)
    ctx->pc = 0x7ce37cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6704), GPR_U32(ctx, 20));
    // 0x7ce380: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x7ce380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ce384: 0xae350004  sw          $s5, 0x4($s1)
    ctx->pc = 0x7ce384u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 21));
    // 0x7ce388: 0x26240014  addiu       $a0, $s1, 0x14
    ctx->pc = 0x7ce388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x7ce38c: 0xae300010  sw          $s0, 0x10($s1)
    ctx->pc = 0x7ce38cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 16));
    // 0x7ce390: 0xc0e9768  jal         func_3A5DA0
    ctx->pc = 0x7CE390u;
    SET_GPR_U32(ctx, 31, 0x7CE398u);
    ctx->pc = 0x7CE394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CE390u;
    // 0x7ce394: 0x240603ff  addiu       $a2, $zero, 0x3FF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5DA0u, 0x7CE390u, 0x7CE398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CE398u;
label_7ce398:
    // 0x7ce398: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7ce398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ce39c: 0xa2200413  sb          $zero, 0x413($s1)
    ctx->pc = 0x7ce39cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1043), (uint8_t)GPR_U32(ctx, 0));
    // 0x7ce3a0: 0xc0eca14  jal         func_3B2850
    ctx->pc = 0x7CE3A0u;
    SET_GPR_U32(ctx, 31, 0x7CE3A8u);
    ctx->pc = 0x7CE3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CE3A0u;
    // 0x7ce3a4: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2850u, 0x7CE3A0u, 0x7CE3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CE3A8u;
label_7ce3a8:
    // 0x7ce3a8: 0x3c09007d  lui         $t1, 0x7D
    ctx->pc = 0x7ce3a8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)125 << 16));
    // 0x7ce3ac: 0x3c0b007d  lui         $t3, 0x7D
    ctx->pc = 0x7ce3acu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)125 << 16));
    // 0x7ce3b0: 0xafb60000  sw          $s6, 0x0($sp)
    ctx->pc = 0x7ce3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
    // 0x7ce3b4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x7ce3b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ce3b8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x7ce3b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ce3bc: 0x25292f40  addiu       $t1, $t1, 0x2F40
    ctx->pc = 0x7ce3bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 12096));
    // 0x7ce3c0: 0x256be258  addiu       $t3, $t3, -0x1DA8
    ctx->pc = 0x7ce3c0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294959704));
    // 0x7ce3c4: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x7ce3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x7ce3c8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x7ce3c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7ce3cc: 0x24080414  addiu       $t0, $zero, 0x414
    ctx->pc = 0x7ce3ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1044));
    // 0x7ce3d0: 0xc0ecc4a  jal         func_3B3128
    ctx->pc = 0x7CE3D0u;
    SET_GPR_U32(ctx, 31, 0x7CE3D8u);
    ctx->pc = 0x7CE3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CE3D0u;
    // 0x7ce3d4: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3128u, 0x7CE3D0u, 0x7CE3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CE3D8u;
label_7ce3d8:
    // 0x7ce3d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7CE3D8u;
    {
        const bool branch_taken_0x7ce3d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CE3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CE3D8u;
        // 0x7ce3dc: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ce3d8) {
            ctx->pc = 0x7CE3F0u;
            goto label_7ce3f0;
        }
    }
    ctx->pc = 0x7CE3E0u;
    // 0x7ce3e0: 0xc0ebf30  jal         func_3AFCC0
    ctx->pc = 0x7CE3E0u;
    SET_GPR_U32(ctx, 31, 0x7CE3E8u);
    ctx->pc = 0x7CE3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CE3E0u;
    // 0x7ce3e4: 0x8e6407b4  lw          $a0, 0x7B4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1972)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCC0u, 0x7CE3E0u, 0x7CE3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CE3E8u;
label_7ce3e8:
    // 0x7ce3e8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7CE3E8u;
    {
        const bool branch_taken_0x7ce3e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CE3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CE3E8u;
        // 0x7ce3ec: 0x2402ffa5  addiu       $v0, $zero, -0x5B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ce3e8) {
            ctx->pc = 0x7CE3FCu;
            goto label_7ce3fc;
        }
    }
    ctx->pc = 0x7CE3F0u;
label_7ce3f0:
    // 0x7ce3f0: 0x3c03007d  lui         $v1, 0x7D
    ctx->pc = 0x7ce3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
    // 0x7ce3f4: 0xac6207b0  sw          $v0, 0x7B0($v1)
    ctx->pc = 0x7ce3f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7D07B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7D07B0u, _value); } while (0);
    // 0x7ce3f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x7ce3f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7ce3fc:
    // 0x7ce3fc: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x7ce3fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x7ce400: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x7ce400u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x7ce404: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x7ce404u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x7ce408: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x7ce408u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x7ce40c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x7ce40cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7ce410: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x7ce410u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7ce414: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x7ce414u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7ce418: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x7ce418u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7ce41c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x7ce41cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7ce420: 0x3e00008  jr          $ra
    ctx->pc = 0x7CE420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CE424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CE420u;
        // 0x7ce424: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CE420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CE428u;
}
} // namespace gh_mcport
