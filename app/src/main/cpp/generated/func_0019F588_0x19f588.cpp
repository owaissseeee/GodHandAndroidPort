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

// Function: func_0019F588
// Address: 0x19f588 - 0x19f8b0
void func_0019F588_0x19f588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0019F588_0x19f588");
#endif

    switch (ctx->pc) {
        case 0x19f588u: goto label_19f588;
        case 0x19f58cu: goto label_19f58c;
        case 0x19f590u: goto label_19f590;
        case 0x19f594u: goto label_19f594;
        case 0x19f598u: goto label_19f598;
        case 0x19f59cu: goto label_19f59c;
        case 0x19f5a0u: goto label_19f5a0;
        case 0x19f5a4u: goto label_19f5a4;
        case 0x19f5a8u: goto label_19f5a8;
        case 0x19f5acu: goto label_19f5ac;
        case 0x19f5b0u: goto label_19f5b0;
        case 0x19f5b4u: goto label_19f5b4;
        case 0x19f5b8u: goto label_19f5b8;
        case 0x19f5bcu: goto label_19f5bc;
        case 0x19f5c0u: goto label_19f5c0;
        case 0x19f5c4u: goto label_19f5c4;
        case 0x19f5c8u: goto label_19f5c8;
        case 0x19f5ccu: goto label_19f5cc;
        case 0x19f5d0u: goto label_19f5d0;
        case 0x19f5d4u: goto label_19f5d4;
        case 0x19f5d8u: goto label_19f5d8;
        case 0x19f5dcu: goto label_19f5dc;
        case 0x19f5e0u: goto label_19f5e0;
        case 0x19f5e4u: goto label_19f5e4;
        case 0x19f5e8u: goto label_19f5e8;
        case 0x19f5ecu: goto label_19f5ec;
        case 0x19f5f0u: goto label_19f5f0;
        case 0x19f5f4u: goto label_19f5f4;
        case 0x19f5f8u: goto label_19f5f8;
        case 0x19f5fcu: goto label_19f5fc;
        case 0x19f600u: goto label_19f600;
        case 0x19f604u: goto label_19f604;
        case 0x19f608u: goto label_19f608;
        case 0x19f60cu: goto label_19f60c;
        case 0x19f610u: goto label_19f610;
        case 0x19f614u: goto label_19f614;
        case 0x19f618u: goto label_19f618;
        case 0x19f61cu: goto label_19f61c;
        case 0x19f620u: goto label_19f620;
        case 0x19f624u: goto label_19f624;
        case 0x19f628u: goto label_19f628;
        case 0x19f62cu: goto label_19f62c;
        case 0x19f630u: goto label_19f630;
        case 0x19f634u: goto label_19f634;
        case 0x19f638u: goto label_19f638;
        case 0x19f63cu: goto label_19f63c;
        case 0x19f640u: goto label_19f640;
        case 0x19f644u: goto label_19f644;
        case 0x19f648u: goto label_19f648;
        case 0x19f64cu: goto label_19f64c;
        case 0x19f650u: goto label_19f650;
        case 0x19f654u: goto label_19f654;
        case 0x19f658u: goto label_19f658;
        case 0x19f65cu: goto label_19f65c;
        case 0x19f660u: goto label_19f660;
        case 0x19f664u: goto label_19f664;
        case 0x19f668u: goto label_19f668;
        case 0x19f66cu: goto label_19f66c;
        case 0x19f670u: goto label_19f670;
        case 0x19f674u: goto label_19f674;
        case 0x19f678u: goto label_19f678;
        case 0x19f67cu: goto label_19f67c;
        case 0x19f680u: goto label_19f680;
        case 0x19f684u: goto label_19f684;
        case 0x19f688u: goto label_19f688;
        case 0x19f68cu: goto label_19f68c;
        case 0x19f690u: goto label_19f690;
        case 0x19f694u: goto label_19f694;
        case 0x19f698u: goto label_19f698;
        case 0x19f69cu: goto label_19f69c;
        case 0x19f6a0u: goto label_19f6a0;
        case 0x19f6a4u: goto label_19f6a4;
        case 0x19f6a8u: goto label_19f6a8;
        case 0x19f6acu: goto label_19f6ac;
        case 0x19f6b0u: goto label_19f6b0;
        case 0x19f6b4u: goto label_19f6b4;
        case 0x19f6b8u: goto label_19f6b8;
        case 0x19f6bcu: goto label_19f6bc;
        case 0x19f6c0u: goto label_19f6c0;
        case 0x19f6c4u: goto label_19f6c4;
        case 0x19f6c8u: goto label_19f6c8;
        case 0x19f6ccu: goto label_19f6cc;
        case 0x19f6d0u: goto label_19f6d0;
        case 0x19f6d4u: goto label_19f6d4;
        case 0x19f6d8u: goto label_19f6d8;
        case 0x19f6dcu: goto label_19f6dc;
        case 0x19f6e0u: goto label_19f6e0;
        case 0x19f6e4u: goto label_19f6e4;
        case 0x19f6e8u: goto label_19f6e8;
        case 0x19f6ecu: goto label_19f6ec;
        case 0x19f6f0u: goto label_19f6f0;
        case 0x19f6f4u: goto label_19f6f4;
        case 0x19f6f8u: goto label_19f6f8;
        case 0x19f6fcu: goto label_19f6fc;
        case 0x19f700u: goto label_19f700;
        case 0x19f704u: goto label_19f704;
        case 0x19f708u: goto label_19f708;
        case 0x19f70cu: goto label_19f70c;
        case 0x19f710u: goto label_19f710;
        case 0x19f714u: goto label_19f714;
        case 0x19f718u: goto label_19f718;
        case 0x19f71cu: goto label_19f71c;
        case 0x19f720u: goto label_19f720;
        case 0x19f724u: goto label_19f724;
        case 0x19f728u: goto label_19f728;
        case 0x19f72cu: goto label_19f72c;
        case 0x19f730u: goto label_19f730;
        case 0x19f734u: goto label_19f734;
        case 0x19f738u: goto label_19f738;
        case 0x19f73cu: goto label_19f73c;
        case 0x19f740u: goto label_19f740;
        case 0x19f744u: goto label_19f744;
        case 0x19f748u: goto label_19f748;
        case 0x19f74cu: goto label_19f74c;
        case 0x19f750u: goto label_19f750;
        case 0x19f754u: goto label_19f754;
        case 0x19f758u: goto label_19f758;
        case 0x19f75cu: goto label_19f75c;
        case 0x19f760u: goto label_19f760;
        case 0x19f764u: goto label_19f764;
        case 0x19f768u: goto label_19f768;
        case 0x19f76cu: goto label_19f76c;
        case 0x19f770u: goto label_19f770;
        case 0x19f774u: goto label_19f774;
        case 0x19f778u: goto label_19f778;
        case 0x19f77cu: goto label_19f77c;
        case 0x19f780u: goto label_19f780;
        case 0x19f784u: goto label_19f784;
        case 0x19f788u: goto label_19f788;
        case 0x19f78cu: goto label_19f78c;
        case 0x19f790u: goto label_19f790;
        case 0x19f794u: goto label_19f794;
        case 0x19f798u: goto label_19f798;
        case 0x19f79cu: goto label_19f79c;
        case 0x19f7a0u: goto label_19f7a0;
        case 0x19f7a4u: goto label_19f7a4;
        case 0x19f7a8u: goto label_19f7a8;
        case 0x19f7acu: goto label_19f7ac;
        case 0x19f7b0u: goto label_19f7b0;
        case 0x19f7b4u: goto label_19f7b4;
        case 0x19f7b8u: goto label_19f7b8;
        case 0x19f7bcu: goto label_19f7bc;
        case 0x19f7c0u: goto label_19f7c0;
        case 0x19f7c4u: goto label_19f7c4;
        case 0x19f7c8u: goto label_19f7c8;
        case 0x19f7ccu: goto label_19f7cc;
        case 0x19f7d0u: goto label_19f7d0;
        case 0x19f7d4u: goto label_19f7d4;
        case 0x19f7d8u: goto label_19f7d8;
        case 0x19f7dcu: goto label_19f7dc;
        case 0x19f7e0u: goto label_19f7e0;
        case 0x19f7e4u: goto label_19f7e4;
        case 0x19f7e8u: goto label_19f7e8;
        case 0x19f7ecu: goto label_19f7ec;
        case 0x19f7f0u: goto label_19f7f0;
        case 0x19f7f4u: goto label_19f7f4;
        case 0x19f7f8u: goto label_19f7f8;
        case 0x19f7fcu: goto label_19f7fc;
        case 0x19f800u: goto label_19f800;
        case 0x19f804u: goto label_19f804;
        case 0x19f808u: goto label_19f808;
        case 0x19f80cu: goto label_19f80c;
        case 0x19f810u: goto label_19f810;
        case 0x19f814u: goto label_19f814;
        case 0x19f818u: goto label_19f818;
        case 0x19f81cu: goto label_19f81c;
        case 0x19f820u: goto label_19f820;
        case 0x19f824u: goto label_19f824;
        case 0x19f828u: goto label_19f828;
        case 0x19f82cu: goto label_19f82c;
        case 0x19f830u: goto label_19f830;
        case 0x19f834u: goto label_19f834;
        case 0x19f838u: goto label_19f838;
        case 0x19f83cu: goto label_19f83c;
        case 0x19f840u: goto label_19f840;
        case 0x19f844u: goto label_19f844;
        case 0x19f848u: goto label_19f848;
        case 0x19f84cu: goto label_19f84c;
        case 0x19f850u: goto label_19f850;
        case 0x19f854u: goto label_19f854;
        case 0x19f858u: goto label_19f858;
        case 0x19f85cu: goto label_19f85c;
        case 0x19f860u: goto label_19f860;
        case 0x19f864u: goto label_19f864;
        case 0x19f868u: goto label_19f868;
        case 0x19f86cu: goto label_19f86c;
        case 0x19f870u: goto label_19f870;
        case 0x19f874u: goto label_19f874;
        case 0x19f878u: goto label_19f878;
        case 0x19f87cu: goto label_19f87c;
        case 0x19f880u: goto label_19f880;
        case 0x19f884u: goto label_19f884;
        case 0x19f888u: goto label_19f888;
        case 0x19f88cu: goto label_19f88c;
        case 0x19f890u: goto label_19f890;
        case 0x19f894u: goto label_19f894;
        case 0x19f898u: goto label_19f898;
        case 0x19f89cu: goto label_19f89c;
        case 0x19f8a0u: goto label_19f8a0;
        case 0x19f8a4u: goto label_19f8a4;
        case 0x19f8a8u: goto label_19f8a8;
        case 0x19f8acu: goto label_19f8ac;
        default: break;
    }

    ctx->pc = 0x19f588u;

label_19f588:
    // 0x19f588: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x19f588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_19f58c:
    // 0x19f58c: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x19f58cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
label_19f590:
    // 0x19f590: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x19f590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
label_19f594:
    // 0x19f594: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x19f594u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19f598:
    // 0x19f598: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x19f598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
label_19f59c:
    // 0x19f59c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19f59cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19f5a0:
    // 0x19f5a0: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x19f5a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
label_19f5a4:
    // 0x19f5a4: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x19f5a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
label_19f5a8:
    // 0x19f5a8: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x19f5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
label_19f5ac:
    // 0x19f5ac: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x19f5acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
label_19f5b0:
    // 0x19f5b0: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x19f5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_19f5b4:
    // 0x19f5b4: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x19f5b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_19f5b8:
    // 0x19f5b8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x19f5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_19f5bc:
    // 0x19f5bc: 0xe7b50118  swc1        $f21, 0x118($sp)
    ctx->pc = 0x19f5bcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_19f5c0:
    // 0x19f5c0: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x19f5c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_19f5c4:
    // 0x19f5c4: 0x922302f5  lbu         $v1, 0x2F5($s1)
    ctx->pc = 0x19f5c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 757)));
label_19f5c8:
    // 0x19f5c8: 0x10700036  beq         $v1, $s0, . + 4 + (0x36 << 2)
label_19f5cc:
    if (ctx->pc == 0x19F5CCu) {
        ctx->pc = 0x19F5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F5C8u;
        // 0x19f5cc: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F5D0u;
        goto label_19f5d0;
    }
    ctx->pc = 0x19F5C8u;
    {
        const bool branch_taken_0x19f5c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x19F5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F5C8u;
        // 0x19f5cc: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f5c8) {
            ctx->pc = 0x19F6A4u;
            goto label_19f6a4;
        }
    }
    ctx->pc = 0x19F5D0u;
label_19f5d0:
    // 0x19f5d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_19f5d4:
    if (ctx->pc == 0x19F5D4u) {
        ctx->pc = 0x19F5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F5D0u;
        // 0x19f5d4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F5D8u;
        goto label_19f5d8;
    }
    ctx->pc = 0x19F5D0u;
    {
        const bool branch_taken_0x19f5d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F5D0u;
        // 0x19f5d4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f5d0) {
            ctx->pc = 0x19F5E8u;
            goto label_19f5e8;
        }
    }
    ctx->pc = 0x19F5D8u;
label_19f5d8:
    // 0x19f5d8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_19f5dc:
    if (ctx->pc == 0x19F5DCu) {
        ctx->pc = 0x19F5E0u;
        goto label_19f5e0;
    }
    ctx->pc = 0x19F5D8u;
    {
        const bool branch_taken_0x19f5d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f5d8) {
            ctx->pc = 0x19F600u;
            goto label_19f600;
        }
    }
    ctx->pc = 0x19F5E0u;
label_19f5e0:
    // 0x19f5e0: 0x1000004f  b           . + 4 + (0x4F << 2)
label_19f5e4:
    if (ctx->pc == 0x19F5E4u) {
        ctx->pc = 0x19F5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F5E0u;
        // 0x19f5e4: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F5E8u;
        goto label_19f5e8;
    }
    ctx->pc = 0x19F5E0u;
    {
        const bool branch_taken_0x19f5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F5E0u;
        // 0x19f5e4: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f5e0) {
            ctx->pc = 0x19F720u;
            goto label_19f720;
        }
    }
    ctx->pc = 0x19F5E8u;
label_19f5e8:
    // 0x19f5e8: 0x10620038  beq         $v1, $v0, . + 4 + (0x38 << 2)
label_19f5ec:
    if (ctx->pc == 0x19F5ECu) {
        ctx->pc = 0x19F5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F5E8u;
        // 0x19f5ec: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F5F0u;
        goto label_19f5f0;
    }
    ctx->pc = 0x19F5E8u;
    {
        const bool branch_taken_0x19f5e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19F5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F5E8u;
        // 0x19f5ec: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f5e8) {
            ctx->pc = 0x19F6CCu;
            goto label_19f6cc;
        }
    }
    ctx->pc = 0x19F5F0u;
label_19f5f0:
    // 0x19f5f0: 0x50620047  beql        $v1, $v0, . + 4 + (0x47 << 2)
label_19f5f4:
    if (ctx->pc == 0x19F5F4u) {
        ctx->pc = 0x19F5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F5F0u;
        // 0x19f5f4: 0xa22302f4  sb          $v1, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F5F8u;
        goto label_19f5f8;
    }
    ctx->pc = 0x19F5F0u;
    {
        const bool branch_taken_0x19f5f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19f5f0) {
            ctx->pc = 0x19F5F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F5F0u;
            // 0x19f5f4: 0xa22302f4  sb          $v1, 0x2F4($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F710u;
            goto label_19f710;
        }
    }
    ctx->pc = 0x19F5F8u;
label_19f5f8:
    // 0x19f5f8: 0x10000049  b           . + 4 + (0x49 << 2)
label_19f5fc:
    if (ctx->pc == 0x19F5FCu) {
        ctx->pc = 0x19F5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F5F8u;
        // 0x19f5fc: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F600u;
        goto label_19f600;
    }
    ctx->pc = 0x19F5F8u;
    {
        const bool branch_taken_0x19f5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F5F8u;
        // 0x19f5fc: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f5f8) {
            ctx->pc = 0x19F720u;
            goto label_19f720;
        }
    }
    ctx->pc = 0x19F600u;
label_19f600:
    // 0x19f600: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x19f600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_19f604:
    // 0x19f604: 0x8e230214  lw          $v1, 0x214($s1)
    ctx->pc = 0x19f604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_19f608:
    // 0x19f608: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x19f608u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_19f60c:
    // 0x19f60c: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x19f60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_19f610:
    // 0x19f610: 0x40f809  jalr        $v0
label_19f614:
    if (ctx->pc == 0x19F614u) {
        ctx->pc = 0x19F614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F610u;
        // 0x19f614: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F618u;
        goto label_19f618;
    }
    ctx->pc = 0x19F610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19F618u);
        ctx->pc = 0x19F614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F610u;
        // 0x19f614: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F610u, 0x19F618u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19F618u;
label_19f618:
    // 0x19f618: 0x13a20007  beq         $sp, $v0, . + 4 + (0x7 << 2)
label_19f61c:
    if (ctx->pc == 0x19F61Cu) {
        ctx->pc = 0x19F620u;
        goto label_19f620;
    }
    ctx->pc = 0x19F618u;
    {
        const bool branch_taken_0x19f618 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        if (branch_taken_0x19f618) {
            ctx->pc = 0x19F638u;
            goto label_19f638;
        }
    }
    ctx->pc = 0x19F620u;
label_19f620:
    // 0x19f620: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x19f620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19f624:
    // 0x19f624: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x19f624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_19f628:
    // 0x19f628: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x19f628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19f62c:
    // 0x19f62c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x19f62cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_19f630:
    // 0x19f630: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x19f630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19f634:
    // 0x19f634: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x19f634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_19f638:
    // 0x19f638: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19f638u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_19f63c:
    // 0x19f63c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x19f63cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19f640:
    // 0x19f640: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x19f640u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_19f644:
    // 0x19f644: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19f644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f648:
    // 0x19f648: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x19f648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_19f64c:
    // 0x19f64c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19f64cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f650:
    // 0x19f650: 0xc0c1a0e  jal         func_306838
label_19f654:
    if (ctx->pc == 0x19F654u) {
        ctx->pc = 0x19F654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F650u;
        // 0x19f654: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F658u;
        goto label_19f658;
    }
    ctx->pc = 0x19F650u;
    SET_GPR_U32(ctx, 31, 0x19F658u);
    ctx->pc = 0x19F654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F650u;
    // 0x19f654: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x19F650u, 0x19F658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F658u;
label_19f658:
    // 0x19f658: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x19f658u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_19f65c:
    // 0x19f65c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x19f65cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f660:
    // 0x19f660: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x19f660u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f664:
    // 0x19f664: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x19f664u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f668:
    // 0x19f668: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19f668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19f66c:
    // 0x19f66c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19f66cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f670:
    // 0x19f670: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x19f670u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19f674:
    // 0x19f674: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x19f674u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f678:
    // 0x19f678: 0xc0b2e92  jal         func_2CBA48
label_19f67c:
    if (ctx->pc == 0x19F67Cu) {
        ctx->pc = 0x19F67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F678u;
        // 0x19f67c: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F680u;
        goto label_19f680;
    }
    ctx->pc = 0x19F678u;
    SET_GPR_U32(ctx, 31, 0x19F680u);
    ctx->pc = 0x19F67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F678u;
    // 0x19f67c: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x19F678u, 0x19F680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F680u;
label_19f680:
    // 0x19f680: 0xc067ec8  jal         func_19FB20
label_19f684:
    if (ctx->pc == 0x19F684u) {
        ctx->pc = 0x19F684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F680u;
        // 0x19f684: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F688u;
        goto label_19f688;
    }
    ctx->pc = 0x19F680u;
    SET_GPR_U32(ctx, 31, 0x19F688u);
    ctx->pc = 0x19F684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F680u;
    // 0x19f684: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FB20u, 0x19F680u, 0x19F688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F688u;
label_19f688:
    // 0x19f688: 0xc06de42  jal         func_1B7908
label_19f68c:
    if (ctx->pc == 0x19F68Cu) {
        ctx->pc = 0x19F68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F688u;
        // 0x19f68c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F690u;
        goto label_19f690;
    }
    ctx->pc = 0x19F688u;
    SET_GPR_U32(ctx, 31, 0x19F690u);
    ctx->pc = 0x19F68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F688u;
    // 0x19f68c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7908u, 0x19F688u, 0x19F690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F690u;
label_19f690:
    // 0x19f690: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x19f690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_19f694:
    // 0x19f694: 0xa23002f5  sb          $s0, 0x2F5($s1)
    ctx->pc = 0x19f694u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 16));
label_19f698:
    // 0x19f698: 0xa6220654  sh          $v0, 0x654($s1)
    ctx->pc = 0x19f698u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1620), (uint16_t)GPR_U32(ctx, 2));
label_19f69c:
    // 0x19f69c: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x19f69cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_19f6a0:
    // 0x19f6a0: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x19f6a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_19f6a4:
    // 0x19f6a4: 0x96220654  lhu         $v0, 0x654($s1)
    ctx->pc = 0x19f6a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1620)));
label_19f6a8:
    // 0x19f6a8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19f6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_19f6ac:
    // 0x19f6ac: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x19f6acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_19f6b0:
    // 0x19f6b0: 0x1c60001a  bgtz        $v1, . + 4 + (0x1A << 2)
label_19f6b4:
    if (ctx->pc == 0x19F6B4u) {
        ctx->pc = 0x19F6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F6B0u;
        // 0x19f6b4: 0xa6220654  sh          $v0, 0x654($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1620), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F6B8u;
        goto label_19f6b8;
    }
    ctx->pc = 0x19F6B0u;
    {
        const bool branch_taken_0x19f6b0 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x19F6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F6B0u;
        // 0x19f6b4: 0xa6220654  sh          $v0, 0x654($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1620), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f6b0) {
            ctx->pc = 0x19F71Cu;
            goto label_19f71c;
        }
    }
    ctx->pc = 0x19F6B8u;
label_19f6b8:
    // 0x19f6b8: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x19f6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_19f6bc:
    // 0x19f6bc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19f6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19f6c0:
    // 0x19f6c0: 0xa6220654  sh          $v0, 0x654($s1)
    ctx->pc = 0x19f6c0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1620), (uint16_t)GPR_U32(ctx, 2));
label_19f6c4:
    // 0x19f6c4: 0x10000013  b           . + 4 + (0x13 << 2)
label_19f6c8:
    if (ctx->pc == 0x19F6C8u) {
        ctx->pc = 0x19F6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F6C4u;
        // 0x19f6c8: 0xa22302f5  sb          $v1, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F6CCu;
        goto label_19f6cc;
    }
    ctx->pc = 0x19F6C4u;
    {
        const bool branch_taken_0x19f6c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F6C4u;
        // 0x19f6c8: 0xa22302f5  sb          $v1, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f6c4) {
            ctx->pc = 0x19F714u;
            goto label_19f714;
        }
    }
    ctx->pc = 0x19F6CCu;
label_19f6cc:
    // 0x19f6cc: 0x96220654  lhu         $v0, 0x654($s1)
    ctx->pc = 0x19f6ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1620)));
label_19f6d0:
    // 0x19f6d0: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x19f6d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_19f6d4:
    // 0x19f6d4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19f6d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19f6d8:
    // 0x19f6d8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19f6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_19f6dc:
    // 0x19f6dc: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x19f6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_19f6e0:
    // 0x19f6e0: 0xa6220654  sh          $v0, 0x654($s1)
    ctx->pc = 0x19f6e0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1620), (uint16_t)GPR_U32(ctx, 2));
label_19f6e4:
    // 0x19f6e4: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x19f6e4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_19f6e8:
    // 0x19f6e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19f6e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19f6ec:
    // 0x19f6ec: 0x0  nop
    ctx->pc = 0x19f6ecu;
    // NOP
label_19f6f0:
    // 0x19f6f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19f6f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19f6f4:
    // 0x19f6f4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x19f6f4u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
label_19f6f8:
    // 0x19f6f8: 0x1c600008  bgtz        $v1, . + 4 + (0x8 << 2)
label_19f6fc:
    if (ctx->pc == 0x19F6FCu) {
        ctx->pc = 0x19F6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F6F8u;
        // 0x19f6fc: 0xe620024c  swc1        $f0, 0x24C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F700u;
        goto label_19f700;
    }
    ctx->pc = 0x19F6F8u;
    {
        const bool branch_taken_0x19f6f8 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x19F6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F6F8u;
        // 0x19f6fc: 0xe620024c  swc1        $f0, 0x24C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f6f8) {
            ctx->pc = 0x19F71Cu;
            goto label_19f71c;
        }
    }
    ctx->pc = 0x19F700u;
label_19f700:
    // 0x19f700: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x19f700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_19f704:
    // 0x19f704: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x19f704u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_19f708:
    // 0x19f708: 0x10000003  b           . + 4 + (0x3 << 2)
label_19f70c:
    if (ctx->pc == 0x19F70Cu) {
        ctx->pc = 0x19F70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F708u;
        // 0x19f70c: 0xa22202f5  sb          $v0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F710u;
        goto label_19f710;
    }
    ctx->pc = 0x19F708u;
    {
        const bool branch_taken_0x19f708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F708u;
        // 0x19f70c: 0xa22202f5  sb          $v0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f708) {
            ctx->pc = 0x19F718u;
            goto label_19f718;
        }
    }
    ctx->pc = 0x19F710u;
label_19f710:
    // 0x19f710: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x19f710u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
label_19f714:
    // 0x19f714: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x19f714u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_19f718:
    // 0x19f718: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x19f718u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_19f71c:
    // 0x19f71c: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x19f71cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_19f720:
    // 0x19f720: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x19f720u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19f724:
    // 0x19f724: 0x10560053  beq         $v0, $s6, . + 4 + (0x53 << 2)
label_19f728:
    if (ctx->pc == 0x19F728u) {
        ctx->pc = 0x19F728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F724u;
        // 0x19f728: 0x27be0020  addiu       $fp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F72Cu;
        goto label_19f72c;
    }
    ctx->pc = 0x19F724u;
    {
        const bool branch_taken_0x19f724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        ctx->pc = 0x19F728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F724u;
        // 0x19f728: 0x27be0020  addiu       $fp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f724) {
            ctx->pc = 0x19F874u;
            goto label_19f874;
        }
    }
    ctx->pc = 0x19F72Cu;
label_19f72c:
    // 0x19f72c: 0x3c01c47a  lui         $at, 0xC47A
    ctx->pc = 0x19f72cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50298 << 16));
label_19f730:
    // 0x19f730: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x19f730u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_19f734:
    // 0x19f734: 0x27b70010  addiu       $s7, $sp, 0x10
    ctx->pc = 0x19f734u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_19f738:
    // 0x19f738: 0x26350700  addiu       $s5, $s1, 0x700
    ctx->pc = 0x19f738u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 1792));
label_19f73c:
    // 0x19f73c: 0x263006d0  addiu       $s0, $s1, 0x6D0
    ctx->pc = 0x19f73cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1744));
label_19f740:
    // 0x19f740: 0x263406f0  addiu       $s4, $s1, 0x6F0
    ctx->pc = 0x19f740u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 1776));
label_19f744:
    // 0x19f744: 0x263306e0  addiu       $s3, $s1, 0x6E0
    ctx->pc = 0x19f744u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 1760));
label_19f748:
    // 0x19f748: 0x263206c0  addiu       $s2, $s1, 0x6C0
    ctx->pc = 0x19f748u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1728));
label_19f74c:
    // 0x19f74c: 0x0  nop
    ctx->pc = 0x19f74cu;
    // NOP
label_19f750:
    // 0x19f750: 0xc05ce40  jal         func_173900
label_19f754:
    if (ctx->pc == 0x19F754u) {
        ctx->pc = 0x19F754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F750u;
        // 0x19f754: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F758u;
        goto label_19f758;
    }
    ctx->pc = 0x19F750u;
    SET_GPR_U32(ctx, 31, 0x19F758u);
    ctx->pc = 0x19F754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F750u;
    // 0x19f754: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173900u, 0x19F750u, 0x19F758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F758u;
label_19f758:
    // 0x19f758: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19f758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19f75c:
    // 0x19f75c: 0x5443003b  bnel        $v0, $v1, . + 4 + (0x3B << 2)
label_19f760:
    if (ctx->pc == 0x19F760u) {
        ctx->pc = 0x19F760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F75Cu;
        // 0x19f760: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F764u;
        goto label_19f764;
    }
    ctx->pc = 0x19F75Cu;
    {
        const bool branch_taken_0x19f75c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x19f75c) {
            ctx->pc = 0x19F760u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F75Cu;
            // 0x19f760: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F84Cu;
            goto label_19f84c;
        }
    }
    ctx->pc = 0x19F764u;
label_19f764:
    // 0x19f764: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x19f764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_19f768:
    // 0x19f768: 0xc0a4bd4  jal         func_292F50
label_19f76c:
    if (ctx->pc == 0x19F76Cu) {
        ctx->pc = 0x19F76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F768u;
        // 0x19f76c: 0x244464f0  addiu       $a0, $v0, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F770u;
        goto label_19f770;
    }
    ctx->pc = 0x19F768u;
    SET_GPR_U32(ctx, 31, 0x19F770u);
    ctx->pc = 0x19F76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F768u;
    // 0x19f76c: 0x244464f0  addiu       $a0, $v0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x19F768u, 0x19F770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F770u;
label_19f770:
    // 0x19f770: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x19f770u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_19f774:
    // 0x19f774: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x19f774u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_19f778:
    // 0x19f778: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x19f778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_19f77c:
    // 0x19f77c: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x19f77cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_19f780:
    // 0x19f780: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x19f780u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_19f784:
    // 0x19f784: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x19f784u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_19f788:
    // 0x19f788: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x19f788u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_19f78c:
    // 0x19f78c: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x19f78cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_19f790:
    // 0x19f790: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x19f790u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_19f794:
    // 0x19f794: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x19f794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_19f798:
    // 0x19f798: 0xda04fff0  lqc2        $vf4, -0x10($s0)
    ctx->pc = 0x19f798u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 4294967280)));
label_19f79c:
    // 0x19f79c: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x19f79cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_19f7a0:
    // 0x19f7a0: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x19f7a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_19f7a4:
    // 0x19f7a4: 0xfa04fff0  sqc2        $vf4, -0x10($s0)
    ctx->pc = 0x19f7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 4294967280), _mm_castps_si128(ctx->vu0_vf[4]));
label_19f7a8:
    // 0x19f7a8: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x19f7a8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_19f7ac:
    // 0x19f7ac: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x19f7acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_19f7b0:
    // 0x19f7b0: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x19f7b0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_19f7b4:
    // 0x19f7b4: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x19f7b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_19f7b8:
    // 0x19f7b8: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x19f7b8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_19f7bc:
    // 0x19f7bc: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x19f7bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_19f7c0:
    // 0x19f7c0: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x19f7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_19f7c4:
    // 0x19f7c4: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x19f7c4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_19f7c8:
    // 0x19f7c8: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x19f7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_19f7cc:
    // 0x19f7cc: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x19f7ccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_19f7d0:
    // 0x19f7d0: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x19f7d0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_19f7d4:
    // 0x19f7d4: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x19f7d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_19f7d8:
    // 0x19f7d8: 0xfa040000  sqc2        $vf4, 0x0($s0)
    ctx->pc = 0x19f7d8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_19f7dc:
    // 0x19f7dc: 0xc07df68  jal         func_1F7DA0
label_19f7e0:
    if (ctx->pc == 0x19F7E0u) {
        ctx->pc = 0x19F7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F7DCu;
        // 0x19f7e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F7E4u;
        goto label_19f7e4;
    }
    ctx->pc = 0x19F7DCu;
    SET_GPR_U32(ctx, 31, 0x19F7E4u);
    ctx->pc = 0x19F7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F7DCu;
    // 0x19f7e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7DA0u, 0x19F7DCu, 0x19F7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F7E4u;
label_19f7e4:
    // 0x19f7e4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x19f7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_19f7e8:
    // 0x19f7e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19f7e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f7ec:
    // 0x19f7ec: 0xc051dca  jal         func_147728
label_19f7f0:
    if (ctx->pc == 0x19F7F0u) {
        ctx->pc = 0x19F7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F7ECu;
        // 0x19f7f0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F7F4u;
        goto label_19f7f4;
    }
    ctx->pc = 0x19F7ECu;
    SET_GPR_U32(ctx, 31, 0x19F7F4u);
    ctx->pc = 0x19F7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F7ECu;
    // 0x19f7f0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147728u, 0x19F7ECu, 0x19F7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F7F4u;
label_19f7f4:
    // 0x19f7f4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x19f7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_19f7f8:
    // 0x19f7f8: 0xc051f10  jal         func_147C40
label_19f7fc:
    if (ctx->pc == 0x19F7FCu) {
        ctx->pc = 0x19F7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F7F8u;
        // 0x19f7fc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F800u;
        goto label_19f800;
    }
    ctx->pc = 0x19F7F8u;
    SET_GPR_U32(ctx, 31, 0x19F800u);
    ctx->pc = 0x19F7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F7F8u;
    // 0x19f7fc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C40u, 0x19F7F8u, 0x19F800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F800u;
label_19f800:
    // 0x19f800: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x19f800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_19f804:
    // 0x19f804: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x19f804u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19f808:
    // 0x19f808: 0xc051efe  jal         func_147BF8
label_19f80c:
    if (ctx->pc == 0x19F80Cu) {
        ctx->pc = 0x19F80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F808u;
        // 0x19f80c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F810u;
        goto label_19f810;
    }
    ctx->pc = 0x19F808u;
    SET_GPR_U32(ctx, 31, 0x19F810u);
    ctx->pc = 0x19F80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F808u;
    // 0x19f80c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147BF8u, 0x19F808u, 0x19F810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F810u;
label_19f810:
    // 0x19f810: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x19f810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_19f814:
    // 0x19f814: 0xc051d4a  jal         func_147528
label_19f818:
    if (ctx->pc == 0x19F818u) {
        ctx->pc = 0x19F818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F814u;
        // 0x19f818: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F81Cu;
        goto label_19f81c;
    }
    ctx->pc = 0x19F814u;
    SET_GPR_U32(ctx, 31, 0x19F81Cu);
    ctx->pc = 0x19F818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F814u;
    // 0x19f818: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x19F814u, 0x19F81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F81Cu;
label_19f81c:
    // 0x19f81c: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x19f81cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19f820:
    // 0x19f820: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x19f820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19f824:
    // 0x19f824: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x19f824u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_19f828:
    // 0x19f828: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x19f828u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_19f82c:
    // 0x19f82c: 0x46150834  c.lt.s      $f1, $f21
    ctx->pc = 0x19f82cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19f830:
    // 0x19f830: 0x0  nop
    ctx->pc = 0x19f830u;
    // NOP
label_19f834:
    // 0x19f834: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_19f838:
    if (ctx->pc == 0x19F838u) {
        ctx->pc = 0x19F838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F834u;
        // 0x19f838: 0xe6010014  swc1        $f1, 0x14($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F83Cu;
        goto label_19f83c;
    }
    ctx->pc = 0x19F834u;
    {
        const bool branch_taken_0x19f834 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19F838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F834u;
        // 0x19f838: 0xe6010014  swc1        $f1, 0x14($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f834) {
            ctx->pc = 0x19F848u;
            goto label_19f848;
        }
    }
    ctx->pc = 0x19F83Cu;
label_19f83c:
    // 0x19f83c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19f83cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19f840:
    // 0x19f840: 0xc05bd90  jal         func_16F640
label_19f844:
    if (ctx->pc == 0x19F844u) {
        ctx->pc = 0x19F844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F840u;
        // 0x19f844: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F848u;
        goto label_19f848;
    }
    ctx->pc = 0x19F840u;
    SET_GPR_U32(ctx, 31, 0x19F848u);
    ctx->pc = 0x19F844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F840u;
    // 0x19f844: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x19F840u, 0x19F848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F848u;
label_19f848:
    // 0x19f848: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x19f848u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_19f84c:
    // 0x19f84c: 0x26b50060  addiu       $s5, $s5, 0x60
    ctx->pc = 0x19f84cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
label_19f850:
    // 0x19f850: 0x26100060  addiu       $s0, $s0, 0x60
    ctx->pc = 0x19f850u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_19f854:
    // 0x19f854: 0x26940060  addiu       $s4, $s4, 0x60
    ctx->pc = 0x19f854u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
label_19f858:
    // 0x19f858: 0x26730060  addiu       $s3, $s3, 0x60
    ctx->pc = 0x19f858u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
label_19f85c:
    // 0x19f85c: 0x2ac2000d  slti        $v0, $s6, 0xD
    ctx->pc = 0x19f85cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)13) ? 1 : 0);
label_19f860:
    // 0x19f860: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_19f864:
    if (ctx->pc == 0x19F864u) {
        ctx->pc = 0x19F864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F860u;
        // 0x19f864: 0x26520060  addiu       $s2, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F868u;
        goto label_19f868;
    }
    ctx->pc = 0x19F860u;
    {
        const bool branch_taken_0x19f860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F860u;
        // 0x19f864: 0x26520060  addiu       $s2, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f860) {
            ctx->pc = 0x19F874u;
            goto label_19f874;
        }
    }
    ctx->pc = 0x19F868u;
label_19f868:
    // 0x19f868: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x19f868u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_19f86c:
    // 0x19f86c: 0x1456ffb8  bne         $v0, $s6, . + 4 + (-0x48 << 2)
label_19f870:
    if (ctx->pc == 0x19F870u) {
        ctx->pc = 0x19F874u;
        goto label_19f874;
    }
    ctx->pc = 0x19F86Cu;
    {
        const bool branch_taken_0x19f86c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x19f86c) {
            ctx->pc = 0x19F750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19f750;
        }
    }
    ctx->pc = 0x19F874u;
label_19f874:
    // 0x19f874: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x19f874u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_19f878:
    // 0x19f878: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x19f878u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_19f87c:
    // 0x19f87c: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x19f87cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_19f880:
    // 0x19f880: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x19f880u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_19f884:
    // 0x19f884: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x19f884u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_19f888:
    // 0x19f888: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x19f888u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_19f88c:
    // 0x19f88c: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x19f88cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_19f890:
    // 0x19f890: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x19f890u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_19f894:
    // 0x19f894: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x19f894u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_19f898:
    // 0x19f898: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x19f898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_19f89c:
    // 0x19f89c: 0xc7b50118  lwc1        $f21, 0x118($sp)
    ctx->pc = 0x19f89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_19f8a0:
    // 0x19f8a0: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x19f8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_19f8a4:
    // 0x19f8a4: 0x3e00008  jr          $ra
label_19f8a8:
    if (ctx->pc == 0x19F8A8u) {
        ctx->pc = 0x19F8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F8A4u;
        // 0x19f8a8: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F8ACu;
        goto label_19f8ac;
    }
    ctx->pc = 0x19F8A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F8A4u;
        // 0x19f8a8: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F8A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F8ACu;
label_19f8ac:
    // 0x19f8ac: 0x0  nop
    ctx->pc = 0x19f8acu;
    // NOP
    ctx->pc = 0x19f8b0u;
}
