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

// Function: func_003092E0
// Address: 0x3092e0 - 0x309568
void func_003092E0_0x3092e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003092E0_0x3092e0");
#endif

    switch (ctx->pc) {
        case 0x309374u: goto label_309374;
        case 0x3093d0u: goto label_3093d0;
        case 0x3093e0u: goto label_3093e0;
        case 0x309430u: goto label_309430;
        case 0x30945cu: goto label_30945c;
        case 0x3094d8u: goto label_3094d8;
        case 0x3094fcu: goto label_3094fc;
        default: break;
    }

    ctx->pc = 0x3092e0u;

    // 0x3092e0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3092e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x3092e4: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x3092e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x3092e8: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x3092e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x3092ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3092ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3092f0: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x3092f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x3092f4: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x3092f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x3092f8: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x3092f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x3092fc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3092fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x309300: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x309300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x309304: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x309304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x309308: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x309308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x30930c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30930cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x309310: 0x92020011  lbu         $v0, 0x11($s0)
    ctx->pc = 0x309310u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
    // 0x309314: 0x10400086  beqz        $v0, . + 4 + (0x86 << 2)
    ctx->pc = 0x309314u;
    {
        const bool branch_taken_0x309314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x309318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309314u;
        // 0x309318: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309314) {
            ctx->pc = 0x309530u;
            goto label_309530;
        }
    }
    ctx->pc = 0x30931Cu;
    // 0x30931c: 0x92020013  lbu         $v0, 0x13($s0)
    ctx->pc = 0x30931cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 19)));
    // 0x309320: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x309320u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x309324: 0x246301d0  addiu       $v1, $v1, 0x1D0
    ctx->pc = 0x309324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 464));
    // 0x309328: 0xde060018  ld          $a2, 0x18($s0)
    ctx->pc = 0x309328u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x30932c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x30932cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x309330: 0x3c04fc0f  lui         $a0, 0xFC0F
    ctx->pc = 0x309330u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64527 << 16));
    // 0x309334: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x309334u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x309338: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x309338u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x30933c: 0x96110014  lhu         $s1, 0x14($s0)
    ctx->pc = 0x30933cu;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x309340: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x309340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x309344: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x309344u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x309348: 0x8c560000  lw          $s6, 0x0($v0)
    ctx->pc = 0x309348u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30934c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x30934cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309350: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x309350u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x309354: 0x32c2003f  andi        $v0, $s6, 0x3F
    ctx->pc = 0x309354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)63);
    // 0x309358: 0x96140016  lhu         $s4, 0x16($s0)
    ctx->pc = 0x309358u;
    SET_GPR_ZE32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x30935c: 0x21538  dsll        $v0, $v0, 20
    ctx->pc = 0x30935cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 20);
    // 0x309360: 0x203a821  addu        $s5, $s0, $v1
    ctx->pc = 0x309360u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x309364: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x309364u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x309368: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x309368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30936c: 0xc0c270c  jal         func_309C30
    ctx->pc = 0x30936Cu;
    SET_GPR_U32(ctx, 31, 0x309374u);
    ctx->pc = 0x309370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30936Cu;
    // 0x309370: 0xfe060018  sd          $a2, 0x18($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309C30u, 0x30936Cu, 0x309374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309374u;
label_309374:
    // 0x309374: 0xde030018  ld          $v1, 0x18($s0)
    ctx->pc = 0x309374u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x309378: 0x2405c000  addiu       $a1, $zero, -0x4000
    ctx->pc = 0x309378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x30937c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x30937cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309380: 0x32463fff  andi        $a2, $s2, 0x3FFF
    ctx->pc = 0x309380u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16383);
    // 0x309384: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x309384u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x309388: 0x30e4003f  andi        $a0, $a3, 0x3F
    ctx->pc = 0x309388u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)63);
    // 0x30938c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x30938cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x309390: 0x3c02fff0  lui         $v0, 0xFFF0
    ctx->pc = 0x309390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65520 << 16));
    // 0x309394: 0x34423fff  ori         $v0, $v0, 0x3FFF
    ctx->pc = 0x309394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16383);
    // 0x309398: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x309398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x30939c: 0x423b8  dsll        $a0, $a0, 14
    ctx->pc = 0x30939cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 14);
    // 0x3093a0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3093a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3093a4: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x3093a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x3093a8: 0x214f8  dsll        $v0, $v0, 19
    ctx->pc = 0x3093a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 19);
    // 0x3093ac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3093acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3093b0: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x3093b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3093b4: 0xfe030018  sd          $v1, 0x18($s0)
    ctx->pc = 0x3093b4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 3));
    // 0x3093b8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3093b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3093bc: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x3093bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3093c0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3093c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3093c4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x3093c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3093c8: 0xc0c2676  jal         func_3099D8
    ctx->pc = 0x3093C8u;
    SET_GPR_U32(ctx, 31, 0x3093D0u);
    ctx->pc = 0x3093CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3093C8u;
    // 0x3093cc: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3099D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3099D8u, 0x3093C8u, 0x3093D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3093D0u;
label_3093d0:
    // 0x3093d0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3093d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3093d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3093d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3093d8: 0xc0c2728  jal         func_309CA0
    ctx->pc = 0x3093D8u;
    SET_GPR_U32(ctx, 31, 0x3093E0u);
    ctx->pc = 0x3093DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3093D8u;
    // 0x3093dc: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309CA0u, 0x3093D8u, 0x3093E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3093E0u;
label_3093e0:
    // 0x3093e0: 0x92030011  lbu         $v1, 0x11($s0)
    ctx->pc = 0x3093e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
    // 0x3093e4: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x3093e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3093e8: 0x14600051  bnez        $v1, . + 4 + (0x51 << 2)
    ctx->pc = 0x3093E8u;
    {
        const bool branch_taken_0x3093e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3093ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3093E8u;
        // 0x3093ec: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3093e8) {
            ctx->pc = 0x309530u;
            goto label_309530;
        }
    }
    ctx->pc = 0x3093F0u;
    // 0x3093f0: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x3093f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3093f4: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x3093f4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3093f8: 0x92020011  lbu         $v0, 0x11($s0)
    ctx->pc = 0x3093f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
    // 0x3093fc: 0x26130030  addiu       $s3, $s0, 0x30
    ctx->pc = 0x3093fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x309400: 0x3c2102a  slt         $v0, $fp, $v0
    ctx->pc = 0x309400u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x309404: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x309404u;
    {
        const bool branch_taken_0x309404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x309408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309404u;
        // 0x309408: 0x203a821  addu        $s5, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309404) {
            ctx->pc = 0x309530u;
            goto label_309530;
        }
    }
    ctx->pc = 0x30940Cu;
    // 0x30940c: 0x2402ffd2  addiu       $v0, $zero, -0x2E
    ctx->pc = 0x30940cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967250));
    // 0x309410: 0x2403ffc4  addiu       $v1, $zero, -0x3C
    ctx->pc = 0x309410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967236));
    // 0x309414: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x309414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x309418: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x309418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x30941c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x30941cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x309420: 0x26170040  addiu       $s7, $s0, 0x40
    ctx->pc = 0x309420u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x309424: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x309424u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x309428: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x309428u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x30942c: 0x0  nop
    ctx->pc = 0x30942cu;
    // NOP
label_309430:
    // 0x309430: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x309430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x309434: 0x1117c2  srl         $v0, $s1, 31
    ctx->pc = 0x309434u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 31));
    // 0x309438: 0x141fc2  srl         $v1, $s4, 31
    ctx->pc = 0x309438u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 20), 31));
    // 0x30943c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x30943cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x309440: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x309440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x309444: 0x28843  sra         $s1, $v0, 1
    ctx->pc = 0x309444u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 1));
    // 0x309448: 0x2a4a821  addu        $s5, $s5, $a0
    ctx->pc = 0x309448u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x30944c: 0x3a043  sra         $s4, $v1, 1
    ctx->pc = 0x30944cu;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 3), 1));
    // 0x309450: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x309450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309454: 0xc0c270c  jal         func_309C30
    ctx->pc = 0x309454u;
    SET_GPR_U32(ctx, 31, 0x30945Cu);
    ctx->pc = 0x309458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309454u;
    // 0x309458: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309C30u, 0x309454u, 0x30945Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30945Cu;
label_30945c:
    // 0x30945c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x30945cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309460: 0x2bc20004  slti        $v0, $fp, 0x4
    ctx->pc = 0x309460u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x309464: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x309464u;
    {
        const bool branch_taken_0x309464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x309468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309464u;
        // 0x309468: 0x8fa50008  lw          $a1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309464) {
            ctx->pc = 0x309494u;
            goto label_309494;
        }
    }
    ctx->pc = 0x30946Cu;
    // 0x30946c: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x30946cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x309470: 0xde630000  ld          $v1, 0x0($s3)
    ctx->pc = 0x309470u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x309474: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x309474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x309478: 0xa72014  dsllv       $a0, $a3, $a1
    ctx->pc = 0x309478u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (GPR_U32(ctx, 5) & 0x3F));
    // 0x30947c: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x30947cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x309480: 0xa21014  dsllv       $v0, $v0, $a1
    ctx->pc = 0x309480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 5) & 0x3F));
    // 0x309484: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x309484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x309488: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x309488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x30948c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x30948Cu;
    {
        const bool branch_taken_0x30948c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x309490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30948Cu;
        // 0x309490: 0xfe630000  sd          $v1, 0x0($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30948c) {
            ctx->pc = 0x3094BCu;
            goto label_3094bc;
        }
    }
    ctx->pc = 0x309494u;
label_309494:
    // 0x309494: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x309494u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x309498: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x309498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x30949c: 0xde630008  ld          $v1, 0x8($s3)
    ctx->pc = 0x30949cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x3094a0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3094a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3094a4: 0xa72014  dsllv       $a0, $a3, $a1
    ctx->pc = 0x3094a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (GPR_U32(ctx, 5) & 0x3F));
    // 0x3094a8: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x3094a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3094ac: 0xa21014  dsllv       $v0, $v0, $a1
    ctx->pc = 0x3094acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 5) & 0x3F));
    // 0x3094b0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3094b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3094b4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3094b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3094b8: 0xfe630008  sd          $v1, 0x8($s3)
    ctx->pc = 0x3094b8u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 8), GPR_U64(ctx, 3));
label_3094bc:
    // 0x3094bc: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x3094bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3094c0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3094c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3094c4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3094c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3094c8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x3094c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3094cc: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x3094ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3094d0: 0xc0c2676  jal         func_3099D8
    ctx->pc = 0x3094D0u;
    SET_GPR_U32(ctx, 31, 0x3094D8u);
    ctx->pc = 0x3094D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3094D0u;
    // 0x3094d4: 0x2a0482d  daddu       $t1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3099D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3099D8u, 0x3094D0u, 0x3094D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3094D8u;
label_3094d8:
    // 0x3094d8: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x3094d8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x3094dc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3094dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3094e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3094e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3094e4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3094e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3094e8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3094e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3094ec: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x3094ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x3094f0: 0x26f70004  addiu       $s7, $s7, 0x4
    ctx->pc = 0x3094f0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
    // 0x3094f4: 0xc0c2728  jal         func_309CA0
    ctx->pc = 0x3094F4u;
    SET_GPR_U32(ctx, 31, 0x3094FCu);
    ctx->pc = 0x3094F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3094F4u;
    // 0x3094f8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309CA0u, 0x3094F4u, 0x3094FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3094FCu;
label_3094fc:
    // 0x3094fc: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x3094fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x309500: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x309500u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x309504: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x309504u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x309508: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x309508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x30950c: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x30950cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x309510: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x309510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x309514: 0x24a50014  addiu       $a1, $a1, 0x14
    ctx->pc = 0x309514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x309518: 0x92030011  lbu         $v1, 0x11($s0)
    ctx->pc = 0x309518u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
    // 0x30951c: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x30951cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x309520: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x309520u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x309524: 0x3c3182a  slt         $v1, $fp, $v1
    ctx->pc = 0x309524u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x309528: 0x1460ffc1  bnez        $v1, . + 4 + (-0x3F << 2)
    ctx->pc = 0x309528u;
    {
        const bool branch_taken_0x309528 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30952Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309528u;
        // 0x30952c: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309528) {
            ctx->pc = 0x309430u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_309430;
        }
    }
    ctx->pc = 0x309530u;
label_309530:
    // 0x309530: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x309530u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309534: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x309534u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x309538: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x309538u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x30953c: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x30953cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x309540: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x309540u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x309544: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x309544u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x309548: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x309548u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30954c: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x30954cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x309550: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x309550u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x309554: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x309554u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x309558: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x309558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30955c: 0x3e00008  jr          $ra
    ctx->pc = 0x30955Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x309560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30955Cu;
        // 0x309560: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30955Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x309564u;
    // 0x309564: 0x0  nop
    ctx->pc = 0x309564u;
    // NOP
    ctx->pc = 0x309568u;
}
