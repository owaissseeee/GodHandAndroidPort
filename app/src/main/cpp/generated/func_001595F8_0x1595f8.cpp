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

// Function: func_001595F8
// Address: 0x1595f8 - 0x159998
void func_001595F8_0x1595f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001595F8_0x1595f8");
#endif

    switch (ctx->pc) {
        case 0x15965cu: goto label_15965c;
        case 0x15966cu: goto label_15966c;
        case 0x159690u: goto label_159690;
        case 0x1596a0u: goto label_1596a0;
        case 0x1596c4u: goto label_1596c4;
        case 0x1596d4u: goto label_1596d4;
        case 0x159760u: goto label_159760;
        case 0x1597d8u: goto label_1597d8;
        case 0x159870u: goto label_159870;
        case 0x159880u: goto label_159880;
        case 0x1598acu: goto label_1598ac;
        case 0x1598bcu: goto label_1598bc;
        case 0x1598e8u: goto label_1598e8;
        case 0x1598f8u: goto label_1598f8;
        default: break;
    }

    ctx->pc = 0x1595f8u;

    // 0x1595f8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1595f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1595fc: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1595fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x159600: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x159600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x159604: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x159604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x159608: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x159608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x15960c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x15960cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159610: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x159610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x159614: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x159614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x159618: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x159618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x15961c: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x15961cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x159620: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x159620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x159624: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x159624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x159628: 0x8e740428  lw          $s4, 0x428($s3)
    ctx->pc = 0x159628u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1064)));
    // 0x15962c: 0x96630434  lhu         $v1, 0x434($s3)
    ctx->pc = 0x15962cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 1076)));
    // 0x159630: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x159630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x159634: 0x26900008  addiu       $s0, $s4, 0x8
    ctx->pc = 0x159634u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x159638: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x159638u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x15963c: 0x30840fff  andi        $a0, $a0, 0xFFF
    ctx->pc = 0x15963cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x159640: 0x14820008  bne         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x159640u;
    {
        const bool branch_taken_0x159640 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x159644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159640u;
        // 0x159644: 0x30760001  andi        $s6, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x159640) {
            ctx->pc = 0x159664u;
            goto label_159664;
        }
    }
    ctx->pc = 0x159648u;
    // 0x159648: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x159648u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15964c: 0x266401b4  addiu       $a0, $s3, 0x1B4
    ctx->pc = 0x15964cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 436));
    // 0x159650: 0x26900014  addiu       $s0, $s4, 0x14
    ctx->pc = 0x159650u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
    // 0x159654: 0xc05666c  jal         func_1599B0
    ctx->pc = 0x159654u;
    SET_GPR_U32(ctx, 31, 0x15965Cu);
    ctx->pc = 0x159658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159654u;
    // 0x159658: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1599B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1599B0u, 0x159654u, 0x15965Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15965Cu;
label_15965c:
    // 0x15965c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15965Cu;
    {
        const bool branch_taken_0x15965c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15965Cu;
        // 0x159660: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15965c) {
            ctx->pc = 0x159670u;
            goto label_159670;
        }
    }
    ctx->pc = 0x159664u;
label_159664:
    // 0x159664: 0xc056666  jal         func_159998
    ctx->pc = 0x159664u;
    SET_GPR_U32(ctx, 31, 0x15966Cu);
    ctx->pc = 0x159668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159664u;
    // 0x159668: 0x266401b4  addiu       $a0, $s3, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x159998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159998u, 0x159664u, 0x15966Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15966Cu;
label_15966c:
    // 0x15966c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x15966cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_159670:
    // 0x159670: 0x240301ff  addiu       $v1, $zero, 0x1FF
    ctx->pc = 0x159670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
    // 0x159674: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x159674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x159678: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x159678u;
    {
        const bool branch_taken_0x159678 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x15967Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159678u;
        // 0x15967c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159678) {
            ctx->pc = 0x159698u;
            goto label_159698;
        }
    }
    ctx->pc = 0x159680u;
    // 0x159680: 0x266401d4  addiu       $a0, $s3, 0x1D4
    ctx->pc = 0x159680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 468));
    // 0x159684: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x159684u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x159688: 0xc05666c  jal         func_1599B0
    ctx->pc = 0x159688u;
    SET_GPR_U32(ctx, 31, 0x159690u);
    ctx->pc = 0x15968Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159688u;
    // 0x15968c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1599B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1599B0u, 0x159688u, 0x159690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159690u;
label_159690:
    // 0x159690: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x159690u;
    {
        const bool branch_taken_0x159690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159690u;
        // 0x159694: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159690) {
            ctx->pc = 0x1596A4u;
            goto label_1596a4;
        }
    }
    ctx->pc = 0x159698u;
label_159698:
    // 0x159698: 0xc056666  jal         func_159998
    ctx->pc = 0x159698u;
    SET_GPR_U32(ctx, 31, 0x1596A0u);
    ctx->pc = 0x15969Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159698u;
    // 0x15969c: 0x266401d4  addiu       $a0, $s3, 0x1D4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 468));
    ctx->in_delay_slot = false;
    ctx->pc = 0x159998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159998u, 0x159698u, 0x1596A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1596A0u;
label_1596a0:
    // 0x1596a0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1596a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1596a4:
    // 0x1596a4: 0x240302ff  addiu       $v1, $zero, 0x2FF
    ctx->pc = 0x1596a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 767));
    // 0x1596a8: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x1596a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x1596ac: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1596ACu;
    {
        const bool branch_taken_0x1596ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1596B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1596ACu;
        // 0x1596b0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1596ac) {
            ctx->pc = 0x1596CCu;
            goto label_1596cc;
        }
    }
    ctx->pc = 0x1596B4u;
    // 0x1596b4: 0x266401f4  addiu       $a0, $s3, 0x1F4
    ctx->pc = 0x1596b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 500));
    // 0x1596b8: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x1596b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1596bc: 0xc05666c  jal         func_1599B0
    ctx->pc = 0x1596BCu;
    SET_GPR_U32(ctx, 31, 0x1596C4u);
    ctx->pc = 0x1596C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1596BCu;
    // 0x1596c0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1599B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1599B0u, 0x1596BCu, 0x1596C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1596C4u;
label_1596c4:
    // 0x1596c4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1596C4u;
    {
        const bool branch_taken_0x1596c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1596C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1596C4u;
        // 0x1596c8: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1596c4) {
            ctx->pc = 0x1596D8u;
            goto label_1596d8;
        }
    }
    ctx->pc = 0x1596CCu;
label_1596cc:
    // 0x1596cc: 0xc056666  jal         func_159998
    ctx->pc = 0x1596CCu;
    SET_GPR_U32(ctx, 31, 0x1596D4u);
    ctx->pc = 0x1596D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1596CCu;
    // 0x1596d0: 0x266401f4  addiu       $a0, $s3, 0x1F4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 500));
    ctx->in_delay_slot = false;
    ctx->pc = 0x159998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159998u, 0x1596CCu, 0x1596D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1596D4u;
label_1596d4:
    // 0x1596d4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1596d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1596d8:
    // 0x1596d8: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x1596d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1596dc: 0x927502b4  lbu         $s5, 0x2B4($s3)
    ctx->pc = 0x1596dcu;
    SET_GPR_ZE32(ctx, 21, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x1596e0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1596e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1596e4: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x1596e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x1596e8: 0x386303ff  xori        $v1, $v1, 0x3FF
    ctx->pc = 0x1596e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1023);
    // 0x1596ec: 0x83800a  movz        $s0, $a0, $v1
    ctx->pc = 0x1596ecu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
    // 0x1596f0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1596f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1596f4: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x1596f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1596f8: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x1596f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x1596fc: 0x384204ff  xori        $v0, $v0, 0x4FF
    ctx->pc = 0x1596fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1279);
    // 0x159700: 0x82800a  movz        $s0, $a0, $v0
    ctx->pc = 0x159700u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
    // 0x159704: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x159704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x159708: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x159708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x15970c: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x15970cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x159710: 0x386305ff  xori        $v1, $v1, 0x5FF
    ctx->pc = 0x159710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1535);
    // 0x159714: 0x83800a  movz        $s0, $a0, $v1
    ctx->pc = 0x159714u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
    // 0x159718: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x159718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15971c: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x15971cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x159720: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x159720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x159724: 0x384206ff  xori        $v0, $v0, 0x6FF
    ctx->pc = 0x159724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1791);
    // 0x159728: 0x82800a  movz        $s0, $a0, $v0
    ctx->pc = 0x159728u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
    // 0x15972c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x15972cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x159730: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x159730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x159734: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x159734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x159738: 0x386307ff  xori        $v1, $v1, 0x7FF
    ctx->pc = 0x159738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2047);
    // 0x15973c: 0x83800a  movz        $s0, $a0, $v1
    ctx->pc = 0x15973cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
    // 0x159740: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x159740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x159744: 0x2603000c  addiu       $v1, $s0, 0xC
    ctx->pc = 0x159744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x159748: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x159748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x15974c: 0x384208ff  xori        $v0, $v0, 0x8FF
    ctx->pc = 0x15974cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2303);
    // 0x159750: 0x12a00085  beqz        $s5, . + 4 + (0x85 << 2)
    ctx->pc = 0x159750u;
    {
        const bool branch_taken_0x159750 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x159754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159750u;
        // 0x159754: 0x62800a  movz        $s0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159750) {
            ctx->pc = 0x159968u;
            goto label_159968;
        }
    }
    ctx->pc = 0x159758u;
    // 0x159758: 0x3c170080  lui         $s7, 0x80
    ctx->pc = 0x159758u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)128 << 16));
    // 0x15975c: 0x926302b4  lbu         $v1, 0x2B4($s3)
    ctx->pc = 0x15975cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
label_159760:
    // 0x159760: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x159760u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159764: 0x6200002  bltz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x159764u;
    {
        const bool branch_taken_0x159764 = (GPR_S64(ctx, 17) < 0);
        ctx->pc = 0x159768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159764u;
        // 0x159768: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159764) {
            ctx->pc = 0x159770u;
            goto label_159770;
        }
    }
    ctx->pc = 0x15976Cu;
    // 0x15976c: 0x223102a  slt         $v0, $s1, $v1
    ctx->pc = 0x15976cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_159770:
    // 0x159770: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x159770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x159774: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x159774u;
    {
        const bool branch_taken_0x159774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x159778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159774u;
        // 0x159778: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159774) {
            ctx->pc = 0x15978Cu;
            goto label_15978c;
        }
    }
    ctx->pc = 0x15977Cu;
    // 0x15977c: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x15977cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x159780: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x159780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x159784: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x159784u;
    {
        const bool branch_taken_0x159784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159784u;
        // 0x159788: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159784) {
            ctx->pc = 0x159790u;
            goto label_159790;
        }
    }
    ctx->pc = 0x15978Cu;
label_15978c:
    // 0x15978c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x15978cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_159790:
    // 0x159790: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x159790u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159794: 0x12c00007  beqz        $s6, . + 4 + (0x7 << 2)
    ctx->pc = 0x159794u;
    {
        const bool branch_taken_0x159794 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x159798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159794u;
        // 0x159798: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159794) {
            ctx->pc = 0x1597B4u;
            goto label_1597b4;
        }
    }
    ctx->pc = 0x15979Cu;
    // 0x15979c: 0x8e42014c  lw          $v0, 0x14C($s2)
    ctx->pc = 0x15979cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 332)));
    // 0x1597a0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1597A0u;
    {
        const bool branch_taken_0x1597a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1597a0) {
            ctx->pc = 0x1597B4u;
            goto label_1597b4;
        }
    }
    ctx->pc = 0x1597A8u;
    // 0x1597a8: 0x8e420154  lw          $v0, 0x154($s2)
    ctx->pc = 0x1597a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 340)));
    // 0x1597ac: 0x571024  and         $v0, $v0, $s7
    ctx->pc = 0x1597acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
    // 0x1597b0: 0x2c440001  sltiu       $a0, $v0, 0x1
    ctx->pc = 0x1597b0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1597b4:
    // 0x1597b4: 0x54800001  bnel        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1597B4u;
    {
        const bool branch_taken_0x1597b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1597b4) {
            ctx->pc = 0x1597B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1597B4u;
            // 0x1597b8: 0x8c72014c  lw          $s2, 0x14C($v1) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 332)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1597BCu;
            goto label_1597bc;
        }
    }
    ctx->pc = 0x1597BCu;
label_1597bc:
    // 0x1597bc: 0x8e420154  lw          $v0, 0x154($s2)
    ctx->pc = 0x1597bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 340)));
    // 0x1597c0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1597c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1597c4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1597C4u;
    {
        const bool branch_taken_0x1597c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1597C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1597C4u;
        // 0x1597c8: 0x82020000  lb          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1597c4) {
            ctx->pc = 0x1597F8u;
            goto label_1597f8;
        }
    }
    ctx->pc = 0x1597CCu;
    // 0x1597cc: 0x14510062  bne         $v0, $s1, . + 4 + (0x62 << 2)
    ctx->pc = 0x1597CCu;
    {
        const bool branch_taken_0x1597cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x1597D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1597CCu;
        // 0x1597d0: 0x26250001  addiu       $a1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1597cc) {
            ctx->pc = 0x159958u;
            goto label_159958;
        }
    }
    ctx->pc = 0x1597D4u;
    // 0x1597d4: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x1597d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_1597d8:
    // 0x1597d8: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1597d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1597dc: 0x0  nop
    ctx->pc = 0x1597dcu;
    // NOP
    // 0x1597e0: 0x0  nop
    ctx->pc = 0x1597e0u;
    // NOP
    // 0x1597e4: 0x0  nop
    ctx->pc = 0x1597e4u;
    // NOP
    // 0x1597e8: 0x5051fffb  beql        $v0, $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1597E8u;
    {
        const bool branch_taken_0x1597e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x1597e8) {
            ctx->pc = 0x1597ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1597E8u;
            // 0x1597ec: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1597D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1597d8;
        }
    }
    ctx->pc = 0x1597F0u;
    // 0x1597f0: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x1597F0u;
    {
        const bool branch_taken_0x1597f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1597F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1597F0u;
        // 0x1597f4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1597f0) {
            ctx->pc = 0x15995Cu;
            goto label_15995c;
        }
    }
    ctx->pc = 0x1597F8u;
label_1597f8:
    // 0x1597f8: 0x1451001f  bne         $v0, $s1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1597F8u;
    {
        const bool branch_taken_0x1597f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x1597FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1597F8u;
        // 0x1597fc: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1597f8) {
            ctx->pc = 0x159878u;
            goto label_159878;
        }
    }
    ctx->pc = 0x159800u;
    // 0x159800: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x159800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x159804: 0x30420f00  andi        $v0, $v0, 0xF00
    ctx->pc = 0x159804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3840);
    // 0x159808: 0x82800a  movz        $s0, $a0, $v0
    ctx->pc = 0x159808u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
    // 0x15980c: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x15980cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x159810: 0x14710019  bne         $v1, $s1, . + 4 + (0x19 << 2)
    ctx->pc = 0x159810u;
    {
        const bool branch_taken_0x159810 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        ctx->pc = 0x159814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159810u;
        // 0x159814: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159810) {
            ctx->pc = 0x159878u;
            goto label_159878;
        }
    }
    ctx->pc = 0x159818u;
    // 0x159818: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x159818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15981c: 0x30420f00  andi        $v0, $v0, 0xF00
    ctx->pc = 0x15981cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3840);
    // 0x159820: 0x38420100  xori        $v0, $v0, 0x100
    ctx->pc = 0x159820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)256);
    // 0x159824: 0x82800a  movz        $s0, $a0, $v0
    ctx->pc = 0x159824u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
    // 0x159828: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x159828u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15982c: 0x14710012  bne         $v1, $s1, . + 4 + (0x12 << 2)
    ctx->pc = 0x15982Cu;
    {
        const bool branch_taken_0x15982c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        ctx->pc = 0x159830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15982Cu;
        // 0x159830: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15982c) {
            ctx->pc = 0x159878u;
            goto label_159878;
        }
    }
    ctx->pc = 0x159834u;
    // 0x159834: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x159834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x159838: 0x30420f00  andi        $v0, $v0, 0xF00
    ctx->pc = 0x159838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3840);
    // 0x15983c: 0x38420200  xori        $v0, $v0, 0x200
    ctx->pc = 0x15983cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)512);
    // 0x159840: 0x82800a  movz        $s0, $a0, $v0
    ctx->pc = 0x159840u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
    // 0x159844: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x159844u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x159848: 0x1471000b  bne         $v1, $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x159848u;
    {
        const bool branch_taken_0x159848 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        ctx->pc = 0x15984Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159848u;
        // 0x15984c: 0x24030300  addiu       $v1, $zero, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159848) {
            ctx->pc = 0x159878u;
            goto label_159878;
        }
    }
    ctx->pc = 0x159850u;
    // 0x159850: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x159850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x159854: 0x30420f00  andi        $v0, $v0, 0xF00
    ctx->pc = 0x159854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3840);
    // 0x159858: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x159858u;
    {
        const bool branch_taken_0x159858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x15985Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159858u;
        // 0x15985c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159858) {
            ctx->pc = 0x159878u;
            goto label_159878;
        }
    }
    ctx->pc = 0x159860u;
    // 0x159860: 0x264401b4  addiu       $a0, $s2, 0x1B4
    ctx->pc = 0x159860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 436));
    // 0x159864: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x159864u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x159868: 0xc05666c  jal         func_1599B0
    ctx->pc = 0x159868u;
    SET_GPR_U32(ctx, 31, 0x159870u);
    ctx->pc = 0x15986Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159868u;
    // 0x15986c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1599B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1599B0u, 0x159868u, 0x159870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159870u;
label_159870:
    // 0x159870: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x159870u;
    {
        const bool branch_taken_0x159870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159870u;
        // 0x159874: 0x82020000  lb          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159870) {
            ctx->pc = 0x159884u;
            goto label_159884;
        }
    }
    ctx->pc = 0x159878u;
label_159878:
    // 0x159878: 0xc056666  jal         func_159998
    ctx->pc = 0x159878u;
    SET_GPR_U32(ctx, 31, 0x159880u);
    ctx->pc = 0x15987Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159878u;
    // 0x15987c: 0x264401b4  addiu       $a0, $s2, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x159998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159998u, 0x159878u, 0x159880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159880u;
label_159880:
    // 0x159880: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x159880u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_159884:
    // 0x159884: 0x1451000b  bne         $v0, $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x159884u;
    {
        const bool branch_taken_0x159884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x159888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159884u;
        // 0x159888: 0x24030400  addiu       $v1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159884) {
            ctx->pc = 0x1598B4u;
            goto label_1598b4;
        }
    }
    ctx->pc = 0x15988Cu;
    // 0x15988c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x15988cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x159890: 0x30420f00  andi        $v0, $v0, 0xF00
    ctx->pc = 0x159890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3840);
    // 0x159894: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x159894u;
    {
        const bool branch_taken_0x159894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x159898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159894u;
        // 0x159898: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159894) {
            ctx->pc = 0x1598B4u;
            goto label_1598b4;
        }
    }
    ctx->pc = 0x15989Cu;
    // 0x15989c: 0x264401d4  addiu       $a0, $s2, 0x1D4
    ctx->pc = 0x15989cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 468));
    // 0x1598a0: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x1598a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1598a4: 0xc05666c  jal         func_1599B0
    ctx->pc = 0x1598A4u;
    SET_GPR_U32(ctx, 31, 0x1598ACu);
    ctx->pc = 0x1598A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1598A4u;
    // 0x1598a8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1599B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1599B0u, 0x1598A4u, 0x1598ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1598ACu;
label_1598ac:
    // 0x1598ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1598ACu;
    {
        const bool branch_taken_0x1598ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1598B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1598ACu;
        // 0x1598b0: 0x82020000  lb          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1598ac) {
            ctx->pc = 0x1598C0u;
            goto label_1598c0;
        }
    }
    ctx->pc = 0x1598B4u;
label_1598b4:
    // 0x1598b4: 0xc056666  jal         func_159998
    ctx->pc = 0x1598B4u;
    SET_GPR_U32(ctx, 31, 0x1598BCu);
    ctx->pc = 0x1598B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1598B4u;
    // 0x1598b8: 0x264401d4  addiu       $a0, $s2, 0x1D4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 468));
    ctx->in_delay_slot = false;
    ctx->pc = 0x159998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159998u, 0x1598B4u, 0x1598BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1598BCu;
label_1598bc:
    // 0x1598bc: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1598bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1598c0:
    // 0x1598c0: 0x1451000b  bne         $v0, $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x1598C0u;
    {
        const bool branch_taken_0x1598c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x1598C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1598C0u;
        // 0x1598c4: 0x24030500  addiu       $v1, $zero, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1598c0) {
            ctx->pc = 0x1598F0u;
            goto label_1598f0;
        }
    }
    ctx->pc = 0x1598C8u;
    // 0x1598c8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1598c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1598cc: 0x30420f00  andi        $v0, $v0, 0xF00
    ctx->pc = 0x1598ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3840);
    // 0x1598d0: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1598D0u;
    {
        const bool branch_taken_0x1598d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1598D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1598D0u;
        // 0x1598d4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1598d0) {
            ctx->pc = 0x1598F0u;
            goto label_1598f0;
        }
    }
    ctx->pc = 0x1598D8u;
    // 0x1598d8: 0x264401f4  addiu       $a0, $s2, 0x1F4
    ctx->pc = 0x1598d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 500));
    // 0x1598dc: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x1598dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1598e0: 0xc05666c  jal         func_1599B0
    ctx->pc = 0x1598E0u;
    SET_GPR_U32(ctx, 31, 0x1598E8u);
    ctx->pc = 0x1598E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1598E0u;
    // 0x1598e4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1599B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1599B0u, 0x1598E0u, 0x1598E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1598E8u;
label_1598e8:
    // 0x1598e8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1598E8u;
    {
        const bool branch_taken_0x1598e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1598ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1598E8u;
        // 0x1598ec: 0x82020000  lb          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1598e8) {
            ctx->pc = 0x1598FCu;
            goto label_1598fc;
        }
    }
    ctx->pc = 0x1598F0u;
label_1598f0:
    // 0x1598f0: 0xc056666  jal         func_159998
    ctx->pc = 0x1598F0u;
    SET_GPR_U32(ctx, 31, 0x1598F8u);
    ctx->pc = 0x1598F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1598F0u;
    // 0x1598f4: 0x264401f4  addiu       $a0, $s2, 0x1F4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 500));
    ctx->in_delay_slot = false;
    ctx->pc = 0x159998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159998u, 0x1598F0u, 0x1598F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1598F8u;
label_1598f8:
    // 0x1598f8: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1598f8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1598fc:
    // 0x1598fc: 0x14510016  bne         $v0, $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1598FCu;
    {
        const bool branch_taken_0x1598fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x159900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1598FCu;
        // 0x159900: 0x26250001  addiu       $a1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1598fc) {
            ctx->pc = 0x159958u;
            goto label_159958;
        }
    }
    ctx->pc = 0x159904u;
    // 0x159904: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x159904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x159908: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x159908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x15990c: 0x30420f00  andi        $v0, $v0, 0xF00
    ctx->pc = 0x15990cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3840);
    // 0x159910: 0x38420600  xori        $v0, $v0, 0x600
    ctx->pc = 0x159910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1536);
    // 0x159914: 0x82800a  movz        $s0, $a0, $v0
    ctx->pc = 0x159914u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
    // 0x159918: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x159918u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15991c: 0x5471000f  bnel        $v1, $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x15991Cu;
    {
        const bool branch_taken_0x15991c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        if (branch_taken_0x15991c) {
            ctx->pc = 0x159920u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15991Cu;
            // 0x159920: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15995Cu;
            goto label_15995c;
        }
    }
    ctx->pc = 0x159924u;
    // 0x159924: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x159924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x159928: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x159928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x15992c: 0x30420f00  andi        $v0, $v0, 0xF00
    ctx->pc = 0x15992cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3840);
    // 0x159930: 0x38420700  xori        $v0, $v0, 0x700
    ctx->pc = 0x159930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1792);
    // 0x159934: 0x82800a  movz        $s0, $a0, $v0
    ctx->pc = 0x159934u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
    // 0x159938: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x159938u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15993c: 0x14710007  bne         $v1, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x15993Cu;
    {
        const bool branch_taken_0x15993c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        ctx->pc = 0x159940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15993Cu;
        // 0x159940: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15993c) {
            ctx->pc = 0x15995Cu;
            goto label_15995c;
        }
    }
    ctx->pc = 0x159944u;
    // 0x159944: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x159944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x159948: 0x2603000c  addiu       $v1, $s0, 0xC
    ctx->pc = 0x159948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x15994c: 0x30420f00  andi        $v0, $v0, 0xF00
    ctx->pc = 0x15994cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3840);
    // 0x159950: 0x38420800  xori        $v0, $v0, 0x800
    ctx->pc = 0x159950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2048);
    // 0x159954: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x159954u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_159958:
    // 0x159958: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x159958u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_15995c:
    // 0x15995c: 0x235102a  slt         $v0, $s1, $s5
    ctx->pc = 0x15995cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x159960: 0x5440ff7f  bnel        $v0, $zero, . + 4 + (-0x81 << 2)
    ctx->pc = 0x159960u;
    {
        const bool branch_taken_0x159960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x159960) {
            ctx->pc = 0x159964u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x159960u;
            // 0x159964: 0x926302b4  lbu         $v1, 0x2B4($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x159760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_159760;
        }
    }
    ctx->pc = 0x159968u;
label_159968:
    // 0x159968: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x159968u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x15996c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x15996cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x159970: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x159970u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x159974: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x159974u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x159978: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x159978u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15997c: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x15997cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x159980: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x159980u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x159984: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x159984u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x159988: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x159988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15998c: 0x3e00008  jr          $ra
    ctx->pc = 0x15998Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15998Cu;
        // 0x159990: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15998Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x159994u;
    // 0x159994: 0x0  nop
    ctx->pc = 0x159994u;
    // NOP
    ctx->pc = 0x159998u;
}
