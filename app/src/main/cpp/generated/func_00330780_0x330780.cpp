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

// Function: func_00330780
// Address: 0x330780 - 0x3308a8
void func_00330780_0x330780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00330780_0x330780");
#endif

    switch (ctx->pc) {
        case 0x330780u: goto label_330780;
        case 0x330784u: goto label_330784;
        case 0x330788u: goto label_330788;
        case 0x33078cu: goto label_33078c;
        case 0x330790u: goto label_330790;
        case 0x330794u: goto label_330794;
        case 0x330798u: goto label_330798;
        case 0x33079cu: goto label_33079c;
        case 0x3307a0u: goto label_3307a0;
        case 0x3307a4u: goto label_3307a4;
        case 0x3307a8u: goto label_3307a8;
        case 0x3307acu: goto label_3307ac;
        case 0x3307b0u: goto label_3307b0;
        case 0x3307b4u: goto label_3307b4;
        case 0x3307b8u: goto label_3307b8;
        case 0x3307bcu: goto label_3307bc;
        case 0x3307c0u: goto label_3307c0;
        case 0x3307c4u: goto label_3307c4;
        case 0x3307c8u: goto label_3307c8;
        case 0x3307ccu: goto label_3307cc;
        case 0x3307d0u: goto label_3307d0;
        case 0x3307d4u: goto label_3307d4;
        case 0x3307d8u: goto label_3307d8;
        case 0x3307dcu: goto label_3307dc;
        case 0x3307e0u: goto label_3307e0;
        case 0x3307e4u: goto label_3307e4;
        case 0x3307e8u: goto label_3307e8;
        case 0x3307ecu: goto label_3307ec;
        case 0x3307f0u: goto label_3307f0;
        case 0x3307f4u: goto label_3307f4;
        case 0x3307f8u: goto label_3307f8;
        case 0x3307fcu: goto label_3307fc;
        case 0x330800u: goto label_330800;
        case 0x330804u: goto label_330804;
        case 0x330808u: goto label_330808;
        case 0x33080cu: goto label_33080c;
        case 0x330810u: goto label_330810;
        case 0x330814u: goto label_330814;
        case 0x330818u: goto label_330818;
        case 0x33081cu: goto label_33081c;
        case 0x330820u: goto label_330820;
        case 0x330824u: goto label_330824;
        case 0x330828u: goto label_330828;
        case 0x33082cu: goto label_33082c;
        case 0x330830u: goto label_330830;
        case 0x330834u: goto label_330834;
        case 0x330838u: goto label_330838;
        case 0x33083cu: goto label_33083c;
        case 0x330840u: goto label_330840;
        case 0x330844u: goto label_330844;
        case 0x330848u: goto label_330848;
        case 0x33084cu: goto label_33084c;
        case 0x330850u: goto label_330850;
        case 0x330854u: goto label_330854;
        case 0x330858u: goto label_330858;
        case 0x33085cu: goto label_33085c;
        case 0x330860u: goto label_330860;
        case 0x330864u: goto label_330864;
        case 0x330868u: goto label_330868;
        case 0x33086cu: goto label_33086c;
        case 0x330870u: goto label_330870;
        case 0x330874u: goto label_330874;
        case 0x330878u: goto label_330878;
        case 0x33087cu: goto label_33087c;
        case 0x330880u: goto label_330880;
        case 0x330884u: goto label_330884;
        case 0x330888u: goto label_330888;
        case 0x33088cu: goto label_33088c;
        case 0x330890u: goto label_330890;
        case 0x330894u: goto label_330894;
        case 0x330898u: goto label_330898;
        case 0x33089cu: goto label_33089c;
        case 0x3308a0u: goto label_3308a0;
        case 0x3308a4u: goto label_3308a4;
        default: break;
    }

    ctx->pc = 0x330780u;

label_330780:
    // 0x330780: 0x27bdfd70  addiu       $sp, $sp, -0x290
    ctx->pc = 0x330780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966640));
label_330784:
    // 0x330784: 0xffb10268  sd          $s1, 0x268($sp)
    ctx->pc = 0x330784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 616), GPR_U64(ctx, 17));
label_330788:
    // 0x330788: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x330788u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33078c:
    // 0x33078c: 0xffb30278  sd          $s3, 0x278($sp)
    ctx->pc = 0x33078cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 632), GPR_U64(ctx, 19));
label_330790:
    // 0x330790: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x330790u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_330794:
    // 0x330794: 0xffb40280  sd          $s4, 0x280($sp)
    ctx->pc = 0x330794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 640), GPR_U64(ctx, 20));
label_330798:
    // 0x330798: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x330798u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_33079c:
    // 0x33079c: 0xffb00260  sd          $s0, 0x260($sp)
    ctx->pc = 0x33079cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 16));
label_3307a0:
    // 0x3307a0: 0xffb20270  sd          $s2, 0x270($sp)
    ctx->pc = 0x3307a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 18));
label_3307a4:
    // 0x3307a4: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
label_3307a8:
    if (ctx->pc == 0x3307A8u) {
        ctx->pc = 0x3307A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3307A4u;
        // 0x3307a8: 0xffbf0288  sd          $ra, 0x288($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 648), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3307ACu;
        goto label_3307ac;
    }
    ctx->pc = 0x3307A4u;
    {
        const bool branch_taken_0x3307a4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3307A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3307A4u;
        // 0x3307a8: 0xffbf0288  sd          $ra, 0x288($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 648), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3307a4) {
            ctx->pc = 0x3307B8u;
            goto label_3307b8;
        }
    }
    ctx->pc = 0x3307ACu;
label_3307ac:
    // 0x3307ac: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x3307acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_3307b0:
    // 0x3307b0: 0x10000032  b           . + 4 + (0x32 << 2)
label_3307b4:
    if (ctx->pc == 0x3307B4u) {
        ctx->pc = 0x3307B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3307B0u;
        // 0x3307b4: 0x24843218  addiu       $a0, $a0, 0x3218 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12824));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3307B8u;
        goto label_3307b8;
    }
    ctx->pc = 0x3307B0u;
    {
        const bool branch_taken_0x3307b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3307B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3307B0u;
        // 0x3307b4: 0x24843218  addiu       $a0, $a0, 0x3218 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12824));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3307b0) {
            ctx->pc = 0x33087Cu;
            goto label_33087c;
        }
    }
    ctx->pc = 0x3307B8u;
label_3307b8:
    // 0x3307b8: 0x27b20130  addiu       $s2, $sp, 0x130
    ctx->pc = 0x3307b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_3307bc:
    // 0x3307bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3307bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3307c0:
    // 0x3307c0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3307c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3307c4:
    // 0x3307c4: 0xc0cc248  jal         func_330920
label_3307c8:
    if (ctx->pc == 0x3307C8u) {
        ctx->pc = 0x3307C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3307C4u;
        // 0x3307c8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3307CCu;
        goto label_3307cc;
    }
    ctx->pc = 0x3307C4u;
    SET_GPR_U32(ctx, 31, 0x3307CCu);
    ctx->pc = 0x3307C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3307C4u;
    // 0x3307c8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330920u, 0x3307C4u, 0x3307CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3307CCu;
label_3307cc:
    // 0x3307cc: 0x83a20130  lb          $v0, 0x130($sp)
    ctx->pc = 0x3307ccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 304)));
label_3307d0:
    // 0x3307d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3307d4:
    if (ctx->pc == 0x3307D4u) {
        ctx->pc = 0x3307D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3307D0u;
        // 0x3307d4: 0x3c040045  lui         $a0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3307D8u;
        goto label_3307d8;
    }
    ctx->pc = 0x3307D0u;
    {
        const bool branch_taken_0x3307d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3307D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3307D0u;
        // 0x3307d4: 0x3c040045  lui         $a0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3307d0) {
            ctx->pc = 0x3307E0u;
            goto label_3307e0;
        }
    }
    ctx->pc = 0x3307D8u;
label_3307d8:
    // 0x3307d8: 0x10000028  b           . + 4 + (0x28 << 2)
label_3307dc:
    if (ctx->pc == 0x3307DCu) {
        ctx->pc = 0x3307DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3307D8u;
        // 0x3307dc: 0x24843218  addiu       $a0, $a0, 0x3218 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12824));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3307E0u;
        goto label_3307e0;
    }
    ctx->pc = 0x3307D8u;
    {
        const bool branch_taken_0x3307d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3307DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3307D8u;
        // 0x3307dc: 0x24843218  addiu       $a0, $a0, 0x3218 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12824));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3307d8) {
            ctx->pc = 0x33087Cu;
            goto label_33087c;
        }
    }
    ctx->pc = 0x3307E0u;
label_3307e0:
    // 0x3307e0: 0xc0cc22a  jal         func_3308A8
label_3307e4:
    if (ctx->pc == 0x3307E4u) {
        ctx->pc = 0x3307E8u;
        goto label_3307e8;
    }
    ctx->pc = 0x3307E0u;
    SET_GPR_U32(ctx, 31, 0x3307E8u);
    ctx->pc = 0x3308A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3308A8u, 0x3307E0u, 0x3307E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3307E8u;
label_3307e8:
    // 0x3307e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3307e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3307ec:
    // 0x3307ec: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
label_3307f0:
    if (ctx->pc == 0x3307F0u) {
        ctx->pc = 0x3307F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3307ECu;
        // 0x3307f0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3307F4u;
        goto label_3307f4;
    }
    ctx->pc = 0x3307ECu;
    {
        const bool branch_taken_0x3307ec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3307F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3307ECu;
        // 0x3307f0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3307ec) {
            ctx->pc = 0x330800u;
            goto label_330800;
        }
    }
    ctx->pc = 0x3307F4u;
label_3307f4:
    // 0x3307f4: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x3307f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_3307f8:
    // 0x3307f8: 0x10000020  b           . + 4 + (0x20 << 2)
label_3307fc:
    if (ctx->pc == 0x3307FCu) {
        ctx->pc = 0x3307FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3307F8u;
        // 0x3307fc: 0x24843238  addiu       $a0, $a0, 0x3238 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12856));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330800u;
        goto label_330800;
    }
    ctx->pc = 0x3307F8u;
    {
        const bool branch_taken_0x3307f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3307FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3307F8u;
        // 0x3307fc: 0x24843238  addiu       $a0, $a0, 0x3238 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3307f8) {
            ctx->pc = 0x33087Cu;
            goto label_33087c;
        }
    }
    ctx->pc = 0x330800u;
label_330800:
    // 0x330800: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x330800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_330804:
    // 0x330804: 0xc0cc1b6  jal         func_3306D8
label_330808:
    if (ctx->pc == 0x330808u) {
        ctx->pc = 0x330808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330804u;
        // 0x330808: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33080Cu;
        goto label_33080c;
    }
    ctx->pc = 0x330804u;
    SET_GPR_U32(ctx, 31, 0x33080Cu);
    ctx->pc = 0x330808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330804u;
    // 0x330808: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3306D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3306D8u, 0x330804u, 0x33080Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33080Cu;
label_33080c:
    // 0x33080c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_330810:
    if (ctx->pc == 0x330810u) {
        ctx->pc = 0x330810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33080Cu;
        // 0x330810: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330814u;
        goto label_330814;
    }
    ctx->pc = 0x33080Cu;
    {
        const bool branch_taken_0x33080c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x330810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33080Cu;
        // 0x330810: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33080c) {
            ctx->pc = 0x330828u;
            goto label_330828;
        }
    }
    ctx->pc = 0x330814u;
label_330814:
    // 0x330814: 0xc0cc244  jal         func_330910
label_330818:
    if (ctx->pc == 0x330818u) {
        ctx->pc = 0x330818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330814u;
        // 0x330818: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33081Cu;
        goto label_33081c;
    }
    ctx->pc = 0x330814u;
    SET_GPR_U32(ctx, 31, 0x33081Cu);
    ctx->pc = 0x330818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330814u;
    // 0x330818: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330910u, 0x330814u, 0x33081Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33081Cu;
label_33081c:
    // 0x33081c: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x33081cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_330820:
    // 0x330820: 0x10000016  b           . + 4 + (0x16 << 2)
label_330824:
    if (ctx->pc == 0x330824u) {
        ctx->pc = 0x330824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330820u;
        // 0x330824: 0x24843280  addiu       $a0, $a0, 0x3280 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12928));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330828u;
        goto label_330828;
    }
    ctx->pc = 0x330820u;
    {
        const bool branch_taken_0x330820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x330824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330820u;
        // 0x330824: 0x24843280  addiu       $a0, $a0, 0x3280 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12928));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330820) {
            ctx->pc = 0x33087Cu;
            goto label_33087c;
        }
    }
    ctx->pc = 0x330828u;
label_330828:
    // 0x330828: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x330828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_33082c:
    // 0x33082c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_330830:
    if (ctx->pc == 0x330830u) {
        ctx->pc = 0x330830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33082Cu;
        // 0x330830: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330834u;
        goto label_330834;
    }
    ctx->pc = 0x33082Cu;
    {
        const bool branch_taken_0x33082c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x330830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33082Cu;
        // 0x330830: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33082c) {
            ctx->pc = 0x330848u;
            goto label_330848;
        }
    }
    ctx->pc = 0x330834u;
label_330834:
    // 0x330834: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x330834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_330838:
    // 0x330838: 0x40f809  jalr        $v0
label_33083c:
    if (ctx->pc == 0x33083Cu) {
        ctx->pc = 0x33083Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330838u;
        // 0x33083c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330840u;
        goto label_330840;
    }
    ctx->pc = 0x330838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x330840u);
        ctx->pc = 0x33083Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330838u;
        // 0x33083c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x330838u, 0x330840u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x330840u;
label_330840:
    // 0x330840: 0x10000007  b           . + 4 + (0x7 << 2)
label_330844:
    if (ctx->pc == 0x330844u) {
        ctx->pc = 0x330844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330840u;
        // 0x330844: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330848u;
        goto label_330848;
    }
    ctx->pc = 0x330840u;
    {
        const bool branch_taken_0x330840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x330844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330840u;
        // 0x330844: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330840) {
            ctx->pc = 0x330860u;
            goto label_330860;
        }
    }
    ctx->pc = 0x330848u;
label_330848:
    // 0x330848: 0xc0cc244  jal         func_330910
label_33084c:
    if (ctx->pc == 0x33084Cu) {
        ctx->pc = 0x33084Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330848u;
        // 0x33084c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330850u;
        goto label_330850;
    }
    ctx->pc = 0x330848u;
    SET_GPR_U32(ctx, 31, 0x330850u);
    ctx->pc = 0x33084Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330848u;
    // 0x33084c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330910u, 0x330848u, 0x330850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330850u;
label_330850:
    // 0x330850: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x330850u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_330854:
    // 0x330854: 0x10000009  b           . + 4 + (0x9 << 2)
label_330858:
    if (ctx->pc == 0x330858u) {
        ctx->pc = 0x330858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330854u;
        // 0x330858: 0x248432a0  addiu       $a0, $a0, 0x32A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12960));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33085Cu;
        goto label_33085c;
    }
    ctx->pc = 0x330854u;
    {
        const bool branch_taken_0x330854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x330858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330854u;
        // 0x330858: 0x248432a0  addiu       $a0, $a0, 0x32A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12960));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330854) {
            ctx->pc = 0x33087Cu;
            goto label_33087c;
        }
    }
    ctx->pc = 0x33085Cu;
label_33085c:
    // 0x33085c: 0x0  nop
    ctx->pc = 0x33085cu;
    // NOP
label_330860:
    // 0x330860: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x330860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_330864:
    // 0x330864: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_330868:
    if (ctx->pc == 0x330868u) {
        ctx->pc = 0x330868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330864u;
        // 0x330868: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33086Cu;
        goto label_33086c;
    }
    ctx->pc = 0x330864u;
    {
        const bool branch_taken_0x330864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x330864) {
            ctx->pc = 0x330868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x330864u;
            // 0x330868: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x330888u;
            goto label_330888;
        }
    }
    ctx->pc = 0x33086Cu;
label_33086c:
    // 0x33086c: 0xc0cc244  jal         func_330910
label_330870:
    if (ctx->pc == 0x330870u) {
        ctx->pc = 0x330870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33086Cu;
        // 0x330870: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330874u;
        goto label_330874;
    }
    ctx->pc = 0x33086Cu;
    SET_GPR_U32(ctx, 31, 0x330874u);
    ctx->pc = 0x330870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33086Cu;
    // 0x330870: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330910u, 0x33086Cu, 0x330874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330874u;
label_330874:
    // 0x330874: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x330874u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_330878:
    // 0x330878: 0x248432b8  addiu       $a0, $a0, 0x32B8
    ctx->pc = 0x330878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12984));
label_33087c:
    // 0x33087c: 0xc0cc0b8  jal         func_3302E0
label_330880:
    if (ctx->pc == 0x330880u) {
        ctx->pc = 0x330884u;
        goto label_330884;
    }
    ctx->pc = 0x33087Cu;
    SET_GPR_U32(ctx, 31, 0x330884u);
    ctx->pc = 0x3302E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3302E0u, 0x33087Cu, 0x330884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330884u;
label_330884:
    // 0x330884: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x330884u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_330888:
    // 0x330888: 0xdfb00260  ld          $s0, 0x260($sp)
    ctx->pc = 0x330888u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
label_33088c:
    // 0x33088c: 0xdfb10268  ld          $s1, 0x268($sp)
    ctx->pc = 0x33088cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 616)));
label_330890:
    // 0x330890: 0xdfb20270  ld          $s2, 0x270($sp)
    ctx->pc = 0x330890u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 624)));
label_330894:
    // 0x330894: 0xdfb30278  ld          $s3, 0x278($sp)
    ctx->pc = 0x330894u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 632)));
label_330898:
    // 0x330898: 0xdfb40280  ld          $s4, 0x280($sp)
    ctx->pc = 0x330898u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 640)));
label_33089c:
    // 0x33089c: 0xdfbf0288  ld          $ra, 0x288($sp)
    ctx->pc = 0x33089cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 648)));
label_3308a0:
    // 0x3308a0: 0x3e00008  jr          $ra
label_3308a4:
    if (ctx->pc == 0x3308A4u) {
        ctx->pc = 0x3308A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3308A0u;
        // 0x3308a4: 0x27bd0290  addiu       $sp, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3308A8u;
        goto label_fallthrough_0x3308a0;
    }
    ctx->pc = 0x3308A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3308A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3308A0u;
        // 0x3308a4: 0x27bd0290  addiu       $sp, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3308A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3308a0:
    ctx->pc = 0x3308A8u;
}
