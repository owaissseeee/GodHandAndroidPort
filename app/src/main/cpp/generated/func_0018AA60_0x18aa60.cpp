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

// Function: func_0018AA60
// Address: 0x18aa60 - 0x18ad88
void func_0018AA60_0x18aa60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0018AA60_0x18aa60");
#endif

    switch (ctx->pc) {
        case 0x18aa60u: goto label_18aa60;
        case 0x18aa64u: goto label_18aa64;
        case 0x18aa68u: goto label_18aa68;
        case 0x18aa6cu: goto label_18aa6c;
        case 0x18aa70u: goto label_18aa70;
        case 0x18aa74u: goto label_18aa74;
        case 0x18aa78u: goto label_18aa78;
        case 0x18aa7cu: goto label_18aa7c;
        case 0x18aa80u: goto label_18aa80;
        case 0x18aa84u: goto label_18aa84;
        case 0x18aa88u: goto label_18aa88;
        case 0x18aa8cu: goto label_18aa8c;
        case 0x18aa90u: goto label_18aa90;
        case 0x18aa94u: goto label_18aa94;
        case 0x18aa98u: goto label_18aa98;
        case 0x18aa9cu: goto label_18aa9c;
        case 0x18aaa0u: goto label_18aaa0;
        case 0x18aaa4u: goto label_18aaa4;
        case 0x18aaa8u: goto label_18aaa8;
        case 0x18aaacu: goto label_18aaac;
        case 0x18aab0u: goto label_18aab0;
        case 0x18aab4u: goto label_18aab4;
        case 0x18aab8u: goto label_18aab8;
        case 0x18aabcu: goto label_18aabc;
        case 0x18aac0u: goto label_18aac0;
        case 0x18aac4u: goto label_18aac4;
        case 0x18aac8u: goto label_18aac8;
        case 0x18aaccu: goto label_18aacc;
        case 0x18aad0u: goto label_18aad0;
        case 0x18aad4u: goto label_18aad4;
        case 0x18aad8u: goto label_18aad8;
        case 0x18aadcu: goto label_18aadc;
        case 0x18aae0u: goto label_18aae0;
        case 0x18aae4u: goto label_18aae4;
        case 0x18aae8u: goto label_18aae8;
        case 0x18aaecu: goto label_18aaec;
        case 0x18aaf0u: goto label_18aaf0;
        case 0x18aaf4u: goto label_18aaf4;
        case 0x18aaf8u: goto label_18aaf8;
        case 0x18aafcu: goto label_18aafc;
        case 0x18ab00u: goto label_18ab00;
        case 0x18ab04u: goto label_18ab04;
        case 0x18ab08u: goto label_18ab08;
        case 0x18ab0cu: goto label_18ab0c;
        case 0x18ab10u: goto label_18ab10;
        case 0x18ab14u: goto label_18ab14;
        case 0x18ab18u: goto label_18ab18;
        case 0x18ab1cu: goto label_18ab1c;
        case 0x18ab20u: goto label_18ab20;
        case 0x18ab24u: goto label_18ab24;
        case 0x18ab28u: goto label_18ab28;
        case 0x18ab2cu: goto label_18ab2c;
        case 0x18ab30u: goto label_18ab30;
        case 0x18ab34u: goto label_18ab34;
        case 0x18ab38u: goto label_18ab38;
        case 0x18ab3cu: goto label_18ab3c;
        case 0x18ab40u: goto label_18ab40;
        case 0x18ab44u: goto label_18ab44;
        case 0x18ab48u: goto label_18ab48;
        case 0x18ab4cu: goto label_18ab4c;
        case 0x18ab50u: goto label_18ab50;
        case 0x18ab54u: goto label_18ab54;
        case 0x18ab58u: goto label_18ab58;
        case 0x18ab5cu: goto label_18ab5c;
        case 0x18ab60u: goto label_18ab60;
        case 0x18ab64u: goto label_18ab64;
        case 0x18ab68u: goto label_18ab68;
        case 0x18ab6cu: goto label_18ab6c;
        case 0x18ab70u: goto label_18ab70;
        case 0x18ab74u: goto label_18ab74;
        case 0x18ab78u: goto label_18ab78;
        case 0x18ab7cu: goto label_18ab7c;
        case 0x18ab80u: goto label_18ab80;
        case 0x18ab84u: goto label_18ab84;
        case 0x18ab88u: goto label_18ab88;
        case 0x18ab8cu: goto label_18ab8c;
        case 0x18ab90u: goto label_18ab90;
        case 0x18ab94u: goto label_18ab94;
        case 0x18ab98u: goto label_18ab98;
        case 0x18ab9cu: goto label_18ab9c;
        case 0x18aba0u: goto label_18aba0;
        case 0x18aba4u: goto label_18aba4;
        case 0x18aba8u: goto label_18aba8;
        case 0x18abacu: goto label_18abac;
        case 0x18abb0u: goto label_18abb0;
        case 0x18abb4u: goto label_18abb4;
        case 0x18abb8u: goto label_18abb8;
        case 0x18abbcu: goto label_18abbc;
        case 0x18abc0u: goto label_18abc0;
        case 0x18abc4u: goto label_18abc4;
        case 0x18abc8u: goto label_18abc8;
        case 0x18abccu: goto label_18abcc;
        case 0x18abd0u: goto label_18abd0;
        case 0x18abd4u: goto label_18abd4;
        case 0x18abd8u: goto label_18abd8;
        case 0x18abdcu: goto label_18abdc;
        case 0x18abe0u: goto label_18abe0;
        case 0x18abe4u: goto label_18abe4;
        case 0x18abe8u: goto label_18abe8;
        case 0x18abecu: goto label_18abec;
        case 0x18abf0u: goto label_18abf0;
        case 0x18abf4u: goto label_18abf4;
        case 0x18abf8u: goto label_18abf8;
        case 0x18abfcu: goto label_18abfc;
        case 0x18ac00u: goto label_18ac00;
        case 0x18ac04u: goto label_18ac04;
        case 0x18ac08u: goto label_18ac08;
        case 0x18ac0cu: goto label_18ac0c;
        case 0x18ac10u: goto label_18ac10;
        case 0x18ac14u: goto label_18ac14;
        case 0x18ac18u: goto label_18ac18;
        case 0x18ac1cu: goto label_18ac1c;
        case 0x18ac20u: goto label_18ac20;
        case 0x18ac24u: goto label_18ac24;
        case 0x18ac28u: goto label_18ac28;
        case 0x18ac2cu: goto label_18ac2c;
        case 0x18ac30u: goto label_18ac30;
        case 0x18ac34u: goto label_18ac34;
        case 0x18ac38u: goto label_18ac38;
        case 0x18ac3cu: goto label_18ac3c;
        case 0x18ac40u: goto label_18ac40;
        case 0x18ac44u: goto label_18ac44;
        case 0x18ac48u: goto label_18ac48;
        case 0x18ac4cu: goto label_18ac4c;
        case 0x18ac50u: goto label_18ac50;
        case 0x18ac54u: goto label_18ac54;
        case 0x18ac58u: goto label_18ac58;
        case 0x18ac5cu: goto label_18ac5c;
        case 0x18ac60u: goto label_18ac60;
        case 0x18ac64u: goto label_18ac64;
        case 0x18ac68u: goto label_18ac68;
        case 0x18ac6cu: goto label_18ac6c;
        case 0x18ac70u: goto label_18ac70;
        case 0x18ac74u: goto label_18ac74;
        case 0x18ac78u: goto label_18ac78;
        case 0x18ac7cu: goto label_18ac7c;
        case 0x18ac80u: goto label_18ac80;
        case 0x18ac84u: goto label_18ac84;
        case 0x18ac88u: goto label_18ac88;
        case 0x18ac8cu: goto label_18ac8c;
        case 0x18ac90u: goto label_18ac90;
        case 0x18ac94u: goto label_18ac94;
        case 0x18ac98u: goto label_18ac98;
        case 0x18ac9cu: goto label_18ac9c;
        case 0x18aca0u: goto label_18aca0;
        case 0x18aca4u: goto label_18aca4;
        case 0x18aca8u: goto label_18aca8;
        case 0x18acacu: goto label_18acac;
        case 0x18acb0u: goto label_18acb0;
        case 0x18acb4u: goto label_18acb4;
        case 0x18acb8u: goto label_18acb8;
        case 0x18acbcu: goto label_18acbc;
        case 0x18acc0u: goto label_18acc0;
        case 0x18acc4u: goto label_18acc4;
        case 0x18acc8u: goto label_18acc8;
        case 0x18acccu: goto label_18accc;
        case 0x18acd0u: goto label_18acd0;
        case 0x18acd4u: goto label_18acd4;
        case 0x18acd8u: goto label_18acd8;
        case 0x18acdcu: goto label_18acdc;
        case 0x18ace0u: goto label_18ace0;
        case 0x18ace4u: goto label_18ace4;
        case 0x18ace8u: goto label_18ace8;
        case 0x18acecu: goto label_18acec;
        case 0x18acf0u: goto label_18acf0;
        case 0x18acf4u: goto label_18acf4;
        case 0x18acf8u: goto label_18acf8;
        case 0x18acfcu: goto label_18acfc;
        case 0x18ad00u: goto label_18ad00;
        case 0x18ad04u: goto label_18ad04;
        case 0x18ad08u: goto label_18ad08;
        case 0x18ad0cu: goto label_18ad0c;
        case 0x18ad10u: goto label_18ad10;
        case 0x18ad14u: goto label_18ad14;
        case 0x18ad18u: goto label_18ad18;
        case 0x18ad1cu: goto label_18ad1c;
        case 0x18ad20u: goto label_18ad20;
        case 0x18ad24u: goto label_18ad24;
        case 0x18ad28u: goto label_18ad28;
        case 0x18ad2cu: goto label_18ad2c;
        case 0x18ad30u: goto label_18ad30;
        case 0x18ad34u: goto label_18ad34;
        case 0x18ad38u: goto label_18ad38;
        case 0x18ad3cu: goto label_18ad3c;
        case 0x18ad40u: goto label_18ad40;
        case 0x18ad44u: goto label_18ad44;
        case 0x18ad48u: goto label_18ad48;
        case 0x18ad4cu: goto label_18ad4c;
        case 0x18ad50u: goto label_18ad50;
        case 0x18ad54u: goto label_18ad54;
        case 0x18ad58u: goto label_18ad58;
        case 0x18ad5cu: goto label_18ad5c;
        case 0x18ad60u: goto label_18ad60;
        case 0x18ad64u: goto label_18ad64;
        case 0x18ad68u: goto label_18ad68;
        case 0x18ad6cu: goto label_18ad6c;
        case 0x18ad70u: goto label_18ad70;
        case 0x18ad74u: goto label_18ad74;
        case 0x18ad78u: goto label_18ad78;
        case 0x18ad7cu: goto label_18ad7c;
        case 0x18ad80u: goto label_18ad80;
        case 0x18ad84u: goto label_18ad84;
        default: break;
    }

    ctx->pc = 0x18aa60u;

label_18aa60:
    // 0x18aa60: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x18aa60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_18aa64:
    // 0x18aa64: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x18aa64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
label_18aa68:
    // 0x18aa68: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x18aa68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
label_18aa6c:
    // 0x18aa6c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x18aa6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18aa70:
    // 0x18aa70: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x18aa70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
label_18aa74:
    // 0x18aa74: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18aa74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18aa78:
    // 0x18aa78: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x18aa78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
label_18aa7c:
    // 0x18aa7c: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x18aa7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
label_18aa80:
    // 0x18aa80: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x18aa80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
label_18aa84:
    // 0x18aa84: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x18aa84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
label_18aa88:
    // 0x18aa88: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x18aa88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_18aa8c:
    // 0x18aa8c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x18aa8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_18aa90:
    // 0x18aa90: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x18aa90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_18aa94:
    // 0x18aa94: 0xe7b50118  swc1        $f21, 0x118($sp)
    ctx->pc = 0x18aa94u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_18aa98:
    // 0x18aa98: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x18aa98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_18aa9c:
    // 0x18aa9c: 0x922302f5  lbu         $v1, 0x2F5($s1)
    ctx->pc = 0x18aa9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 757)));
label_18aaa0:
    // 0x18aaa0: 0x10700036  beq         $v1, $s0, . + 4 + (0x36 << 2)
label_18aaa4:
    if (ctx->pc == 0x18AAA4u) {
        ctx->pc = 0x18AAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AAA0u;
        // 0x18aaa4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18AAA8u;
        goto label_18aaa8;
    }
    ctx->pc = 0x18AAA0u;
    {
        const bool branch_taken_0x18aaa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x18AAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AAA0u;
        // 0x18aaa4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18aaa0) {
            ctx->pc = 0x18AB7Cu;
            goto label_18ab7c;
        }
    }
    ctx->pc = 0x18AAA8u;
label_18aaa8:
    // 0x18aaa8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_18aaac:
    if (ctx->pc == 0x18AAACu) {
        ctx->pc = 0x18AAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AAA8u;
        // 0x18aaac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18AAB0u;
        goto label_18aab0;
    }
    ctx->pc = 0x18AAA8u;
    {
        const bool branch_taken_0x18aaa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AAA8u;
        // 0x18aaac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18aaa8) {
            ctx->pc = 0x18AAC0u;
            goto label_18aac0;
        }
    }
    ctx->pc = 0x18AAB0u;
label_18aab0:
    // 0x18aab0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_18aab4:
    if (ctx->pc == 0x18AAB4u) {
        ctx->pc = 0x18AAB8u;
        goto label_18aab8;
    }
    ctx->pc = 0x18AAB0u;
    {
        const bool branch_taken_0x18aab0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18aab0) {
            ctx->pc = 0x18AAD8u;
            goto label_18aad8;
        }
    }
    ctx->pc = 0x18AAB8u;
label_18aab8:
    // 0x18aab8: 0x1000004f  b           . + 4 + (0x4F << 2)
label_18aabc:
    if (ctx->pc == 0x18AABCu) {
        ctx->pc = 0x18AABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AAB8u;
        // 0x18aabc: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18AAC0u;
        goto label_18aac0;
    }
    ctx->pc = 0x18AAB8u;
    {
        const bool branch_taken_0x18aab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AAB8u;
        // 0x18aabc: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18aab8) {
            ctx->pc = 0x18ABF8u;
            goto label_18abf8;
        }
    }
    ctx->pc = 0x18AAC0u;
label_18aac0:
    // 0x18aac0: 0x10620038  beq         $v1, $v0, . + 4 + (0x38 << 2)
label_18aac4:
    if (ctx->pc == 0x18AAC4u) {
        ctx->pc = 0x18AAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AAC0u;
        // 0x18aac4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18AAC8u;
        goto label_18aac8;
    }
    ctx->pc = 0x18AAC0u;
    {
        const bool branch_taken_0x18aac0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18AAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AAC0u;
        // 0x18aac4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18aac0) {
            ctx->pc = 0x18ABA4u;
            goto label_18aba4;
        }
    }
    ctx->pc = 0x18AAC8u;
label_18aac8:
    // 0x18aac8: 0x50620047  beql        $v1, $v0, . + 4 + (0x47 << 2)
label_18aacc:
    if (ctx->pc == 0x18AACCu) {
        ctx->pc = 0x18AACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AAC8u;
        // 0x18aacc: 0xa22302f4  sb          $v1, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18AAD0u;
        goto label_18aad0;
    }
    ctx->pc = 0x18AAC8u;
    {
        const bool branch_taken_0x18aac8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18aac8) {
            ctx->pc = 0x18AACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18AAC8u;
            // 0x18aacc: 0xa22302f4  sb          $v1, 0x2F4($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18ABE8u;
            goto label_18abe8;
        }
    }
    ctx->pc = 0x18AAD0u;
label_18aad0:
    // 0x18aad0: 0x10000049  b           . + 4 + (0x49 << 2)
label_18aad4:
    if (ctx->pc == 0x18AAD4u) {
        ctx->pc = 0x18AAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AAD0u;
        // 0x18aad4: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18AAD8u;
        goto label_18aad8;
    }
    ctx->pc = 0x18AAD0u;
    {
        const bool branch_taken_0x18aad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AAD0u;
        // 0x18aad4: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18aad0) {
            ctx->pc = 0x18ABF8u;
            goto label_18abf8;
        }
    }
    ctx->pc = 0x18AAD8u;
label_18aad8:
    // 0x18aad8: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x18aad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_18aadc:
    // 0x18aadc: 0x8e230214  lw          $v1, 0x214($s1)
    ctx->pc = 0x18aadcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_18aae0:
    // 0x18aae0: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x18aae0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_18aae4:
    // 0x18aae4: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x18aae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_18aae8:
    // 0x18aae8: 0x40f809  jalr        $v0
label_18aaec:
    if (ctx->pc == 0x18AAECu) {
        ctx->pc = 0x18AAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AAE8u;
        // 0x18aaec: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18AAF0u;
        goto label_18aaf0;
    }
    ctx->pc = 0x18AAE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18AAF0u);
        ctx->pc = 0x18AAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AAE8u;
        // 0x18aaec: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18AAE8u, 0x18AAF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18AAF0u;
label_18aaf0:
    // 0x18aaf0: 0x13a20007  beq         $sp, $v0, . + 4 + (0x7 << 2)
label_18aaf4:
    if (ctx->pc == 0x18AAF4u) {
        ctx->pc = 0x18AAF8u;
        goto label_18aaf8;
    }
    ctx->pc = 0x18AAF0u;
    {
        const bool branch_taken_0x18aaf0 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        if (branch_taken_0x18aaf0) {
            ctx->pc = 0x18AB10u;
            goto label_18ab10;
        }
    }
    ctx->pc = 0x18AAF8u;
label_18aaf8:
    // 0x18aaf8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x18aaf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18aafc:
    // 0x18aafc: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x18aafcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_18ab00:
    // 0x18ab00: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x18ab00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18ab04:
    // 0x18ab04: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x18ab04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_18ab08:
    // 0x18ab08: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x18ab08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18ab0c:
    // 0x18ab0c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x18ab0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_18ab10:
    // 0x18ab10: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18ab10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_18ab14:
    // 0x18ab14: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x18ab14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_18ab18:
    // 0x18ab18: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x18ab18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_18ab1c:
    // 0x18ab1c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18ab1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18ab20:
    // 0x18ab20: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x18ab20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_18ab24:
    // 0x18ab24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18ab24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18ab28:
    // 0x18ab28: 0xc0c1a0e  jal         func_306838
label_18ab2c:
    if (ctx->pc == 0x18AB2Cu) {
        ctx->pc = 0x18AB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AB28u;
        // 0x18ab2c: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18AB30u;
        goto label_18ab30;
    }
    ctx->pc = 0x18AB28u;
    SET_GPR_U32(ctx, 31, 0x18AB30u);
    ctx->pc = 0x18AB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AB28u;
    // 0x18ab2c: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x18AB28u, 0x18AB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AB30u;
label_18ab30:
    // 0x18ab30: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x18ab30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_18ab34:
    // 0x18ab34: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x18ab34u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18ab38:
    // 0x18ab38: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x18ab38u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18ab3c:
    // 0x18ab3c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x18ab3cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18ab40:
    // 0x18ab40: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x18ab40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18ab44:
    // 0x18ab44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18ab44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18ab48:
    // 0x18ab48: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x18ab48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18ab4c:
    // 0x18ab4c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x18ab4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18ab50:
    // 0x18ab50: 0xc0b2e92  jal         func_2CBA48
label_18ab54:
    if (ctx->pc == 0x18AB54u) {
        ctx->pc = 0x18AB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AB50u;
        // 0x18ab54: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18AB58u;
        goto label_18ab58;
    }
    ctx->pc = 0x18AB50u;
    SET_GPR_U32(ctx, 31, 0x18AB58u);
    ctx->pc = 0x18AB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AB50u;
    // 0x18ab54: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x18AB50u, 0x18AB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AB58u;
label_18ab58:
    // 0x18ab58: 0xc062bfe  jal         func_18AFF8
label_18ab5c:
    if (ctx->pc == 0x18AB5Cu) {
        ctx->pc = 0x18AB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AB58u;
        // 0x18ab5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18AB60u;
        goto label_18ab60;
    }
    ctx->pc = 0x18AB58u;
    SET_GPR_U32(ctx, 31, 0x18AB60u);
    ctx->pc = 0x18AB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AB58u;
    // 0x18ab5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AFF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AFF8u, 0x18AB58u, 0x18AB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AB60u;
label_18ab60:
    // 0x18ab60: 0xc06de42  jal         func_1B7908
label_18ab64:
    if (ctx->pc == 0x18AB64u) {
        ctx->pc = 0x18AB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AB60u;
        // 0x18ab64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18AB68u;
        goto label_18ab68;
    }
    ctx->pc = 0x18AB60u;
    SET_GPR_U32(ctx, 31, 0x18AB68u);
    ctx->pc = 0x18AB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AB60u;
    // 0x18ab64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7908u, 0x18AB60u, 0x18AB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AB68u;
label_18ab68:
    // 0x18ab68: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x18ab68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_18ab6c:
    // 0x18ab6c: 0xa23002f5  sb          $s0, 0x2F5($s1)
    ctx->pc = 0x18ab6cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 16));
label_18ab70:
    // 0x18ab70: 0xa6220604  sh          $v0, 0x604($s1)
    ctx->pc = 0x18ab70u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1540), (uint16_t)GPR_U32(ctx, 2));
label_18ab74:
    // 0x18ab74: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x18ab74u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_18ab78:
    // 0x18ab78: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x18ab78u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_18ab7c:
    // 0x18ab7c: 0x96220604  lhu         $v0, 0x604($s1)
    ctx->pc = 0x18ab7cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1540)));
label_18ab80:
    // 0x18ab80: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18ab80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_18ab84:
    // 0x18ab84: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x18ab84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_18ab88:
    // 0x18ab88: 0x1c60001a  bgtz        $v1, . + 4 + (0x1A << 2)
label_18ab8c:
    if (ctx->pc == 0x18AB8Cu) {
        ctx->pc = 0x18AB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AB88u;
        // 0x18ab8c: 0xa6220604  sh          $v0, 0x604($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1540), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18AB90u;
        goto label_18ab90;
    }
    ctx->pc = 0x18AB88u;
    {
        const bool branch_taken_0x18ab88 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x18AB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AB88u;
        // 0x18ab8c: 0xa6220604  sh          $v0, 0x604($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1540), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ab88) {
            ctx->pc = 0x18ABF4u;
            goto label_18abf4;
        }
    }
    ctx->pc = 0x18AB90u;
label_18ab90:
    // 0x18ab90: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x18ab90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_18ab94:
    // 0x18ab94: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x18ab94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18ab98:
    // 0x18ab98: 0xa6220604  sh          $v0, 0x604($s1)
    ctx->pc = 0x18ab98u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1540), (uint16_t)GPR_U32(ctx, 2));
label_18ab9c:
    // 0x18ab9c: 0x10000013  b           . + 4 + (0x13 << 2)
label_18aba0:
    if (ctx->pc == 0x18ABA0u) {
        ctx->pc = 0x18ABA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AB9Cu;
        // 0x18aba0: 0xa22302f5  sb          $v1, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18ABA4u;
        goto label_18aba4;
    }
    ctx->pc = 0x18AB9Cu;
    {
        const bool branch_taken_0x18ab9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18ABA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AB9Cu;
        // 0x18aba0: 0xa22302f5  sb          $v1, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ab9c) {
            ctx->pc = 0x18ABECu;
            goto label_18abec;
        }
    }
    ctx->pc = 0x18ABA4u;
label_18aba4:
    // 0x18aba4: 0x96220604  lhu         $v0, 0x604($s1)
    ctx->pc = 0x18aba4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1540)));
label_18aba8:
    // 0x18aba8: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x18aba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_18abac:
    // 0x18abac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x18abacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18abb0:
    // 0x18abb0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18abb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_18abb4:
    // 0x18abb4: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x18abb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_18abb8:
    // 0x18abb8: 0xa6220604  sh          $v0, 0x604($s1)
    ctx->pc = 0x18abb8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1540), (uint16_t)GPR_U32(ctx, 2));
label_18abbc:
    // 0x18abbc: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x18abbcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_18abc0:
    // 0x18abc0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18abc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18abc4:
    // 0x18abc4: 0x0  nop
    ctx->pc = 0x18abc4u;
    // NOP
label_18abc8:
    // 0x18abc8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18abc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_18abcc:
    // 0x18abcc: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x18abccu;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
label_18abd0:
    // 0x18abd0: 0x1c600008  bgtz        $v1, . + 4 + (0x8 << 2)
label_18abd4:
    if (ctx->pc == 0x18ABD4u) {
        ctx->pc = 0x18ABD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ABD0u;
        // 0x18abd4: 0xe620024c  swc1        $f0, 0x24C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18ABD8u;
        goto label_18abd8;
    }
    ctx->pc = 0x18ABD0u;
    {
        const bool branch_taken_0x18abd0 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x18ABD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ABD0u;
        // 0x18abd4: 0xe620024c  swc1        $f0, 0x24C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18abd0) {
            ctx->pc = 0x18ABF4u;
            goto label_18abf4;
        }
    }
    ctx->pc = 0x18ABD8u;
label_18abd8:
    // 0x18abd8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x18abd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_18abdc:
    // 0x18abdc: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x18abdcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_18abe0:
    // 0x18abe0: 0x10000003  b           . + 4 + (0x3 << 2)
label_18abe4:
    if (ctx->pc == 0x18ABE4u) {
        ctx->pc = 0x18ABE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ABE0u;
        // 0x18abe4: 0xa22202f5  sb          $v0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18ABE8u;
        goto label_18abe8;
    }
    ctx->pc = 0x18ABE0u;
    {
        const bool branch_taken_0x18abe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18ABE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ABE0u;
        // 0x18abe4: 0xa22202f5  sb          $v0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18abe0) {
            ctx->pc = 0x18ABF0u;
            goto label_18abf0;
        }
    }
    ctx->pc = 0x18ABE8u;
label_18abe8:
    // 0x18abe8: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x18abe8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
label_18abec:
    // 0x18abec: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x18abecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_18abf0:
    // 0x18abf0: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x18abf0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_18abf4:
    // 0x18abf4: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x18abf4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_18abf8:
    // 0x18abf8: 0x10400054  beqz        $v0, . + 4 + (0x54 << 2)
label_18abfc:
    if (ctx->pc == 0x18ABFCu) {
        ctx->pc = 0x18ABFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ABF8u;
        // 0x18abfc: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18AC00u;
        goto label_18ac00;
    }
    ctx->pc = 0x18ABF8u;
    {
        const bool branch_taken_0x18abf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18ABFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ABF8u;
        // 0x18abfc: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18abf8) {
            ctx->pc = 0x18AD4Cu;
            goto label_18ad4c;
        }
    }
    ctx->pc = 0x18AC00u;
label_18ac00:
    // 0x18ac00: 0x3c01c47a  lui         $at, 0xC47A
    ctx->pc = 0x18ac00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50298 << 16));
label_18ac04:
    // 0x18ac04: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x18ac04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_18ac08:
    // 0x18ac08: 0x27be0020  addiu       $fp, $sp, 0x20
    ctx->pc = 0x18ac08u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_18ac0c:
    // 0x18ac0c: 0x27b70010  addiu       $s7, $sp, 0x10
    ctx->pc = 0x18ac0cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_18ac10:
    // 0x18ac10: 0x26350650  addiu       $s5, $s1, 0x650
    ctx->pc = 0x18ac10u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 1616));
label_18ac14:
    // 0x18ac14: 0x26300620  addiu       $s0, $s1, 0x620
    ctx->pc = 0x18ac14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1568));
label_18ac18:
    // 0x18ac18: 0x26340640  addiu       $s4, $s1, 0x640
    ctx->pc = 0x18ac18u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 1600));
label_18ac1c:
    // 0x18ac1c: 0x26330630  addiu       $s3, $s1, 0x630
    ctx->pc = 0x18ac1cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 1584));
label_18ac20:
    // 0x18ac20: 0x26320610  addiu       $s2, $s1, 0x610
    ctx->pc = 0x18ac20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1552));
label_18ac24:
    // 0x18ac24: 0x0  nop
    ctx->pc = 0x18ac24u;
    // NOP
label_18ac28:
    // 0x18ac28: 0xc05ce40  jal         func_173900
label_18ac2c:
    if (ctx->pc == 0x18AC2Cu) {
        ctx->pc = 0x18AC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AC28u;
        // 0x18ac2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18AC30u;
        goto label_18ac30;
    }
    ctx->pc = 0x18AC28u;
    SET_GPR_U32(ctx, 31, 0x18AC30u);
    ctx->pc = 0x18AC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AC28u;
    // 0x18ac2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173900u, 0x18AC28u, 0x18AC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AC30u;
label_18ac30:
    // 0x18ac30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18ac30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18ac34:
    // 0x18ac34: 0x5443003b  bnel        $v0, $v1, . + 4 + (0x3B << 2)
label_18ac38:
    if (ctx->pc == 0x18AC38u) {
        ctx->pc = 0x18AC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AC34u;
        // 0x18ac38: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18AC3Cu;
        goto label_18ac3c;
    }
    ctx->pc = 0x18AC34u;
    {
        const bool branch_taken_0x18ac34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x18ac34) {
            ctx->pc = 0x18AC38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18AC34u;
            // 0x18ac38: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18AD24u;
            goto label_18ad24;
        }
    }
    ctx->pc = 0x18AC3Cu;
label_18ac3c:
    // 0x18ac3c: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x18ac3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_18ac40:
    // 0x18ac40: 0xc0a4bd4  jal         func_292F50
label_18ac44:
    if (ctx->pc == 0x18AC44u) {
        ctx->pc = 0x18AC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AC40u;
        // 0x18ac44: 0x244464f0  addiu       $a0, $v0, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18AC48u;
        goto label_18ac48;
    }
    ctx->pc = 0x18AC40u;
    SET_GPR_U32(ctx, 31, 0x18AC48u);
    ctx->pc = 0x18AC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AC40u;
    // 0x18ac44: 0x244464f0  addiu       $a0, $v0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x18AC40u, 0x18AC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AC48u;
label_18ac48:
    // 0x18ac48: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x18ac48u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_18ac4c:
    // 0x18ac4c: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x18ac4cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_18ac50:
    // 0x18ac50: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x18ac50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_18ac54:
    // 0x18ac54: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x18ac54u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18ac58:
    // 0x18ac58: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x18ac58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_18ac5c:
    // 0x18ac5c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x18ac5cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_18ac60:
    // 0x18ac60: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x18ac60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_18ac64:
    // 0x18ac64: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x18ac64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_18ac68:
    // 0x18ac68: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x18ac68u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_18ac6c:
    // 0x18ac6c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x18ac6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_18ac70:
    // 0x18ac70: 0xda04fff0  lqc2        $vf4, -0x10($s0)
    ctx->pc = 0x18ac70u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 4294967280)));
label_18ac74:
    // 0x18ac74: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x18ac74u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_18ac78:
    // 0x18ac78: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x18ac78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_18ac7c:
    // 0x18ac7c: 0xfa04fff0  sqc2        $vf4, -0x10($s0)
    ctx->pc = 0x18ac7cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 4294967280), _mm_castps_si128(ctx->vu0_vf[4]));
label_18ac80:
    // 0x18ac80: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x18ac80u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_18ac84:
    // 0x18ac84: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x18ac84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_18ac88:
    // 0x18ac88: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x18ac88u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18ac8c:
    // 0x18ac8c: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x18ac8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_18ac90:
    // 0x18ac90: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x18ac90u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_18ac94:
    // 0x18ac94: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x18ac94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_18ac98:
    // 0x18ac98: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x18ac98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_18ac9c:
    // 0x18ac9c: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x18ac9cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_18aca0:
    // 0x18aca0: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x18aca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_18aca4:
    // 0x18aca4: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x18aca4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_18aca8:
    // 0x18aca8: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x18aca8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_18acac:
    // 0x18acac: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x18acacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_18acb0:
    // 0x18acb0: 0xfa040000  sqc2        $vf4, 0x0($s0)
    ctx->pc = 0x18acb0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_18acb4:
    // 0x18acb4: 0xc07df68  jal         func_1F7DA0
label_18acb8:
    if (ctx->pc == 0x18ACB8u) {
        ctx->pc = 0x18ACB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ACB4u;
        // 0x18acb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18ACBCu;
        goto label_18acbc;
    }
    ctx->pc = 0x18ACB4u;
    SET_GPR_U32(ctx, 31, 0x18ACBCu);
    ctx->pc = 0x18ACB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18ACB4u;
    // 0x18acb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7DA0u, 0x18ACB4u, 0x18ACBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18ACBCu;
label_18acbc:
    // 0x18acbc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x18acbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_18acc0:
    // 0x18acc0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18acc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18acc4:
    // 0x18acc4: 0xc051dca  jal         func_147728
label_18acc8:
    if (ctx->pc == 0x18ACC8u) {
        ctx->pc = 0x18ACC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ACC4u;
        // 0x18acc8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18ACCCu;
        goto label_18accc;
    }
    ctx->pc = 0x18ACC4u;
    SET_GPR_U32(ctx, 31, 0x18ACCCu);
    ctx->pc = 0x18ACC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18ACC4u;
    // 0x18acc8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147728u, 0x18ACC4u, 0x18ACCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18ACCCu;
label_18accc:
    // 0x18accc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x18acccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_18acd0:
    // 0x18acd0: 0xc051f10  jal         func_147C40
label_18acd4:
    if (ctx->pc == 0x18ACD4u) {
        ctx->pc = 0x18ACD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ACD0u;
        // 0x18acd4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18ACD8u;
        goto label_18acd8;
    }
    ctx->pc = 0x18ACD0u;
    SET_GPR_U32(ctx, 31, 0x18ACD8u);
    ctx->pc = 0x18ACD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18ACD0u;
    // 0x18acd4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C40u, 0x18ACD0u, 0x18ACD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18ACD8u;
label_18acd8:
    // 0x18acd8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x18acd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_18acdc:
    // 0x18acdc: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x18acdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_18ace0:
    // 0x18ace0: 0xc051efe  jal         func_147BF8
label_18ace4:
    if (ctx->pc == 0x18ACE4u) {
        ctx->pc = 0x18ACE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ACE0u;
        // 0x18ace4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18ACE8u;
        goto label_18ace8;
    }
    ctx->pc = 0x18ACE0u;
    SET_GPR_U32(ctx, 31, 0x18ACE8u);
    ctx->pc = 0x18ACE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18ACE0u;
    // 0x18ace4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147BF8u, 0x18ACE0u, 0x18ACE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18ACE8u;
label_18ace8:
    // 0x18ace8: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x18ace8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_18acec:
    // 0x18acec: 0xc051d4a  jal         func_147528
label_18acf0:
    if (ctx->pc == 0x18ACF0u) {
        ctx->pc = 0x18ACF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ACECu;
        // 0x18acf0: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18ACF4u;
        goto label_18acf4;
    }
    ctx->pc = 0x18ACECu;
    SET_GPR_U32(ctx, 31, 0x18ACF4u);
    ctx->pc = 0x18ACF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18ACECu;
    // 0x18acf0: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x18ACECu, 0x18ACF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18ACF4u;
label_18acf4:
    // 0x18acf4: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x18acf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18acf8:
    // 0x18acf8: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x18acf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18acfc:
    // 0x18acfc: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x18acfcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_18ad00:
    // 0x18ad00: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x18ad00u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_18ad04:
    // 0x18ad04: 0x46150834  c.lt.s      $f1, $f21
    ctx->pc = 0x18ad04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18ad08:
    // 0x18ad08: 0x0  nop
    ctx->pc = 0x18ad08u;
    // NOP
label_18ad0c:
    // 0x18ad0c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_18ad10:
    if (ctx->pc == 0x18AD10u) {
        ctx->pc = 0x18AD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AD0Cu;
        // 0x18ad10: 0xe6010014  swc1        $f1, 0x14($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18AD14u;
        goto label_18ad14;
    }
    ctx->pc = 0x18AD0Cu;
    {
        const bool branch_taken_0x18ad0c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18AD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AD0Cu;
        // 0x18ad10: 0xe6010014  swc1        $f1, 0x14($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ad0c) {
            ctx->pc = 0x18AD20u;
            goto label_18ad20;
        }
    }
    ctx->pc = 0x18AD14u;
label_18ad14:
    // 0x18ad14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18ad14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_18ad18:
    // 0x18ad18: 0xc05bd90  jal         func_16F640
label_18ad1c:
    if (ctx->pc == 0x18AD1Cu) {
        ctx->pc = 0x18AD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AD18u;
        // 0x18ad1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18AD20u;
        goto label_18ad20;
    }
    ctx->pc = 0x18AD18u;
    SET_GPR_U32(ctx, 31, 0x18AD20u);
    ctx->pc = 0x18AD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AD18u;
    // 0x18ad1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x18AD18u, 0x18AD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AD20u;
label_18ad20:
    // 0x18ad20: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x18ad20u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_18ad24:
    // 0x18ad24: 0x26b50060  addiu       $s5, $s5, 0x60
    ctx->pc = 0x18ad24u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
label_18ad28:
    // 0x18ad28: 0x26100060  addiu       $s0, $s0, 0x60
    ctx->pc = 0x18ad28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_18ad2c:
    // 0x18ad2c: 0x26940060  addiu       $s4, $s4, 0x60
    ctx->pc = 0x18ad2cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
label_18ad30:
    // 0x18ad30: 0x26730060  addiu       $s3, $s3, 0x60
    ctx->pc = 0x18ad30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
label_18ad34:
    // 0x18ad34: 0x2ac20008  slti        $v0, $s6, 0x8
    ctx->pc = 0x18ad34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)8) ? 1 : 0);
label_18ad38:
    // 0x18ad38: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_18ad3c:
    if (ctx->pc == 0x18AD3Cu) {
        ctx->pc = 0x18AD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AD38u;
        // 0x18ad3c: 0x26520060  addiu       $s2, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18AD40u;
        goto label_18ad40;
    }
    ctx->pc = 0x18AD38u;
    {
        const bool branch_taken_0x18ad38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AD38u;
        // 0x18ad3c: 0x26520060  addiu       $s2, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ad38) {
            ctx->pc = 0x18AD4Cu;
            goto label_18ad4c;
        }
    }
    ctx->pc = 0x18AD40u;
label_18ad40:
    // 0x18ad40: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x18ad40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_18ad44:
    // 0x18ad44: 0x1456ffb8  bne         $v0, $s6, . + 4 + (-0x48 << 2)
label_18ad48:
    if (ctx->pc == 0x18AD48u) {
        ctx->pc = 0x18AD4Cu;
        goto label_18ad4c;
    }
    ctx->pc = 0x18AD44u;
    {
        const bool branch_taken_0x18ad44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x18ad44) {
            ctx->pc = 0x18AC28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18ac28;
        }
    }
    ctx->pc = 0x18AD4Cu;
label_18ad4c:
    // 0x18ad4c: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x18ad4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_18ad50:
    // 0x18ad50: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x18ad50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_18ad54:
    // 0x18ad54: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x18ad54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_18ad58:
    // 0x18ad58: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x18ad58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_18ad5c:
    // 0x18ad5c: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x18ad5cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_18ad60:
    // 0x18ad60: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x18ad60u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_18ad64:
    // 0x18ad64: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x18ad64u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_18ad68:
    // 0x18ad68: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x18ad68u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_18ad6c:
    // 0x18ad6c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x18ad6cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_18ad70:
    // 0x18ad70: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x18ad70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_18ad74:
    // 0x18ad74: 0xc7b50118  lwc1        $f21, 0x118($sp)
    ctx->pc = 0x18ad74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_18ad78:
    // 0x18ad78: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x18ad78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_18ad7c:
    // 0x18ad7c: 0x3e00008  jr          $ra
label_18ad80:
    if (ctx->pc == 0x18AD80u) {
        ctx->pc = 0x18AD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AD7Cu;
        // 0x18ad80: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18AD84u;
        goto label_18ad84;
    }
    ctx->pc = 0x18AD7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18AD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AD7Cu;
        // 0x18ad80: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18AD7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18AD84u;
label_18ad84:
    // 0x18ad84: 0x0  nop
    ctx->pc = 0x18ad84u;
    // NOP
    ctx->pc = 0x18ad88u;
}
