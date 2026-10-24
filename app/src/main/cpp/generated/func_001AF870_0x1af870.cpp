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

// Function: func_001AF870
// Address: 0x1af870 - 0x1afbb0
void func_001AF870_0x1af870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001AF870_0x1af870");
#endif

    switch (ctx->pc) {
        case 0x1af870u: goto label_1af870;
        case 0x1af874u: goto label_1af874;
        case 0x1af878u: goto label_1af878;
        case 0x1af87cu: goto label_1af87c;
        case 0x1af880u: goto label_1af880;
        case 0x1af884u: goto label_1af884;
        case 0x1af888u: goto label_1af888;
        case 0x1af88cu: goto label_1af88c;
        case 0x1af890u: goto label_1af890;
        case 0x1af894u: goto label_1af894;
        case 0x1af898u: goto label_1af898;
        case 0x1af89cu: goto label_1af89c;
        case 0x1af8a0u: goto label_1af8a0;
        case 0x1af8a4u: goto label_1af8a4;
        case 0x1af8a8u: goto label_1af8a8;
        case 0x1af8acu: goto label_1af8ac;
        case 0x1af8b0u: goto label_1af8b0;
        case 0x1af8b4u: goto label_1af8b4;
        case 0x1af8b8u: goto label_1af8b8;
        case 0x1af8bcu: goto label_1af8bc;
        case 0x1af8c0u: goto label_1af8c0;
        case 0x1af8c4u: goto label_1af8c4;
        case 0x1af8c8u: goto label_1af8c8;
        case 0x1af8ccu: goto label_1af8cc;
        case 0x1af8d0u: goto label_1af8d0;
        case 0x1af8d4u: goto label_1af8d4;
        case 0x1af8d8u: goto label_1af8d8;
        case 0x1af8dcu: goto label_1af8dc;
        case 0x1af8e0u: goto label_1af8e0;
        case 0x1af8e4u: goto label_1af8e4;
        case 0x1af8e8u: goto label_1af8e8;
        case 0x1af8ecu: goto label_1af8ec;
        case 0x1af8f0u: goto label_1af8f0;
        case 0x1af8f4u: goto label_1af8f4;
        case 0x1af8f8u: goto label_1af8f8;
        case 0x1af8fcu: goto label_1af8fc;
        case 0x1af900u: goto label_1af900;
        case 0x1af904u: goto label_1af904;
        case 0x1af908u: goto label_1af908;
        case 0x1af90cu: goto label_1af90c;
        case 0x1af910u: goto label_1af910;
        case 0x1af914u: goto label_1af914;
        case 0x1af918u: goto label_1af918;
        case 0x1af91cu: goto label_1af91c;
        case 0x1af920u: goto label_1af920;
        case 0x1af924u: goto label_1af924;
        case 0x1af928u: goto label_1af928;
        case 0x1af92cu: goto label_1af92c;
        case 0x1af930u: goto label_1af930;
        case 0x1af934u: goto label_1af934;
        case 0x1af938u: goto label_1af938;
        case 0x1af93cu: goto label_1af93c;
        case 0x1af940u: goto label_1af940;
        case 0x1af944u: goto label_1af944;
        case 0x1af948u: goto label_1af948;
        case 0x1af94cu: goto label_1af94c;
        case 0x1af950u: goto label_1af950;
        case 0x1af954u: goto label_1af954;
        case 0x1af958u: goto label_1af958;
        case 0x1af95cu: goto label_1af95c;
        case 0x1af960u: goto label_1af960;
        case 0x1af964u: goto label_1af964;
        case 0x1af968u: goto label_1af968;
        case 0x1af96cu: goto label_1af96c;
        case 0x1af970u: goto label_1af970;
        case 0x1af974u: goto label_1af974;
        case 0x1af978u: goto label_1af978;
        case 0x1af97cu: goto label_1af97c;
        case 0x1af980u: goto label_1af980;
        case 0x1af984u: goto label_1af984;
        case 0x1af988u: goto label_1af988;
        case 0x1af98cu: goto label_1af98c;
        case 0x1af990u: goto label_1af990;
        case 0x1af994u: goto label_1af994;
        case 0x1af998u: goto label_1af998;
        case 0x1af99cu: goto label_1af99c;
        case 0x1af9a0u: goto label_1af9a0;
        case 0x1af9a4u: goto label_1af9a4;
        case 0x1af9a8u: goto label_1af9a8;
        case 0x1af9acu: goto label_1af9ac;
        case 0x1af9b0u: goto label_1af9b0;
        case 0x1af9b4u: goto label_1af9b4;
        case 0x1af9b8u: goto label_1af9b8;
        case 0x1af9bcu: goto label_1af9bc;
        case 0x1af9c0u: goto label_1af9c0;
        case 0x1af9c4u: goto label_1af9c4;
        case 0x1af9c8u: goto label_1af9c8;
        case 0x1af9ccu: goto label_1af9cc;
        case 0x1af9d0u: goto label_1af9d0;
        case 0x1af9d4u: goto label_1af9d4;
        case 0x1af9d8u: goto label_1af9d8;
        case 0x1af9dcu: goto label_1af9dc;
        case 0x1af9e0u: goto label_1af9e0;
        case 0x1af9e4u: goto label_1af9e4;
        case 0x1af9e8u: goto label_1af9e8;
        case 0x1af9ecu: goto label_1af9ec;
        case 0x1af9f0u: goto label_1af9f0;
        case 0x1af9f4u: goto label_1af9f4;
        case 0x1af9f8u: goto label_1af9f8;
        case 0x1af9fcu: goto label_1af9fc;
        case 0x1afa00u: goto label_1afa00;
        case 0x1afa04u: goto label_1afa04;
        case 0x1afa08u: goto label_1afa08;
        case 0x1afa0cu: goto label_1afa0c;
        case 0x1afa10u: goto label_1afa10;
        case 0x1afa14u: goto label_1afa14;
        case 0x1afa18u: goto label_1afa18;
        case 0x1afa1cu: goto label_1afa1c;
        case 0x1afa20u: goto label_1afa20;
        case 0x1afa24u: goto label_1afa24;
        case 0x1afa28u: goto label_1afa28;
        case 0x1afa2cu: goto label_1afa2c;
        case 0x1afa30u: goto label_1afa30;
        case 0x1afa34u: goto label_1afa34;
        case 0x1afa38u: goto label_1afa38;
        case 0x1afa3cu: goto label_1afa3c;
        case 0x1afa40u: goto label_1afa40;
        case 0x1afa44u: goto label_1afa44;
        case 0x1afa48u: goto label_1afa48;
        case 0x1afa4cu: goto label_1afa4c;
        case 0x1afa50u: goto label_1afa50;
        case 0x1afa54u: goto label_1afa54;
        case 0x1afa58u: goto label_1afa58;
        case 0x1afa5cu: goto label_1afa5c;
        case 0x1afa60u: goto label_1afa60;
        case 0x1afa64u: goto label_1afa64;
        case 0x1afa68u: goto label_1afa68;
        case 0x1afa6cu: goto label_1afa6c;
        case 0x1afa70u: goto label_1afa70;
        case 0x1afa74u: goto label_1afa74;
        case 0x1afa78u: goto label_1afa78;
        case 0x1afa7cu: goto label_1afa7c;
        case 0x1afa80u: goto label_1afa80;
        case 0x1afa84u: goto label_1afa84;
        case 0x1afa88u: goto label_1afa88;
        case 0x1afa8cu: goto label_1afa8c;
        case 0x1afa90u: goto label_1afa90;
        case 0x1afa94u: goto label_1afa94;
        case 0x1afa98u: goto label_1afa98;
        case 0x1afa9cu: goto label_1afa9c;
        case 0x1afaa0u: goto label_1afaa0;
        case 0x1afaa4u: goto label_1afaa4;
        case 0x1afaa8u: goto label_1afaa8;
        case 0x1afaacu: goto label_1afaac;
        case 0x1afab0u: goto label_1afab0;
        case 0x1afab4u: goto label_1afab4;
        case 0x1afab8u: goto label_1afab8;
        case 0x1afabcu: goto label_1afabc;
        case 0x1afac0u: goto label_1afac0;
        case 0x1afac4u: goto label_1afac4;
        case 0x1afac8u: goto label_1afac8;
        case 0x1afaccu: goto label_1afacc;
        case 0x1afad0u: goto label_1afad0;
        case 0x1afad4u: goto label_1afad4;
        case 0x1afad8u: goto label_1afad8;
        case 0x1afadcu: goto label_1afadc;
        case 0x1afae0u: goto label_1afae0;
        case 0x1afae4u: goto label_1afae4;
        case 0x1afae8u: goto label_1afae8;
        case 0x1afaecu: goto label_1afaec;
        case 0x1afaf0u: goto label_1afaf0;
        case 0x1afaf4u: goto label_1afaf4;
        case 0x1afaf8u: goto label_1afaf8;
        case 0x1afafcu: goto label_1afafc;
        case 0x1afb00u: goto label_1afb00;
        case 0x1afb04u: goto label_1afb04;
        case 0x1afb08u: goto label_1afb08;
        case 0x1afb0cu: goto label_1afb0c;
        case 0x1afb10u: goto label_1afb10;
        case 0x1afb14u: goto label_1afb14;
        case 0x1afb18u: goto label_1afb18;
        case 0x1afb1cu: goto label_1afb1c;
        case 0x1afb20u: goto label_1afb20;
        case 0x1afb24u: goto label_1afb24;
        case 0x1afb28u: goto label_1afb28;
        case 0x1afb2cu: goto label_1afb2c;
        case 0x1afb30u: goto label_1afb30;
        case 0x1afb34u: goto label_1afb34;
        case 0x1afb38u: goto label_1afb38;
        case 0x1afb3cu: goto label_1afb3c;
        case 0x1afb40u: goto label_1afb40;
        case 0x1afb44u: goto label_1afb44;
        case 0x1afb48u: goto label_1afb48;
        case 0x1afb4cu: goto label_1afb4c;
        case 0x1afb50u: goto label_1afb50;
        case 0x1afb54u: goto label_1afb54;
        case 0x1afb58u: goto label_1afb58;
        case 0x1afb5cu: goto label_1afb5c;
        case 0x1afb60u: goto label_1afb60;
        case 0x1afb64u: goto label_1afb64;
        case 0x1afb68u: goto label_1afb68;
        case 0x1afb6cu: goto label_1afb6c;
        case 0x1afb70u: goto label_1afb70;
        case 0x1afb74u: goto label_1afb74;
        case 0x1afb78u: goto label_1afb78;
        case 0x1afb7cu: goto label_1afb7c;
        case 0x1afb80u: goto label_1afb80;
        case 0x1afb84u: goto label_1afb84;
        case 0x1afb88u: goto label_1afb88;
        case 0x1afb8cu: goto label_1afb8c;
        case 0x1afb90u: goto label_1afb90;
        case 0x1afb94u: goto label_1afb94;
        case 0x1afb98u: goto label_1afb98;
        case 0x1afb9cu: goto label_1afb9c;
        case 0x1afba0u: goto label_1afba0;
        case 0x1afba4u: goto label_1afba4;
        case 0x1afba8u: goto label_1afba8;
        case 0x1afbacu: goto label_1afbac;
        default: break;
    }

    ctx->pc = 0x1af870u;

label_1af870:
    // 0x1af870: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x1af870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_1af874:
    // 0x1af874: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x1af874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
label_1af878:
    // 0x1af878: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x1af878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
label_1af87c:
    // 0x1af87c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1af87cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1af880:
    // 0x1af880: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x1af880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
label_1af884:
    // 0x1af884: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1af884u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1af888:
    // 0x1af888: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x1af888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
label_1af88c:
    // 0x1af88c: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x1af88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
label_1af890:
    // 0x1af890: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x1af890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
label_1af894:
    // 0x1af894: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x1af894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
label_1af898:
    // 0x1af898: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x1af898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_1af89c:
    // 0x1af89c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1af89cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1af8a0:
    // 0x1af8a0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1af8a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1af8a4:
    // 0x1af8a4: 0xe7b50118  swc1        $f21, 0x118($sp)
    ctx->pc = 0x1af8a4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_1af8a8:
    // 0x1af8a8: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x1af8a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_1af8ac:
    // 0x1af8ac: 0x922302f5  lbu         $v1, 0x2F5($s1)
    ctx->pc = 0x1af8acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 757)));
label_1af8b0:
    // 0x1af8b0: 0x1072003d  beq         $v1, $s2, . + 4 + (0x3D << 2)
label_1af8b4:
    if (ctx->pc == 0x1AF8B4u) {
        ctx->pc = 0x1AF8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF8B0u;
        // 0x1af8b4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF8B8u;
        goto label_1af8b8;
    }
    ctx->pc = 0x1AF8B0u;
    {
        const bool branch_taken_0x1af8b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x1AF8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF8B0u;
        // 0x1af8b4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af8b0) {
            ctx->pc = 0x1AF9A8u;
            goto label_1af9a8;
        }
    }
    ctx->pc = 0x1AF8B8u;
label_1af8b8:
    // 0x1af8b8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1af8bc:
    if (ctx->pc == 0x1AF8BCu) {
        ctx->pc = 0x1AF8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF8B8u;
        // 0x1af8bc: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF8C0u;
        goto label_1af8c0;
    }
    ctx->pc = 0x1AF8B8u;
    {
        const bool branch_taken_0x1af8b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af8b8) {
            ctx->pc = 0x1AF8BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AF8B8u;
            // 0x1af8bc: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AF8D0u;
            goto label_1af8d0;
        }
    }
    ctx->pc = 0x1AF8C0u;
label_1af8c0:
    // 0x1af8c0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_1af8c4:
    if (ctx->pc == 0x1AF8C4u) {
        ctx->pc = 0x1AF8C8u;
        goto label_1af8c8;
    }
    ctx->pc = 0x1AF8C0u;
    {
        const bool branch_taken_0x1af8c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af8c0) {
            ctx->pc = 0x1AF8E8u;
            goto label_1af8e8;
        }
    }
    ctx->pc = 0x1AF8C8u;
label_1af8c8:
    // 0x1af8c8: 0x10000056  b           . + 4 + (0x56 << 2)
label_1af8cc:
    if (ctx->pc == 0x1AF8CCu) {
        ctx->pc = 0x1AF8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF8C8u;
        // 0x1af8cc: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF8D0u;
        goto label_1af8d0;
    }
    ctx->pc = 0x1AF8C8u;
    {
        const bool branch_taken_0x1af8c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF8C8u;
        // 0x1af8cc: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af8c8) {
            ctx->pc = 0x1AFA24u;
            goto label_1afa24;
        }
    }
    ctx->pc = 0x1AF8D0u;
label_1af8d0:
    // 0x1af8d0: 0x1064003f  beq         $v1, $a0, . + 4 + (0x3F << 2)
label_1af8d4:
    if (ctx->pc == 0x1AF8D4u) {
        ctx->pc = 0x1AF8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF8D0u;
        // 0x1af8d4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF8D8u;
        goto label_1af8d8;
    }
    ctx->pc = 0x1AF8D0u;
    {
        const bool branch_taken_0x1af8d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1AF8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF8D0u;
        // 0x1af8d4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af8d0) {
            ctx->pc = 0x1AF9D0u;
            goto label_1af9d0;
        }
    }
    ctx->pc = 0x1AF8D8u;
label_1af8d8:
    // 0x1af8d8: 0x5062004e  beql        $v1, $v0, . + 4 + (0x4E << 2)
label_1af8dc:
    if (ctx->pc == 0x1AF8DCu) {
        ctx->pc = 0x1AF8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF8D8u;
        // 0x1af8dc: 0xa22402f4  sb          $a0, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF8E0u;
        goto label_1af8e0;
    }
    ctx->pc = 0x1AF8D8u;
    {
        const bool branch_taken_0x1af8d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1af8d8) {
            ctx->pc = 0x1AF8DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AF8D8u;
            // 0x1af8dc: 0xa22402f4  sb          $a0, 0x2F4($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AFA14u;
            goto label_1afa14;
        }
    }
    ctx->pc = 0x1AF8E0u;
label_1af8e0:
    // 0x1af8e0: 0x10000050  b           . + 4 + (0x50 << 2)
label_1af8e4:
    if (ctx->pc == 0x1AF8E4u) {
        ctx->pc = 0x1AF8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF8E0u;
        // 0x1af8e4: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF8E8u;
        goto label_1af8e8;
    }
    ctx->pc = 0x1AF8E0u;
    {
        const bool branch_taken_0x1af8e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF8E0u;
        // 0x1af8e4: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af8e0) {
            ctx->pc = 0x1AFA24u;
            goto label_1afa24;
        }
    }
    ctx->pc = 0x1AF8E8u;
label_1af8e8:
    // 0x1af8e8: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x1af8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_1af8ec:
    // 0x1af8ec: 0x8e230214  lw          $v1, 0x214($s1)
    ctx->pc = 0x1af8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_1af8f0:
    // 0x1af8f0: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x1af8f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_1af8f4:
    // 0x1af8f4: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x1af8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_1af8f8:
    // 0x1af8f8: 0x40f809  jalr        $v0
label_1af8fc:
    if (ctx->pc == 0x1AF8FCu) {
        ctx->pc = 0x1AF8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF8F8u;
        // 0x1af8fc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF900u;
        goto label_1af900;
    }
    ctx->pc = 0x1AF8F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AF900u);
        ctx->pc = 0x1AF8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF8F8u;
        // 0x1af8fc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF8F8u, 0x1AF900u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AF900u;
label_1af900:
    // 0x1af900: 0x13a20007  beq         $sp, $v0, . + 4 + (0x7 << 2)
label_1af904:
    if (ctx->pc == 0x1AF904u) {
        ctx->pc = 0x1AF908u;
        goto label_1af908;
    }
    ctx->pc = 0x1AF900u;
    {
        const bool branch_taken_0x1af900 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        if (branch_taken_0x1af900) {
            ctx->pc = 0x1AF920u;
            goto label_1af920;
        }
    }
    ctx->pc = 0x1AF908u;
label_1af908:
    // 0x1af908: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1af908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1af90c:
    // 0x1af90c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1af90cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1af910:
    // 0x1af910: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1af910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1af914:
    // 0x1af914: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1af914u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1af918:
    // 0x1af918: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1af918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1af91c:
    // 0x1af91c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1af91cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1af920:
    // 0x1af920: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1af920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1af924:
    // 0x1af924: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1af924u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1af928:
    // 0x1af928: 0x240500cc  addiu       $a1, $zero, 0xCC
    ctx->pc = 0x1af928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
label_1af92c:
    // 0x1af92c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1af92cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1af930:
    // 0x1af930: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1af930u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1af934:
    // 0x1af934: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1af934u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1af938:
    // 0x1af938: 0xc0c1a0e  jal         func_306838
label_1af93c:
    if (ctx->pc == 0x1AF93Cu) {
        ctx->pc = 0x1AF93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF938u;
        // 0x1af93c: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF940u;
        goto label_1af940;
    }
    ctx->pc = 0x1AF938u;
    SET_GPR_U32(ctx, 31, 0x1AF940u);
    ctx->pc = 0x1AF93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF938u;
    // 0x1af93c: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x1AF938u, 0x1AF940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF940u;
label_1af940:
    // 0x1af940: 0x8e250af4  lw          $a1, 0xAF4($s1)
    ctx->pc = 0x1af940u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2804)));
label_1af944:
    // 0x1af944: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
label_1af948:
    if (ctx->pc == 0x1AF948u) {
        ctx->pc = 0x1AF948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF944u;
        // 0x1af948: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF94Cu;
        goto label_1af94c;
    }
    ctx->pc = 0x1AF944u;
    {
        const bool branch_taken_0x1af944 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF944u;
        // 0x1af948: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af944) {
            ctx->pc = 0x1AF958u;
            goto label_1af958;
        }
    }
    ctx->pc = 0x1AF94Cu;
label_1af94c:
    // 0x1af94c: 0xc0b2ee8  jal         func_2CBBA0
label_1af950:
    if (ctx->pc == 0x1AF950u) {
        ctx->pc = 0x1AF950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF94Cu;
        // 0x1af950: 0x2604ee00  addiu       $a0, $s0, -0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF954u;
        goto label_1af954;
    }
    ctx->pc = 0x1AF94Cu;
    SET_GPR_U32(ctx, 31, 0x1AF954u);
    ctx->pc = 0x1AF950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF94Cu;
    // 0x1af950: 0x2604ee00  addiu       $a0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBBA0u, 0x1AF94Cu, 0x1AF954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF954u;
label_1af954:
    // 0x1af954: 0xae200af4  sw          $zero, 0xAF4($s1)
    ctx->pc = 0x1af954u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2804), GPR_U32(ctx, 0));
label_1af958:
    // 0x1af958: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1af958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1af95c:
    // 0x1af95c: 0x24060056  addiu       $a2, $zero, 0x56
    ctx->pc = 0x1af95cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
label_1af960:
    // 0x1af960: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1af960u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1af964:
    // 0x1af964: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1af964u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1af968:
    // 0x1af968: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1af968u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1af96c:
    // 0x1af96c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1af96cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1af970:
    // 0x1af970: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1af970u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1af974:
    // 0x1af974: 0xc0b2e92  jal         func_2CBA48
label_1af978:
    if (ctx->pc == 0x1AF978u) {
        ctx->pc = 0x1AF978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF974u;
        // 0x1af978: 0x2604ee00  addiu       $a0, $s0, -0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF97Cu;
        goto label_1af97c;
    }
    ctx->pc = 0x1AF974u;
    SET_GPR_U32(ctx, 31, 0x1AF97Cu);
    ctx->pc = 0x1AF978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF974u;
    // 0x1af978: 0x2604ee00  addiu       $a0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1AF974u, 0x1AF97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF97Cu;
label_1af97c:
    // 0x1af97c: 0xc06c054  jal         func_1B0150
label_1af980:
    if (ctx->pc == 0x1AF980u) {
        ctx->pc = 0x1AF980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF97Cu;
        // 0x1af980: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF984u;
        goto label_1af984;
    }
    ctx->pc = 0x1AF97Cu;
    SET_GPR_U32(ctx, 31, 0x1AF984u);
    ctx->pc = 0x1AF980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF97Cu;
    // 0x1af980: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0150u, 0x1AF97Cu, 0x1AF984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF984u;
label_1af984:
    // 0x1af984: 0xc06bf84  jal         func_1AFE10
label_1af988:
    if (ctx->pc == 0x1AF988u) {
        ctx->pc = 0x1AF988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF984u;
        // 0x1af988: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF98Cu;
        goto label_1af98c;
    }
    ctx->pc = 0x1AF984u;
    SET_GPR_U32(ctx, 31, 0x1AF98Cu);
    ctx->pc = 0x1AF988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF984u;
    // 0x1af988: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFE10u, 0x1AF984u, 0x1AF98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF98Cu;
label_1af98c:
    // 0x1af98c: 0xc06de42  jal         func_1B7908
label_1af990:
    if (ctx->pc == 0x1AF990u) {
        ctx->pc = 0x1AF990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF98Cu;
        // 0x1af990: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF994u;
        goto label_1af994;
    }
    ctx->pc = 0x1AF98Cu;
    SET_GPR_U32(ctx, 31, 0x1AF994u);
    ctx->pc = 0x1AF990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF98Cu;
    // 0x1af990: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7908u, 0x1AF98Cu, 0x1AF994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF994u;
label_1af994:
    // 0x1af994: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1af994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1af998:
    // 0x1af998: 0xa23202f5  sb          $s2, 0x2F5($s1)
    ctx->pc = 0x1af998u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 18));
label_1af99c:
    // 0x1af99c: 0xa6220608  sh          $v0, 0x608($s1)
    ctx->pc = 0x1af99cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1544), (uint16_t)GPR_U32(ctx, 2));
label_1af9a0:
    // 0x1af9a0: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x1af9a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_1af9a4:
    // 0x1af9a4: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x1af9a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_1af9a8:
    // 0x1af9a8: 0x96220608  lhu         $v0, 0x608($s1)
    ctx->pc = 0x1af9a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1544)));
label_1af9ac:
    // 0x1af9ac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1af9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1af9b0:
    // 0x1af9b0: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1af9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1af9b4:
    // 0x1af9b4: 0x1c60001a  bgtz        $v1, . + 4 + (0x1A << 2)
label_1af9b8:
    if (ctx->pc == 0x1AF9B8u) {
        ctx->pc = 0x1AF9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF9B4u;
        // 0x1af9b8: 0xa6220608  sh          $v0, 0x608($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1544), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF9BCu;
        goto label_1af9bc;
    }
    ctx->pc = 0x1AF9B4u;
    {
        const bool branch_taken_0x1af9b4 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x1AF9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF9B4u;
        // 0x1af9b8: 0xa6220608  sh          $v0, 0x608($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1544), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af9b4) {
            ctx->pc = 0x1AFA20u;
            goto label_1afa20;
        }
    }
    ctx->pc = 0x1AF9BCu;
label_1af9bc:
    // 0x1af9bc: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1af9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1af9c0:
    // 0x1af9c0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1af9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1af9c4:
    // 0x1af9c4: 0xa6220608  sh          $v0, 0x608($s1)
    ctx->pc = 0x1af9c4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1544), (uint16_t)GPR_U32(ctx, 2));
label_1af9c8:
    // 0x1af9c8: 0x10000013  b           . + 4 + (0x13 << 2)
label_1af9cc:
    if (ctx->pc == 0x1AF9CCu) {
        ctx->pc = 0x1AF9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF9C8u;
        // 0x1af9cc: 0xa22302f5  sb          $v1, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF9D0u;
        goto label_1af9d0;
    }
    ctx->pc = 0x1AF9C8u;
    {
        const bool branch_taken_0x1af9c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF9C8u;
        // 0x1af9cc: 0xa22302f5  sb          $v1, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af9c8) {
            ctx->pc = 0x1AFA18u;
            goto label_1afa18;
        }
    }
    ctx->pc = 0x1AF9D0u;
label_1af9d0:
    // 0x1af9d0: 0x96220608  lhu         $v0, 0x608($s1)
    ctx->pc = 0x1af9d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1544)));
label_1af9d4:
    // 0x1af9d4: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x1af9d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_1af9d8:
    // 0x1af9d8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1af9d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1af9dc:
    // 0x1af9dc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1af9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1af9e0:
    // 0x1af9e0: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1af9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1af9e4:
    // 0x1af9e4: 0xa6220608  sh          $v0, 0x608($s1)
    ctx->pc = 0x1af9e4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1544), (uint16_t)GPR_U32(ctx, 2));
label_1af9e8:
    // 0x1af9e8: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x1af9e8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_1af9ec:
    // 0x1af9ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1af9ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1af9f0:
    // 0x1af9f0: 0x0  nop
    ctx->pc = 0x1af9f0u;
    // NOP
label_1af9f4:
    // 0x1af9f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1af9f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1af9f8:
    // 0x1af9f8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1af9f8u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
label_1af9fc:
    // 0x1af9fc: 0x1c600008  bgtz        $v1, . + 4 + (0x8 << 2)
label_1afa00:
    if (ctx->pc == 0x1AFA00u) {
        ctx->pc = 0x1AFA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF9FCu;
        // 0x1afa00: 0xe620024c  swc1        $f0, 0x24C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFA04u;
        goto label_1afa04;
    }
    ctx->pc = 0x1AF9FCu;
    {
        const bool branch_taken_0x1af9fc = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x1AFA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF9FCu;
        // 0x1afa00: 0xe620024c  swc1        $f0, 0x24C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af9fc) {
            ctx->pc = 0x1AFA20u;
            goto label_1afa20;
        }
    }
    ctx->pc = 0x1AFA04u;
label_1afa04:
    // 0x1afa04: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1afa04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1afa08:
    // 0x1afa08: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x1afa08u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_1afa0c:
    // 0x1afa0c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1afa10:
    if (ctx->pc == 0x1AFA10u) {
        ctx->pc = 0x1AFA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFA0Cu;
        // 0x1afa10: 0xa22202f5  sb          $v0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFA14u;
        goto label_1afa14;
    }
    ctx->pc = 0x1AFA0Cu;
    {
        const bool branch_taken_0x1afa0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFA0Cu;
        // 0x1afa10: 0xa22202f5  sb          $v0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afa0c) {
            ctx->pc = 0x1AFA1Cu;
            goto label_1afa1c;
        }
    }
    ctx->pc = 0x1AFA14u;
label_1afa14:
    // 0x1afa14: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x1afa14u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
label_1afa18:
    // 0x1afa18: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x1afa18u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_1afa1c:
    // 0x1afa1c: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x1afa1cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_1afa20:
    // 0x1afa20: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x1afa20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_1afa24:
    // 0x1afa24: 0x24160002  addiu       $s6, $zero, 0x2
    ctx->pc = 0x1afa24u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1afa28:
    // 0x1afa28: 0x10560052  beq         $v0, $s6, . + 4 + (0x52 << 2)
label_1afa2c:
    if (ctx->pc == 0x1AFA2Cu) {
        ctx->pc = 0x1AFA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFA28u;
        // 0x1afa2c: 0x27be0020  addiu       $fp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFA30u;
        goto label_1afa30;
    }
    ctx->pc = 0x1AFA28u;
    {
        const bool branch_taken_0x1afa28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        ctx->pc = 0x1AFA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFA28u;
        // 0x1afa2c: 0x27be0020  addiu       $fp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afa28) {
            ctx->pc = 0x1AFB74u;
            goto label_1afb74;
        }
    }
    ctx->pc = 0x1AFA30u;
label_1afa30:
    // 0x1afa30: 0x3c01c47a  lui         $at, 0xC47A
    ctx->pc = 0x1afa30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50298 << 16));
label_1afa34:
    // 0x1afa34: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1afa34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1afa38:
    // 0x1afa38: 0x27b70010  addiu       $s7, $sp, 0x10
    ctx->pc = 0x1afa38u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1afa3c:
    // 0x1afa3c: 0x26350720  addiu       $s5, $s1, 0x720
    ctx->pc = 0x1afa3cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 1824));
label_1afa40:
    // 0x1afa40: 0x263006f0  addiu       $s0, $s1, 0x6F0
    ctx->pc = 0x1afa40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1776));
label_1afa44:
    // 0x1afa44: 0x26340710  addiu       $s4, $s1, 0x710
    ctx->pc = 0x1afa44u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 1808));
label_1afa48:
    // 0x1afa48: 0x26330700  addiu       $s3, $s1, 0x700
    ctx->pc = 0x1afa48u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 1792));
label_1afa4c:
    // 0x1afa4c: 0x263206e0  addiu       $s2, $s1, 0x6E0
    ctx->pc = 0x1afa4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1760));
label_1afa50:
    // 0x1afa50: 0xc05ce40  jal         func_173900
label_1afa54:
    if (ctx->pc == 0x1AFA54u) {
        ctx->pc = 0x1AFA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFA50u;
        // 0x1afa54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFA58u;
        goto label_1afa58;
    }
    ctx->pc = 0x1AFA50u;
    SET_GPR_U32(ctx, 31, 0x1AFA58u);
    ctx->pc = 0x1AFA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFA50u;
    // 0x1afa54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173900u, 0x1AFA50u, 0x1AFA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFA58u;
label_1afa58:
    // 0x1afa58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1afa58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1afa5c:
    // 0x1afa5c: 0x5443003b  bnel        $v0, $v1, . + 4 + (0x3B << 2)
label_1afa60:
    if (ctx->pc == 0x1AFA60u) {
        ctx->pc = 0x1AFA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFA5Cu;
        // 0x1afa60: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFA64u;
        goto label_1afa64;
    }
    ctx->pc = 0x1AFA5Cu;
    {
        const bool branch_taken_0x1afa5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1afa5c) {
            ctx->pc = 0x1AFA60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AFA5Cu;
            // 0x1afa60: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AFB4Cu;
            goto label_1afb4c;
        }
    }
    ctx->pc = 0x1AFA64u;
label_1afa64:
    // 0x1afa64: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x1afa64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_1afa68:
    // 0x1afa68: 0xc0a4bd4  jal         func_292F50
label_1afa6c:
    if (ctx->pc == 0x1AFA6Cu) {
        ctx->pc = 0x1AFA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFA68u;
        // 0x1afa6c: 0x244464f0  addiu       $a0, $v0, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFA70u;
        goto label_1afa70;
    }
    ctx->pc = 0x1AFA68u;
    SET_GPR_U32(ctx, 31, 0x1AFA70u);
    ctx->pc = 0x1AFA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFA68u;
    // 0x1afa6c: 0x244464f0  addiu       $a0, $v0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x1AFA68u, 0x1AFA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFA70u;
label_1afa70:
    // 0x1afa70: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1afa70u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1afa74:
    // 0x1afa74: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x1afa74u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_1afa78:
    // 0x1afa78: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1afa78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_1afa7c:
    // 0x1afa7c: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1afa7cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1afa80:
    // 0x1afa80: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x1afa80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_1afa84:
    // 0x1afa84: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1afa84u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_1afa88:
    // 0x1afa88: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1afa88u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1afa8c:
    // 0x1afa8c: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1afa8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_1afa90:
    // 0x1afa90: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x1afa90u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_1afa94:
    // 0x1afa94: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1afa94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1afa98:
    // 0x1afa98: 0xda04fff0  lqc2        $vf4, -0x10($s0)
    ctx->pc = 0x1afa98u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 4294967280)));
label_1afa9c:
    // 0x1afa9c: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x1afa9cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_1afaa0:
    // 0x1afaa0: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1afaa0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1afaa4:
    // 0x1afaa4: 0xfa04fff0  sqc2        $vf4, -0x10($s0)
    ctx->pc = 0x1afaa4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 4294967280), _mm_castps_si128(ctx->vu0_vf[4]));
label_1afaa8:
    // 0x1afaa8: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x1afaa8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_1afaac:
    // 0x1afaac: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1afaacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_1afab0:
    // 0x1afab0: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1afab0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1afab4:
    // 0x1afab4: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x1afab4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_1afab8:
    // 0x1afab8: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1afab8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_1afabc:
    // 0x1afabc: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1afabcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1afac0:
    // 0x1afac0: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1afac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_1afac4:
    // 0x1afac4: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x1afac4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_1afac8:
    // 0x1afac8: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1afac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1afacc:
    // 0x1afacc: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1afaccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_1afad0:
    // 0x1afad0: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x1afad0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_1afad4:
    // 0x1afad4: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1afad4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1afad8:
    // 0x1afad8: 0xfa040000  sqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1afad8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_1afadc:
    // 0x1afadc: 0xc07df68  jal         func_1F7DA0
label_1afae0:
    if (ctx->pc == 0x1AFAE0u) {
        ctx->pc = 0x1AFAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFADCu;
        // 0x1afae0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFAE4u;
        goto label_1afae4;
    }
    ctx->pc = 0x1AFADCu;
    SET_GPR_U32(ctx, 31, 0x1AFAE4u);
    ctx->pc = 0x1AFAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFADCu;
    // 0x1afae0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7DA0u, 0x1AFADCu, 0x1AFAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFAE4u;
label_1afae4:
    // 0x1afae4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1afae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1afae8:
    // 0x1afae8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1afae8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1afaec:
    // 0x1afaec: 0xc051dca  jal         func_147728
label_1afaf0:
    if (ctx->pc == 0x1AFAF0u) {
        ctx->pc = 0x1AFAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFAECu;
        // 0x1afaf0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFAF4u;
        goto label_1afaf4;
    }
    ctx->pc = 0x1AFAECu;
    SET_GPR_U32(ctx, 31, 0x1AFAF4u);
    ctx->pc = 0x1AFAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFAECu;
    // 0x1afaf0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147728u, 0x1AFAECu, 0x1AFAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFAF4u;
label_1afaf4:
    // 0x1afaf4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1afaf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1afaf8:
    // 0x1afaf8: 0xc051f10  jal         func_147C40
label_1afafc:
    if (ctx->pc == 0x1AFAFCu) {
        ctx->pc = 0x1AFAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFAF8u;
        // 0x1afafc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFB00u;
        goto label_1afb00;
    }
    ctx->pc = 0x1AFAF8u;
    SET_GPR_U32(ctx, 31, 0x1AFB00u);
    ctx->pc = 0x1AFAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFAF8u;
    // 0x1afafc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C40u, 0x1AFAF8u, 0x1AFB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFB00u;
label_1afb00:
    // 0x1afb00: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1afb00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1afb04:
    // 0x1afb04: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1afb04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1afb08:
    // 0x1afb08: 0xc051efe  jal         func_147BF8
label_1afb0c:
    if (ctx->pc == 0x1AFB0Cu) {
        ctx->pc = 0x1AFB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFB08u;
        // 0x1afb0c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFB10u;
        goto label_1afb10;
    }
    ctx->pc = 0x1AFB08u;
    SET_GPR_U32(ctx, 31, 0x1AFB10u);
    ctx->pc = 0x1AFB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFB08u;
    // 0x1afb0c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147BF8u, 0x1AFB08u, 0x1AFB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFB10u;
label_1afb10:
    // 0x1afb10: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x1afb10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_1afb14:
    // 0x1afb14: 0xc051d4a  jal         func_147528
label_1afb18:
    if (ctx->pc == 0x1AFB18u) {
        ctx->pc = 0x1AFB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFB14u;
        // 0x1afb18: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFB1Cu;
        goto label_1afb1c;
    }
    ctx->pc = 0x1AFB14u;
    SET_GPR_U32(ctx, 31, 0x1AFB1Cu);
    ctx->pc = 0x1AFB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFB14u;
    // 0x1afb18: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x1AFB14u, 0x1AFB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFB1Cu;
label_1afb1c:
    // 0x1afb1c: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x1afb1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1afb20:
    // 0x1afb20: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x1afb20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1afb24:
    // 0x1afb24: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1afb24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1afb28:
    // 0x1afb28: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1afb28u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1afb2c:
    // 0x1afb2c: 0x46150834  c.lt.s      $f1, $f21
    ctx->pc = 0x1afb2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1afb30:
    // 0x1afb30: 0x0  nop
    ctx->pc = 0x1afb30u;
    // NOP
label_1afb34:
    // 0x1afb34: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_1afb38:
    if (ctx->pc == 0x1AFB38u) {
        ctx->pc = 0x1AFB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFB34u;
        // 0x1afb38: 0xe6010014  swc1        $f1, 0x14($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFB3Cu;
        goto label_1afb3c;
    }
    ctx->pc = 0x1AFB34u;
    {
        const bool branch_taken_0x1afb34 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AFB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFB34u;
        // 0x1afb38: 0xe6010014  swc1        $f1, 0x14($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afb34) {
            ctx->pc = 0x1AFB48u;
            goto label_1afb48;
        }
    }
    ctx->pc = 0x1AFB3Cu;
label_1afb3c:
    // 0x1afb3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1afb3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1afb40:
    // 0x1afb40: 0xc05bd90  jal         func_16F640
label_1afb44:
    if (ctx->pc == 0x1AFB44u) {
        ctx->pc = 0x1AFB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFB40u;
        // 0x1afb44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFB48u;
        goto label_1afb48;
    }
    ctx->pc = 0x1AFB40u;
    SET_GPR_U32(ctx, 31, 0x1AFB48u);
    ctx->pc = 0x1AFB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFB40u;
    // 0x1afb44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x1AFB40u, 0x1AFB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFB48u;
label_1afb48:
    // 0x1afb48: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1afb48u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_1afb4c:
    // 0x1afb4c: 0x26b50060  addiu       $s5, $s5, 0x60
    ctx->pc = 0x1afb4cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
label_1afb50:
    // 0x1afb50: 0x26100060  addiu       $s0, $s0, 0x60
    ctx->pc = 0x1afb50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_1afb54:
    // 0x1afb54: 0x26940060  addiu       $s4, $s4, 0x60
    ctx->pc = 0x1afb54u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
label_1afb58:
    // 0x1afb58: 0x26730060  addiu       $s3, $s3, 0x60
    ctx->pc = 0x1afb58u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
label_1afb5c:
    // 0x1afb5c: 0x2ac20009  slti        $v0, $s6, 0x9
    ctx->pc = 0x1afb5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)9) ? 1 : 0);
label_1afb60:
    // 0x1afb60: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1afb64:
    if (ctx->pc == 0x1AFB64u) {
        ctx->pc = 0x1AFB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFB60u;
        // 0x1afb64: 0x26520060  addiu       $s2, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFB68u;
        goto label_1afb68;
    }
    ctx->pc = 0x1AFB60u;
    {
        const bool branch_taken_0x1afb60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFB60u;
        // 0x1afb64: 0x26520060  addiu       $s2, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afb60) {
            ctx->pc = 0x1AFB74u;
            goto label_1afb74;
        }
    }
    ctx->pc = 0x1AFB68u;
label_1afb68:
    // 0x1afb68: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x1afb68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_1afb6c:
    // 0x1afb6c: 0x1456ffb8  bne         $v0, $s6, . + 4 + (-0x48 << 2)
label_1afb70:
    if (ctx->pc == 0x1AFB70u) {
        ctx->pc = 0x1AFB74u;
        goto label_1afb74;
    }
    ctx->pc = 0x1AFB6Cu;
    {
        const bool branch_taken_0x1afb6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x1afb6c) {
            ctx->pc = 0x1AFA50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1afa50;
        }
    }
    ctx->pc = 0x1AFB74u;
label_1afb74:
    // 0x1afb74: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x1afb74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_1afb78:
    // 0x1afb78: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x1afb78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_1afb7c:
    // 0x1afb7c: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x1afb7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_1afb80:
    // 0x1afb80: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x1afb80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1afb84:
    // 0x1afb84: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x1afb84u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1afb88:
    // 0x1afb88: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x1afb88u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1afb8c:
    // 0x1afb8c: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x1afb8cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1afb90:
    // 0x1afb90: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x1afb90u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1afb94:
    // 0x1afb94: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1afb94u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1afb98:
    // 0x1afb98: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1afb98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1afb9c:
    // 0x1afb9c: 0xc7b50118  lwc1        $f21, 0x118($sp)
    ctx->pc = 0x1afb9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1afba0:
    // 0x1afba0: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x1afba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1afba4:
    // 0x1afba4: 0x3e00008  jr          $ra
label_1afba8:
    if (ctx->pc == 0x1AFBA8u) {
        ctx->pc = 0x1AFBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFBA4u;
        // 0x1afba8: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFBACu;
        goto label_1afbac;
    }
    ctx->pc = 0x1AFBA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AFBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFBA4u;
        // 0x1afba8: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AFBA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AFBACu;
label_1afbac:
    // 0x1afbac: 0x0  nop
    ctx->pc = 0x1afbacu;
    // NOP
    ctx->pc = 0x1afbb0u;
}
