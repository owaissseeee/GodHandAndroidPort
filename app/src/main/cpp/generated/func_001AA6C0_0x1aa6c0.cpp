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

// Function: func_001AA6C0
// Address: 0x1aa6c0 - 0x1aa8b8
void func_001AA6C0_0x1aa6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001AA6C0_0x1aa6c0");
#endif

    switch (ctx->pc) {
        case 0x1aa6c0u: goto label_1aa6c0;
        case 0x1aa6c4u: goto label_1aa6c4;
        case 0x1aa6c8u: goto label_1aa6c8;
        case 0x1aa6ccu: goto label_1aa6cc;
        case 0x1aa6d0u: goto label_1aa6d0;
        case 0x1aa6d4u: goto label_1aa6d4;
        case 0x1aa6d8u: goto label_1aa6d8;
        case 0x1aa6dcu: goto label_1aa6dc;
        case 0x1aa6e0u: goto label_1aa6e0;
        case 0x1aa6e4u: goto label_1aa6e4;
        case 0x1aa6e8u: goto label_1aa6e8;
        case 0x1aa6ecu: goto label_1aa6ec;
        case 0x1aa6f0u: goto label_1aa6f0;
        case 0x1aa6f4u: goto label_1aa6f4;
        case 0x1aa6f8u: goto label_1aa6f8;
        case 0x1aa6fcu: goto label_1aa6fc;
        case 0x1aa700u: goto label_1aa700;
        case 0x1aa704u: goto label_1aa704;
        case 0x1aa708u: goto label_1aa708;
        case 0x1aa70cu: goto label_1aa70c;
        case 0x1aa710u: goto label_1aa710;
        case 0x1aa714u: goto label_1aa714;
        case 0x1aa718u: goto label_1aa718;
        case 0x1aa71cu: goto label_1aa71c;
        case 0x1aa720u: goto label_1aa720;
        case 0x1aa724u: goto label_1aa724;
        case 0x1aa728u: goto label_1aa728;
        case 0x1aa72cu: goto label_1aa72c;
        case 0x1aa730u: goto label_1aa730;
        case 0x1aa734u: goto label_1aa734;
        case 0x1aa738u: goto label_1aa738;
        case 0x1aa73cu: goto label_1aa73c;
        case 0x1aa740u: goto label_1aa740;
        case 0x1aa744u: goto label_1aa744;
        case 0x1aa748u: goto label_1aa748;
        case 0x1aa74cu: goto label_1aa74c;
        case 0x1aa750u: goto label_1aa750;
        case 0x1aa754u: goto label_1aa754;
        case 0x1aa758u: goto label_1aa758;
        case 0x1aa75cu: goto label_1aa75c;
        case 0x1aa760u: goto label_1aa760;
        case 0x1aa764u: goto label_1aa764;
        case 0x1aa768u: goto label_1aa768;
        case 0x1aa76cu: goto label_1aa76c;
        case 0x1aa770u: goto label_1aa770;
        case 0x1aa774u: goto label_1aa774;
        case 0x1aa778u: goto label_1aa778;
        case 0x1aa77cu: goto label_1aa77c;
        case 0x1aa780u: goto label_1aa780;
        case 0x1aa784u: goto label_1aa784;
        case 0x1aa788u: goto label_1aa788;
        case 0x1aa78cu: goto label_1aa78c;
        case 0x1aa790u: goto label_1aa790;
        case 0x1aa794u: goto label_1aa794;
        case 0x1aa798u: goto label_1aa798;
        case 0x1aa79cu: goto label_1aa79c;
        case 0x1aa7a0u: goto label_1aa7a0;
        case 0x1aa7a4u: goto label_1aa7a4;
        case 0x1aa7a8u: goto label_1aa7a8;
        case 0x1aa7acu: goto label_1aa7ac;
        case 0x1aa7b0u: goto label_1aa7b0;
        case 0x1aa7b4u: goto label_1aa7b4;
        case 0x1aa7b8u: goto label_1aa7b8;
        case 0x1aa7bcu: goto label_1aa7bc;
        case 0x1aa7c0u: goto label_1aa7c0;
        case 0x1aa7c4u: goto label_1aa7c4;
        case 0x1aa7c8u: goto label_1aa7c8;
        case 0x1aa7ccu: goto label_1aa7cc;
        case 0x1aa7d0u: goto label_1aa7d0;
        case 0x1aa7d4u: goto label_1aa7d4;
        case 0x1aa7d8u: goto label_1aa7d8;
        case 0x1aa7dcu: goto label_1aa7dc;
        case 0x1aa7e0u: goto label_1aa7e0;
        case 0x1aa7e4u: goto label_1aa7e4;
        case 0x1aa7e8u: goto label_1aa7e8;
        case 0x1aa7ecu: goto label_1aa7ec;
        case 0x1aa7f0u: goto label_1aa7f0;
        case 0x1aa7f4u: goto label_1aa7f4;
        case 0x1aa7f8u: goto label_1aa7f8;
        case 0x1aa7fcu: goto label_1aa7fc;
        case 0x1aa800u: goto label_1aa800;
        case 0x1aa804u: goto label_1aa804;
        case 0x1aa808u: goto label_1aa808;
        case 0x1aa80cu: goto label_1aa80c;
        case 0x1aa810u: goto label_1aa810;
        case 0x1aa814u: goto label_1aa814;
        case 0x1aa818u: goto label_1aa818;
        case 0x1aa81cu: goto label_1aa81c;
        case 0x1aa820u: goto label_1aa820;
        case 0x1aa824u: goto label_1aa824;
        case 0x1aa828u: goto label_1aa828;
        case 0x1aa82cu: goto label_1aa82c;
        case 0x1aa830u: goto label_1aa830;
        case 0x1aa834u: goto label_1aa834;
        case 0x1aa838u: goto label_1aa838;
        case 0x1aa83cu: goto label_1aa83c;
        case 0x1aa840u: goto label_1aa840;
        case 0x1aa844u: goto label_1aa844;
        case 0x1aa848u: goto label_1aa848;
        case 0x1aa84cu: goto label_1aa84c;
        case 0x1aa850u: goto label_1aa850;
        case 0x1aa854u: goto label_1aa854;
        case 0x1aa858u: goto label_1aa858;
        case 0x1aa85cu: goto label_1aa85c;
        case 0x1aa860u: goto label_1aa860;
        case 0x1aa864u: goto label_1aa864;
        case 0x1aa868u: goto label_1aa868;
        case 0x1aa86cu: goto label_1aa86c;
        case 0x1aa870u: goto label_1aa870;
        case 0x1aa874u: goto label_1aa874;
        case 0x1aa878u: goto label_1aa878;
        case 0x1aa87cu: goto label_1aa87c;
        case 0x1aa880u: goto label_1aa880;
        case 0x1aa884u: goto label_1aa884;
        case 0x1aa888u: goto label_1aa888;
        case 0x1aa88cu: goto label_1aa88c;
        case 0x1aa890u: goto label_1aa890;
        case 0x1aa894u: goto label_1aa894;
        case 0x1aa898u: goto label_1aa898;
        case 0x1aa89cu: goto label_1aa89c;
        case 0x1aa8a0u: goto label_1aa8a0;
        case 0x1aa8a4u: goto label_1aa8a4;
        case 0x1aa8a8u: goto label_1aa8a8;
        case 0x1aa8acu: goto label_1aa8ac;
        case 0x1aa8b0u: goto label_1aa8b0;
        case 0x1aa8b4u: goto label_1aa8b4;
        default: break;
    }

    ctx->pc = 0x1aa6c0u;

label_1aa6c0:
    // 0x1aa6c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1aa6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1aa6c4:
    // 0x1aa6c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1aa6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aa6c8:
    // 0x1aa6c8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1aa6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1aa6cc:
    // 0x1aa6cc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1aa6ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1aa6d0:
    // 0x1aa6d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1aa6d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1aa6d4:
    // 0x1aa6d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1aa6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1aa6d8:
    // 0x1aa6d8: 0x922302f5  lbu         $v1, 0x2F5($s1)
    ctx->pc = 0x1aa6d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 757)));
label_1aa6dc:
    // 0x1aa6dc: 0x10620059  beq         $v1, $v0, . + 4 + (0x59 << 2)
label_1aa6e0:
    if (ctx->pc == 0x1AA6E0u) {
        ctx->pc = 0x1AA6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA6DCu;
        // 0x1aa6e0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA6E4u;
        goto label_1aa6e4;
    }
    ctx->pc = 0x1AA6DCu;
    {
        const bool branch_taken_0x1aa6dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AA6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA6DCu;
        // 0x1aa6e0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa6dc) {
            ctx->pc = 0x1AA844u;
            goto label_1aa844;
        }
    }
    ctx->pc = 0x1AA6E4u;
label_1aa6e4:
    // 0x1aa6e4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1aa6e8:
    if (ctx->pc == 0x1AA6E8u) {
        ctx->pc = 0x1AA6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA6E4u;
        // 0x1aa6e8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA6ECu;
        goto label_1aa6ec;
    }
    ctx->pc = 0x1AA6E4u;
    {
        const bool branch_taken_0x1aa6e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa6e4) {
            ctx->pc = 0x1AA6E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AA6E4u;
            // 0x1aa6e8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AA6FCu;
            goto label_1aa6fc;
        }
    }
    ctx->pc = 0x1AA6ECu;
label_1aa6ec:
    // 0x1aa6ec: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_1aa6f0:
    if (ctx->pc == 0x1AA6F0u) {
        ctx->pc = 0x1AA6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA6ECu;
        // 0x1aa6f0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA6F4u;
        goto label_1aa6f4;
    }
    ctx->pc = 0x1AA6ECu;
    {
        const bool branch_taken_0x1aa6ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA6ECu;
        // 0x1aa6f0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa6ec) {
            ctx->pc = 0x1AA714u;
            goto label_1aa714;
        }
    }
    ctx->pc = 0x1AA6F4u;
label_1aa6f4:
    // 0x1aa6f4: 0x1000006d  b           . + 4 + (0x6D << 2)
label_1aa6f8:
    if (ctx->pc == 0x1AA6F8u) {
        ctx->pc = 0x1AA6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA6F4u;
        // 0x1aa6f8: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA6FCu;
        goto label_1aa6fc;
    }
    ctx->pc = 0x1AA6F4u;
    {
        const bool branch_taken_0x1aa6f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA6F4u;
        // 0x1aa6f8: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa6f4) {
            ctx->pc = 0x1AA8ACu;
            goto label_1aa8ac;
        }
    }
    ctx->pc = 0x1AA6FCu;
label_1aa6fc:
    // 0x1aa6fc: 0x1062005c  beq         $v1, $v0, . + 4 + (0x5C << 2)
label_1aa700:
    if (ctx->pc == 0x1AA700u) {
        ctx->pc = 0x1AA700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA6FCu;
        // 0x1aa700: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA704u;
        goto label_1aa704;
    }
    ctx->pc = 0x1AA6FCu;
    {
        const bool branch_taken_0x1aa6fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AA700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA6FCu;
        // 0x1aa700: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa6fc) {
            ctx->pc = 0x1AA870u;
            goto label_1aa870;
        }
    }
    ctx->pc = 0x1AA704u;
label_1aa704:
    // 0x1aa704: 0x10620063  beq         $v1, $v0, . + 4 + (0x63 << 2)
label_1aa708:
    if (ctx->pc == 0x1AA708u) {
        ctx->pc = 0x1AA708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA704u;
        // 0x1aa708: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA70Cu;
        goto label_1aa70c;
    }
    ctx->pc = 0x1AA704u;
    {
        const bool branch_taken_0x1aa704 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AA708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA704u;
        // 0x1aa708: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa704) {
            ctx->pc = 0x1AA894u;
            goto label_1aa894;
        }
    }
    ctx->pc = 0x1AA70Cu;
label_1aa70c:
    // 0x1aa70c: 0x10000067  b           . + 4 + (0x67 << 2)
label_1aa710:
    if (ctx->pc == 0x1AA710u) {
        ctx->pc = 0x1AA710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA70Cu;
        // 0x1aa710: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA714u;
        goto label_1aa714;
    }
    ctx->pc = 0x1AA70Cu;
    {
        const bool branch_taken_0x1aa70c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA70Cu;
        // 0x1aa710: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa70c) {
            ctx->pc = 0x1AA8ACu;
            goto label_1aa8ac;
        }
    }
    ctx->pc = 0x1AA714u;
label_1aa714:
    // 0x1aa714: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1aa714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1aa718:
    // 0x1aa718: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1aa718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1aa71c:
    // 0x1aa71c: 0xc0c1880  jal         func_306200
label_1aa720:
    if (ctx->pc == 0x1AA720u) {
        ctx->pc = 0x1AA720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA71Cu;
        // 0x1aa720: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA724u;
        goto label_1aa724;
    }
    ctx->pc = 0x1AA71Cu;
    SET_GPR_U32(ctx, 31, 0x1AA724u);
    ctx->pc = 0x1AA720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA71Cu;
    // 0x1aa720: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306200u, 0x1AA71Cu, 0x1AA724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA724u;
label_1aa724:
    // 0x1aa724: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1aa724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1aa728:
    // 0x1aa728: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1aa728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1aa72c:
    // 0x1aa72c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1aa72cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1aa730:
    // 0x1aa730: 0xc0c18ee  jal         func_3063B8
label_1aa734:
    if (ctx->pc == 0x1AA734u) {
        ctx->pc = 0x1AA734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA730u;
        // 0x1aa734: 0x2407001e  addiu       $a3, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA738u;
        goto label_1aa738;
    }
    ctx->pc = 0x1AA730u;
    SET_GPR_U32(ctx, 31, 0x1AA738u);
    ctx->pc = 0x1AA734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA730u;
    // 0x1aa734: 0x2407001e  addiu       $a3, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3063B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3063B8u, 0x1AA730u, 0x1AA738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA738u;
label_1aa738:
    // 0x1aa738: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x1aa738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_1aa73c:
    // 0x1aa73c: 0x8e230214  lw          $v1, 0x214($s1)
    ctx->pc = 0x1aa73cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_1aa740:
    // 0x1aa740: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x1aa740u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_1aa744:
    // 0x1aa744: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x1aa744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_1aa748:
    // 0x1aa748: 0x40f809  jalr        $v0
label_1aa74c:
    if (ctx->pc == 0x1AA74Cu) {
        ctx->pc = 0x1AA74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA748u;
        // 0x1aa74c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA750u;
        goto label_1aa750;
    }
    ctx->pc = 0x1AA748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AA750u);
        ctx->pc = 0x1AA74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA748u;
        // 0x1aa74c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA748u, 0x1AA750u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AA750u;
label_1aa750:
    // 0x1aa750: 0x13a20007  beq         $sp, $v0, . + 4 + (0x7 << 2)
label_1aa754:
    if (ctx->pc == 0x1AA754u) {
        ctx->pc = 0x1AA758u;
        goto label_1aa758;
    }
    ctx->pc = 0x1AA750u;
    {
        const bool branch_taken_0x1aa750 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        if (branch_taken_0x1aa750) {
            ctx->pc = 0x1AA770u;
            goto label_1aa770;
        }
    }
    ctx->pc = 0x1AA758u;
label_1aa758:
    // 0x1aa758: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1aa758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1aa75c:
    // 0x1aa75c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1aa75cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1aa760:
    // 0x1aa760: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1aa760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1aa764:
    // 0x1aa764: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1aa764u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1aa768:
    // 0x1aa768: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1aa768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1aa76c:
    // 0x1aa76c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1aa76cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1aa770:
    // 0x1aa770: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1aa770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1aa774:
    // 0x1aa774: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1aa774u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1aa778:
    // 0x1aa778: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1aa778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aa77c:
    // 0x1aa77c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1aa77cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1aa780:
    // 0x1aa780: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1aa780u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aa784:
    // 0x1aa784: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1aa784u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1aa788:
    // 0x1aa788: 0xc0c1a0e  jal         func_306838
label_1aa78c:
    if (ctx->pc == 0x1AA78Cu) {
        ctx->pc = 0x1AA78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA788u;
        // 0x1aa78c: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA790u;
        goto label_1aa790;
    }
    ctx->pc = 0x1AA788u;
    SET_GPR_U32(ctx, 31, 0x1AA790u);
    ctx->pc = 0x1AA78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA788u;
    // 0x1aa78c: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x1AA788u, 0x1AA790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA790u;
label_1aa790:
    // 0x1aa790: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x1aa790u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_1aa794:
    // 0x1aa794: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1aa794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1aa798:
    // 0x1aa798: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1aa798u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1aa79c:
    // 0x1aa79c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1aa7a0:
    if (ctx->pc == 0x1AA7A0u) {
        ctx->pc = 0x1AA7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA79Cu;
        // 0x1aa7a0: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA7A4u;
        goto label_1aa7a4;
    }
    ctx->pc = 0x1AA79Cu;
    {
        const bool branch_taken_0x1aa79c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA79Cu;
        // 0x1aa7a0: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa79c) {
            ctx->pc = 0x1AA7B0u;
            goto label_1aa7b0;
        }
    }
    ctx->pc = 0x1AA7A4u;
label_1aa7a4:
    // 0x1aa7a4: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x1aa7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
label_1aa7a8:
    // 0x1aa7a8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1aa7ac:
    if (ctx->pc == 0x1AA7ACu) {
        ctx->pc = 0x1AA7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA7A8u;
        // 0x1aa7ac: 0x8c490014  lw          $t1, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA7B0u;
        goto label_1aa7b0;
    }
    ctx->pc = 0x1AA7A8u;
    {
        const bool branch_taken_0x1aa7a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA7A8u;
        // 0x1aa7ac: 0x8c490014  lw          $t1, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa7a8) {
            ctx->pc = 0x1AA7B4u;
            goto label_1aa7b4;
        }
    }
    ctx->pc = 0x1AA7B0u;
label_1aa7b0:
    // 0x1aa7b0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1aa7b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aa7b4:
    // 0x1aa7b4: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x1aa7b4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
label_1aa7b8:
    // 0x1aa7b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aa7b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aa7bc:
    // 0x1aa7bc: 0x2604ee00  addiu       $a0, $s0, -0x1200
    ctx->pc = 0x1aa7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
label_1aa7c0:
    // 0x1aa7c0: 0x2406005b  addiu       $a2, $zero, 0x5B
    ctx->pc = 0x1aa7c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
label_1aa7c4:
    // 0x1aa7c4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1aa7c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1aa7c8:
    // 0x1aa7c8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1aa7c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aa7cc:
    // 0x1aa7cc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1aa7ccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aa7d0:
    // 0x1aa7d0: 0xc0b2e92  jal         func_2CBA48
label_1aa7d4:
    if (ctx->pc == 0x1AA7D4u) {
        ctx->pc = 0x1AA7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA7D0u;
        // 0x1aa7d4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA7D8u;
        goto label_1aa7d8;
    }
    ctx->pc = 0x1AA7D0u;
    SET_GPR_U32(ctx, 31, 0x1AA7D8u);
    ctx->pc = 0x1AA7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA7D0u;
    // 0x1aa7d4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1AA7D0u, 0x1AA7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA7D8u;
label_1aa7d8:
    // 0x1aa7d8: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x1aa7d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_1aa7dc:
    // 0x1aa7dc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1aa7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1aa7e0:
    // 0x1aa7e0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1aa7e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1aa7e4:
    // 0x1aa7e4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1aa7e8:
    if (ctx->pc == 0x1AA7E8u) {
        ctx->pc = 0x1AA7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA7E4u;
        // 0x1aa7e8: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA7ECu;
        goto label_1aa7ec;
    }
    ctx->pc = 0x1AA7E4u;
    {
        const bool branch_taken_0x1aa7e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA7E4u;
        // 0x1aa7e8: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa7e4) {
            ctx->pc = 0x1AA7F8u;
            goto label_1aa7f8;
        }
    }
    ctx->pc = 0x1AA7ECu;
label_1aa7ec:
    // 0x1aa7ec: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x1aa7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
label_1aa7f0:
    // 0x1aa7f0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1aa7f4:
    if (ctx->pc == 0x1AA7F4u) {
        ctx->pc = 0x1AA7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA7F0u;
        // 0x1aa7f4: 0x8c490014  lw          $t1, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA7F8u;
        goto label_1aa7f8;
    }
    ctx->pc = 0x1AA7F0u;
    {
        const bool branch_taken_0x1aa7f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA7F0u;
        // 0x1aa7f4: 0x8c490014  lw          $t1, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa7f0) {
            ctx->pc = 0x1AA7FCu;
            goto label_1aa7fc;
        }
    }
    ctx->pc = 0x1AA7F8u;
label_1aa7f8:
    // 0x1aa7f8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1aa7f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aa7fc:
    // 0x1aa7fc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1aa7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1aa800:
    // 0x1aa800: 0x24060087  addiu       $a2, $zero, 0x87
    ctx->pc = 0x1aa800u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 135));
label_1aa804:
    // 0x1aa804: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1aa804u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1aa808:
    // 0x1aa808: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1aa808u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aa80c:
    // 0x1aa80c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1aa80cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aa810:
    // 0x1aa810: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1aa810u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aa814:
    // 0x1aa814: 0xc0b2e92  jal         func_2CBA48
label_1aa818:
    if (ctx->pc == 0x1AA818u) {
        ctx->pc = 0x1AA818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA814u;
        // 0x1aa818: 0x2604ee00  addiu       $a0, $s0, -0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA81Cu;
        goto label_1aa81c;
    }
    ctx->pc = 0x1AA814u;
    SET_GPR_U32(ctx, 31, 0x1AA81Cu);
    ctx->pc = 0x1AA818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA814u;
    // 0x1aa818: 0x2604ee00  addiu       $a0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1AA814u, 0x1AA81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA81Cu;
label_1aa81c:
    // 0x1aa81c: 0xc06aac4  jal         func_1AAB10
label_1aa820:
    if (ctx->pc == 0x1AA820u) {
        ctx->pc = 0x1AA820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA81Cu;
        // 0x1aa820: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA824u;
        goto label_1aa824;
    }
    ctx->pc = 0x1AA81Cu;
    SET_GPR_U32(ctx, 31, 0x1AA824u);
    ctx->pc = 0x1AA820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA81Cu;
    // 0x1aa820: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AAB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AAB10u, 0x1AA81Cu, 0x1AA824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA824u;
label_1aa824:
    // 0x1aa824: 0xc06de42  jal         func_1B7908
label_1aa828:
    if (ctx->pc == 0x1AA828u) {
        ctx->pc = 0x1AA828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA824u;
        // 0x1aa828: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA82Cu;
        goto label_1aa82c;
    }
    ctx->pc = 0x1AA824u;
    SET_GPR_U32(ctx, 31, 0x1AA82Cu);
    ctx->pc = 0x1AA828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA824u;
    // 0x1aa828: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7908u, 0x1AA824u, 0x1AA82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA82Cu;
label_1aa82c:
    // 0x1aa82c: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1aa82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1aa830:
    // 0x1aa830: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1aa830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aa834:
    // 0x1aa834: 0xa6220600  sh          $v0, 0x600($s1)
    ctx->pc = 0x1aa834u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1536), (uint16_t)GPR_U32(ctx, 2));
label_1aa838:
    // 0x1aa838: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x1aa838u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
label_1aa83c:
    // 0x1aa83c: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x1aa83cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_1aa840:
    // 0x1aa840: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x1aa840u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_1aa844:
    // 0x1aa844: 0x96220600  lhu         $v0, 0x600($s1)
    ctx->pc = 0x1aa844u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1536)));
label_1aa848:
    // 0x1aa848: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1aa848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1aa84c:
    // 0x1aa84c: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1aa84cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1aa850:
    // 0x1aa850: 0x1c600014  bgtz        $v1, . + 4 + (0x14 << 2)
label_1aa854:
    if (ctx->pc == 0x1AA854u) {
        ctx->pc = 0x1AA854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA850u;
        // 0x1aa854: 0xa6220600  sh          $v0, 0x600($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1536), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA858u;
        goto label_1aa858;
    }
    ctx->pc = 0x1AA850u;
    {
        const bool branch_taken_0x1aa850 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x1AA854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA850u;
        // 0x1aa854: 0xa6220600  sh          $v0, 0x600($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1536), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa850) {
            ctx->pc = 0x1AA8A4u;
            goto label_1aa8a4;
        }
    }
    ctx->pc = 0x1AA858u;
label_1aa858:
    // 0x1aa858: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1aa858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1aa85c:
    // 0x1aa85c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1aa85cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1aa860:
    // 0x1aa860: 0xa6220600  sh          $v0, 0x600($s1)
    ctx->pc = 0x1aa860u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1536), (uint16_t)GPR_U32(ctx, 2));
label_1aa864:
    // 0x1aa864: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x1aa864u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
label_1aa868:
    // 0x1aa868: 0x1000000d  b           . + 4 + (0xD << 2)
label_1aa86c:
    if (ctx->pc == 0x1AA86Cu) {
        ctx->pc = 0x1AA86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA868u;
        // 0x1aa86c: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA870u;
        goto label_1aa870;
    }
    ctx->pc = 0x1AA868u;
    {
        const bool branch_taken_0x1aa868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA868u;
        // 0x1aa86c: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa868) {
            ctx->pc = 0x1AA8A0u;
            goto label_1aa8a0;
        }
    }
    ctx->pc = 0x1AA870u;
label_1aa870:
    // 0x1aa870: 0x96220600  lhu         $v0, 0x600($s1)
    ctx->pc = 0x1aa870u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1536)));
label_1aa874:
    // 0x1aa874: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1aa874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1aa878:
    // 0x1aa878: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1aa878u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1aa87c:
    // 0x1aa87c: 0x1c600009  bgtz        $v1, . + 4 + (0x9 << 2)
label_1aa880:
    if (ctx->pc == 0x1AA880u) {
        ctx->pc = 0x1AA880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA87Cu;
        // 0x1aa880: 0xa6220600  sh          $v0, 0x600($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1536), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA884u;
        goto label_1aa884;
    }
    ctx->pc = 0x1AA87Cu;
    {
        const bool branch_taken_0x1aa87c = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x1AA880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA87Cu;
        // 0x1aa880: 0xa6220600  sh          $v0, 0x600($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1536), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa87c) {
            ctx->pc = 0x1AA8A4u;
            goto label_1aa8a4;
        }
    }
    ctx->pc = 0x1AA884u;
label_1aa884:
    // 0x1aa884: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1aa884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1aa888:
    // 0x1aa888: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x1aa888u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_1aa88c:
    // 0x1aa88c: 0x10000004  b           . + 4 + (0x4 << 2)
label_1aa890:
    if (ctx->pc == 0x1AA890u) {
        ctx->pc = 0x1AA890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA88Cu;
        // 0x1aa890: 0xa22202f5  sb          $v0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA894u;
        goto label_1aa894;
    }
    ctx->pc = 0x1AA88Cu;
    {
        const bool branch_taken_0x1aa88c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA88Cu;
        // 0x1aa890: 0xa22202f5  sb          $v0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa88c) {
            ctx->pc = 0x1AA8A0u;
            goto label_1aa8a0;
        }
    }
    ctx->pc = 0x1AA894u;
label_1aa894:
    // 0x1aa894: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x1aa894u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_1aa898:
    // 0x1aa898: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x1aa898u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
label_1aa89c:
    // 0x1aa89c: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x1aa89cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
label_1aa8a0:
    // 0x1aa8a0: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x1aa8a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_1aa8a4:
    // 0x1aa8a4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1aa8a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1aa8a8:
    // 0x1aa8a8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1aa8a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1aa8ac:
    // 0x1aa8ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1aa8acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1aa8b0:
    // 0x1aa8b0: 0x3e00008  jr          $ra
label_1aa8b4:
    if (ctx->pc == 0x1AA8B4u) {
        ctx->pc = 0x1AA8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA8B0u;
        // 0x1aa8b4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA8B8u;
        goto label_fallthrough_0x1aa8b0;
    }
    ctx->pc = 0x1AA8B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA8B0u;
        // 0x1aa8b4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA8B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1aa8b0:
    ctx->pc = 0x1AA8B8u;
}
