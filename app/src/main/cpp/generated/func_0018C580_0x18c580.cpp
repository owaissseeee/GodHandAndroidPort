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

// Function: func_0018C580
// Address: 0x18c580 - 0x18c8a8
void func_0018C580_0x18c580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0018C580_0x18c580");
#endif

    switch (ctx->pc) {
        case 0x18c580u: goto label_18c580;
        case 0x18c584u: goto label_18c584;
        case 0x18c588u: goto label_18c588;
        case 0x18c58cu: goto label_18c58c;
        case 0x18c590u: goto label_18c590;
        case 0x18c594u: goto label_18c594;
        case 0x18c598u: goto label_18c598;
        case 0x18c59cu: goto label_18c59c;
        case 0x18c5a0u: goto label_18c5a0;
        case 0x18c5a4u: goto label_18c5a4;
        case 0x18c5a8u: goto label_18c5a8;
        case 0x18c5acu: goto label_18c5ac;
        case 0x18c5b0u: goto label_18c5b0;
        case 0x18c5b4u: goto label_18c5b4;
        case 0x18c5b8u: goto label_18c5b8;
        case 0x18c5bcu: goto label_18c5bc;
        case 0x18c5c0u: goto label_18c5c0;
        case 0x18c5c4u: goto label_18c5c4;
        case 0x18c5c8u: goto label_18c5c8;
        case 0x18c5ccu: goto label_18c5cc;
        case 0x18c5d0u: goto label_18c5d0;
        case 0x18c5d4u: goto label_18c5d4;
        case 0x18c5d8u: goto label_18c5d8;
        case 0x18c5dcu: goto label_18c5dc;
        case 0x18c5e0u: goto label_18c5e0;
        case 0x18c5e4u: goto label_18c5e4;
        case 0x18c5e8u: goto label_18c5e8;
        case 0x18c5ecu: goto label_18c5ec;
        case 0x18c5f0u: goto label_18c5f0;
        case 0x18c5f4u: goto label_18c5f4;
        case 0x18c5f8u: goto label_18c5f8;
        case 0x18c5fcu: goto label_18c5fc;
        case 0x18c600u: goto label_18c600;
        case 0x18c604u: goto label_18c604;
        case 0x18c608u: goto label_18c608;
        case 0x18c60cu: goto label_18c60c;
        case 0x18c610u: goto label_18c610;
        case 0x18c614u: goto label_18c614;
        case 0x18c618u: goto label_18c618;
        case 0x18c61cu: goto label_18c61c;
        case 0x18c620u: goto label_18c620;
        case 0x18c624u: goto label_18c624;
        case 0x18c628u: goto label_18c628;
        case 0x18c62cu: goto label_18c62c;
        case 0x18c630u: goto label_18c630;
        case 0x18c634u: goto label_18c634;
        case 0x18c638u: goto label_18c638;
        case 0x18c63cu: goto label_18c63c;
        case 0x18c640u: goto label_18c640;
        case 0x18c644u: goto label_18c644;
        case 0x18c648u: goto label_18c648;
        case 0x18c64cu: goto label_18c64c;
        case 0x18c650u: goto label_18c650;
        case 0x18c654u: goto label_18c654;
        case 0x18c658u: goto label_18c658;
        case 0x18c65cu: goto label_18c65c;
        case 0x18c660u: goto label_18c660;
        case 0x18c664u: goto label_18c664;
        case 0x18c668u: goto label_18c668;
        case 0x18c66cu: goto label_18c66c;
        case 0x18c670u: goto label_18c670;
        case 0x18c674u: goto label_18c674;
        case 0x18c678u: goto label_18c678;
        case 0x18c67cu: goto label_18c67c;
        case 0x18c680u: goto label_18c680;
        case 0x18c684u: goto label_18c684;
        case 0x18c688u: goto label_18c688;
        case 0x18c68cu: goto label_18c68c;
        case 0x18c690u: goto label_18c690;
        case 0x18c694u: goto label_18c694;
        case 0x18c698u: goto label_18c698;
        case 0x18c69cu: goto label_18c69c;
        case 0x18c6a0u: goto label_18c6a0;
        case 0x18c6a4u: goto label_18c6a4;
        case 0x18c6a8u: goto label_18c6a8;
        case 0x18c6acu: goto label_18c6ac;
        case 0x18c6b0u: goto label_18c6b0;
        case 0x18c6b4u: goto label_18c6b4;
        case 0x18c6b8u: goto label_18c6b8;
        case 0x18c6bcu: goto label_18c6bc;
        case 0x18c6c0u: goto label_18c6c0;
        case 0x18c6c4u: goto label_18c6c4;
        case 0x18c6c8u: goto label_18c6c8;
        case 0x18c6ccu: goto label_18c6cc;
        case 0x18c6d0u: goto label_18c6d0;
        case 0x18c6d4u: goto label_18c6d4;
        case 0x18c6d8u: goto label_18c6d8;
        case 0x18c6dcu: goto label_18c6dc;
        case 0x18c6e0u: goto label_18c6e0;
        case 0x18c6e4u: goto label_18c6e4;
        case 0x18c6e8u: goto label_18c6e8;
        case 0x18c6ecu: goto label_18c6ec;
        case 0x18c6f0u: goto label_18c6f0;
        case 0x18c6f4u: goto label_18c6f4;
        case 0x18c6f8u: goto label_18c6f8;
        case 0x18c6fcu: goto label_18c6fc;
        case 0x18c700u: goto label_18c700;
        case 0x18c704u: goto label_18c704;
        case 0x18c708u: goto label_18c708;
        case 0x18c70cu: goto label_18c70c;
        case 0x18c710u: goto label_18c710;
        case 0x18c714u: goto label_18c714;
        case 0x18c718u: goto label_18c718;
        case 0x18c71cu: goto label_18c71c;
        case 0x18c720u: goto label_18c720;
        case 0x18c724u: goto label_18c724;
        case 0x18c728u: goto label_18c728;
        case 0x18c72cu: goto label_18c72c;
        case 0x18c730u: goto label_18c730;
        case 0x18c734u: goto label_18c734;
        case 0x18c738u: goto label_18c738;
        case 0x18c73cu: goto label_18c73c;
        case 0x18c740u: goto label_18c740;
        case 0x18c744u: goto label_18c744;
        case 0x18c748u: goto label_18c748;
        case 0x18c74cu: goto label_18c74c;
        case 0x18c750u: goto label_18c750;
        case 0x18c754u: goto label_18c754;
        case 0x18c758u: goto label_18c758;
        case 0x18c75cu: goto label_18c75c;
        case 0x18c760u: goto label_18c760;
        case 0x18c764u: goto label_18c764;
        case 0x18c768u: goto label_18c768;
        case 0x18c76cu: goto label_18c76c;
        case 0x18c770u: goto label_18c770;
        case 0x18c774u: goto label_18c774;
        case 0x18c778u: goto label_18c778;
        case 0x18c77cu: goto label_18c77c;
        case 0x18c780u: goto label_18c780;
        case 0x18c784u: goto label_18c784;
        case 0x18c788u: goto label_18c788;
        case 0x18c78cu: goto label_18c78c;
        case 0x18c790u: goto label_18c790;
        case 0x18c794u: goto label_18c794;
        case 0x18c798u: goto label_18c798;
        case 0x18c79cu: goto label_18c79c;
        case 0x18c7a0u: goto label_18c7a0;
        case 0x18c7a4u: goto label_18c7a4;
        case 0x18c7a8u: goto label_18c7a8;
        case 0x18c7acu: goto label_18c7ac;
        case 0x18c7b0u: goto label_18c7b0;
        case 0x18c7b4u: goto label_18c7b4;
        case 0x18c7b8u: goto label_18c7b8;
        case 0x18c7bcu: goto label_18c7bc;
        case 0x18c7c0u: goto label_18c7c0;
        case 0x18c7c4u: goto label_18c7c4;
        case 0x18c7c8u: goto label_18c7c8;
        case 0x18c7ccu: goto label_18c7cc;
        case 0x18c7d0u: goto label_18c7d0;
        case 0x18c7d4u: goto label_18c7d4;
        case 0x18c7d8u: goto label_18c7d8;
        case 0x18c7dcu: goto label_18c7dc;
        case 0x18c7e0u: goto label_18c7e0;
        case 0x18c7e4u: goto label_18c7e4;
        case 0x18c7e8u: goto label_18c7e8;
        case 0x18c7ecu: goto label_18c7ec;
        case 0x18c7f0u: goto label_18c7f0;
        case 0x18c7f4u: goto label_18c7f4;
        case 0x18c7f8u: goto label_18c7f8;
        case 0x18c7fcu: goto label_18c7fc;
        case 0x18c800u: goto label_18c800;
        case 0x18c804u: goto label_18c804;
        case 0x18c808u: goto label_18c808;
        case 0x18c80cu: goto label_18c80c;
        case 0x18c810u: goto label_18c810;
        case 0x18c814u: goto label_18c814;
        case 0x18c818u: goto label_18c818;
        case 0x18c81cu: goto label_18c81c;
        case 0x18c820u: goto label_18c820;
        case 0x18c824u: goto label_18c824;
        case 0x18c828u: goto label_18c828;
        case 0x18c82cu: goto label_18c82c;
        case 0x18c830u: goto label_18c830;
        case 0x18c834u: goto label_18c834;
        case 0x18c838u: goto label_18c838;
        case 0x18c83cu: goto label_18c83c;
        case 0x18c840u: goto label_18c840;
        case 0x18c844u: goto label_18c844;
        case 0x18c848u: goto label_18c848;
        case 0x18c84cu: goto label_18c84c;
        case 0x18c850u: goto label_18c850;
        case 0x18c854u: goto label_18c854;
        case 0x18c858u: goto label_18c858;
        case 0x18c85cu: goto label_18c85c;
        case 0x18c860u: goto label_18c860;
        case 0x18c864u: goto label_18c864;
        case 0x18c868u: goto label_18c868;
        case 0x18c86cu: goto label_18c86c;
        case 0x18c870u: goto label_18c870;
        case 0x18c874u: goto label_18c874;
        case 0x18c878u: goto label_18c878;
        case 0x18c87cu: goto label_18c87c;
        case 0x18c880u: goto label_18c880;
        case 0x18c884u: goto label_18c884;
        case 0x18c888u: goto label_18c888;
        case 0x18c88cu: goto label_18c88c;
        case 0x18c890u: goto label_18c890;
        case 0x18c894u: goto label_18c894;
        case 0x18c898u: goto label_18c898;
        case 0x18c89cu: goto label_18c89c;
        case 0x18c8a0u: goto label_18c8a0;
        case 0x18c8a4u: goto label_18c8a4;
        default: break;
    }

    ctx->pc = 0x18c580u;

label_18c580:
    // 0x18c580: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x18c580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_18c584:
    // 0x18c584: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x18c584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
label_18c588:
    // 0x18c588: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x18c588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
label_18c58c:
    // 0x18c58c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x18c58cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18c590:
    // 0x18c590: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x18c590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
label_18c594:
    // 0x18c594: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18c594u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18c598:
    // 0x18c598: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x18c598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
label_18c59c:
    // 0x18c59c: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x18c59cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
label_18c5a0:
    // 0x18c5a0: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x18c5a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
label_18c5a4:
    // 0x18c5a4: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x18c5a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
label_18c5a8:
    // 0x18c5a8: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x18c5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_18c5ac:
    // 0x18c5ac: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x18c5acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_18c5b0:
    // 0x18c5b0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x18c5b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_18c5b4:
    // 0x18c5b4: 0xe7b50118  swc1        $f21, 0x118($sp)
    ctx->pc = 0x18c5b4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_18c5b8:
    // 0x18c5b8: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x18c5b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_18c5bc:
    // 0x18c5bc: 0x922302f5  lbu         $v1, 0x2F5($s1)
    ctx->pc = 0x18c5bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 757)));
label_18c5c0:
    // 0x18c5c0: 0x10700036  beq         $v1, $s0, . + 4 + (0x36 << 2)
label_18c5c4:
    if (ctx->pc == 0x18C5C4u) {
        ctx->pc = 0x18C5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C5C0u;
        // 0x18c5c4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C5C8u;
        goto label_18c5c8;
    }
    ctx->pc = 0x18C5C0u;
    {
        const bool branch_taken_0x18c5c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x18C5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C5C0u;
        // 0x18c5c4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c5c0) {
            ctx->pc = 0x18C69Cu;
            goto label_18c69c;
        }
    }
    ctx->pc = 0x18C5C8u;
label_18c5c8:
    // 0x18c5c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_18c5cc:
    if (ctx->pc == 0x18C5CCu) {
        ctx->pc = 0x18C5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C5C8u;
        // 0x18c5cc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C5D0u;
        goto label_18c5d0;
    }
    ctx->pc = 0x18C5C8u;
    {
        const bool branch_taken_0x18c5c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C5C8u;
        // 0x18c5cc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c5c8) {
            ctx->pc = 0x18C5E0u;
            goto label_18c5e0;
        }
    }
    ctx->pc = 0x18C5D0u;
label_18c5d0:
    // 0x18c5d0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_18c5d4:
    if (ctx->pc == 0x18C5D4u) {
        ctx->pc = 0x18C5D8u;
        goto label_18c5d8;
    }
    ctx->pc = 0x18C5D0u;
    {
        const bool branch_taken_0x18c5d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c5d0) {
            ctx->pc = 0x18C5F8u;
            goto label_18c5f8;
        }
    }
    ctx->pc = 0x18C5D8u;
label_18c5d8:
    // 0x18c5d8: 0x1000004f  b           . + 4 + (0x4F << 2)
label_18c5dc:
    if (ctx->pc == 0x18C5DCu) {
        ctx->pc = 0x18C5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C5D8u;
        // 0x18c5dc: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C5E0u;
        goto label_18c5e0;
    }
    ctx->pc = 0x18C5D8u;
    {
        const bool branch_taken_0x18c5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C5D8u;
        // 0x18c5dc: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c5d8) {
            ctx->pc = 0x18C718u;
            goto label_18c718;
        }
    }
    ctx->pc = 0x18C5E0u;
label_18c5e0:
    // 0x18c5e0: 0x10620038  beq         $v1, $v0, . + 4 + (0x38 << 2)
label_18c5e4:
    if (ctx->pc == 0x18C5E4u) {
        ctx->pc = 0x18C5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C5E0u;
        // 0x18c5e4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C5E8u;
        goto label_18c5e8;
    }
    ctx->pc = 0x18C5E0u;
    {
        const bool branch_taken_0x18c5e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18C5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C5E0u;
        // 0x18c5e4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c5e0) {
            ctx->pc = 0x18C6C4u;
            goto label_18c6c4;
        }
    }
    ctx->pc = 0x18C5E8u;
label_18c5e8:
    // 0x18c5e8: 0x50620047  beql        $v1, $v0, . + 4 + (0x47 << 2)
label_18c5ec:
    if (ctx->pc == 0x18C5ECu) {
        ctx->pc = 0x18C5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C5E8u;
        // 0x18c5ec: 0xa22302f4  sb          $v1, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C5F0u;
        goto label_18c5f0;
    }
    ctx->pc = 0x18C5E8u;
    {
        const bool branch_taken_0x18c5e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18c5e8) {
            ctx->pc = 0x18C5ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18C5E8u;
            // 0x18c5ec: 0xa22302f4  sb          $v1, 0x2F4($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18C708u;
            goto label_18c708;
        }
    }
    ctx->pc = 0x18C5F0u;
label_18c5f0:
    // 0x18c5f0: 0x10000049  b           . + 4 + (0x49 << 2)
label_18c5f4:
    if (ctx->pc == 0x18C5F4u) {
        ctx->pc = 0x18C5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C5F0u;
        // 0x18c5f4: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C5F8u;
        goto label_18c5f8;
    }
    ctx->pc = 0x18C5F0u;
    {
        const bool branch_taken_0x18c5f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C5F0u;
        // 0x18c5f4: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c5f0) {
            ctx->pc = 0x18C718u;
            goto label_18c718;
        }
    }
    ctx->pc = 0x18C5F8u;
label_18c5f8:
    // 0x18c5f8: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x18c5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_18c5fc:
    // 0x18c5fc: 0x8e230214  lw          $v1, 0x214($s1)
    ctx->pc = 0x18c5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_18c600:
    // 0x18c600: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x18c600u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_18c604:
    // 0x18c604: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x18c604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_18c608:
    // 0x18c608: 0x40f809  jalr        $v0
label_18c60c:
    if (ctx->pc == 0x18C60Cu) {
        ctx->pc = 0x18C60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C608u;
        // 0x18c60c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C610u;
        goto label_18c610;
    }
    ctx->pc = 0x18C608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18C610u);
        ctx->pc = 0x18C60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C608u;
        // 0x18c60c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C608u, 0x18C610u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18C610u;
label_18c610:
    // 0x18c610: 0x13a20007  beq         $sp, $v0, . + 4 + (0x7 << 2)
label_18c614:
    if (ctx->pc == 0x18C614u) {
        ctx->pc = 0x18C618u;
        goto label_18c618;
    }
    ctx->pc = 0x18C610u;
    {
        const bool branch_taken_0x18c610 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        if (branch_taken_0x18c610) {
            ctx->pc = 0x18C630u;
            goto label_18c630;
        }
    }
    ctx->pc = 0x18C618u;
label_18c618:
    // 0x18c618: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x18c618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18c61c:
    // 0x18c61c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x18c61cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_18c620:
    // 0x18c620: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x18c620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18c624:
    // 0x18c624: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x18c624u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_18c628:
    // 0x18c628: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x18c628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18c62c:
    // 0x18c62c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x18c62cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_18c630:
    // 0x18c630: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18c630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_18c634:
    // 0x18c634: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x18c634u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_18c638:
    // 0x18c638: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x18c638u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_18c63c:
    // 0x18c63c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18c63cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18c640:
    // 0x18c640: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x18c640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_18c644:
    // 0x18c644: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18c644u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18c648:
    // 0x18c648: 0xc0c1a0e  jal         func_306838
label_18c64c:
    if (ctx->pc == 0x18C64Cu) {
        ctx->pc = 0x18C64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C648u;
        // 0x18c64c: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C650u;
        goto label_18c650;
    }
    ctx->pc = 0x18C648u;
    SET_GPR_U32(ctx, 31, 0x18C650u);
    ctx->pc = 0x18C64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C648u;
    // 0x18c64c: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x18C648u, 0x18C650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C650u;
label_18c650:
    // 0x18c650: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x18c650u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_18c654:
    // 0x18c654: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x18c654u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18c658:
    // 0x18c658: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x18c658u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18c65c:
    // 0x18c65c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x18c65cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18c660:
    // 0x18c660: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x18c660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18c664:
    // 0x18c664: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18c664u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18c668:
    // 0x18c668: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x18c668u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18c66c:
    // 0x18c66c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x18c66cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18c670:
    // 0x18c670: 0xc0b2e92  jal         func_2CBA48
label_18c674:
    if (ctx->pc == 0x18C674u) {
        ctx->pc = 0x18C674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C670u;
        // 0x18c674: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C678u;
        goto label_18c678;
    }
    ctx->pc = 0x18C670u;
    SET_GPR_U32(ctx, 31, 0x18C678u);
    ctx->pc = 0x18C674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C670u;
    // 0x18c674: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x18C670u, 0x18C678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C678u;
label_18c678:
    // 0x18c678: 0xc0632c6  jal         func_18CB18
label_18c67c:
    if (ctx->pc == 0x18C67Cu) {
        ctx->pc = 0x18C67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C678u;
        // 0x18c67c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C680u;
        goto label_18c680;
    }
    ctx->pc = 0x18C678u;
    SET_GPR_U32(ctx, 31, 0x18C680u);
    ctx->pc = 0x18C67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C678u;
    // 0x18c67c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18CB18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CB18u, 0x18C678u, 0x18C680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C680u;
label_18c680:
    // 0x18c680: 0xc06de42  jal         func_1B7908
label_18c684:
    if (ctx->pc == 0x18C684u) {
        ctx->pc = 0x18C684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C680u;
        // 0x18c684: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C688u;
        goto label_18c688;
    }
    ctx->pc = 0x18C680u;
    SET_GPR_U32(ctx, 31, 0x18C688u);
    ctx->pc = 0x18C684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C680u;
    // 0x18c684: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7908u, 0x18C680u, 0x18C688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C688u;
label_18c688:
    // 0x18c688: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x18c688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_18c68c:
    // 0x18c68c: 0xa23002f5  sb          $s0, 0x2F5($s1)
    ctx->pc = 0x18c68cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 16));
label_18c690:
    // 0x18c690: 0xa6220654  sh          $v0, 0x654($s1)
    ctx->pc = 0x18c690u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1620), (uint16_t)GPR_U32(ctx, 2));
label_18c694:
    // 0x18c694: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x18c694u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_18c698:
    // 0x18c698: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x18c698u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_18c69c:
    // 0x18c69c: 0x96220654  lhu         $v0, 0x654($s1)
    ctx->pc = 0x18c69cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1620)));
label_18c6a0:
    // 0x18c6a0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18c6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_18c6a4:
    // 0x18c6a4: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x18c6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_18c6a8:
    // 0x18c6a8: 0x1c60001a  bgtz        $v1, . + 4 + (0x1A << 2)
label_18c6ac:
    if (ctx->pc == 0x18C6ACu) {
        ctx->pc = 0x18C6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C6A8u;
        // 0x18c6ac: 0xa6220654  sh          $v0, 0x654($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1620), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C6B0u;
        goto label_18c6b0;
    }
    ctx->pc = 0x18C6A8u;
    {
        const bool branch_taken_0x18c6a8 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x18C6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C6A8u;
        // 0x18c6ac: 0xa6220654  sh          $v0, 0x654($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1620), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c6a8) {
            ctx->pc = 0x18C714u;
            goto label_18c714;
        }
    }
    ctx->pc = 0x18C6B0u;
label_18c6b0:
    // 0x18c6b0: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x18c6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_18c6b4:
    // 0x18c6b4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x18c6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18c6b8:
    // 0x18c6b8: 0xa6220654  sh          $v0, 0x654($s1)
    ctx->pc = 0x18c6b8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1620), (uint16_t)GPR_U32(ctx, 2));
label_18c6bc:
    // 0x18c6bc: 0x10000013  b           . + 4 + (0x13 << 2)
label_18c6c0:
    if (ctx->pc == 0x18C6C0u) {
        ctx->pc = 0x18C6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C6BCu;
        // 0x18c6c0: 0xa22302f5  sb          $v1, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C6C4u;
        goto label_18c6c4;
    }
    ctx->pc = 0x18C6BCu;
    {
        const bool branch_taken_0x18c6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C6BCu;
        // 0x18c6c0: 0xa22302f5  sb          $v1, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c6bc) {
            ctx->pc = 0x18C70Cu;
            goto label_18c70c;
        }
    }
    ctx->pc = 0x18C6C4u;
label_18c6c4:
    // 0x18c6c4: 0x96220654  lhu         $v0, 0x654($s1)
    ctx->pc = 0x18c6c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1620)));
label_18c6c8:
    // 0x18c6c8: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x18c6c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_18c6cc:
    // 0x18c6cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x18c6ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18c6d0:
    // 0x18c6d0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18c6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_18c6d4:
    // 0x18c6d4: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x18c6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_18c6d8:
    // 0x18c6d8: 0xa6220654  sh          $v0, 0x654($s1)
    ctx->pc = 0x18c6d8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1620), (uint16_t)GPR_U32(ctx, 2));
label_18c6dc:
    // 0x18c6dc: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x18c6dcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_18c6e0:
    // 0x18c6e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18c6e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18c6e4:
    // 0x18c6e4: 0x0  nop
    ctx->pc = 0x18c6e4u;
    // NOP
label_18c6e8:
    // 0x18c6e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18c6e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_18c6ec:
    // 0x18c6ec: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x18c6ecu;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
label_18c6f0:
    // 0x18c6f0: 0x1c600008  bgtz        $v1, . + 4 + (0x8 << 2)
label_18c6f4:
    if (ctx->pc == 0x18C6F4u) {
        ctx->pc = 0x18C6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C6F0u;
        // 0x18c6f4: 0xe620024c  swc1        $f0, 0x24C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C6F8u;
        goto label_18c6f8;
    }
    ctx->pc = 0x18C6F0u;
    {
        const bool branch_taken_0x18c6f0 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x18C6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C6F0u;
        // 0x18c6f4: 0xe620024c  swc1        $f0, 0x24C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c6f0) {
            ctx->pc = 0x18C714u;
            goto label_18c714;
        }
    }
    ctx->pc = 0x18C6F8u;
label_18c6f8:
    // 0x18c6f8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x18c6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_18c6fc:
    // 0x18c6fc: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x18c6fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_18c700:
    // 0x18c700: 0x10000003  b           . + 4 + (0x3 << 2)
label_18c704:
    if (ctx->pc == 0x18C704u) {
        ctx->pc = 0x18C704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C700u;
        // 0x18c704: 0xa22202f5  sb          $v0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C708u;
        goto label_18c708;
    }
    ctx->pc = 0x18C700u;
    {
        const bool branch_taken_0x18c700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C700u;
        // 0x18c704: 0xa22202f5  sb          $v0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c700) {
            ctx->pc = 0x18C710u;
            goto label_18c710;
        }
    }
    ctx->pc = 0x18C708u;
label_18c708:
    // 0x18c708: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x18c708u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
label_18c70c:
    // 0x18c70c: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x18c70cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_18c710:
    // 0x18c710: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x18c710u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_18c714:
    // 0x18c714: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x18c714u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_18c718:
    // 0x18c718: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x18c718u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18c71c:
    // 0x18c71c: 0x10560053  beq         $v0, $s6, . + 4 + (0x53 << 2)
label_18c720:
    if (ctx->pc == 0x18C720u) {
        ctx->pc = 0x18C720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C71Cu;
        // 0x18c720: 0x27be0020  addiu       $fp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C724u;
        goto label_18c724;
    }
    ctx->pc = 0x18C71Cu;
    {
        const bool branch_taken_0x18c71c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        ctx->pc = 0x18C720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C71Cu;
        // 0x18c720: 0x27be0020  addiu       $fp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c71c) {
            ctx->pc = 0x18C86Cu;
            goto label_18c86c;
        }
    }
    ctx->pc = 0x18C724u;
label_18c724:
    // 0x18c724: 0x3c01c47a  lui         $at, 0xC47A
    ctx->pc = 0x18c724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50298 << 16));
label_18c728:
    // 0x18c728: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x18c728u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_18c72c:
    // 0x18c72c: 0x27b70010  addiu       $s7, $sp, 0x10
    ctx->pc = 0x18c72cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_18c730:
    // 0x18c730: 0x26350700  addiu       $s5, $s1, 0x700
    ctx->pc = 0x18c730u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 1792));
label_18c734:
    // 0x18c734: 0x263006d0  addiu       $s0, $s1, 0x6D0
    ctx->pc = 0x18c734u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1744));
label_18c738:
    // 0x18c738: 0x263406f0  addiu       $s4, $s1, 0x6F0
    ctx->pc = 0x18c738u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 1776));
label_18c73c:
    // 0x18c73c: 0x263306e0  addiu       $s3, $s1, 0x6E0
    ctx->pc = 0x18c73cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 1760));
label_18c740:
    // 0x18c740: 0x263206c0  addiu       $s2, $s1, 0x6C0
    ctx->pc = 0x18c740u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1728));
label_18c744:
    // 0x18c744: 0x0  nop
    ctx->pc = 0x18c744u;
    // NOP
label_18c748:
    // 0x18c748: 0xc05ce40  jal         func_173900
label_18c74c:
    if (ctx->pc == 0x18C74Cu) {
        ctx->pc = 0x18C74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C748u;
        // 0x18c74c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C750u;
        goto label_18c750;
    }
    ctx->pc = 0x18C748u;
    SET_GPR_U32(ctx, 31, 0x18C750u);
    ctx->pc = 0x18C74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C748u;
    // 0x18c74c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173900u, 0x18C748u, 0x18C750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C750u;
label_18c750:
    // 0x18c750: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18c750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18c754:
    // 0x18c754: 0x5443003b  bnel        $v0, $v1, . + 4 + (0x3B << 2)
label_18c758:
    if (ctx->pc == 0x18C758u) {
        ctx->pc = 0x18C758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C754u;
        // 0x18c758: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C75Cu;
        goto label_18c75c;
    }
    ctx->pc = 0x18C754u;
    {
        const bool branch_taken_0x18c754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x18c754) {
            ctx->pc = 0x18C758u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18C754u;
            // 0x18c758: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18C844u;
            goto label_18c844;
        }
    }
    ctx->pc = 0x18C75Cu;
label_18c75c:
    // 0x18c75c: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x18c75cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_18c760:
    // 0x18c760: 0xc0a4bd4  jal         func_292F50
label_18c764:
    if (ctx->pc == 0x18C764u) {
        ctx->pc = 0x18C764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C760u;
        // 0x18c764: 0x244464f0  addiu       $a0, $v0, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C768u;
        goto label_18c768;
    }
    ctx->pc = 0x18C760u;
    SET_GPR_U32(ctx, 31, 0x18C768u);
    ctx->pc = 0x18C764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C760u;
    // 0x18c764: 0x244464f0  addiu       $a0, $v0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x18C760u, 0x18C768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C768u;
label_18c768:
    // 0x18c768: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x18c768u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_18c76c:
    // 0x18c76c: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x18c76cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_18c770:
    // 0x18c770: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x18c770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_18c774:
    // 0x18c774: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x18c774u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18c778:
    // 0x18c778: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x18c778u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_18c77c:
    // 0x18c77c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x18c77cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_18c780:
    // 0x18c780: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x18c780u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_18c784:
    // 0x18c784: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x18c784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_18c788:
    // 0x18c788: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x18c788u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_18c78c:
    // 0x18c78c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x18c78cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_18c790:
    // 0x18c790: 0xda04fff0  lqc2        $vf4, -0x10($s0)
    ctx->pc = 0x18c790u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 4294967280)));
label_18c794:
    // 0x18c794: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x18c794u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_18c798:
    // 0x18c798: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x18c798u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_18c79c:
    // 0x18c79c: 0xfa04fff0  sqc2        $vf4, -0x10($s0)
    ctx->pc = 0x18c79cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 4294967280), _mm_castps_si128(ctx->vu0_vf[4]));
label_18c7a0:
    // 0x18c7a0: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x18c7a0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_18c7a4:
    // 0x18c7a4: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x18c7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_18c7a8:
    // 0x18c7a8: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x18c7a8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18c7ac:
    // 0x18c7ac: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x18c7acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_18c7b0:
    // 0x18c7b0: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x18c7b0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_18c7b4:
    // 0x18c7b4: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x18c7b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_18c7b8:
    // 0x18c7b8: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x18c7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_18c7bc:
    // 0x18c7bc: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x18c7bcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_18c7c0:
    // 0x18c7c0: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x18c7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_18c7c4:
    // 0x18c7c4: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x18c7c4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_18c7c8:
    // 0x18c7c8: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x18c7c8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_18c7cc:
    // 0x18c7cc: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x18c7ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_18c7d0:
    // 0x18c7d0: 0xfa040000  sqc2        $vf4, 0x0($s0)
    ctx->pc = 0x18c7d0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_18c7d4:
    // 0x18c7d4: 0xc07df68  jal         func_1F7DA0
label_18c7d8:
    if (ctx->pc == 0x18C7D8u) {
        ctx->pc = 0x18C7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C7D4u;
        // 0x18c7d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C7DCu;
        goto label_18c7dc;
    }
    ctx->pc = 0x18C7D4u;
    SET_GPR_U32(ctx, 31, 0x18C7DCu);
    ctx->pc = 0x18C7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C7D4u;
    // 0x18c7d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7DA0u, 0x18C7D4u, 0x18C7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C7DCu;
label_18c7dc:
    // 0x18c7dc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x18c7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_18c7e0:
    // 0x18c7e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18c7e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18c7e4:
    // 0x18c7e4: 0xc051dca  jal         func_147728
label_18c7e8:
    if (ctx->pc == 0x18C7E8u) {
        ctx->pc = 0x18C7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C7E4u;
        // 0x18c7e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C7ECu;
        goto label_18c7ec;
    }
    ctx->pc = 0x18C7E4u;
    SET_GPR_U32(ctx, 31, 0x18C7ECu);
    ctx->pc = 0x18C7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C7E4u;
    // 0x18c7e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147728u, 0x18C7E4u, 0x18C7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C7ECu;
label_18c7ec:
    // 0x18c7ec: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x18c7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_18c7f0:
    // 0x18c7f0: 0xc051f10  jal         func_147C40
label_18c7f4:
    if (ctx->pc == 0x18C7F4u) {
        ctx->pc = 0x18C7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C7F0u;
        // 0x18c7f4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C7F8u;
        goto label_18c7f8;
    }
    ctx->pc = 0x18C7F0u;
    SET_GPR_U32(ctx, 31, 0x18C7F8u);
    ctx->pc = 0x18C7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C7F0u;
    // 0x18c7f4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C40u, 0x18C7F0u, 0x18C7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C7F8u;
label_18c7f8:
    // 0x18c7f8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x18c7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_18c7fc:
    // 0x18c7fc: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x18c7fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_18c800:
    // 0x18c800: 0xc051efe  jal         func_147BF8
label_18c804:
    if (ctx->pc == 0x18C804u) {
        ctx->pc = 0x18C804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C800u;
        // 0x18c804: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C808u;
        goto label_18c808;
    }
    ctx->pc = 0x18C800u;
    SET_GPR_U32(ctx, 31, 0x18C808u);
    ctx->pc = 0x18C804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C800u;
    // 0x18c804: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147BF8u, 0x18C800u, 0x18C808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C808u;
label_18c808:
    // 0x18c808: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x18c808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_18c80c:
    // 0x18c80c: 0xc051d4a  jal         func_147528
label_18c810:
    if (ctx->pc == 0x18C810u) {
        ctx->pc = 0x18C810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C80Cu;
        // 0x18c810: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C814u;
        goto label_18c814;
    }
    ctx->pc = 0x18C80Cu;
    SET_GPR_U32(ctx, 31, 0x18C814u);
    ctx->pc = 0x18C810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C80Cu;
    // 0x18c810: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x18C80Cu, 0x18C814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C814u;
label_18c814:
    // 0x18c814: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x18c814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18c818:
    // 0x18c818: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x18c818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18c81c:
    // 0x18c81c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x18c81cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_18c820:
    // 0x18c820: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x18c820u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_18c824:
    // 0x18c824: 0x46150834  c.lt.s      $f1, $f21
    ctx->pc = 0x18c824u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18c828:
    // 0x18c828: 0x0  nop
    ctx->pc = 0x18c828u;
    // NOP
label_18c82c:
    // 0x18c82c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_18c830:
    if (ctx->pc == 0x18C830u) {
        ctx->pc = 0x18C830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C82Cu;
        // 0x18c830: 0xe6010014  swc1        $f1, 0x14($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C834u;
        goto label_18c834;
    }
    ctx->pc = 0x18C82Cu;
    {
        const bool branch_taken_0x18c82c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18C830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C82Cu;
        // 0x18c830: 0xe6010014  swc1        $f1, 0x14($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c82c) {
            ctx->pc = 0x18C840u;
            goto label_18c840;
        }
    }
    ctx->pc = 0x18C834u;
label_18c834:
    // 0x18c834: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18c834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_18c838:
    // 0x18c838: 0xc05bd90  jal         func_16F640
label_18c83c:
    if (ctx->pc == 0x18C83Cu) {
        ctx->pc = 0x18C83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C838u;
        // 0x18c83c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C840u;
        goto label_18c840;
    }
    ctx->pc = 0x18C838u;
    SET_GPR_U32(ctx, 31, 0x18C840u);
    ctx->pc = 0x18C83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C838u;
    // 0x18c83c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x18C838u, 0x18C840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C840u;
label_18c840:
    // 0x18c840: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x18c840u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_18c844:
    // 0x18c844: 0x26b50060  addiu       $s5, $s5, 0x60
    ctx->pc = 0x18c844u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
label_18c848:
    // 0x18c848: 0x26100060  addiu       $s0, $s0, 0x60
    ctx->pc = 0x18c848u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_18c84c:
    // 0x18c84c: 0x26940060  addiu       $s4, $s4, 0x60
    ctx->pc = 0x18c84cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
label_18c850:
    // 0x18c850: 0x26730060  addiu       $s3, $s3, 0x60
    ctx->pc = 0x18c850u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
label_18c854:
    // 0x18c854: 0x2ac20009  slti        $v0, $s6, 0x9
    ctx->pc = 0x18c854u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)9) ? 1 : 0);
label_18c858:
    // 0x18c858: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_18c85c:
    if (ctx->pc == 0x18C85Cu) {
        ctx->pc = 0x18C85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C858u;
        // 0x18c85c: 0x26520060  addiu       $s2, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C860u;
        goto label_18c860;
    }
    ctx->pc = 0x18C858u;
    {
        const bool branch_taken_0x18c858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C858u;
        // 0x18c85c: 0x26520060  addiu       $s2, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c858) {
            ctx->pc = 0x18C86Cu;
            goto label_18c86c;
        }
    }
    ctx->pc = 0x18C860u;
label_18c860:
    // 0x18c860: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x18c860u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_18c864:
    // 0x18c864: 0x1456ffb8  bne         $v0, $s6, . + 4 + (-0x48 << 2)
label_18c868:
    if (ctx->pc == 0x18C868u) {
        ctx->pc = 0x18C86Cu;
        goto label_18c86c;
    }
    ctx->pc = 0x18C864u;
    {
        const bool branch_taken_0x18c864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x18c864) {
            ctx->pc = 0x18C748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18c748;
        }
    }
    ctx->pc = 0x18C86Cu;
label_18c86c:
    // 0x18c86c: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x18c86cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_18c870:
    // 0x18c870: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x18c870u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_18c874:
    // 0x18c874: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x18c874u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_18c878:
    // 0x18c878: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x18c878u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_18c87c:
    // 0x18c87c: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x18c87cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_18c880:
    // 0x18c880: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x18c880u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_18c884:
    // 0x18c884: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x18c884u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_18c888:
    // 0x18c888: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x18c888u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_18c88c:
    // 0x18c88c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x18c88cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_18c890:
    // 0x18c890: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x18c890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_18c894:
    // 0x18c894: 0xc7b50118  lwc1        $f21, 0x118($sp)
    ctx->pc = 0x18c894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_18c898:
    // 0x18c898: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x18c898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_18c89c:
    // 0x18c89c: 0x3e00008  jr          $ra
label_18c8a0:
    if (ctx->pc == 0x18C8A0u) {
        ctx->pc = 0x18C8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C89Cu;
        // 0x18c8a0: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C8A4u;
        goto label_18c8a4;
    }
    ctx->pc = 0x18C89Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C89Cu;
        // 0x18c8a0: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C89Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C8A4u;
label_18c8a4:
    // 0x18c8a4: 0x0  nop
    ctx->pc = 0x18c8a4u;
    // NOP
    ctx->pc = 0x18c8a8u;
}
