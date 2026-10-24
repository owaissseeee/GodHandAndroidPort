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

// Function: func_0018B778
// Address: 0x18b778 - 0x18baa0
void func_0018B778_0x18b778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0018B778_0x18b778");
#endif

    switch (ctx->pc) {
        case 0x18b778u: goto label_18b778;
        case 0x18b77cu: goto label_18b77c;
        case 0x18b780u: goto label_18b780;
        case 0x18b784u: goto label_18b784;
        case 0x18b788u: goto label_18b788;
        case 0x18b78cu: goto label_18b78c;
        case 0x18b790u: goto label_18b790;
        case 0x18b794u: goto label_18b794;
        case 0x18b798u: goto label_18b798;
        case 0x18b79cu: goto label_18b79c;
        case 0x18b7a0u: goto label_18b7a0;
        case 0x18b7a4u: goto label_18b7a4;
        case 0x18b7a8u: goto label_18b7a8;
        case 0x18b7acu: goto label_18b7ac;
        case 0x18b7b0u: goto label_18b7b0;
        case 0x18b7b4u: goto label_18b7b4;
        case 0x18b7b8u: goto label_18b7b8;
        case 0x18b7bcu: goto label_18b7bc;
        case 0x18b7c0u: goto label_18b7c0;
        case 0x18b7c4u: goto label_18b7c4;
        case 0x18b7c8u: goto label_18b7c8;
        case 0x18b7ccu: goto label_18b7cc;
        case 0x18b7d0u: goto label_18b7d0;
        case 0x18b7d4u: goto label_18b7d4;
        case 0x18b7d8u: goto label_18b7d8;
        case 0x18b7dcu: goto label_18b7dc;
        case 0x18b7e0u: goto label_18b7e0;
        case 0x18b7e4u: goto label_18b7e4;
        case 0x18b7e8u: goto label_18b7e8;
        case 0x18b7ecu: goto label_18b7ec;
        case 0x18b7f0u: goto label_18b7f0;
        case 0x18b7f4u: goto label_18b7f4;
        case 0x18b7f8u: goto label_18b7f8;
        case 0x18b7fcu: goto label_18b7fc;
        case 0x18b800u: goto label_18b800;
        case 0x18b804u: goto label_18b804;
        case 0x18b808u: goto label_18b808;
        case 0x18b80cu: goto label_18b80c;
        case 0x18b810u: goto label_18b810;
        case 0x18b814u: goto label_18b814;
        case 0x18b818u: goto label_18b818;
        case 0x18b81cu: goto label_18b81c;
        case 0x18b820u: goto label_18b820;
        case 0x18b824u: goto label_18b824;
        case 0x18b828u: goto label_18b828;
        case 0x18b82cu: goto label_18b82c;
        case 0x18b830u: goto label_18b830;
        case 0x18b834u: goto label_18b834;
        case 0x18b838u: goto label_18b838;
        case 0x18b83cu: goto label_18b83c;
        case 0x18b840u: goto label_18b840;
        case 0x18b844u: goto label_18b844;
        case 0x18b848u: goto label_18b848;
        case 0x18b84cu: goto label_18b84c;
        case 0x18b850u: goto label_18b850;
        case 0x18b854u: goto label_18b854;
        case 0x18b858u: goto label_18b858;
        case 0x18b85cu: goto label_18b85c;
        case 0x18b860u: goto label_18b860;
        case 0x18b864u: goto label_18b864;
        case 0x18b868u: goto label_18b868;
        case 0x18b86cu: goto label_18b86c;
        case 0x18b870u: goto label_18b870;
        case 0x18b874u: goto label_18b874;
        case 0x18b878u: goto label_18b878;
        case 0x18b87cu: goto label_18b87c;
        case 0x18b880u: goto label_18b880;
        case 0x18b884u: goto label_18b884;
        case 0x18b888u: goto label_18b888;
        case 0x18b88cu: goto label_18b88c;
        case 0x18b890u: goto label_18b890;
        case 0x18b894u: goto label_18b894;
        case 0x18b898u: goto label_18b898;
        case 0x18b89cu: goto label_18b89c;
        case 0x18b8a0u: goto label_18b8a0;
        case 0x18b8a4u: goto label_18b8a4;
        case 0x18b8a8u: goto label_18b8a8;
        case 0x18b8acu: goto label_18b8ac;
        case 0x18b8b0u: goto label_18b8b0;
        case 0x18b8b4u: goto label_18b8b4;
        case 0x18b8b8u: goto label_18b8b8;
        case 0x18b8bcu: goto label_18b8bc;
        case 0x18b8c0u: goto label_18b8c0;
        case 0x18b8c4u: goto label_18b8c4;
        case 0x18b8c8u: goto label_18b8c8;
        case 0x18b8ccu: goto label_18b8cc;
        case 0x18b8d0u: goto label_18b8d0;
        case 0x18b8d4u: goto label_18b8d4;
        case 0x18b8d8u: goto label_18b8d8;
        case 0x18b8dcu: goto label_18b8dc;
        case 0x18b8e0u: goto label_18b8e0;
        case 0x18b8e4u: goto label_18b8e4;
        case 0x18b8e8u: goto label_18b8e8;
        case 0x18b8ecu: goto label_18b8ec;
        case 0x18b8f0u: goto label_18b8f0;
        case 0x18b8f4u: goto label_18b8f4;
        case 0x18b8f8u: goto label_18b8f8;
        case 0x18b8fcu: goto label_18b8fc;
        case 0x18b900u: goto label_18b900;
        case 0x18b904u: goto label_18b904;
        case 0x18b908u: goto label_18b908;
        case 0x18b90cu: goto label_18b90c;
        case 0x18b910u: goto label_18b910;
        case 0x18b914u: goto label_18b914;
        case 0x18b918u: goto label_18b918;
        case 0x18b91cu: goto label_18b91c;
        case 0x18b920u: goto label_18b920;
        case 0x18b924u: goto label_18b924;
        case 0x18b928u: goto label_18b928;
        case 0x18b92cu: goto label_18b92c;
        case 0x18b930u: goto label_18b930;
        case 0x18b934u: goto label_18b934;
        case 0x18b938u: goto label_18b938;
        case 0x18b93cu: goto label_18b93c;
        case 0x18b940u: goto label_18b940;
        case 0x18b944u: goto label_18b944;
        case 0x18b948u: goto label_18b948;
        case 0x18b94cu: goto label_18b94c;
        case 0x18b950u: goto label_18b950;
        case 0x18b954u: goto label_18b954;
        case 0x18b958u: goto label_18b958;
        case 0x18b95cu: goto label_18b95c;
        case 0x18b960u: goto label_18b960;
        case 0x18b964u: goto label_18b964;
        case 0x18b968u: goto label_18b968;
        case 0x18b96cu: goto label_18b96c;
        case 0x18b970u: goto label_18b970;
        case 0x18b974u: goto label_18b974;
        case 0x18b978u: goto label_18b978;
        case 0x18b97cu: goto label_18b97c;
        case 0x18b980u: goto label_18b980;
        case 0x18b984u: goto label_18b984;
        case 0x18b988u: goto label_18b988;
        case 0x18b98cu: goto label_18b98c;
        case 0x18b990u: goto label_18b990;
        case 0x18b994u: goto label_18b994;
        case 0x18b998u: goto label_18b998;
        case 0x18b99cu: goto label_18b99c;
        case 0x18b9a0u: goto label_18b9a0;
        case 0x18b9a4u: goto label_18b9a4;
        case 0x18b9a8u: goto label_18b9a8;
        case 0x18b9acu: goto label_18b9ac;
        case 0x18b9b0u: goto label_18b9b0;
        case 0x18b9b4u: goto label_18b9b4;
        case 0x18b9b8u: goto label_18b9b8;
        case 0x18b9bcu: goto label_18b9bc;
        case 0x18b9c0u: goto label_18b9c0;
        case 0x18b9c4u: goto label_18b9c4;
        case 0x18b9c8u: goto label_18b9c8;
        case 0x18b9ccu: goto label_18b9cc;
        case 0x18b9d0u: goto label_18b9d0;
        case 0x18b9d4u: goto label_18b9d4;
        case 0x18b9d8u: goto label_18b9d8;
        case 0x18b9dcu: goto label_18b9dc;
        case 0x18b9e0u: goto label_18b9e0;
        case 0x18b9e4u: goto label_18b9e4;
        case 0x18b9e8u: goto label_18b9e8;
        case 0x18b9ecu: goto label_18b9ec;
        case 0x18b9f0u: goto label_18b9f0;
        case 0x18b9f4u: goto label_18b9f4;
        case 0x18b9f8u: goto label_18b9f8;
        case 0x18b9fcu: goto label_18b9fc;
        case 0x18ba00u: goto label_18ba00;
        case 0x18ba04u: goto label_18ba04;
        case 0x18ba08u: goto label_18ba08;
        case 0x18ba0cu: goto label_18ba0c;
        case 0x18ba10u: goto label_18ba10;
        case 0x18ba14u: goto label_18ba14;
        case 0x18ba18u: goto label_18ba18;
        case 0x18ba1cu: goto label_18ba1c;
        case 0x18ba20u: goto label_18ba20;
        case 0x18ba24u: goto label_18ba24;
        case 0x18ba28u: goto label_18ba28;
        case 0x18ba2cu: goto label_18ba2c;
        case 0x18ba30u: goto label_18ba30;
        case 0x18ba34u: goto label_18ba34;
        case 0x18ba38u: goto label_18ba38;
        case 0x18ba3cu: goto label_18ba3c;
        case 0x18ba40u: goto label_18ba40;
        case 0x18ba44u: goto label_18ba44;
        case 0x18ba48u: goto label_18ba48;
        case 0x18ba4cu: goto label_18ba4c;
        case 0x18ba50u: goto label_18ba50;
        case 0x18ba54u: goto label_18ba54;
        case 0x18ba58u: goto label_18ba58;
        case 0x18ba5cu: goto label_18ba5c;
        case 0x18ba60u: goto label_18ba60;
        case 0x18ba64u: goto label_18ba64;
        case 0x18ba68u: goto label_18ba68;
        case 0x18ba6cu: goto label_18ba6c;
        case 0x18ba70u: goto label_18ba70;
        case 0x18ba74u: goto label_18ba74;
        case 0x18ba78u: goto label_18ba78;
        case 0x18ba7cu: goto label_18ba7c;
        case 0x18ba80u: goto label_18ba80;
        case 0x18ba84u: goto label_18ba84;
        case 0x18ba88u: goto label_18ba88;
        case 0x18ba8cu: goto label_18ba8c;
        case 0x18ba90u: goto label_18ba90;
        case 0x18ba94u: goto label_18ba94;
        case 0x18ba98u: goto label_18ba98;
        case 0x18ba9cu: goto label_18ba9c;
        default: break;
    }

    ctx->pc = 0x18b778u;

label_18b778:
    // 0x18b778: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x18b778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_18b77c:
    // 0x18b77c: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x18b77cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
label_18b780:
    // 0x18b780: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x18b780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
label_18b784:
    // 0x18b784: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x18b784u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18b788:
    // 0x18b788: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x18b788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
label_18b78c:
    // 0x18b78c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18b78cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18b790:
    // 0x18b790: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x18b790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
label_18b794:
    // 0x18b794: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x18b794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
label_18b798:
    // 0x18b798: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x18b798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
label_18b79c:
    // 0x18b79c: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x18b79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
label_18b7a0:
    // 0x18b7a0: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x18b7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_18b7a4:
    // 0x18b7a4: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x18b7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_18b7a8:
    // 0x18b7a8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x18b7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_18b7ac:
    // 0x18b7ac: 0xe7b50118  swc1        $f21, 0x118($sp)
    ctx->pc = 0x18b7acu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_18b7b0:
    // 0x18b7b0: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x18b7b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_18b7b4:
    // 0x18b7b4: 0x922302f5  lbu         $v1, 0x2F5($s1)
    ctx->pc = 0x18b7b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 757)));
label_18b7b8:
    // 0x18b7b8: 0x10700036  beq         $v1, $s0, . + 4 + (0x36 << 2)
label_18b7bc:
    if (ctx->pc == 0x18B7BCu) {
        ctx->pc = 0x18B7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B7B8u;
        // 0x18b7bc: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B7C0u;
        goto label_18b7c0;
    }
    ctx->pc = 0x18B7B8u;
    {
        const bool branch_taken_0x18b7b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x18B7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B7B8u;
        // 0x18b7bc: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b7b8) {
            ctx->pc = 0x18B894u;
            goto label_18b894;
        }
    }
    ctx->pc = 0x18B7C0u;
label_18b7c0:
    // 0x18b7c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_18b7c4:
    if (ctx->pc == 0x18B7C4u) {
        ctx->pc = 0x18B7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B7C0u;
        // 0x18b7c4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B7C8u;
        goto label_18b7c8;
    }
    ctx->pc = 0x18B7C0u;
    {
        const bool branch_taken_0x18b7c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B7C0u;
        // 0x18b7c4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b7c0) {
            ctx->pc = 0x18B7D8u;
            goto label_18b7d8;
        }
    }
    ctx->pc = 0x18B7C8u;
label_18b7c8:
    // 0x18b7c8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_18b7cc:
    if (ctx->pc == 0x18B7CCu) {
        ctx->pc = 0x18B7D0u;
        goto label_18b7d0;
    }
    ctx->pc = 0x18B7C8u;
    {
        const bool branch_taken_0x18b7c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b7c8) {
            ctx->pc = 0x18B7F0u;
            goto label_18b7f0;
        }
    }
    ctx->pc = 0x18B7D0u;
label_18b7d0:
    // 0x18b7d0: 0x1000004f  b           . + 4 + (0x4F << 2)
label_18b7d4:
    if (ctx->pc == 0x18B7D4u) {
        ctx->pc = 0x18B7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B7D0u;
        // 0x18b7d4: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B7D8u;
        goto label_18b7d8;
    }
    ctx->pc = 0x18B7D0u;
    {
        const bool branch_taken_0x18b7d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B7D0u;
        // 0x18b7d4: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b7d0) {
            ctx->pc = 0x18B910u;
            goto label_18b910;
        }
    }
    ctx->pc = 0x18B7D8u;
label_18b7d8:
    // 0x18b7d8: 0x10620038  beq         $v1, $v0, . + 4 + (0x38 << 2)
label_18b7dc:
    if (ctx->pc == 0x18B7DCu) {
        ctx->pc = 0x18B7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B7D8u;
        // 0x18b7dc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B7E0u;
        goto label_18b7e0;
    }
    ctx->pc = 0x18B7D8u;
    {
        const bool branch_taken_0x18b7d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18B7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B7D8u;
        // 0x18b7dc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b7d8) {
            ctx->pc = 0x18B8BCu;
            goto label_18b8bc;
        }
    }
    ctx->pc = 0x18B7E0u;
label_18b7e0:
    // 0x18b7e0: 0x50620047  beql        $v1, $v0, . + 4 + (0x47 << 2)
label_18b7e4:
    if (ctx->pc == 0x18B7E4u) {
        ctx->pc = 0x18B7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B7E0u;
        // 0x18b7e4: 0xa22302f4  sb          $v1, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B7E8u;
        goto label_18b7e8;
    }
    ctx->pc = 0x18B7E0u;
    {
        const bool branch_taken_0x18b7e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18b7e0) {
            ctx->pc = 0x18B7E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18B7E0u;
            // 0x18b7e4: 0xa22302f4  sb          $v1, 0x2F4($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B900u;
            goto label_18b900;
        }
    }
    ctx->pc = 0x18B7E8u;
label_18b7e8:
    // 0x18b7e8: 0x10000049  b           . + 4 + (0x49 << 2)
label_18b7ec:
    if (ctx->pc == 0x18B7ECu) {
        ctx->pc = 0x18B7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B7E8u;
        // 0x18b7ec: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B7F0u;
        goto label_18b7f0;
    }
    ctx->pc = 0x18B7E8u;
    {
        const bool branch_taken_0x18b7e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B7E8u;
        // 0x18b7ec: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b7e8) {
            ctx->pc = 0x18B910u;
            goto label_18b910;
        }
    }
    ctx->pc = 0x18B7F0u;
label_18b7f0:
    // 0x18b7f0: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x18b7f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_18b7f4:
    // 0x18b7f4: 0x8e230214  lw          $v1, 0x214($s1)
    ctx->pc = 0x18b7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_18b7f8:
    // 0x18b7f8: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x18b7f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_18b7fc:
    // 0x18b7fc: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x18b7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_18b800:
    // 0x18b800: 0x40f809  jalr        $v0
label_18b804:
    if (ctx->pc == 0x18B804u) {
        ctx->pc = 0x18B804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B800u;
        // 0x18b804: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B808u;
        goto label_18b808;
    }
    ctx->pc = 0x18B800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18B808u);
        ctx->pc = 0x18B804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B800u;
        // 0x18b804: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B800u, 0x18B808u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18B808u;
label_18b808:
    // 0x18b808: 0x13a20007  beq         $sp, $v0, . + 4 + (0x7 << 2)
label_18b80c:
    if (ctx->pc == 0x18B80Cu) {
        ctx->pc = 0x18B810u;
        goto label_18b810;
    }
    ctx->pc = 0x18B808u;
    {
        const bool branch_taken_0x18b808 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        if (branch_taken_0x18b808) {
            ctx->pc = 0x18B828u;
            goto label_18b828;
        }
    }
    ctx->pc = 0x18B810u;
label_18b810:
    // 0x18b810: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x18b810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18b814:
    // 0x18b814: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x18b814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_18b818:
    // 0x18b818: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x18b818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18b81c:
    // 0x18b81c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x18b81cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_18b820:
    // 0x18b820: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x18b820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18b824:
    // 0x18b824: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x18b824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_18b828:
    // 0x18b828: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18b828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_18b82c:
    // 0x18b82c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x18b82cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_18b830:
    // 0x18b830: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x18b830u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_18b834:
    // 0x18b834: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18b834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18b838:
    // 0x18b838: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x18b838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_18b83c:
    // 0x18b83c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18b83cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18b840:
    // 0x18b840: 0xc0c1a0e  jal         func_306838
label_18b844:
    if (ctx->pc == 0x18B844u) {
        ctx->pc = 0x18B844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B840u;
        // 0x18b844: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B848u;
        goto label_18b848;
    }
    ctx->pc = 0x18B840u;
    SET_GPR_U32(ctx, 31, 0x18B848u);
    ctx->pc = 0x18B844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B840u;
    // 0x18b844: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x18B840u, 0x18B848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B848u;
label_18b848:
    // 0x18b848: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x18b848u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_18b84c:
    // 0x18b84c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x18b84cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18b850:
    // 0x18b850: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x18b850u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18b854:
    // 0x18b854: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x18b854u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18b858:
    // 0x18b858: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x18b858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18b85c:
    // 0x18b85c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18b85cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18b860:
    // 0x18b860: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x18b860u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18b864:
    // 0x18b864: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x18b864u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18b868:
    // 0x18b868: 0xc0b2e92  jal         func_2CBA48
label_18b86c:
    if (ctx->pc == 0x18B86Cu) {
        ctx->pc = 0x18B86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B868u;
        // 0x18b86c: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B870u;
        goto label_18b870;
    }
    ctx->pc = 0x18B868u;
    SET_GPR_U32(ctx, 31, 0x18B870u);
    ctx->pc = 0x18B86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B868u;
    // 0x18b86c: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x18B868u, 0x18B870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B870u;
label_18b870:
    // 0x18b870: 0xc062f44  jal         func_18BD10
label_18b874:
    if (ctx->pc == 0x18B874u) {
        ctx->pc = 0x18B874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B870u;
        // 0x18b874: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B878u;
        goto label_18b878;
    }
    ctx->pc = 0x18B870u;
    SET_GPR_U32(ctx, 31, 0x18B878u);
    ctx->pc = 0x18B874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B870u;
    // 0x18b874: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18BD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD10u, 0x18B870u, 0x18B878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B878u;
label_18b878:
    // 0x18b878: 0xc06de42  jal         func_1B7908
label_18b87c:
    if (ctx->pc == 0x18B87Cu) {
        ctx->pc = 0x18B87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B878u;
        // 0x18b87c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B880u;
        goto label_18b880;
    }
    ctx->pc = 0x18B878u;
    SET_GPR_U32(ctx, 31, 0x18B880u);
    ctx->pc = 0x18B87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B878u;
    // 0x18b87c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7908u, 0x18B878u, 0x18B880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B880u;
label_18b880:
    // 0x18b880: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x18b880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_18b884:
    // 0x18b884: 0xa23002f5  sb          $s0, 0x2F5($s1)
    ctx->pc = 0x18b884u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 16));
label_18b888:
    // 0x18b888: 0xa6220654  sh          $v0, 0x654($s1)
    ctx->pc = 0x18b888u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1620), (uint16_t)GPR_U32(ctx, 2));
label_18b88c:
    // 0x18b88c: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x18b88cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_18b890:
    // 0x18b890: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x18b890u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_18b894:
    // 0x18b894: 0x96220654  lhu         $v0, 0x654($s1)
    ctx->pc = 0x18b894u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1620)));
label_18b898:
    // 0x18b898: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18b898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_18b89c:
    // 0x18b89c: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x18b89cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_18b8a0:
    // 0x18b8a0: 0x1c60001a  bgtz        $v1, . + 4 + (0x1A << 2)
label_18b8a4:
    if (ctx->pc == 0x18B8A4u) {
        ctx->pc = 0x18B8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B8A0u;
        // 0x18b8a4: 0xa6220654  sh          $v0, 0x654($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1620), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B8A8u;
        goto label_18b8a8;
    }
    ctx->pc = 0x18B8A0u;
    {
        const bool branch_taken_0x18b8a0 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x18B8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B8A0u;
        // 0x18b8a4: 0xa6220654  sh          $v0, 0x654($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1620), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b8a0) {
            ctx->pc = 0x18B90Cu;
            goto label_18b90c;
        }
    }
    ctx->pc = 0x18B8A8u;
label_18b8a8:
    // 0x18b8a8: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x18b8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_18b8ac:
    // 0x18b8ac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x18b8acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18b8b0:
    // 0x18b8b0: 0xa6220654  sh          $v0, 0x654($s1)
    ctx->pc = 0x18b8b0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1620), (uint16_t)GPR_U32(ctx, 2));
label_18b8b4:
    // 0x18b8b4: 0x10000013  b           . + 4 + (0x13 << 2)
label_18b8b8:
    if (ctx->pc == 0x18B8B8u) {
        ctx->pc = 0x18B8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B8B4u;
        // 0x18b8b8: 0xa22302f5  sb          $v1, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B8BCu;
        goto label_18b8bc;
    }
    ctx->pc = 0x18B8B4u;
    {
        const bool branch_taken_0x18b8b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B8B4u;
        // 0x18b8b8: 0xa22302f5  sb          $v1, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b8b4) {
            ctx->pc = 0x18B904u;
            goto label_18b904;
        }
    }
    ctx->pc = 0x18B8BCu;
label_18b8bc:
    // 0x18b8bc: 0x96220654  lhu         $v0, 0x654($s1)
    ctx->pc = 0x18b8bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1620)));
label_18b8c0:
    // 0x18b8c0: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x18b8c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_18b8c4:
    // 0x18b8c4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x18b8c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18b8c8:
    // 0x18b8c8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18b8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_18b8cc:
    // 0x18b8cc: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x18b8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_18b8d0:
    // 0x18b8d0: 0xa6220654  sh          $v0, 0x654($s1)
    ctx->pc = 0x18b8d0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1620), (uint16_t)GPR_U32(ctx, 2));
label_18b8d4:
    // 0x18b8d4: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x18b8d4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_18b8d8:
    // 0x18b8d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18b8d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18b8dc:
    // 0x18b8dc: 0x0  nop
    ctx->pc = 0x18b8dcu;
    // NOP
label_18b8e0:
    // 0x18b8e0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18b8e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_18b8e4:
    // 0x18b8e4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x18b8e4u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
label_18b8e8:
    // 0x18b8e8: 0x1c600008  bgtz        $v1, . + 4 + (0x8 << 2)
label_18b8ec:
    if (ctx->pc == 0x18B8ECu) {
        ctx->pc = 0x18B8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B8E8u;
        // 0x18b8ec: 0xe620024c  swc1        $f0, 0x24C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B8F0u;
        goto label_18b8f0;
    }
    ctx->pc = 0x18B8E8u;
    {
        const bool branch_taken_0x18b8e8 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x18B8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B8E8u;
        // 0x18b8ec: 0xe620024c  swc1        $f0, 0x24C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b8e8) {
            ctx->pc = 0x18B90Cu;
            goto label_18b90c;
        }
    }
    ctx->pc = 0x18B8F0u;
label_18b8f0:
    // 0x18b8f0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x18b8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_18b8f4:
    // 0x18b8f4: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x18b8f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_18b8f8:
    // 0x18b8f8: 0x10000003  b           . + 4 + (0x3 << 2)
label_18b8fc:
    if (ctx->pc == 0x18B8FCu) {
        ctx->pc = 0x18B8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B8F8u;
        // 0x18b8fc: 0xa22202f5  sb          $v0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B900u;
        goto label_18b900;
    }
    ctx->pc = 0x18B8F8u;
    {
        const bool branch_taken_0x18b8f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B8F8u;
        // 0x18b8fc: 0xa22202f5  sb          $v0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b8f8) {
            ctx->pc = 0x18B908u;
            goto label_18b908;
        }
    }
    ctx->pc = 0x18B900u;
label_18b900:
    // 0x18b900: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x18b900u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
label_18b904:
    // 0x18b904: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x18b904u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_18b908:
    // 0x18b908: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x18b908u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_18b90c:
    // 0x18b90c: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x18b90cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_18b910:
    // 0x18b910: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x18b910u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18b914:
    // 0x18b914: 0x10560053  beq         $v0, $s6, . + 4 + (0x53 << 2)
label_18b918:
    if (ctx->pc == 0x18B918u) {
        ctx->pc = 0x18B918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B914u;
        // 0x18b918: 0x27be0020  addiu       $fp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B91Cu;
        goto label_18b91c;
    }
    ctx->pc = 0x18B914u;
    {
        const bool branch_taken_0x18b914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        ctx->pc = 0x18B918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B914u;
        // 0x18b918: 0x27be0020  addiu       $fp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b914) {
            ctx->pc = 0x18BA64u;
            goto label_18ba64;
        }
    }
    ctx->pc = 0x18B91Cu;
label_18b91c:
    // 0x18b91c: 0x3c01c47a  lui         $at, 0xC47A
    ctx->pc = 0x18b91cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50298 << 16));
label_18b920:
    // 0x18b920: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x18b920u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_18b924:
    // 0x18b924: 0x27b70010  addiu       $s7, $sp, 0x10
    ctx->pc = 0x18b924u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_18b928:
    // 0x18b928: 0x26350700  addiu       $s5, $s1, 0x700
    ctx->pc = 0x18b928u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 1792));
label_18b92c:
    // 0x18b92c: 0x263006d0  addiu       $s0, $s1, 0x6D0
    ctx->pc = 0x18b92cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1744));
label_18b930:
    // 0x18b930: 0x263406f0  addiu       $s4, $s1, 0x6F0
    ctx->pc = 0x18b930u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 1776));
label_18b934:
    // 0x18b934: 0x263306e0  addiu       $s3, $s1, 0x6E0
    ctx->pc = 0x18b934u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 1760));
label_18b938:
    // 0x18b938: 0x263206c0  addiu       $s2, $s1, 0x6C0
    ctx->pc = 0x18b938u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1728));
label_18b93c:
    // 0x18b93c: 0x0  nop
    ctx->pc = 0x18b93cu;
    // NOP
label_18b940:
    // 0x18b940: 0xc05ce40  jal         func_173900
label_18b944:
    if (ctx->pc == 0x18B944u) {
        ctx->pc = 0x18B944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B940u;
        // 0x18b944: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B948u;
        goto label_18b948;
    }
    ctx->pc = 0x18B940u;
    SET_GPR_U32(ctx, 31, 0x18B948u);
    ctx->pc = 0x18B944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B940u;
    // 0x18b944: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173900u, 0x18B940u, 0x18B948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B948u;
label_18b948:
    // 0x18b948: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18b948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18b94c:
    // 0x18b94c: 0x5443003b  bnel        $v0, $v1, . + 4 + (0x3B << 2)
label_18b950:
    if (ctx->pc == 0x18B950u) {
        ctx->pc = 0x18B950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B94Cu;
        // 0x18b950: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B954u;
        goto label_18b954;
    }
    ctx->pc = 0x18B94Cu;
    {
        const bool branch_taken_0x18b94c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x18b94c) {
            ctx->pc = 0x18B950u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18B94Cu;
            // 0x18b950: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18BA3Cu;
            goto label_18ba3c;
        }
    }
    ctx->pc = 0x18B954u;
label_18b954:
    // 0x18b954: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x18b954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_18b958:
    // 0x18b958: 0xc0a4bd4  jal         func_292F50
label_18b95c:
    if (ctx->pc == 0x18B95Cu) {
        ctx->pc = 0x18B95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B958u;
        // 0x18b95c: 0x244464f0  addiu       $a0, $v0, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B960u;
        goto label_18b960;
    }
    ctx->pc = 0x18B958u;
    SET_GPR_U32(ctx, 31, 0x18B960u);
    ctx->pc = 0x18B95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B958u;
    // 0x18b95c: 0x244464f0  addiu       $a0, $v0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x18B958u, 0x18B960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B960u;
label_18b960:
    // 0x18b960: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x18b960u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_18b964:
    // 0x18b964: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x18b964u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_18b968:
    // 0x18b968: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x18b968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_18b96c:
    // 0x18b96c: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x18b96cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18b970:
    // 0x18b970: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x18b970u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_18b974:
    // 0x18b974: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x18b974u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_18b978:
    // 0x18b978: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x18b978u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_18b97c:
    // 0x18b97c: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x18b97cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_18b980:
    // 0x18b980: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x18b980u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_18b984:
    // 0x18b984: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x18b984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_18b988:
    // 0x18b988: 0xda04fff0  lqc2        $vf4, -0x10($s0)
    ctx->pc = 0x18b988u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 4294967280)));
label_18b98c:
    // 0x18b98c: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x18b98cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_18b990:
    // 0x18b990: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x18b990u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_18b994:
    // 0x18b994: 0xfa04fff0  sqc2        $vf4, -0x10($s0)
    ctx->pc = 0x18b994u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 4294967280), _mm_castps_si128(ctx->vu0_vf[4]));
label_18b998:
    // 0x18b998: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x18b998u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_18b99c:
    // 0x18b99c: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x18b99cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_18b9a0:
    // 0x18b9a0: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x18b9a0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18b9a4:
    // 0x18b9a4: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x18b9a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_18b9a8:
    // 0x18b9a8: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x18b9a8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_18b9ac:
    // 0x18b9ac: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x18b9acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_18b9b0:
    // 0x18b9b0: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x18b9b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_18b9b4:
    // 0x18b9b4: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x18b9b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_18b9b8:
    // 0x18b9b8: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x18b9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_18b9bc:
    // 0x18b9bc: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x18b9bcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_18b9c0:
    // 0x18b9c0: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x18b9c0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_18b9c4:
    // 0x18b9c4: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x18b9c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_18b9c8:
    // 0x18b9c8: 0xfa040000  sqc2        $vf4, 0x0($s0)
    ctx->pc = 0x18b9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_18b9cc:
    // 0x18b9cc: 0xc07df68  jal         func_1F7DA0
label_18b9d0:
    if (ctx->pc == 0x18B9D0u) {
        ctx->pc = 0x18B9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B9CCu;
        // 0x18b9d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B9D4u;
        goto label_18b9d4;
    }
    ctx->pc = 0x18B9CCu;
    SET_GPR_U32(ctx, 31, 0x18B9D4u);
    ctx->pc = 0x18B9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B9CCu;
    // 0x18b9d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7DA0u, 0x18B9CCu, 0x18B9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B9D4u;
label_18b9d4:
    // 0x18b9d4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x18b9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_18b9d8:
    // 0x18b9d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18b9d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18b9dc:
    // 0x18b9dc: 0xc051dca  jal         func_147728
label_18b9e0:
    if (ctx->pc == 0x18B9E0u) {
        ctx->pc = 0x18B9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B9DCu;
        // 0x18b9e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B9E4u;
        goto label_18b9e4;
    }
    ctx->pc = 0x18B9DCu;
    SET_GPR_U32(ctx, 31, 0x18B9E4u);
    ctx->pc = 0x18B9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B9DCu;
    // 0x18b9e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147728u, 0x18B9DCu, 0x18B9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B9E4u;
label_18b9e4:
    // 0x18b9e4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x18b9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_18b9e8:
    // 0x18b9e8: 0xc051f10  jal         func_147C40
label_18b9ec:
    if (ctx->pc == 0x18B9ECu) {
        ctx->pc = 0x18B9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B9E8u;
        // 0x18b9ec: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B9F0u;
        goto label_18b9f0;
    }
    ctx->pc = 0x18B9E8u;
    SET_GPR_U32(ctx, 31, 0x18B9F0u);
    ctx->pc = 0x18B9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B9E8u;
    // 0x18b9ec: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C40u, 0x18B9E8u, 0x18B9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B9F0u;
label_18b9f0:
    // 0x18b9f0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x18b9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_18b9f4:
    // 0x18b9f4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x18b9f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_18b9f8:
    // 0x18b9f8: 0xc051efe  jal         func_147BF8
label_18b9fc:
    if (ctx->pc == 0x18B9FCu) {
        ctx->pc = 0x18B9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B9F8u;
        // 0x18b9fc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BA00u;
        goto label_18ba00;
    }
    ctx->pc = 0x18B9F8u;
    SET_GPR_U32(ctx, 31, 0x18BA00u);
    ctx->pc = 0x18B9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B9F8u;
    // 0x18b9fc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147BF8u, 0x18B9F8u, 0x18BA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BA00u;
label_18ba00:
    // 0x18ba00: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x18ba00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_18ba04:
    // 0x18ba04: 0xc051d4a  jal         func_147528
label_18ba08:
    if (ctx->pc == 0x18BA08u) {
        ctx->pc = 0x18BA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BA04u;
        // 0x18ba08: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BA0Cu;
        goto label_18ba0c;
    }
    ctx->pc = 0x18BA04u;
    SET_GPR_U32(ctx, 31, 0x18BA0Cu);
    ctx->pc = 0x18BA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BA04u;
    // 0x18ba08: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x18BA04u, 0x18BA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BA0Cu;
label_18ba0c:
    // 0x18ba0c: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x18ba0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18ba10:
    // 0x18ba10: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x18ba10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18ba14:
    // 0x18ba14: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x18ba14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_18ba18:
    // 0x18ba18: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x18ba18u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_18ba1c:
    // 0x18ba1c: 0x46150834  c.lt.s      $f1, $f21
    ctx->pc = 0x18ba1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18ba20:
    // 0x18ba20: 0x0  nop
    ctx->pc = 0x18ba20u;
    // NOP
label_18ba24:
    // 0x18ba24: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_18ba28:
    if (ctx->pc == 0x18BA28u) {
        ctx->pc = 0x18BA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BA24u;
        // 0x18ba28: 0xe6010014  swc1        $f1, 0x14($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BA2Cu;
        goto label_18ba2c;
    }
    ctx->pc = 0x18BA24u;
    {
        const bool branch_taken_0x18ba24 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18BA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BA24u;
        // 0x18ba28: 0xe6010014  swc1        $f1, 0x14($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ba24) {
            ctx->pc = 0x18BA38u;
            goto label_18ba38;
        }
    }
    ctx->pc = 0x18BA2Cu;
label_18ba2c:
    // 0x18ba2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18ba2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_18ba30:
    // 0x18ba30: 0xc05bd90  jal         func_16F640
label_18ba34:
    if (ctx->pc == 0x18BA34u) {
        ctx->pc = 0x18BA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BA30u;
        // 0x18ba34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BA38u;
        goto label_18ba38;
    }
    ctx->pc = 0x18BA30u;
    SET_GPR_U32(ctx, 31, 0x18BA38u);
    ctx->pc = 0x18BA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BA30u;
    // 0x18ba34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x18BA30u, 0x18BA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BA38u;
label_18ba38:
    // 0x18ba38: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x18ba38u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_18ba3c:
    // 0x18ba3c: 0x26b50060  addiu       $s5, $s5, 0x60
    ctx->pc = 0x18ba3cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
label_18ba40:
    // 0x18ba40: 0x26100060  addiu       $s0, $s0, 0x60
    ctx->pc = 0x18ba40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_18ba44:
    // 0x18ba44: 0x26940060  addiu       $s4, $s4, 0x60
    ctx->pc = 0x18ba44u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
label_18ba48:
    // 0x18ba48: 0x26730060  addiu       $s3, $s3, 0x60
    ctx->pc = 0x18ba48u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
label_18ba4c:
    // 0x18ba4c: 0x2ac20009  slti        $v0, $s6, 0x9
    ctx->pc = 0x18ba4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)9) ? 1 : 0);
label_18ba50:
    // 0x18ba50: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_18ba54:
    if (ctx->pc == 0x18BA54u) {
        ctx->pc = 0x18BA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BA50u;
        // 0x18ba54: 0x26520060  addiu       $s2, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BA58u;
        goto label_18ba58;
    }
    ctx->pc = 0x18BA50u;
    {
        const bool branch_taken_0x18ba50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BA50u;
        // 0x18ba54: 0x26520060  addiu       $s2, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ba50) {
            ctx->pc = 0x18BA64u;
            goto label_18ba64;
        }
    }
    ctx->pc = 0x18BA58u;
label_18ba58:
    // 0x18ba58: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x18ba58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_18ba5c:
    // 0x18ba5c: 0x1456ffb8  bne         $v0, $s6, . + 4 + (-0x48 << 2)
label_18ba60:
    if (ctx->pc == 0x18BA60u) {
        ctx->pc = 0x18BA64u;
        goto label_18ba64;
    }
    ctx->pc = 0x18BA5Cu;
    {
        const bool branch_taken_0x18ba5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x18ba5c) {
            ctx->pc = 0x18B940u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18b940;
        }
    }
    ctx->pc = 0x18BA64u;
label_18ba64:
    // 0x18ba64: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x18ba64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_18ba68:
    // 0x18ba68: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x18ba68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_18ba6c:
    // 0x18ba6c: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x18ba6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_18ba70:
    // 0x18ba70: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x18ba70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_18ba74:
    // 0x18ba74: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x18ba74u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_18ba78:
    // 0x18ba78: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x18ba78u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_18ba7c:
    // 0x18ba7c: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x18ba7cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_18ba80:
    // 0x18ba80: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x18ba80u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_18ba84:
    // 0x18ba84: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x18ba84u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_18ba88:
    // 0x18ba88: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x18ba88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_18ba8c:
    // 0x18ba8c: 0xc7b50118  lwc1        $f21, 0x118($sp)
    ctx->pc = 0x18ba8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_18ba90:
    // 0x18ba90: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x18ba90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_18ba94:
    // 0x18ba94: 0x3e00008  jr          $ra
label_18ba98:
    if (ctx->pc == 0x18BA98u) {
        ctx->pc = 0x18BA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BA94u;
        // 0x18ba98: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BA9Cu;
        goto label_18ba9c;
    }
    ctx->pc = 0x18BA94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18BA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BA94u;
        // 0x18ba98: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18BA94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18BA9Cu;
label_18ba9c:
    // 0x18ba9c: 0x0  nop
    ctx->pc = 0x18ba9cu;
    // NOP
    ctx->pc = 0x18baa0u;
}
