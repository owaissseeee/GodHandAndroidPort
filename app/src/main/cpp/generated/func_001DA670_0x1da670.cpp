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

// Function: func_001DA670
// Address: 0x1da670 - 0x1da910
void func_001DA670_0x1da670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001DA670_0x1da670");
#endif

    switch (ctx->pc) {
        case 0x1da670u: goto label_1da670;
        case 0x1da674u: goto label_1da674;
        case 0x1da678u: goto label_1da678;
        case 0x1da67cu: goto label_1da67c;
        case 0x1da680u: goto label_1da680;
        case 0x1da684u: goto label_1da684;
        case 0x1da688u: goto label_1da688;
        case 0x1da68cu: goto label_1da68c;
        case 0x1da690u: goto label_1da690;
        case 0x1da694u: goto label_1da694;
        case 0x1da698u: goto label_1da698;
        case 0x1da69cu: goto label_1da69c;
        case 0x1da6a0u: goto label_1da6a0;
        case 0x1da6a4u: goto label_1da6a4;
        case 0x1da6a8u: goto label_1da6a8;
        case 0x1da6acu: goto label_1da6ac;
        case 0x1da6b0u: goto label_1da6b0;
        case 0x1da6b4u: goto label_1da6b4;
        case 0x1da6b8u: goto label_1da6b8;
        case 0x1da6bcu: goto label_1da6bc;
        case 0x1da6c0u: goto label_1da6c0;
        case 0x1da6c4u: goto label_1da6c4;
        case 0x1da6c8u: goto label_1da6c8;
        case 0x1da6ccu: goto label_1da6cc;
        case 0x1da6d0u: goto label_1da6d0;
        case 0x1da6d4u: goto label_1da6d4;
        case 0x1da6d8u: goto label_1da6d8;
        case 0x1da6dcu: goto label_1da6dc;
        case 0x1da6e0u: goto label_1da6e0;
        case 0x1da6e4u: goto label_1da6e4;
        case 0x1da6e8u: goto label_1da6e8;
        case 0x1da6ecu: goto label_1da6ec;
        case 0x1da6f0u: goto label_1da6f0;
        case 0x1da6f4u: goto label_1da6f4;
        case 0x1da6f8u: goto label_1da6f8;
        case 0x1da6fcu: goto label_1da6fc;
        case 0x1da700u: goto label_1da700;
        case 0x1da704u: goto label_1da704;
        case 0x1da708u: goto label_1da708;
        case 0x1da70cu: goto label_1da70c;
        case 0x1da710u: goto label_1da710;
        case 0x1da714u: goto label_1da714;
        case 0x1da718u: goto label_1da718;
        case 0x1da71cu: goto label_1da71c;
        case 0x1da720u: goto label_1da720;
        case 0x1da724u: goto label_1da724;
        case 0x1da728u: goto label_1da728;
        case 0x1da72cu: goto label_1da72c;
        case 0x1da730u: goto label_1da730;
        case 0x1da734u: goto label_1da734;
        case 0x1da738u: goto label_1da738;
        case 0x1da73cu: goto label_1da73c;
        case 0x1da740u: goto label_1da740;
        case 0x1da744u: goto label_1da744;
        case 0x1da748u: goto label_1da748;
        case 0x1da74cu: goto label_1da74c;
        case 0x1da750u: goto label_1da750;
        case 0x1da754u: goto label_1da754;
        case 0x1da758u: goto label_1da758;
        case 0x1da75cu: goto label_1da75c;
        case 0x1da760u: goto label_1da760;
        case 0x1da764u: goto label_1da764;
        case 0x1da768u: goto label_1da768;
        case 0x1da76cu: goto label_1da76c;
        case 0x1da770u: goto label_1da770;
        case 0x1da774u: goto label_1da774;
        case 0x1da778u: goto label_1da778;
        case 0x1da77cu: goto label_1da77c;
        case 0x1da780u: goto label_1da780;
        case 0x1da784u: goto label_1da784;
        case 0x1da788u: goto label_1da788;
        case 0x1da78cu: goto label_1da78c;
        case 0x1da790u: goto label_1da790;
        case 0x1da794u: goto label_1da794;
        case 0x1da798u: goto label_1da798;
        case 0x1da79cu: goto label_1da79c;
        case 0x1da7a0u: goto label_1da7a0;
        case 0x1da7a4u: goto label_1da7a4;
        case 0x1da7a8u: goto label_1da7a8;
        case 0x1da7acu: goto label_1da7ac;
        case 0x1da7b0u: goto label_1da7b0;
        case 0x1da7b4u: goto label_1da7b4;
        case 0x1da7b8u: goto label_1da7b8;
        case 0x1da7bcu: goto label_1da7bc;
        case 0x1da7c0u: goto label_1da7c0;
        case 0x1da7c4u: goto label_1da7c4;
        case 0x1da7c8u: goto label_1da7c8;
        case 0x1da7ccu: goto label_1da7cc;
        case 0x1da7d0u: goto label_1da7d0;
        case 0x1da7d4u: goto label_1da7d4;
        case 0x1da7d8u: goto label_1da7d8;
        case 0x1da7dcu: goto label_1da7dc;
        case 0x1da7e0u: goto label_1da7e0;
        case 0x1da7e4u: goto label_1da7e4;
        case 0x1da7e8u: goto label_1da7e8;
        case 0x1da7ecu: goto label_1da7ec;
        case 0x1da7f0u: goto label_1da7f0;
        case 0x1da7f4u: goto label_1da7f4;
        case 0x1da7f8u: goto label_1da7f8;
        case 0x1da7fcu: goto label_1da7fc;
        case 0x1da800u: goto label_1da800;
        case 0x1da804u: goto label_1da804;
        case 0x1da808u: goto label_1da808;
        case 0x1da80cu: goto label_1da80c;
        case 0x1da810u: goto label_1da810;
        case 0x1da814u: goto label_1da814;
        case 0x1da818u: goto label_1da818;
        case 0x1da81cu: goto label_1da81c;
        case 0x1da820u: goto label_1da820;
        case 0x1da824u: goto label_1da824;
        case 0x1da828u: goto label_1da828;
        case 0x1da82cu: goto label_1da82c;
        case 0x1da830u: goto label_1da830;
        case 0x1da834u: goto label_1da834;
        case 0x1da838u: goto label_1da838;
        case 0x1da83cu: goto label_1da83c;
        case 0x1da840u: goto label_1da840;
        case 0x1da844u: goto label_1da844;
        case 0x1da848u: goto label_1da848;
        case 0x1da84cu: goto label_1da84c;
        case 0x1da850u: goto label_1da850;
        case 0x1da854u: goto label_1da854;
        case 0x1da858u: goto label_1da858;
        case 0x1da85cu: goto label_1da85c;
        case 0x1da860u: goto label_1da860;
        case 0x1da864u: goto label_1da864;
        case 0x1da868u: goto label_1da868;
        case 0x1da86cu: goto label_1da86c;
        case 0x1da870u: goto label_1da870;
        case 0x1da874u: goto label_1da874;
        case 0x1da878u: goto label_1da878;
        case 0x1da87cu: goto label_1da87c;
        case 0x1da880u: goto label_1da880;
        case 0x1da884u: goto label_1da884;
        case 0x1da888u: goto label_1da888;
        case 0x1da88cu: goto label_1da88c;
        case 0x1da890u: goto label_1da890;
        case 0x1da894u: goto label_1da894;
        case 0x1da898u: goto label_1da898;
        case 0x1da89cu: goto label_1da89c;
        case 0x1da8a0u: goto label_1da8a0;
        case 0x1da8a4u: goto label_1da8a4;
        case 0x1da8a8u: goto label_1da8a8;
        case 0x1da8acu: goto label_1da8ac;
        case 0x1da8b0u: goto label_1da8b0;
        case 0x1da8b4u: goto label_1da8b4;
        case 0x1da8b8u: goto label_1da8b8;
        case 0x1da8bcu: goto label_1da8bc;
        case 0x1da8c0u: goto label_1da8c0;
        case 0x1da8c4u: goto label_1da8c4;
        case 0x1da8c8u: goto label_1da8c8;
        case 0x1da8ccu: goto label_1da8cc;
        case 0x1da8d0u: goto label_1da8d0;
        case 0x1da8d4u: goto label_1da8d4;
        case 0x1da8d8u: goto label_1da8d8;
        case 0x1da8dcu: goto label_1da8dc;
        case 0x1da8e0u: goto label_1da8e0;
        case 0x1da8e4u: goto label_1da8e4;
        case 0x1da8e8u: goto label_1da8e8;
        case 0x1da8ecu: goto label_1da8ec;
        case 0x1da8f0u: goto label_1da8f0;
        case 0x1da8f4u: goto label_1da8f4;
        case 0x1da8f8u: goto label_1da8f8;
        case 0x1da8fcu: goto label_1da8fc;
        case 0x1da900u: goto label_1da900;
        case 0x1da904u: goto label_1da904;
        case 0x1da908u: goto label_1da908;
        case 0x1da90cu: goto label_1da90c;
        default: break;
    }

    ctx->pc = 0x1da670u;

label_1da670:
    // 0x1da670: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1da670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1da674:
    // 0x1da674: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1da674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1da678:
    // 0x1da678: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1da678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1da67c:
    // 0x1da67c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1da67cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1da680:
    // 0x1da680: 0x92033025  lbu         $v1, 0x3025($s0)
    ctx->pc = 0x1da680u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12325)));
label_1da684:
    // 0x1da684: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x1da684u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_1da688:
    // 0x1da688: 0x1040009c  beqz        $v0, . + 4 + (0x9C << 2)
label_1da68c:
    if (ctx->pc == 0x1DA68Cu) {
        ctx->pc = 0x1DA68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA688u;
        // 0x1da68c: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA690u;
        goto label_1da690;
    }
    ctx->pc = 0x1DA688u;
    {
        const bool branch_taken_0x1da688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA688u;
        // 0x1da68c: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da688) {
            ctx->pc = 0x1DA8FCu;
            goto label_1da8fc;
        }
    }
    ctx->pc = 0x1DA690u;
label_1da690:
    // 0x1da690: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1da690u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1da694:
    // 0x1da694: 0x2442b360  addiu       $v0, $v0, -0x4CA0
    ctx->pc = 0x1da694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947680));
label_1da698:
    // 0x1da698: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1da698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1da69c:
    // 0x1da69c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1da69cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1da6a0:
    // 0x1da6a0: 0x800008  jr          $a0
label_1da6a4:
    if (ctx->pc == 0x1DA6A4u) {
        ctx->pc = 0x1DA6A8u;
        goto label_1da6a8;
    }
    ctx->pc = 0x1DA6A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DA6A8u: goto label_1da6a8;
            case 0x1DA6CCu: goto label_1da6cc;
            case 0x1DA758u: goto label_1da758;
            case 0x1DA7BCu: goto label_1da7bc;
            case 0x1DA858u: goto label_1da858;
            case 0x1DA8C8u: goto label_1da8c8;
            case 0x1DA8F0u: goto label_1da8f0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA6A0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1DA6A8u;
label_1da6a8:
    // 0x1da6a8: 0x8e023038  lw          $v0, 0x3038($s0)
    ctx->pc = 0x1da6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12344)));
label_1da6ac:
    // 0x1da6ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1da6acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1da6b0:
    // 0x1da6b0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1da6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1da6b4:
    // 0x1da6b4: 0xc076fac  jal         func_1DBEB0
label_1da6b8:
    if (ctx->pc == 0x1DA6B8u) {
        ctx->pc = 0x1DA6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA6B4u;
        // 0x1da6b8: 0xae023038  sw          $v0, 0x3038($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12344), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA6BCu;
        goto label_1da6bc;
    }
    ctx->pc = 0x1DA6B4u;
    SET_GPR_U32(ctx, 31, 0x1DA6BCu);
    ctx->pc = 0x1DA6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA6B4u;
    // 0x1da6b8: 0xae023038  sw          $v0, 0x3038($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12344), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBEB0u, 0x1DA6B4u, 0x1DA6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA6BCu;
label_1da6bc:
    // 0x1da6bc: 0x92023025  lbu         $v0, 0x3025($s0)
    ctx->pc = 0x1da6bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12325)));
label_1da6c0:
    // 0x1da6c0: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1da6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1da6c4:
    // 0x1da6c4: 0x10000087  b           . + 4 + (0x87 << 2)
label_1da6c8:
    if (ctx->pc == 0x1DA6C8u) {
        ctx->pc = 0x1DA6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA6C4u;
        // 0x1da6c8: 0xae033028  sw          $v1, 0x3028($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12328), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA6CCu;
        goto label_1da6cc;
    }
    ctx->pc = 0x1DA6C4u;
    {
        const bool branch_taken_0x1da6c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA6C4u;
        // 0x1da6c8: 0xae033028  sw          $v1, 0x3028($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12328), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da6c4) {
            ctx->pc = 0x1DA8E4u;
            goto label_1da8e4;
        }
    }
    ctx->pc = 0x1DA6CCu;
label_1da6cc:
    // 0x1da6cc: 0x8e023028  lw          $v0, 0x3028($s0)
    ctx->pc = 0x1da6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12328)));
label_1da6d0:
    // 0x1da6d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1da6d4:
    if (ctx->pc == 0x1DA6D4u) {
        ctx->pc = 0x1DA6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA6D0u;
        // 0x1da6d4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA6D8u;
        goto label_1da6d8;
    }
    ctx->pc = 0x1DA6D0u;
    {
        const bool branch_taken_0x1da6d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DA6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA6D0u;
        // 0x1da6d4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da6d0) {
            ctx->pc = 0x1DA6E0u;
            goto label_1da6e0;
        }
    }
    ctx->pc = 0x1DA6D8u;
label_1da6d8:
    // 0x1da6d8: 0x10000003  b           . + 4 + (0x3 << 2)
label_1da6dc:
    if (ctx->pc == 0x1DA6DCu) {
        ctx->pc = 0x1DA6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA6D8u;
        // 0x1da6dc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA6E0u;
        goto label_1da6e0;
    }
    ctx->pc = 0x1DA6D8u;
    {
        const bool branch_taken_0x1da6d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA6D8u;
        // 0x1da6dc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da6d8) {
            ctx->pc = 0x1DA6E8u;
            goto label_1da6e8;
        }
    }
    ctx->pc = 0x1DA6E0u;
label_1da6e0:
    // 0x1da6e0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1da6e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1da6e4:
    // 0x1da6e4: 0xae023028  sw          $v0, 0x3028($s0)
    ctx->pc = 0x1da6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12328), GPR_U32(ctx, 2));
label_1da6e8:
    // 0x1da6e8: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1da6e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1da6ec:
    // 0x1da6ec: 0x10400083  beqz        $v0, . + 4 + (0x83 << 2)
label_1da6f0:
    if (ctx->pc == 0x1DA6F0u) {
        ctx->pc = 0x1DA6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA6ECu;
        // 0x1da6f0: 0x2403ffef  addiu       $v1, $zero, -0x11 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA6F4u;
        goto label_1da6f4;
    }
    ctx->pc = 0x1DA6ECu;
    {
        const bool branch_taken_0x1da6ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA6ECu;
        // 0x1da6f0: 0x2403ffef  addiu       $v1, $zero, -0x11 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da6ec) {
            ctx->pc = 0x1DA8FCu;
            goto label_1da8fc;
        }
    }
    ctx->pc = 0x1DA6F4u;
label_1da6f4:
    // 0x1da6f4: 0x8e023020  lw          $v0, 0x3020($s0)
    ctx->pc = 0x1da6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12320)));
label_1da6f8:
    // 0x1da6f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1da6f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1da6fc:
    // 0x1da6fc: 0x26053004  addiu       $a1, $s0, 0x3004
    ctx->pc = 0x1da6fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12292));
label_1da700:
    // 0x1da700: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1da700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1da704:
    // 0x1da704: 0xc076f86  jal         func_1DBE18
label_1da708:
    if (ctx->pc == 0x1DA708u) {
        ctx->pc = 0x1DA708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA704u;
        // 0x1da708: 0xae023020  sw          $v0, 0x3020($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12320), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA70Cu;
        goto label_1da70c;
    }
    ctx->pc = 0x1DA704u;
    SET_GPR_U32(ctx, 31, 0x1DA70Cu);
    ctx->pc = 0x1DA708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA704u;
    // 0x1da708: 0xae023020  sw          $v0, 0x3020($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12320), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBE18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBE18u, 0x1DA704u, 0x1DA70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA70Cu;
label_1da70c:
    // 0x1da70c: 0x8e043004  lw          $a0, 0x3004($s0)
    ctx->pc = 0x1da70cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12292)));
label_1da710:
    // 0x1da710: 0xc075bb2  jal         func_1D6EC8
label_1da714:
    if (ctx->pc == 0x1DA714u) {
        ctx->pc = 0x1DA714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA710u;
        // 0x1da714: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA718u;
        goto label_1da718;
    }
    ctx->pc = 0x1DA710u;
    SET_GPR_U32(ctx, 31, 0x1DA718u);
    ctx->pc = 0x1DA714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA710u;
    // 0x1da714: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6EC8u, 0x1DA710u, 0x1DA718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA718u;
label_1da718:
    // 0x1da718: 0x8e033004  lw          $v1, 0x3004($s0)
    ctx->pc = 0x1da718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12292)));
label_1da71c:
    // 0x1da71c: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x1da71cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
label_1da720:
    // 0x1da720: 0x24a58160  addiu       $a1, $a1, -0x7EA0
    ctx->pc = 0x1da720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934880));
label_1da724:
    // 0x1da724: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1da724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1da728:
    // 0x1da728: 0x8c820250  lw          $v0, 0x250($a0)
    ctx->pc = 0x1da728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 592)));
label_1da72c:
    // 0x1da72c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1da72cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_1da730:
    // 0x1da730: 0xac820250  sw          $v0, 0x250($a0)
    ctx->pc = 0x1da730u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 592), GPR_U32(ctx, 2));
label_1da734:
    // 0x1da734: 0x8e033004  lw          $v1, 0x3004($s0)
    ctx->pc = 0x1da734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12292)));
label_1da738:
    // 0x1da738: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1da738u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1da73c:
    // 0x1da73c: 0x8cc20214  lw          $v0, 0x214($a2)
    ctx->pc = 0x1da73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 532)));
label_1da740:
    // 0x1da740: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x1da740u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1da744:
    // 0x1da744: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1da744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1da748:
    // 0x1da748: 0x60f809  jalr        $v1
label_1da74c:
    if (ctx->pc == 0x1DA74Cu) {
        ctx->pc = 0x1DA74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA748u;
        // 0x1da74c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA750u;
        goto label_1da750;
    }
    ctx->pc = 0x1DA748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DA750u);
        ctx->pc = 0x1DA74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA748u;
        // 0x1da74c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA748u, 0x1DA750u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DA750u;
label_1da750:
    // 0x1da750: 0x10000064  b           . + 4 + (0x64 << 2)
label_1da754:
    if (ctx->pc == 0x1DA754u) {
        ctx->pc = 0x1DA754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA750u;
        // 0x1da754: 0x92023025  lbu         $v0, 0x3025($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12325)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA758u;
        goto label_1da758;
    }
    ctx->pc = 0x1DA750u;
    {
        const bool branch_taken_0x1da750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA750u;
        // 0x1da754: 0x92023025  lbu         $v0, 0x3025($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12325)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da750) {
            ctx->pc = 0x1DA8E4u;
            goto label_1da8e4;
        }
    }
    ctx->pc = 0x1DA758u;
label_1da758:
    // 0x1da758: 0x8e033004  lw          $v1, 0x3004($s0)
    ctx->pc = 0x1da758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12292)));
label_1da75c:
    // 0x1da75c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1da75cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_1da760:
    // 0x1da760: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x1da760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
label_1da764:
    // 0x1da764: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1da764u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1da768:
    // 0x1da768: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x1da768u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1da76c:
    // 0x1da76c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1da76cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_1da770:
    // 0x1da770: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1da770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1da774:
    // 0x1da774: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1da774u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1da778:
    // 0x1da778: 0x8ce30250  lw          $v1, 0x250($a3)
    ctx->pc = 0x1da778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 592)));
label_1da77c:
    // 0x1da77c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1da77cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1da780:
    // 0x1da780: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1da780u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1da784:
    // 0x1da784: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1da784u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1da788:
    // 0x1da788: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1da788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1da78c:
    // 0x1da78c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1da78cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1da790:
    // 0x1da790: 0xace30250  sw          $v1, 0x250($a3)
    ctx->pc = 0x1da790u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 592), GPR_U32(ctx, 3));
label_1da794:
    // 0x1da794: 0x8e023004  lw          $v0, 0x3004($s0)
    ctx->pc = 0x1da794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12292)));
label_1da798:
    // 0x1da798: 0xc0b2e92  jal         func_2CBA48
label_1da79c:
    if (ctx->pc == 0x1DA79Cu) {
        ctx->pc = 0x1DA79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA798u;
        // 0x1da79c: 0x8c470000  lw          $a3, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA7A0u;
        goto label_1da7a0;
    }
    ctx->pc = 0x1DA798u;
    SET_GPR_U32(ctx, 31, 0x1DA7A0u);
    ctx->pc = 0x1DA79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA798u;
    // 0x1da79c: 0x8c470000  lw          $a3, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1DA798u, 0x1DA7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA7A0u;
label_1da7a0:
    // 0x1da7a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1da7a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1da7a4:
    // 0x1da7a4: 0xc077afa  jal         func_1DEBE8
label_1da7a8:
    if (ctx->pc == 0x1DA7A8u) {
        ctx->pc = 0x1DA7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA7A4u;
        // 0x1da7a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA7ACu;
        goto label_1da7ac;
    }
    ctx->pc = 0x1DA7A4u;
    SET_GPR_U32(ctx, 31, 0x1DA7ACu);
    ctx->pc = 0x1DA7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA7A4u;
    // 0x1da7a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEBE8u, 0x1DA7A4u, 0x1DA7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA7ACu;
label_1da7ac:
    // 0x1da7ac: 0x92023025  lbu         $v0, 0x3025($s0)
    ctx->pc = 0x1da7acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12325)));
label_1da7b0:
    // 0x1da7b0: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1da7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1da7b4:
    // 0x1da7b4: 0x1000004b  b           . + 4 + (0x4B << 2)
label_1da7b8:
    if (ctx->pc == 0x1DA7B8u) {
        ctx->pc = 0x1DA7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA7B4u;
        // 0x1da7b8: 0xae03302c  sw          $v1, 0x302C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12332), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA7BCu;
        goto label_1da7bc;
    }
    ctx->pc = 0x1DA7B4u;
    {
        const bool branch_taken_0x1da7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA7B4u;
        // 0x1da7b8: 0xae03302c  sw          $v1, 0x302C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12332), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da7b4) {
            ctx->pc = 0x1DA8E4u;
            goto label_1da8e4;
        }
    }
    ctx->pc = 0x1DA7BCu;
label_1da7bc:
    // 0x1da7bc: 0xc602302c  lwc1        $f2, 0x302C($s0)
    ctx->pc = 0x1da7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1da7c0:
    // 0x1da7c0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1da7c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1da7c4:
    // 0x1da7c4: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1da7c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_1da7c8:
    // 0x1da7c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1da7c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1da7cc:
    // 0x1da7cc: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x1da7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
label_1da7d0:
    // 0x1da7d0: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x1da7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
label_1da7d4:
    // 0x1da7d4: 0xc4448160  lwc1        $f4, -0x7EA0($v0)
    ctx->pc = 0x1da7d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294934880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1da7d8:
    // 0x1da7d8: 0x246581c0  addiu       $a1, $v1, -0x7E40
    ctx->pc = 0x1da7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934976));
label_1da7dc:
    // 0x1da7dc: 0x46020081  sub.s       $f2, $f0, $f2
    ctx->pc = 0x1da7dcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_1da7e0:
    // 0x1da7e0: 0xc46181c0  lwc1        $f1, -0x7E40($v1)
    ctx->pc = 0x1da7e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294934976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1da7e4:
    // 0x1da7e4: 0x8e043004  lw          $a0, 0x3004($s0)
    ctx->pc = 0x1da7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12292)));
label_1da7e8:
    // 0x1da7e8: 0x24428160  addiu       $v0, $v0, -0x7EA0
    ctx->pc = 0x1da7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934880));
label_1da7ec:
    // 0x1da7ec: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x1da7ecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
label_1da7f0:
    // 0x1da7f0: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1da7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1da7f4:
    // 0x1da7f4: 0x0  nop
    ctx->pc = 0x1da7f4u;
    // NOP
label_1da7f8:
    // 0x1da7f8: 0x0  nop
    ctx->pc = 0x1da7f8u;
    // NOP
label_1da7fc:
    // 0x1da7fc: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x1da7fcu;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[0]);
label_1da800:
    // 0x1da800: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1da800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1da804:
    // 0x1da804: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x1da804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1da808:
    // 0x1da808: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x1da808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_1da80c:
    // 0x1da80c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1da80cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_1da810:
    // 0x1da810: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1da810u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1da814:
    // 0x1da814: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x1da814u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1da818:
    // 0x1da818: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x1da818u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
label_1da81c:
    // 0x1da81c: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x1da81cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_1da820:
    // 0x1da820: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x1da820u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1da824:
    // 0x1da824: 0x8e023004  lw          $v0, 0x3004($s0)
    ctx->pc = 0x1da824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12292)));
label_1da828:
    // 0x1da828: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1da828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1da82c:
    // 0x1da82c: 0x8c6400f0  lw          $a0, 0xF0($v1)
    ctx->pc = 0x1da82cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
label_1da830:
    // 0x1da830: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x1da830u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_1da834:
    // 0x1da834: 0x8e02302c  lw          $v0, 0x302C($s0)
    ctx->pc = 0x1da834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12332)));
label_1da838:
    // 0x1da838: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1da83c:
    if (ctx->pc == 0x1DA83Cu) {
        ctx->pc = 0x1DA83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA838u;
        // 0x1da83c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA840u;
        goto label_1da840;
    }
    ctx->pc = 0x1DA838u;
    {
        const bool branch_taken_0x1da838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DA83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA838u;
        // 0x1da83c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da838) {
            ctx->pc = 0x1DA850u;
            goto label_1da850;
        }
    }
    ctx->pc = 0x1DA840u;
label_1da840:
    // 0x1da840: 0x92023025  lbu         $v0, 0x3025($s0)
    ctx->pc = 0x1da840u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12325)));
label_1da844:
    // 0x1da844: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1da844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1da848:
    // 0x1da848: 0x10000026  b           . + 4 + (0x26 << 2)
label_1da84c:
    if (ctx->pc == 0x1DA84Cu) {
        ctx->pc = 0x1DA84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA848u;
        // 0x1da84c: 0xae033028  sw          $v1, 0x3028($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12328), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA850u;
        goto label_1da850;
    }
    ctx->pc = 0x1DA848u;
    {
        const bool branch_taken_0x1da848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA848u;
        // 0x1da84c: 0xae033028  sw          $v1, 0x3028($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12328), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da848) {
            ctx->pc = 0x1DA8E4u;
            goto label_1da8e4;
        }
    }
    ctx->pc = 0x1DA850u;
label_1da850:
    // 0x1da850: 0x1000002a  b           . + 4 + (0x2A << 2)
label_1da854:
    if (ctx->pc == 0x1DA854u) {
        ctx->pc = 0x1DA854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA850u;
        // 0x1da854: 0xae02302c  sw          $v0, 0x302C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12332), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA858u;
        goto label_1da858;
    }
    ctx->pc = 0x1DA850u;
    {
        const bool branch_taken_0x1da850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA850u;
        // 0x1da854: 0xae02302c  sw          $v0, 0x302C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12332), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da850) {
            ctx->pc = 0x1DA8FCu;
            goto label_1da8fc;
        }
    }
    ctx->pc = 0x1DA858u;
label_1da858:
    // 0x1da858: 0x8e023028  lw          $v0, 0x3028($s0)
    ctx->pc = 0x1da858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12328)));
label_1da85c:
    // 0x1da85c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1da860:
    if (ctx->pc == 0x1DA860u) {
        ctx->pc = 0x1DA860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA85Cu;
        // 0x1da860: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA864u;
        goto label_1da864;
    }
    ctx->pc = 0x1DA85Cu;
    {
        const bool branch_taken_0x1da85c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DA860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA85Cu;
        // 0x1da860: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da85c) {
            ctx->pc = 0x1DA86Cu;
            goto label_1da86c;
        }
    }
    ctx->pc = 0x1DA864u;
label_1da864:
    // 0x1da864: 0x10000003  b           . + 4 + (0x3 << 2)
label_1da868:
    if (ctx->pc == 0x1DA868u) {
        ctx->pc = 0x1DA868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA864u;
        // 0x1da868: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA86Cu;
        goto label_1da86c;
    }
    ctx->pc = 0x1DA864u;
    {
        const bool branch_taken_0x1da864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA864u;
        // 0x1da868: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da864) {
            ctx->pc = 0x1DA874u;
            goto label_1da874;
        }
    }
    ctx->pc = 0x1DA86Cu;
label_1da86c:
    // 0x1da86c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1da86cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1da870:
    // 0x1da870: 0xae023028  sw          $v0, 0x3028($s0)
    ctx->pc = 0x1da870u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12328), GPR_U32(ctx, 2));
label_1da874:
    // 0x1da874: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1da874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1da878:
    // 0x1da878: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
label_1da87c:
    if (ctx->pc == 0x1DA87Cu) {
        ctx->pc = 0x1DA87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA878u;
        // 0x1da87c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA880u;
        goto label_1da880;
    }
    ctx->pc = 0x1DA878u;
    {
        const bool branch_taken_0x1da878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da878) {
            ctx->pc = 0x1DA87Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DA878u;
            // 0x1da87c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DA900u;
            goto label_1da900;
        }
    }
    ctx->pc = 0x1DA880u;
label_1da880:
    // 0x1da880: 0x8e043004  lw          $a0, 0x3004($s0)
    ctx->pc = 0x1da880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12292)));
label_1da884:
    // 0x1da884: 0xc075b74  jal         func_1D6DD0
label_1da888:
    if (ctx->pc == 0x1DA888u) {
        ctx->pc = 0x1DA888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA884u;
        // 0x1da888: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA88Cu;
        goto label_1da88c;
    }
    ctx->pc = 0x1DA884u;
    SET_GPR_U32(ctx, 31, 0x1DA88Cu);
    ctx->pc = 0x1DA888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA884u;
    // 0x1da888: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6DD0u, 0x1DA884u, 0x1DA88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA88Cu;
label_1da88c:
    // 0x1da88c: 0x8e023004  lw          $v0, 0x3004($s0)
    ctx->pc = 0x1da88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12292)));
label_1da890:
    // 0x1da890: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1da890u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1da894:
    // 0x1da894: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1da894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_1da898:
    // 0x1da898: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1da898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1da89c:
    // 0x1da89c: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1da89cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1da8a0:
    // 0x1da8a0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1da8a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1da8a4:
    // 0x1da8a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1da8a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1da8a8:
    // 0x1da8a8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1da8a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1da8ac:
    // 0x1da8ac: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1da8acu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1da8b0:
    // 0x1da8b0: 0xc0b2e92  jal         func_2CBA48
label_1da8b4:
    if (ctx->pc == 0x1DA8B4u) {
        ctx->pc = 0x1DA8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA8B0u;
        // 0x1da8b4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA8B8u;
        goto label_1da8b8;
    }
    ctx->pc = 0x1DA8B0u;
    SET_GPR_U32(ctx, 31, 0x1DA8B8u);
    ctx->pc = 0x1DA8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA8B0u;
    // 0x1da8b4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1DA8B0u, 0x1DA8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA8B8u;
label_1da8b8:
    // 0x1da8b8: 0x92033025  lbu         $v1, 0x3025($s0)
    ctx->pc = 0x1da8b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12325)));
label_1da8bc:
    // 0x1da8bc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1da8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1da8c0:
    // 0x1da8c0: 0x1000000e  b           . + 4 + (0xE << 2)
label_1da8c4:
    if (ctx->pc == 0x1DA8C4u) {
        ctx->pc = 0x1DA8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA8C0u;
        // 0x1da8c4: 0xa2033025  sb          $v1, 0x3025($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 12325), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA8C8u;
        goto label_1da8c8;
    }
    ctx->pc = 0x1DA8C0u;
    {
        const bool branch_taken_0x1da8c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA8C0u;
        // 0x1da8c4: 0xa2033025  sb          $v1, 0x3025($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 12325), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da8c0) {
            ctx->pc = 0x1DA8FCu;
            goto label_1da8fc;
        }
    }
    ctx->pc = 0x1DA8C8u;
label_1da8c8:
    // 0x1da8c8: 0x8e033004  lw          $v1, 0x3004($s0)
    ctx->pc = 0x1da8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12292)));
label_1da8cc:
    // 0x1da8cc: 0x9c620004  lwu         $v0, 0x4($v1)
    ctx->pc = 0x1da8ccu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1da8d0:
    // 0x1da8d0: 0x210fb  dsra        $v0, $v0, 3
    ctx->pc = 0x1da8d0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 3);
label_1da8d4:
    // 0x1da8d4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1da8d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1da8d8:
    // 0x1da8d8: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_1da8dc:
    if (ctx->pc == 0x1DA8DCu) {
        ctx->pc = 0x1DA8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA8D8u;
        // 0x1da8dc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA8E0u;
        goto label_1da8e0;
    }
    ctx->pc = 0x1DA8D8u;
    {
        const bool branch_taken_0x1da8d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da8d8) {
            ctx->pc = 0x1DA8DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DA8D8u;
            // 0x1da8dc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DA900u;
            goto label_1da900;
        }
    }
    ctx->pc = 0x1DA8E0u;
label_1da8e0:
    // 0x1da8e0: 0x92023025  lbu         $v0, 0x3025($s0)
    ctx->pc = 0x1da8e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12325)));
label_1da8e4:
    // 0x1da8e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1da8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1da8e8:
    // 0x1da8e8: 0x10000004  b           . + 4 + (0x4 << 2)
label_1da8ec:
    if (ctx->pc == 0x1DA8ECu) {
        ctx->pc = 0x1DA8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA8E8u;
        // 0x1da8ec: 0xa2023025  sb          $v0, 0x3025($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 12325), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA8F0u;
        goto label_1da8f0;
    }
    ctx->pc = 0x1DA8E8u;
    {
        const bool branch_taken_0x1da8e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA8E8u;
        // 0x1da8ec: 0xa2023025  sb          $v0, 0x3025($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 12325), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da8e8) {
            ctx->pc = 0x1DA8FCu;
            goto label_1da8fc;
        }
    }
    ctx->pc = 0x1DA8F0u;
label_1da8f0:
    // 0x1da8f0: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1da8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1da8f4:
    // 0x1da8f4: 0xa2003025  sb          $zero, 0x3025($s0)
    ctx->pc = 0x1da8f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12325), (uint8_t)GPR_U32(ctx, 0));
label_1da8f8:
    // 0x1da8f8: 0xa2023024  sb          $v0, 0x3024($s0)
    ctx->pc = 0x1da8f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12324), (uint8_t)GPR_U32(ctx, 2));
label_1da8fc:
    // 0x1da8fc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1da8fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1da900:
    // 0x1da900: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1da900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1da904:
    // 0x1da904: 0x3e00008  jr          $ra
label_1da908:
    if (ctx->pc == 0x1DA908u) {
        ctx->pc = 0x1DA908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA904u;
        // 0x1da908: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA90Cu;
        goto label_1da90c;
    }
    ctx->pc = 0x1DA904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA904u;
        // 0x1da908: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA90Cu;
label_1da90c:
    // 0x1da90c: 0x0  nop
    ctx->pc = 0x1da90cu;
    // NOP
    ctx->pc = 0x1da910u;
}
