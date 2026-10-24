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

// Function: func_0036F048
// Address: 0x36f048 - 0x372028
void func_0036F048_0x36f048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036F048_0x36f048");
#endif

    switch (ctx->pc) {
        case 0x36f8a8u: goto label_36f8a8;
        case 0x36fd90u: goto label_36fd90;
        case 0x36fe88u: goto label_36fe88;
        case 0x36ff80u: goto label_36ff80;
        case 0x370038u: goto label_370038;
        case 0x370064u: goto label_370064;
        case 0x370c40u: goto label_370c40;
        case 0x370c60u: goto label_370c60;
        case 0x3719a0u: goto label_3719a0;
        case 0x3719a8u: goto label_3719a8;
        default: break;
    }

    ctx->pc = 0x36f048u;

    // 0x36f048: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x36f048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x36f04c: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x36f04cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x36f050: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x36f050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x36f054: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x36f054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x36f058: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x36f058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x36f05c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x36f05cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x36f060: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x36f060u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f064: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x36f064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x36f068: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x36f068u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f06c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36f06cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36f070: 0x26b40160  addiu       $s4, $s5, 0x160
    ctx->pc = 0x36f070u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 352));
    // 0x36f074: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x36f074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x36f078: 0x2c38824  and         $s1, $s6, $v1
    ctx->pc = 0x36f078u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 22) & GPR_U64(ctx, 3));
    // 0x36f07c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x36f07cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x36f080: 0x2d12023  subu        $a0, $s6, $s1
    ctx->pc = 0x36f080u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x36f084: 0x498c0  sll         $s3, $a0, 3
    ctx->pc = 0x36f084u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x36f088: 0x8e820438  lw          $v0, 0x438($s4)
    ctx->pc = 0x36f088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1080)));
    // 0x36f08c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36f08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36f090: 0xae820438  sw          $v0, 0x438($s4)
    ctx->pc = 0x36f090u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1080), GPR_U32(ctx, 2));
    // 0x36f094: 0x82320000  lb          $s2, 0x0($s1)
    ctx->pc = 0x36f094u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36f098: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36f098u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36f09c: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x36f09cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36f0a0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36f0a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36f0a4: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x36f0a4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36f0a8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36f0a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36f0ac: 0x92250000  lbu         $a1, 0x0($s1)
    ctx->pc = 0x36f0acu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36f0b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36f0b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36f0b4: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x36f0b4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36f0b8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36f0b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36f0bc: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x36f0bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36f0c0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36f0c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36f0c4: 0x129200  sll         $s2, $s2, 8
    ctx->pc = 0x36f0c4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 8));
    // 0x36f0c8: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x36f0c8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x36f0cc: 0x2439025  or          $s2, $s2, $v1
    ctx->pc = 0x36f0ccu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
    // 0x36f0d0: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x36f0d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36f0d4: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x36f0d4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x36f0d8: 0x129200  sll         $s2, $s2, 8
    ctx->pc = 0x36f0d8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 8));
    // 0x36f0dc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36f0dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36f0e0: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x36f0e0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x36f0e4: 0x2449025  or          $s2, $s2, $a0
    ctx->pc = 0x36f0e4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 4));
    // 0x36f0e8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x36f0e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36f0ec: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x36f0ecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x36f0f0: 0x129200  sll         $s2, $s2, 8
    ctx->pc = 0x36f0f0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 8));
    // 0x36f0f4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x36f0f4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x36f0f8: 0x2459025  or          $s2, $s2, $a1
    ctx->pc = 0x36f0f8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 5));
    // 0x36f0fc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36f0fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36f100: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x36f100u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x36f104: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x36F104u;
    {
        const bool branch_taken_0x36f104 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F104u;
        // 0x36f108: 0x2729004  sllv        $s2, $s2, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 19) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f104) {
            ctx->pc = 0x36F128u;
            goto label_36f128;
        }
    }
    ctx->pc = 0x36F10Cu;
    // 0x36f10c: 0x131023  negu        $v0, $s3
    ctx->pc = 0x36f10cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
    // 0x36f110: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x36f110u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x36f114: 0x2421025  or          $v0, $s2, $v0
    ctx->pc = 0x36f114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x36f118: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x36f118u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x36f11c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x36F11Cu;
    {
        const bool branch_taken_0x36f11c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F11Cu;
        // 0x36f120: 0xae820034  sw          $v0, 0x34($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f11c) {
            ctx->pc = 0x36F130u;
            goto label_36f130;
        }
    }
    ctx->pc = 0x36F124u;
    // 0x36f124: 0x0  nop
    ctx->pc = 0x36f124u;
    // NOP
label_36f128:
    // 0x36f128: 0xae920034  sw          $s2, 0x34($s4)
    ctx->pc = 0x36f128u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 18));
    // 0x36f12c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x36f12cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_36f130:
    // 0x36f130: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x36f130u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36f134: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36f134u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36f138: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x36f138u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36f13c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36f13cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36f140: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x36f140u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x36f144: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x36f144u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36f148: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x36f148u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x36f14c: 0x2a62001c  slti        $v0, $s3, 0x1C
    ctx->pc = 0x36f14cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)28) ? 1 : 0);
    // 0x36f150: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36f150u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36f154: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x36f154u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x36f158: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x36f158u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36f15c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36f15cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36f160: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x36f160u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x36f164: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x36f164u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x36f168: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x36F168u;
    {
        const bool branch_taken_0x36f168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36F16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F168u;
        // 0x36f16c: 0x2048025  or          $s0, $s0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f168) {
            ctx->pc = 0x36F1E0u;
            goto label_36f1e0;
        }
    }
    ctx->pc = 0x36F170u;
    // 0x36f170: 0x2673ffe4  addiu       $s3, $s3, -0x1C
    ctx->pc = 0x36f170u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967268));
    // 0x36f174: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x36F174u;
    {
        const bool branch_taken_0x36f174 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F174u;
        // 0x36f178: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f174) {
            ctx->pc = 0x36F198u;
            goto label_36f198;
        }
    }
    ctx->pc = 0x36F17Cu;
    // 0x36f17c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x36f17cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x36f180: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x36f180u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x36f184: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x36f184u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x36f188: 0x121f02  srl         $v1, $s2, 28
    ctx->pc = 0x36f188u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 28));
    // 0x36f18c: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x36f18cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x36f190: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x36F190u;
    {
        const bool branch_taken_0x36f190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F190u;
        // 0x36f194: 0xae830040  sw          $v1, 0x40($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f190) {
            ctx->pc = 0x36F1A4u;
            goto label_36f1a4;
        }
    }
    ctx->pc = 0x36F198u;
label_36f198:
    // 0x36f198: 0x121702  srl         $v0, $s2, 28
    ctx->pc = 0x36f198u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 28));
    // 0x36f19c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x36f19cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f1a0: 0xae820040  sw          $v0, 0x40($s4)
    ctx->pc = 0x36f1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 64), GPR_U32(ctx, 2));
label_36f1a4:
    // 0x36f1a4: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x36f1a4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36f1a8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36f1a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36f1ac: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x36f1acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36f1b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36f1b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36f1b4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x36f1b4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x36f1b8: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x36f1b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36f1bc: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x36f1bcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x36f1c0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36f1c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36f1c4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x36f1c4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x36f1c8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x36f1c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36f1cc: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x36f1ccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x36f1d0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36f1d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36f1d4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x36f1d4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x36f1d8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x36F1D8u;
    {
        const bool branch_taken_0x36f1d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F1D8u;
        // 0x36f1dc: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f1d8) {
            ctx->pc = 0x36F1F0u;
            goto label_36f1f0;
        }
    }
    ctx->pc = 0x36F1E0u;
label_36f1e0:
    // 0x36f1e0: 0x121702  srl         $v0, $s2, 28
    ctx->pc = 0x36f1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 28));
    // 0x36f1e4: 0x129100  sll         $s2, $s2, 4
    ctx->pc = 0x36f1e4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x36f1e8: 0xae820040  sw          $v0, 0x40($s4)
    ctx->pc = 0x36f1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 64), GPR_U32(ctx, 2));
    // 0x36f1ec: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x36f1ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_36f1f0:
    // 0x36f1f0: 0x8e830308  lw          $v1, 0x308($s4)
    ctx->pc = 0x36f1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 776)));
    // 0x36f1f4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x36F1F4u;
    {
        const bool branch_taken_0x36f1f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F1F4u;
        // 0x36f1f8: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f1f4) {
            ctx->pc = 0x36F204u;
            goto label_36f204;
        }
    }
    ctx->pc = 0x36F1FCu;
    // 0x36f1fc: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x36F1FCu;
    {
        const bool branch_taken_0x36f1fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x36f1fc) {
            ctx->pc = 0x36F200u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36F1FCu;
            // 0x36f200: 0x8e830040  lw          $v1, 0x40($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36F220u;
            goto label_36f220;
        }
    }
    ctx->pc = 0x36F204u;
label_36f204:
    // 0x36f204: 0x8e82030c  lw          $v0, 0x30C($s4)
    ctx->pc = 0x36f204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 780)));
    // 0x36f208: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x36F208u;
    {
        const bool branch_taken_0x36f208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F208u;
        // 0x36f20c: 0x8e830040  lw          $v1, 0x40($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f208) {
            ctx->pc = 0x36F22Cu;
            goto label_36f22c;
        }
    }
    ctx->pc = 0x36F210u;
    // 0x36f210: 0x50430007  beql        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x36F210u;
    {
        const bool branch_taken_0x36f210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x36f210) {
            ctx->pc = 0x36F214u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36F210u;
            // 0x36f214: 0x8e840420  lw          $a0, 0x420($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1056)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36F230u;
            goto label_36f230;
        }
    }
    ctx->pc = 0x36F218u;
    // 0x36f218: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x36F218u;
    {
        const bool branch_taken_0x36f218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F218u;
        // 0x36f21c: 0x8e820494  lw          $v0, 0x494($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1172)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f218) {
            ctx->pc = 0x36F224u;
            goto label_36f224;
        }
    }
    ctx->pc = 0x36F220u;
label_36f220:
    // 0x36f220: 0x8e820494  lw          $v0, 0x494($s4)
    ctx->pc = 0x36f220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1172)));
label_36f224:
    // 0x36f224: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36f224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36f228: 0xae820494  sw          $v0, 0x494($s4)
    ctx->pc = 0x36f228u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1172), GPR_U32(ctx, 2));
label_36f22c:
    // 0x36f22c: 0x8e840420  lw          $a0, 0x420($s4)
    ctx->pc = 0x36f22cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1056)));
label_36f230:
    // 0x36f230: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36f230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36f234: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x36F234u;
    {
        const bool branch_taken_0x36f234 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x36F238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F234u;
        // 0x36f238: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f234) {
            ctx->pc = 0x36F254u;
            goto label_36f254;
        }
    }
    ctx->pc = 0x36F23Cu;
    // 0x36f23c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x36f23cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x36f240: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x36F240u;
    {
        const bool branch_taken_0x36f240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36f240) {
            ctx->pc = 0x36F244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36F240u;
            // 0x36f244: 0x8e820494  lw          $v0, 0x494($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36F294u;
            goto label_36f294;
        }
    }
    ctx->pc = 0x36F248u;
    // 0x36f248: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x36f248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x36f24c: 0x50620011  beql        $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x36F24Cu;
    {
        const bool branch_taken_0x36f24c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x36f24c) {
            ctx->pc = 0x36F250u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36F24Cu;
            // 0x36f250: 0x8e820494  lw          $v0, 0x494($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36F294u;
            goto label_36f294;
        }
    }
    ctx->pc = 0x36F254u;
label_36f254:
    // 0x36f254: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x36f254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36f258: 0x50820011  beql        $a0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x36F258u;
    {
        const bool branch_taken_0x36f258 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x36f258) {
            ctx->pc = 0x36F25Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36F258u;
            // 0x36f25c: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36F2A0u;
            goto label_36f2a0;
        }
    }
    ctx->pc = 0x36F260u;
    // 0x36f260: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x36F260u;
    {
        const bool branch_taken_0x36f260 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x36F264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F260u;
        // 0x36f264: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f260) {
            ctx->pc = 0x36F290u;
            goto label_36f290;
        }
    }
    ctx->pc = 0x36F268u;
    // 0x36f268: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x36F268u;
    {
        const bool branch_taken_0x36f268 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x36F26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F268u;
        // 0x36f26c: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f268) {
            ctx->pc = 0x36F290u;
            goto label_36f290;
        }
    }
    ctx->pc = 0x36F270u;
    // 0x36f270: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x36F270u;
    {
        const bool branch_taken_0x36f270 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x36F274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F270u;
        // 0x36f274: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f270) {
            ctx->pc = 0x36F290u;
            goto label_36f290;
        }
    }
    ctx->pc = 0x36F278u;
    // 0x36f278: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x36F278u;
    {
        const bool branch_taken_0x36f278 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x36F27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F278u;
        // 0x36f27c: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f278) {
            ctx->pc = 0x36F290u;
            goto label_36f290;
        }
    }
    ctx->pc = 0x36F280u;
    // 0x36f280: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x36F280u;
    {
        const bool branch_taken_0x36f280 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x36F284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F280u;
        // 0x36f284: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f280) {
            ctx->pc = 0x36F290u;
            goto label_36f290;
        }
    }
    ctx->pc = 0x36F288u;
    // 0x36f288: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x36F288u;
    {
        const bool branch_taken_0x36f288 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x36f288) {
            ctx->pc = 0x36F28Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36F288u;
            // 0x36f28c: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36F2A0u;
            goto label_36f2a0;
        }
    }
    ctx->pc = 0x36F290u;
label_36f290:
    // 0x36f290: 0x8e820494  lw          $v0, 0x494($s4)
    ctx->pc = 0x36f290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1172)));
label_36f294:
    // 0x36f294: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36f294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36f298: 0xae820494  sw          $v0, 0x494($s4)
    ctx->pc = 0x36f298u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1172), GPR_U32(ctx, 2));
    // 0x36f29c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x36f29cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_36f2a0:
    // 0x36f2a0: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x36f2a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x36f2a4: 0x50400b49  beql        $v0, $zero, . + 4 + (0xB49 << 2)
    ctx->pc = 0x36F2A4u;
    {
        const bool branch_taken_0x36f2a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36f2a4) {
            ctx->pc = 0x36F2A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36F2A4u;
            // 0x36f2a8: 0x8e820494  lw          $v0, 0x494($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x371FCCu;
            goto label_371fcc;
        }
    }
    ctx->pc = 0x36F2ACu;
    // 0x36f2ac: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x36f2acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x36f2b0: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x36f2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x36f2b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x36f2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x36f2b8: 0x8c63a5a0  lw          $v1, -0x5A60($v1)
    ctx->pc = 0x36f2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294944160)));
    // 0x36f2bc: 0x600008  jr          $v1
    ctx->pc = 0x36F2BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x36F2C8u: goto label_36f2c8;
            case 0x36F8D8u: goto label_36f8d8;
            case 0x36FCF0u: goto label_36fcf0;
            case 0x370070u: goto label_370070;
            case 0x370590u: goto label_370590;
            case 0x370C38u: goto label_370c38;
            case 0x370EA0u: goto label_370ea0;
            case 0x3719C0u: goto label_3719c0;
            case 0x371DD8u: goto label_371dd8;
            case 0x371FC8u: goto label_371fc8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F2BCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x36F2C4u;
    // 0x36f2c4: 0x0  nop
    ctx->pc = 0x36f2c4u;
    // NOP
label_36f2c8:
    // 0x36f2c8: 0x2a620018  slti        $v0, $s3, 0x18
    ctx->pc = 0x36f2c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x36f2cc: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x36F2CCu;
    {
        const bool branch_taken_0x36f2cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36F2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F2CCu;
        // 0x36f2d0: 0x121602  srl         $v0, $s2, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f2cc) {
            ctx->pc = 0x36F348u;
            goto label_36f348;
        }
    }
    ctx->pc = 0x36F2D4u;
    // 0x36f2d4: 0x2673ffe8  addiu       $s3, $s3, -0x18
    ctx->pc = 0x36f2d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967272));
    // 0x36f2d8: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x36F2D8u;
    {
        const bool branch_taken_0x36f2d8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F2D8u;
        // 0x36f2dc: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f2d8) {
            ctx->pc = 0x36F300u;
            goto label_36f300;
        }
    }
    ctx->pc = 0x36F2E0u;
    // 0x36f2e0: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x36f2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x36f2e4: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x36f2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x36f2e8: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x36f2e8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x36f2ec: 0x121e02  srl         $v1, $s2, 24
    ctx->pc = 0x36f2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
    // 0x36f2f0: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x36f2f0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x36f2f4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x36F2F4u;
    {
        const bool branch_taken_0x36f2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F2F4u;
        // 0x36f2f8: 0xae830044  sw          $v1, 0x44($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f2f4) {
            ctx->pc = 0x36F30Cu;
            goto label_36f30c;
        }
    }
    ctx->pc = 0x36F2FCu;
    // 0x36f2fc: 0x0  nop
    ctx->pc = 0x36f2fcu;
    // NOP
label_36f300:
    // 0x36f300: 0x121602  srl         $v0, $s2, 24
    ctx->pc = 0x36f300u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
    // 0x36f304: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x36f304u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f308: 0xae820044  sw          $v0, 0x44($s4)
    ctx->pc = 0x36f308u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 2));
label_36f30c:
    // 0x36f30c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x36f30cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36f310: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36f310u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36f314: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x36f314u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36f318: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36f318u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36f31c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x36f31cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x36f320: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x36f320u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36f324: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x36f324u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x36f328: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36f328u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36f32c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x36f32cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x36f330: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x36f330u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36f334: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x36f334u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x36f338: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36f338u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36f33c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x36f33cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x36f340: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x36F340u;
    {
        const bool branch_taken_0x36f340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F340u;
        // 0x36f344: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f340) {
            ctx->pc = 0x36F354u;
            goto label_36f354;
        }
    }
    ctx->pc = 0x36F348u;
label_36f348:
    // 0x36f348: 0x129200  sll         $s2, $s2, 8
    ctx->pc = 0x36f348u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 8));
    // 0x36f34c: 0xae820044  sw          $v0, 0x44($s4)
    ctx->pc = 0x36f34cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 2));
    // 0x36f350: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x36f350u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_36f354:
    // 0x36f354: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x36f354u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x36f358: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x36F358u;
    {
        const bool branch_taken_0x36f358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36F35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F358u;
        // 0x36f35c: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f358) {
            ctx->pc = 0x36F3D0u;
            goto label_36f3d0;
        }
    }
    ctx->pc = 0x36F360u;
    // 0x36f360: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x36f360u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x36f364: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x36F364u;
    {
        const bool branch_taken_0x36f364 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F364u;
        // 0x36f368: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f364) {
            ctx->pc = 0x36F388u;
            goto label_36f388;
        }
    }
    ctx->pc = 0x36F36Cu;
    // 0x36f36c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x36f36cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x36f370: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x36f370u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x36f374: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x36f374u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x36f378: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x36f378u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x36f37c: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x36f37cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x36f380: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x36F380u;
    {
        const bool branch_taken_0x36f380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F380u;
        // 0x36f384: 0xae830048  sw          $v1, 0x48($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f380) {
            ctx->pc = 0x36F394u;
            goto label_36f394;
        }
    }
    ctx->pc = 0x36F388u;
label_36f388:
    // 0x36f388: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x36f388u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x36f38c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x36f38cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f390: 0xae820048  sw          $v0, 0x48($s4)
    ctx->pc = 0x36f390u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 72), GPR_U32(ctx, 2));
label_36f394:
    // 0x36f394: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x36f394u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36f398: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36f398u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36f39c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x36f39cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36f3a0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36f3a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36f3a4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x36f3a4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x36f3a8: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x36f3a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36f3ac: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x36f3acu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x36f3b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36f3b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36f3b4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x36f3b4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x36f3b8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x36f3b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36f3bc: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x36f3bcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x36f3c0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36f3c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36f3c4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x36f3c4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x36f3c8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x36F3C8u;
    {
        const bool branch_taken_0x36f3c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F3C8u;
        // 0x36f3cc: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f3c8) {
            ctx->pc = 0x36F3DCu;
            goto label_36f3dc;
        }
    }
    ctx->pc = 0x36F3D0u;
label_36f3d0:
    // 0x36f3d0: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x36f3d0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x36f3d4: 0xae820048  sw          $v0, 0x48($s4)
    ctx->pc = 0x36f3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 72), GPR_U32(ctx, 2));
    // 0x36f3d8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x36f3d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_36f3dc:
    // 0x36f3dc: 0x2a62001e  slti        $v0, $s3, 0x1E
    ctx->pc = 0x36f3dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x36f3e0: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x36F3E0u;
    {
        const bool branch_taken_0x36f3e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36F3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F3E0u;
        // 0x36f3e4: 0x121782  srl         $v0, $s2, 30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f3e0) {
            ctx->pc = 0x36F458u;
            goto label_36f458;
        }
    }
    ctx->pc = 0x36F3E8u;
    // 0x36f3e8: 0x2673ffe2  addiu       $s3, $s3, -0x1E
    ctx->pc = 0x36f3e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967266));
    // 0x36f3ec: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x36F3ECu;
    {
        const bool branch_taken_0x36f3ec = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F3ECu;
        // 0x36f3f0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f3ec) {
            ctx->pc = 0x36F410u;
            goto label_36f410;
        }
    }
    ctx->pc = 0x36F3F4u;
    // 0x36f3f4: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x36f3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x36f3f8: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x36f3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x36f3fc: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x36f3fcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x36f400: 0x121f82  srl         $v1, $s2, 30
    ctx->pc = 0x36f400u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
    // 0x36f404: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x36f404u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x36f408: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x36F408u;
    {
        const bool branch_taken_0x36f408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F408u;
        // 0x36f40c: 0xae83004c  sw          $v1, 0x4C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f408) {
            ctx->pc = 0x36F41Cu;
            goto label_36f41c;
        }
    }
    ctx->pc = 0x36F410u;
label_36f410:
    // 0x36f410: 0x121782  srl         $v0, $s2, 30
    ctx->pc = 0x36f410u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
    // 0x36f414: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x36f414u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f418: 0xae82004c  sw          $v0, 0x4C($s4)
    ctx->pc = 0x36f418u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 2));
label_36f41c:
    // 0x36f41c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x36f41cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36f420: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36f420u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36f424: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x36f424u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36f428: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36f428u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36f42c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x36f42cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x36f430: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x36f430u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36f434: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x36f434u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x36f438: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36f438u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36f43c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x36f43cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x36f440: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x36f440u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36f444: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x36f444u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x36f448: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36f448u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36f44c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x36f44cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x36f450: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x36F450u;
    {
        const bool branch_taken_0x36f450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F450u;
        // 0x36f454: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f450) {
            ctx->pc = 0x36F464u;
            goto label_36f464;
        }
    }
    ctx->pc = 0x36F458u;
label_36f458:
    // 0x36f458: 0x129080  sll         $s2, $s2, 2
    ctx->pc = 0x36f458u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x36f45c: 0xae82004c  sw          $v0, 0x4C($s4)
    ctx->pc = 0x36f45cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 2));
    // 0x36f460: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x36f460u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
label_36f464:
    // 0x36f464: 0x2a62001e  slti        $v0, $s3, 0x1E
    ctx->pc = 0x36f464u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x36f468: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x36F468u;
    {
        const bool branch_taken_0x36f468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36F46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F468u;
        // 0x36f46c: 0x121782  srl         $v0, $s2, 30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f468) {
            ctx->pc = 0x36F4E0u;
            goto label_36f4e0;
        }
    }
    ctx->pc = 0x36F470u;
    // 0x36f470: 0x2673ffe2  addiu       $s3, $s3, -0x1E
    ctx->pc = 0x36f470u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967266));
    // 0x36f474: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x36F474u;
    {
        const bool branch_taken_0x36f474 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F474u;
        // 0x36f478: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f474) {
            ctx->pc = 0x36F498u;
            goto label_36f498;
        }
    }
    ctx->pc = 0x36F47Cu;
    // 0x36f47c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x36f47cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x36f480: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x36f480u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x36f484: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x36f484u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x36f488: 0x121f82  srl         $v1, $s2, 30
    ctx->pc = 0x36f488u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
    // 0x36f48c: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x36f48cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x36f490: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x36F490u;
    {
        const bool branch_taken_0x36f490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F490u;
        // 0x36f494: 0xae830050  sw          $v1, 0x50($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f490) {
            ctx->pc = 0x36F4A4u;
            goto label_36f4a4;
        }
    }
    ctx->pc = 0x36F498u;
label_36f498:
    // 0x36f498: 0x121782  srl         $v0, $s2, 30
    ctx->pc = 0x36f498u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
    // 0x36f49c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x36f49cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f4a0: 0xae820050  sw          $v0, 0x50($s4)
    ctx->pc = 0x36f4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 80), GPR_U32(ctx, 2));
label_36f4a4:
    // 0x36f4a4: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x36f4a4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36f4a8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36f4a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36f4ac: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x36f4acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36f4b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36f4b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36f4b4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x36f4b4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x36f4b8: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x36f4b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36f4bc: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x36f4bcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x36f4c0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36f4c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36f4c4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x36f4c4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x36f4c8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x36f4c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36f4cc: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x36f4ccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x36f4d0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36f4d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36f4d4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x36f4d4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x36f4d8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x36F4D8u;
    {
        const bool branch_taken_0x36f4d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F4D8u;
        // 0x36f4dc: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f4d8) {
            ctx->pc = 0x36F4ECu;
            goto label_36f4ec;
        }
    }
    ctx->pc = 0x36F4E0u;
label_36f4e0:
    // 0x36f4e0: 0x129080  sll         $s2, $s2, 2
    ctx->pc = 0x36f4e0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x36f4e4: 0xae820050  sw          $v0, 0x50($s4)
    ctx->pc = 0x36f4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 80), GPR_U32(ctx, 2));
    // 0x36f4e8: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x36f4e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
label_36f4ec:
    // 0x36f4ec: 0x2a62001e  slti        $v0, $s3, 0x1E
    ctx->pc = 0x36f4ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x36f4f0: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x36F4F0u;
    {
        const bool branch_taken_0x36f4f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36F4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F4F0u;
        // 0x36f4f4: 0x121782  srl         $v0, $s2, 30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f4f0) {
            ctx->pc = 0x36F568u;
            goto label_36f568;
        }
    }
    ctx->pc = 0x36F4F8u;
    // 0x36f4f8: 0x2673ffe2  addiu       $s3, $s3, -0x1E
    ctx->pc = 0x36f4f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967266));
    // 0x36f4fc: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x36F4FCu;
    {
        const bool branch_taken_0x36f4fc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F4FCu;
        // 0x36f500: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f4fc) {
            ctx->pc = 0x36F520u;
            goto label_36f520;
        }
    }
    ctx->pc = 0x36F504u;
    // 0x36f504: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x36f504u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x36f508: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x36f508u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x36f50c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x36f50cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x36f510: 0x121f82  srl         $v1, $s2, 30
    ctx->pc = 0x36f510u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
    // 0x36f514: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x36f514u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x36f518: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x36F518u;
    {
        const bool branch_taken_0x36f518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F518u;
        // 0x36f51c: 0xae830054  sw          $v1, 0x54($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f518) {
            ctx->pc = 0x36F52Cu;
            goto label_36f52c;
        }
    }
    ctx->pc = 0x36F520u;
label_36f520:
    // 0x36f520: 0x121782  srl         $v0, $s2, 30
    ctx->pc = 0x36f520u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
    // 0x36f524: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x36f524u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f528: 0xae820054  sw          $v0, 0x54($s4)
    ctx->pc = 0x36f528u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
label_36f52c:
    // 0x36f52c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x36f52cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36f530: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36f530u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36f534: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x36f534u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36f538: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36f538u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36f53c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x36f53cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x36f540: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x36f540u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36f544: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x36f544u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x36f548: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36f548u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36f54c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x36f54cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x36f550: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x36f550u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36f554: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x36f554u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x36f558: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36f558u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36f55c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x36f55cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x36f560: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x36F560u;
    {
        const bool branch_taken_0x36f560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F560u;
        // 0x36f564: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f560) {
            ctx->pc = 0x36F574u;
            goto label_36f574;
        }
    }
    ctx->pc = 0x36F568u;
label_36f568:
    // 0x36f568: 0x129080  sll         $s2, $s2, 2
    ctx->pc = 0x36f568u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x36f56c: 0xae820054  sw          $v0, 0x54($s4)
    ctx->pc = 0x36f56cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
    // 0x36f570: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x36f570u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
label_36f574:
    // 0x36f574: 0x2a620014  slti        $v0, $s3, 0x14
    ctx->pc = 0x36f574u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x36f578: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x36F578u;
    {
        const bool branch_taken_0x36f578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36F57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F578u;
        // 0x36f57c: 0x121502  srl         $v0, $s2, 20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f578) {
            ctx->pc = 0x36F5F0u;
            goto label_36f5f0;
        }
    }
    ctx->pc = 0x36F580u;
    // 0x36f580: 0x2673ffec  addiu       $s3, $s3, -0x14
    ctx->pc = 0x36f580u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967276));
    // 0x36f584: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x36F584u;
    {
        const bool branch_taken_0x36f584 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F584u;
        // 0x36f588: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f584) {
            ctx->pc = 0x36F5A8u;
            goto label_36f5a8;
        }
    }
    ctx->pc = 0x36F58Cu;
    // 0x36f58c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x36f58cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x36f590: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x36f590u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x36f594: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x36f594u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x36f598: 0x121d02  srl         $v1, $s2, 20
    ctx->pc = 0x36f598u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 20));
    // 0x36f59c: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x36f59cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x36f5a0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x36F5A0u;
    {
        const bool branch_taken_0x36f5a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F5A0u;
        // 0x36f5a4: 0xae830058  sw          $v1, 0x58($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 88), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f5a0) {
            ctx->pc = 0x36F5B4u;
            goto label_36f5b4;
        }
    }
    ctx->pc = 0x36F5A8u;
label_36f5a8:
    // 0x36f5a8: 0x121502  srl         $v0, $s2, 20
    ctx->pc = 0x36f5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 20));
    // 0x36f5ac: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x36f5acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f5b0: 0xae820058  sw          $v0, 0x58($s4)
    ctx->pc = 0x36f5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 88), GPR_U32(ctx, 2));
label_36f5b4:
    // 0x36f5b4: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x36f5b4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36f5b8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36f5b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36f5bc: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x36f5bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36f5c0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36f5c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36f5c4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x36f5c4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x36f5c8: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x36f5c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36f5cc: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x36f5ccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x36f5d0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36f5d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36f5d4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x36f5d4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x36f5d8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x36f5d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36f5dc: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x36f5dcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x36f5e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36f5e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36f5e4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x36f5e4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x36f5e8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x36F5E8u;
    {
        const bool branch_taken_0x36f5e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F5E8u;
        // 0x36f5ec: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f5e8) {
            ctx->pc = 0x36F5FCu;
            goto label_36f5fc;
        }
    }
    ctx->pc = 0x36F5F0u;
label_36f5f0:
    // 0x36f5f0: 0x129300  sll         $s2, $s2, 12
    ctx->pc = 0x36f5f0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 12));
    // 0x36f5f4: 0xae820058  sw          $v0, 0x58($s4)
    ctx->pc = 0x36f5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 88), GPR_U32(ctx, 2));
    // 0x36f5f8: 0x2673000c  addiu       $s3, $s3, 0xC
    ctx->pc = 0x36f5f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
label_36f5fc:
    // 0x36f5fc: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x36f5fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x36f600: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x36F600u;
    {
        const bool branch_taken_0x36f600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36F604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F600u;
        // 0x36f604: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f600) {
            ctx->pc = 0x36F678u;
            goto label_36f678;
        }
    }
    ctx->pc = 0x36F608u;
    // 0x36f608: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x36f608u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x36f60c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x36F60Cu;
    {
        const bool branch_taken_0x36f60c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F60Cu;
        // 0x36f610: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f60c) {
            ctx->pc = 0x36F630u;
            goto label_36f630;
        }
    }
    ctx->pc = 0x36F614u;
    // 0x36f614: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x36f614u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x36f618: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x36f618u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x36f61c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x36f61cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x36f620: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x36f620u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x36f624: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x36f624u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x36f628: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x36F628u;
    {
        const bool branch_taken_0x36f628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F628u;
        // 0x36f62c: 0xae830018  sw          $v1, 0x18($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f628) {
            ctx->pc = 0x36F63Cu;
            goto label_36f63c;
        }
    }
    ctx->pc = 0x36F630u;
label_36f630:
    // 0x36f630: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x36f630u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x36f634: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x36f634u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f638: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x36f638u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
label_36f63c:
    // 0x36f63c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x36f63cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36f640: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36f640u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36f644: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x36f644u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36f648: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36f648u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36f64c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x36f64cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x36f650: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x36f650u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36f654: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x36f654u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x36f658: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36f658u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36f65c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x36f65cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x36f660: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x36f660u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36f664: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x36f664u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x36f668: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36f668u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36f66c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x36f66cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x36f670: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x36F670u;
    {
        const bool branch_taken_0x36f670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F670u;
        // 0x36f674: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f670) {
            ctx->pc = 0x36F684u;
            goto label_36f684;
        }
    }
    ctx->pc = 0x36F678u;
label_36f678:
    // 0x36f678: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x36f678u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x36f67c: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x36f67cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
    // 0x36f680: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x36f680u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_36f684:
    // 0x36f684: 0x2a620018  slti        $v0, $s3, 0x18
    ctx->pc = 0x36f684u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x36f688: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x36F688u;
    {
        const bool branch_taken_0x36f688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36F68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F688u;
        // 0x36f68c: 0x121602  srl         $v0, $s2, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f688) {
            ctx->pc = 0x36F700u;
            goto label_36f700;
        }
    }
    ctx->pc = 0x36F690u;
    // 0x36f690: 0x2673ffe8  addiu       $s3, $s3, -0x18
    ctx->pc = 0x36f690u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967272));
    // 0x36f694: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x36F694u;
    {
        const bool branch_taken_0x36f694 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F694u;
        // 0x36f698: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f694) {
            ctx->pc = 0x36F6B8u;
            goto label_36f6b8;
        }
    }
    ctx->pc = 0x36F69Cu;
    // 0x36f69c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x36f69cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x36f6a0: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x36f6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x36f6a4: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x36f6a4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x36f6a8: 0x121e02  srl         $v1, $s2, 24
    ctx->pc = 0x36f6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
    // 0x36f6ac: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x36f6acu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x36f6b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x36F6B0u;
    {
        const bool branch_taken_0x36f6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F6B0u;
        // 0x36f6b4: 0xae83005c  sw          $v1, 0x5C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 92), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f6b0) {
            ctx->pc = 0x36F6C4u;
            goto label_36f6c4;
        }
    }
    ctx->pc = 0x36F6B8u;
label_36f6b8:
    // 0x36f6b8: 0x121602  srl         $v0, $s2, 24
    ctx->pc = 0x36f6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
    // 0x36f6bc: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x36f6bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f6c0: 0xae82005c  sw          $v0, 0x5C($s4)
    ctx->pc = 0x36f6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 92), GPR_U32(ctx, 2));
label_36f6c4:
    // 0x36f6c4: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x36f6c4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36f6c8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36f6c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36f6cc: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x36f6ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36f6d0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36f6d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36f6d4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x36f6d4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x36f6d8: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x36f6d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36f6dc: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x36f6dcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x36f6e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36f6e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36f6e4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x36f6e4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x36f6e8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x36f6e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36f6ec: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x36f6ecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x36f6f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36f6f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36f6f4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x36f6f4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x36f6f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x36F6F8u;
    {
        const bool branch_taken_0x36f6f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F6F8u;
        // 0x36f6fc: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f6f8) {
            ctx->pc = 0x36F70Cu;
            goto label_36f70c;
        }
    }
    ctx->pc = 0x36F700u;
label_36f700:
    // 0x36f700: 0x129200  sll         $s2, $s2, 8
    ctx->pc = 0x36f700u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 8));
    // 0x36f704: 0xae82005c  sw          $v0, 0x5C($s4)
    ctx->pc = 0x36f704u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 92), GPR_U32(ctx, 2));
    // 0x36f708: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x36f708u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_36f70c:
    // 0x36f70c: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x36f70cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x36f710: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x36F710u;
    {
        const bool branch_taken_0x36f710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36F714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F710u;
        // 0x36f714: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f710) {
            ctx->pc = 0x36F788u;
            goto label_36f788;
        }
    }
    ctx->pc = 0x36F718u;
    // 0x36f718: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x36f718u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x36f71c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x36F71Cu;
    {
        const bool branch_taken_0x36f71c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F71Cu;
        // 0x36f720: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f71c) {
            ctx->pc = 0x36F740u;
            goto label_36f740;
        }
    }
    ctx->pc = 0x36F724u;
    // 0x36f724: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x36f724u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x36f728: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x36f728u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x36f72c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x36f72cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x36f730: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x36f730u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x36f734: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x36f734u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x36f738: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x36F738u;
    {
        const bool branch_taken_0x36f738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F738u;
        // 0x36f73c: 0xae830060  sw          $v1, 0x60($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 96), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f738) {
            ctx->pc = 0x36F74Cu;
            goto label_36f74c;
        }
    }
    ctx->pc = 0x36F740u;
label_36f740:
    // 0x36f740: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x36f740u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x36f744: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x36f744u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f748: 0xae820060  sw          $v0, 0x60($s4)
    ctx->pc = 0x36f748u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 96), GPR_U32(ctx, 2));
label_36f74c:
    // 0x36f74c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x36f74cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36f750: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36f750u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36f754: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x36f754u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36f758: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36f758u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36f75c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x36f75cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x36f760: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x36f760u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36f764: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x36f764u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x36f768: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36f768u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36f76c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x36f76cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x36f770: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x36f770u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36f774: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x36f774u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x36f778: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36f778u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36f77c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x36f77cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x36f780: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x36F780u;
    {
        const bool branch_taken_0x36f780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F780u;
        // 0x36f784: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f780) {
            ctx->pc = 0x36F794u;
            goto label_36f794;
        }
    }
    ctx->pc = 0x36F788u;
label_36f788:
    // 0x36f788: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x36f788u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x36f78c: 0xae820060  sw          $v0, 0x60($s4)
    ctx->pc = 0x36f78cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 96), GPR_U32(ctx, 2));
    // 0x36f790: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x36f790u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_36f794:
    // 0x36f794: 0x2a62001e  slti        $v0, $s3, 0x1E
    ctx->pc = 0x36f794u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x36f798: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x36F798u;
    {
        const bool branch_taken_0x36f798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36F79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F798u;
        // 0x36f79c: 0x121782  srl         $v0, $s2, 30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f798) {
            ctx->pc = 0x36F810u;
            goto label_36f810;
        }
    }
    ctx->pc = 0x36F7A0u;
    // 0x36f7a0: 0x2673ffe2  addiu       $s3, $s3, -0x1E
    ctx->pc = 0x36f7a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967266));
    // 0x36f7a4: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x36F7A4u;
    {
        const bool branch_taken_0x36f7a4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F7A4u;
        // 0x36f7a8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f7a4) {
            ctx->pc = 0x36F7C8u;
            goto label_36f7c8;
        }
    }
    ctx->pc = 0x36F7ACu;
    // 0x36f7ac: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x36f7acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x36f7b0: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x36f7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x36f7b4: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x36f7b4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x36f7b8: 0x121f82  srl         $v1, $s2, 30
    ctx->pc = 0x36f7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
    // 0x36f7bc: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x36f7bcu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x36f7c0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x36F7C0u;
    {
        const bool branch_taken_0x36f7c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F7C0u;
        // 0x36f7c4: 0xae830064  sw          $v1, 0x64($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 100), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f7c0) {
            ctx->pc = 0x36F7D4u;
            goto label_36f7d4;
        }
    }
    ctx->pc = 0x36F7C8u;
label_36f7c8:
    // 0x36f7c8: 0x121782  srl         $v0, $s2, 30
    ctx->pc = 0x36f7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
    // 0x36f7cc: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x36f7ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f7d0: 0xae820064  sw          $v0, 0x64($s4)
    ctx->pc = 0x36f7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 100), GPR_U32(ctx, 2));
label_36f7d4:
    // 0x36f7d4: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x36f7d4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36f7d8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36f7d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36f7dc: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x36f7dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36f7e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36f7e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36f7e4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x36f7e4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x36f7e8: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x36f7e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36f7ec: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x36f7ecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x36f7f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36f7f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36f7f4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x36f7f4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x36f7f8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x36f7f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36f7fc: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x36f7fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x36f800: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36f800u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36f804: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x36f804u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x36f808: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x36F808u;
    {
        const bool branch_taken_0x36f808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F808u;
        // 0x36f80c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f808) {
            ctx->pc = 0x36F81Cu;
            goto label_36f81c;
        }
    }
    ctx->pc = 0x36F810u;
label_36f810:
    // 0x36f810: 0x129080  sll         $s2, $s2, 2
    ctx->pc = 0x36f810u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x36f814: 0xae820064  sw          $v0, 0x64($s4)
    ctx->pc = 0x36f814u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 100), GPR_U32(ctx, 2));
    // 0x36f818: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x36f818u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
label_36f81c:
    // 0x36f81c: 0x2a62001b  slti        $v0, $s3, 0x1B
    ctx->pc = 0x36f81cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)27) ? 1 : 0);
    // 0x36f820: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x36F820u;
    {
        const bool branch_taken_0x36f820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36F824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F820u;
        // 0x36f824: 0x1216c2  srl         $v0, $s2, 27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f820) {
            ctx->pc = 0x36F860u;
            goto label_36f860;
        }
    }
    ctx->pc = 0x36F828u;
    // 0x36f828: 0x2673ffe5  addiu       $s3, $s3, -0x1B
    ctx->pc = 0x36f828u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967269));
    // 0x36f82c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x36F82Cu;
    {
        const bool branch_taken_0x36f82c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F82Cu;
        // 0x36f830: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f82c) {
            ctx->pc = 0x36F850u;
            goto label_36f850;
        }
    }
    ctx->pc = 0x36F834u;
    // 0x36f834: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x36f834u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x36f838: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x36f838u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x36f83c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x36f83cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x36f840: 0x121ec2  srl         $v1, $s2, 27
    ctx->pc = 0x36f840u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 27));
    // 0x36f844: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x36F844u;
    {
        const bool branch_taken_0x36f844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F844u;
        // 0x36f848: 0xae830068  sw          $v1, 0x68($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 104), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f844) {
            ctx->pc = 0x36F858u;
            goto label_36f858;
        }
    }
    ctx->pc = 0x36F84Cu;
    // 0x36f84c: 0x0  nop
    ctx->pc = 0x36f84cu;
    // NOP
label_36f850:
    // 0x36f850: 0x1216c2  srl         $v0, $s2, 27
    ctx->pc = 0x36f850u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 27));
    // 0x36f854: 0xae820068  sw          $v0, 0x68($s4)
    ctx->pc = 0x36f854u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 104), GPR_U32(ctx, 2));
label_36f858:
    // 0x36f858: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x36F858u;
    {
        const bool branch_taken_0x36f858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F858u;
        // 0x36f85c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f858) {
            ctx->pc = 0x36F868u;
            goto label_36f868;
        }
    }
    ctx->pc = 0x36F860u;
label_36f860:
    // 0x36f860: 0x26730005  addiu       $s3, $s3, 0x5
    ctx->pc = 0x36f860u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 5));
    // 0x36f864: 0xae820068  sw          $v0, 0x68($s4)
    ctx->pc = 0x36f864u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 104), GPR_U32(ctx, 2));
label_36f868:
    // 0x36f868: 0x8e83004c  lw          $v1, 0x4C($s4)
    ctx->pc = 0x36f868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
    // 0x36f86c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x36f86cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36f870: 0x10640007  beq         $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x36F870u;
    {
        const bool branch_taken_0x36f870 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x36F874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F870u;
        // 0x36f874: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f870) {
            ctx->pc = 0x36F890u;
            goto label_36f890;
        }
    }
    ctx->pc = 0x36F878u;
    // 0x36f878: 0x8e820494  lw          $v0, 0x494($s4)
    ctx->pc = 0x36f878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1172)));
    // 0x36f87c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36f87cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36f880: 0xae84004c  sw          $a0, 0x4C($s4)
    ctx->pc = 0x36f880u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 4));
    // 0x36f884: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36f884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36f888: 0xae820494  sw          $v0, 0x494($s4)
    ctx->pc = 0x36f888u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1172), GPR_U32(ctx, 2));
    // 0x36f88c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x36f88cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_36f890:
    // 0x36f890: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x36f890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f894: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x36f894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x36f898: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36f898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36f89c: 0x8c42a560  lw          $v0, -0x5AA0($v0)
    ctx->pc = 0x36f89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944096)));
    // 0x36f8a0: 0xc0db882  jal         func_36E208
    ctx->pc = 0x36F8A0u;
    SET_GPR_U32(ctx, 31, 0x36F8A8u);
    ctx->pc = 0x36F8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F8A0u;
    // 0x36f8a4: 0xae820318  sw          $v0, 0x318($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 792), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36E208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36E208u, 0x36F8A0u, 0x36F8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F8A8u;
label_36f8a8:
    // 0x36f8a8: 0x8e820058  lw          $v0, 0x58($s4)
    ctx->pc = 0x36f8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
    // 0x36f8ac: 0x8e83005c  lw          $v1, 0x5C($s4)
    ctx->pc = 0x36f8acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
    // 0x36f8b0: 0x8e850014  lw          $a1, 0x14($s4)
    ctx->pc = 0x36f8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x36f8b4: 0x21480  sll         $v0, $v0, 18
    ctx->pc = 0x36f8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 18));
    // 0x36f8b8: 0x8e84001c  lw          $a0, 0x1C($s4)
    ctx->pc = 0x36f8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x36f8bc: 0x31a80  sll         $v1, $v1, 10
    ctx->pc = 0x36f8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
    // 0x36f8c0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x36f8c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x36f8c4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x36f8c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x36f8c8: 0xae8202d4  sw          $v0, 0x2D4($s4)
    ctx->pc = 0x36f8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 724), GPR_U32(ctx, 2));
    // 0x36f8cc: 0x100009c1  b           . + 4 + (0x9C1 << 2)
    ctx->pc = 0x36F8CCu;
    {
        const bool branch_taken_0x36f8cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F8CCu;
        // 0x36f8d0: 0xae8302d8  sw          $v1, 0x2D8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 728), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f8cc) {
            ctx->pc = 0x371FD4u;
            goto label_371fd4;
        }
    }
    ctx->pc = 0x36F8D4u;
    // 0x36f8d4: 0x0  nop
    ctx->pc = 0x36f8d4u;
    // NOP
label_36f8d8:
    // 0x36f8d8: 0x2a62001d  slti        $v0, $s3, 0x1D
    ctx->pc = 0x36f8d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x36f8dc: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x36F8DCu;
    {
        const bool branch_taken_0x36f8dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36F8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F8DCu;
        // 0x36f8e0: 0x121742  srl         $v0, $s2, 29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f8dc) {
            ctx->pc = 0x36F958u;
            goto label_36f958;
        }
    }
    ctx->pc = 0x36F8E4u;
    // 0x36f8e4: 0x2673ffe3  addiu       $s3, $s3, -0x1D
    ctx->pc = 0x36f8e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967267));
    // 0x36f8e8: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x36F8E8u;
    {
        const bool branch_taken_0x36f8e8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F8E8u;
        // 0x36f8ec: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f8e8) {
            ctx->pc = 0x36F910u;
            goto label_36f910;
        }
    }
    ctx->pc = 0x36F8F0u;
    // 0x36f8f0: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x36f8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x36f8f4: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x36f8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x36f8f8: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x36f8f8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x36f8fc: 0x121f42  srl         $v1, $s2, 29
    ctx->pc = 0x36f8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 29));
    // 0x36f900: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x36f900u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x36f904: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x36F904u;
    {
        const bool branch_taken_0x36f904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F904u;
        // 0x36f908: 0xae83006c  sw          $v1, 0x6C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 108), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f904) {
            ctx->pc = 0x36F91Cu;
            goto label_36f91c;
        }
    }
    ctx->pc = 0x36F90Cu;
    // 0x36f90c: 0x0  nop
    ctx->pc = 0x36f90cu;
    // NOP
label_36f910:
    // 0x36f910: 0x121742  srl         $v0, $s2, 29
    ctx->pc = 0x36f910u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 29));
    // 0x36f914: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x36f914u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f918: 0xae82006c  sw          $v0, 0x6C($s4)
    ctx->pc = 0x36f918u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 108), GPR_U32(ctx, 2));
label_36f91c:
    // 0x36f91c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x36f91cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36f920: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36f920u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36f924: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x36f924u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36f928: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36f928u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36f92c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x36f92cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x36f930: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x36f930u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36f934: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x36f934u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x36f938: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36f938u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36f93c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x36f93cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x36f940: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x36f940u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36f944: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x36f944u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x36f948: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36f948u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36f94c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x36f94cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x36f950: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x36F950u;
    {
        const bool branch_taken_0x36f950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F950u;
        // 0x36f954: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f950) {
            ctx->pc = 0x36F964u;
            goto label_36f964;
        }
    }
    ctx->pc = 0x36F958u;
label_36f958:
    // 0x36f958: 0x1290c0  sll         $s2, $s2, 3
    ctx->pc = 0x36f958u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x36f95c: 0xae82006c  sw          $v0, 0x6C($s4)
    ctx->pc = 0x36f95cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 108), GPR_U32(ctx, 2));
    // 0x36f960: 0x26730003  addiu       $s3, $s3, 0x3
    ctx->pc = 0x36f960u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
label_36f964:
    // 0x36f964: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x36f964u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x36f968: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x36F968u;
    {
        const bool branch_taken_0x36f968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36F96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F968u;
        // 0x36f96c: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f968) {
            ctx->pc = 0x36F9E0u;
            goto label_36f9e0;
        }
    }
    ctx->pc = 0x36F970u;
    // 0x36f970: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x36f970u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x36f974: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x36F974u;
    {
        const bool branch_taken_0x36f974 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F974u;
        // 0x36f978: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f974) {
            ctx->pc = 0x36F998u;
            goto label_36f998;
        }
    }
    ctx->pc = 0x36F97Cu;
    // 0x36f97c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x36f97cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x36f980: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x36f980u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x36f984: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x36f984u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x36f988: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x36f988u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x36f98c: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x36f98cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x36f990: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x36F990u;
    {
        const bool branch_taken_0x36f990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F990u;
        // 0x36f994: 0xae830070  sw          $v1, 0x70($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 112), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f990) {
            ctx->pc = 0x36F9A4u;
            goto label_36f9a4;
        }
    }
    ctx->pc = 0x36F998u;
label_36f998:
    // 0x36f998: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x36f998u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x36f99c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x36f99cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f9a0: 0xae820070  sw          $v0, 0x70($s4)
    ctx->pc = 0x36f9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 112), GPR_U32(ctx, 2));
label_36f9a4:
    // 0x36f9a4: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x36f9a4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36f9a8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36f9a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36f9ac: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x36f9acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36f9b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36f9b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36f9b4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x36f9b4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x36f9b8: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x36f9b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36f9bc: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x36f9bcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x36f9c0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36f9c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36f9c4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x36f9c4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x36f9c8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x36f9c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36f9cc: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x36f9ccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x36f9d0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36f9d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36f9d4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x36f9d4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x36f9d8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x36F9D8u;
    {
        const bool branch_taken_0x36f9d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F9D8u;
        // 0x36f9dc: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f9d8) {
            ctx->pc = 0x36F9ECu;
            goto label_36f9ec;
        }
    }
    ctx->pc = 0x36F9E0u;
label_36f9e0:
    // 0x36f9e0: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x36f9e0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x36f9e4: 0xae820070  sw          $v0, 0x70($s4)
    ctx->pc = 0x36f9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 112), GPR_U32(ctx, 2));
    // 0x36f9e8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x36f9e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_36f9ec:
    // 0x36f9ec: 0x8e820070  lw          $v0, 0x70($s4)
    ctx->pc = 0x36f9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
    // 0x36f9f0: 0x10400066  beqz        $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x36F9F0u;
    {
        const bool branch_taken_0x36f9f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F9F0u;
        // 0x36f9f4: 0x2a620018  slti        $v0, $s3, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)24) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f9f0) {
            ctx->pc = 0x36FB8Cu;
            goto label_36fb8c;
        }
    }
    ctx->pc = 0x36F9F8u;
    // 0x36f9f8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x36F9F8u;
    {
        const bool branch_taken_0x36f9f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36F9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F9F8u;
        // 0x36f9fc: 0x121602  srl         $v0, $s2, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f9f8) {
            ctx->pc = 0x36FA70u;
            goto label_36fa70;
        }
    }
    ctx->pc = 0x36FA00u;
    // 0x36fa00: 0x2673ffe8  addiu       $s3, $s3, -0x18
    ctx->pc = 0x36fa00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967272));
    // 0x36fa04: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x36FA04u;
    {
        const bool branch_taken_0x36fa04 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x36FA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FA04u;
        // 0x36fa08: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fa04) {
            ctx->pc = 0x36FA28u;
            goto label_36fa28;
        }
    }
    ctx->pc = 0x36FA0Cu;
    // 0x36fa0c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x36fa0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x36fa10: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x36fa10u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x36fa14: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x36fa14u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x36fa18: 0x121e02  srl         $v1, $s2, 24
    ctx->pc = 0x36fa18u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
    // 0x36fa1c: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x36fa1cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x36fa20: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x36FA20u;
    {
        const bool branch_taken_0x36fa20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36FA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FA20u;
        // 0x36fa24: 0xae830074  sw          $v1, 0x74($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 116), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fa20) {
            ctx->pc = 0x36FA34u;
            goto label_36fa34;
        }
    }
    ctx->pc = 0x36FA28u;
label_36fa28:
    // 0x36fa28: 0x121602  srl         $v0, $s2, 24
    ctx->pc = 0x36fa28u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
    // 0x36fa2c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x36fa2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fa30: 0xae820074  sw          $v0, 0x74($s4)
    ctx->pc = 0x36fa30u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 116), GPR_U32(ctx, 2));
label_36fa34:
    // 0x36fa34: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x36fa34u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36fa38: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36fa38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36fa3c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x36fa3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36fa40: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36fa40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36fa44: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x36fa44u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x36fa48: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x36fa48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36fa4c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x36fa4cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x36fa50: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36fa50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36fa54: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x36fa54u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x36fa58: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x36fa58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36fa5c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x36fa5cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x36fa60: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36fa60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36fa64: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x36fa64u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x36fa68: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x36FA68u;
    {
        const bool branch_taken_0x36fa68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36FA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FA68u;
        // 0x36fa6c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fa68) {
            ctx->pc = 0x36FA7Cu;
            goto label_36fa7c;
        }
    }
    ctx->pc = 0x36FA70u;
label_36fa70:
    // 0x36fa70: 0x129200  sll         $s2, $s2, 8
    ctx->pc = 0x36fa70u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 8));
    // 0x36fa74: 0xae820074  sw          $v0, 0x74($s4)
    ctx->pc = 0x36fa74u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 116), GPR_U32(ctx, 2));
    // 0x36fa78: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x36fa78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_36fa7c:
    // 0x36fa7c: 0x2a620018  slti        $v0, $s3, 0x18
    ctx->pc = 0x36fa7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x36fa80: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x36FA80u;
    {
        const bool branch_taken_0x36fa80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36FA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FA80u;
        // 0x36fa84: 0x121602  srl         $v0, $s2, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fa80) {
            ctx->pc = 0x36FAF8u;
            goto label_36faf8;
        }
    }
    ctx->pc = 0x36FA88u;
    // 0x36fa88: 0x2673ffe8  addiu       $s3, $s3, -0x18
    ctx->pc = 0x36fa88u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967272));
    // 0x36fa8c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x36FA8Cu;
    {
        const bool branch_taken_0x36fa8c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x36FA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FA8Cu;
        // 0x36fa90: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fa8c) {
            ctx->pc = 0x36FAB0u;
            goto label_36fab0;
        }
    }
    ctx->pc = 0x36FA94u;
    // 0x36fa94: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x36fa94u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x36fa98: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x36fa98u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x36fa9c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x36fa9cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x36faa0: 0x121e02  srl         $v1, $s2, 24
    ctx->pc = 0x36faa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
    // 0x36faa4: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x36faa4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x36faa8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x36FAA8u;
    {
        const bool branch_taken_0x36faa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36FAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FAA8u;
        // 0x36faac: 0xae830078  sw          $v1, 0x78($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 120), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36faa8) {
            ctx->pc = 0x36FABCu;
            goto label_36fabc;
        }
    }
    ctx->pc = 0x36FAB0u;
label_36fab0:
    // 0x36fab0: 0x121602  srl         $v0, $s2, 24
    ctx->pc = 0x36fab0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
    // 0x36fab4: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x36fab4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fab8: 0xae820078  sw          $v0, 0x78($s4)
    ctx->pc = 0x36fab8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 120), GPR_U32(ctx, 2));
label_36fabc:
    // 0x36fabc: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x36fabcu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36fac0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36fac0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36fac4: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x36fac4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36fac8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36fac8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36facc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x36faccu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x36fad0: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x36fad0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36fad4: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x36fad4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x36fad8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36fad8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36fadc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x36fadcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x36fae0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x36fae0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36fae4: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x36fae4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x36fae8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36fae8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36faec: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x36faecu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x36faf0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x36FAF0u;
    {
        const bool branch_taken_0x36faf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36FAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FAF0u;
        // 0x36faf4: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36faf0) {
            ctx->pc = 0x36FB04u;
            goto label_36fb04;
        }
    }
    ctx->pc = 0x36FAF8u;
label_36faf8:
    // 0x36faf8: 0x129200  sll         $s2, $s2, 8
    ctx->pc = 0x36faf8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 8));
    // 0x36fafc: 0xae820078  sw          $v0, 0x78($s4)
    ctx->pc = 0x36fafcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 120), GPR_U32(ctx, 2));
    // 0x36fb00: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x36fb00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_36fb04:
    // 0x36fb04: 0x2a620018  slti        $v0, $s3, 0x18
    ctx->pc = 0x36fb04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x36fb08: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x36FB08u;
    {
        const bool branch_taken_0x36fb08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36FB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FB08u;
        // 0x36fb0c: 0x121602  srl         $v0, $s2, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fb08) {
            ctx->pc = 0x36FB80u;
            goto label_36fb80;
        }
    }
    ctx->pc = 0x36FB10u;
    // 0x36fb10: 0x2673ffe8  addiu       $s3, $s3, -0x18
    ctx->pc = 0x36fb10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967272));
    // 0x36fb14: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x36FB14u;
    {
        const bool branch_taken_0x36fb14 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x36FB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FB14u;
        // 0x36fb18: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fb14) {
            ctx->pc = 0x36FB38u;
            goto label_36fb38;
        }
    }
    ctx->pc = 0x36FB1Cu;
    // 0x36fb1c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x36fb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x36fb20: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x36fb20u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x36fb24: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x36fb24u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x36fb28: 0x121e02  srl         $v1, $s2, 24
    ctx->pc = 0x36fb28u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
    // 0x36fb2c: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x36fb2cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x36fb30: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x36FB30u;
    {
        const bool branch_taken_0x36fb30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36FB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FB30u;
        // 0x36fb34: 0xae83007c  sw          $v1, 0x7C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 124), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fb30) {
            ctx->pc = 0x36FB44u;
            goto label_36fb44;
        }
    }
    ctx->pc = 0x36FB38u;
label_36fb38:
    // 0x36fb38: 0x121602  srl         $v0, $s2, 24
    ctx->pc = 0x36fb38u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
    // 0x36fb3c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x36fb3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fb40: 0xae82007c  sw          $v0, 0x7C($s4)
    ctx->pc = 0x36fb40u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 124), GPR_U32(ctx, 2));
label_36fb44:
    // 0x36fb44: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x36fb44u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36fb48: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36fb48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36fb4c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x36fb4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36fb50: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36fb50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36fb54: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x36fb54u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x36fb58: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x36fb58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36fb5c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x36fb5cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x36fb60: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36fb60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36fb64: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x36fb64u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x36fb68: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x36fb68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36fb6c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x36fb6cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x36fb70: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36fb70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36fb74: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x36fb74u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x36fb78: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x36FB78u;
    {
        const bool branch_taken_0x36fb78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36FB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FB78u;
        // 0x36fb7c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fb78) {
            ctx->pc = 0x36FB8Cu;
            goto label_36fb8c;
        }
    }
    ctx->pc = 0x36FB80u;
label_36fb80:
    // 0x36fb80: 0x129200  sll         $s2, $s2, 8
    ctx->pc = 0x36fb80u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 8));
    // 0x36fb84: 0xae82007c  sw          $v0, 0x7C($s4)
    ctx->pc = 0x36fb84u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 124), GPR_U32(ctx, 2));
    // 0x36fb88: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x36fb88u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_36fb8c:
    // 0x36fb8c: 0x2a620012  slti        $v0, $s3, 0x12
    ctx->pc = 0x36fb8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x36fb90: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x36FB90u;
    {
        const bool branch_taken_0x36fb90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36FB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FB90u;
        // 0x36fb94: 0x121482  srl         $v0, $s2, 18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fb90) {
            ctx->pc = 0x36FC08u;
            goto label_36fc08;
        }
    }
    ctx->pc = 0x36FB98u;
    // 0x36fb98: 0x2673ffee  addiu       $s3, $s3, -0x12
    ctx->pc = 0x36fb98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967278));
    // 0x36fb9c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x36FB9Cu;
    {
        const bool branch_taken_0x36fb9c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x36FBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FB9Cu;
        // 0x36fba0: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fb9c) {
            ctx->pc = 0x36FBC0u;
            goto label_36fbc0;
        }
    }
    ctx->pc = 0x36FBA4u;
    // 0x36fba4: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x36fba4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x36fba8: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x36fba8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x36fbac: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x36fbacu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x36fbb0: 0x121c82  srl         $v1, $s2, 18
    ctx->pc = 0x36fbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 18));
    // 0x36fbb4: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x36fbb4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x36fbb8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x36FBB8u;
    {
        const bool branch_taken_0x36fbb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36FBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FBB8u;
        // 0x36fbbc: 0xae830080  sw          $v1, 0x80($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fbb8) {
            ctx->pc = 0x36FBCCu;
            goto label_36fbcc;
        }
    }
    ctx->pc = 0x36FBC0u;
label_36fbc0:
    // 0x36fbc0: 0x121482  srl         $v0, $s2, 18
    ctx->pc = 0x36fbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 18));
    // 0x36fbc4: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x36fbc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fbc8: 0xae820080  sw          $v0, 0x80($s4)
    ctx->pc = 0x36fbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 128), GPR_U32(ctx, 2));
label_36fbcc:
    // 0x36fbcc: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x36fbccu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36fbd0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36fbd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36fbd4: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x36fbd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36fbd8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36fbd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36fbdc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x36fbdcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x36fbe0: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x36fbe0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36fbe4: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x36fbe4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x36fbe8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36fbe8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36fbec: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x36fbecu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x36fbf0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x36fbf0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36fbf4: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x36fbf4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x36fbf8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36fbf8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36fbfc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x36fbfcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x36fc00: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x36FC00u;
    {
        const bool branch_taken_0x36fc00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36FC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FC00u;
        // 0x36fc04: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fc00) {
            ctx->pc = 0x36FC14u;
            goto label_36fc14;
        }
    }
    ctx->pc = 0x36FC08u;
label_36fc08:
    // 0x36fc08: 0x129380  sll         $s2, $s2, 14
    ctx->pc = 0x36fc08u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 14));
    // 0x36fc0c: 0xae820080  sw          $v0, 0x80($s4)
    ctx->pc = 0x36fc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 128), GPR_U32(ctx, 2));
    // 0x36fc10: 0x2673000e  addiu       $s3, $s3, 0xE
    ctx->pc = 0x36fc10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 14));
label_36fc14:
    // 0x36fc14: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x36fc14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x36fc18: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x36FC18u;
    {
        const bool branch_taken_0x36fc18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36FC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FC18u;
        // 0x36fc1c: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fc18) {
            ctx->pc = 0x36FC90u;
            goto label_36fc90;
        }
    }
    ctx->pc = 0x36FC20u;
    // 0x36fc20: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x36fc20u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x36fc24: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x36FC24u;
    {
        const bool branch_taken_0x36fc24 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x36FC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FC24u;
        // 0x36fc28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fc24) {
            ctx->pc = 0x36FC48u;
            goto label_36fc48;
        }
    }
    ctx->pc = 0x36FC2Cu;
    // 0x36fc2c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x36fc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x36fc30: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x36fc30u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x36fc34: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x36fc34u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x36fc38: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x36fc38u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x36fc3c: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x36fc3cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x36fc40: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x36FC40u;
    {
        const bool branch_taken_0x36fc40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36FC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FC40u;
        // 0x36fc44: 0xae830018  sw          $v1, 0x18($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fc40) {
            ctx->pc = 0x36FC54u;
            goto label_36fc54;
        }
    }
    ctx->pc = 0x36FC48u;
label_36fc48:
    // 0x36fc48: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x36fc48u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x36fc4c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x36fc4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fc50: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x36fc50u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
label_36fc54:
    // 0x36fc54: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x36fc54u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36fc58: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36fc58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36fc5c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x36fc5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36fc60: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36fc60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36fc64: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x36fc64u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x36fc68: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x36fc68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36fc6c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x36fc6cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x36fc70: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36fc70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36fc74: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x36fc74u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x36fc78: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x36fc78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36fc7c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x36fc7cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x36fc80: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36fc80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36fc84: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x36fc84u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x36fc88: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x36FC88u;
    {
        const bool branch_taken_0x36fc88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36FC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FC88u;
        // 0x36fc8c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fc88) {
            ctx->pc = 0x36FC9Cu;
            goto label_36fc9c;
        }
    }
    ctx->pc = 0x36FC90u;
label_36fc90:
    // 0x36fc90: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x36fc90u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x36fc94: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x36fc94u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
    // 0x36fc98: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x36fc98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_36fc9c:
    // 0x36fc9c: 0x2a620012  slti        $v0, $s3, 0x12
    ctx->pc = 0x36fc9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x36fca0: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x36FCA0u;
    {
        const bool branch_taken_0x36fca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36FCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FCA0u;
        // 0x36fca4: 0x121482  srl         $v0, $s2, 18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fca0) {
            ctx->pc = 0x36FCE0u;
            goto label_36fce0;
        }
    }
    ctx->pc = 0x36FCA8u;
    // 0x36fca8: 0x2673ffee  addiu       $s3, $s3, -0x12
    ctx->pc = 0x36fca8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967278));
    // 0x36fcac: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x36FCACu;
    {
        const bool branch_taken_0x36fcac = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x36FCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FCACu;
        // 0x36fcb0: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fcac) {
            ctx->pc = 0x36FCD0u;
            goto label_36fcd0;
        }
    }
    ctx->pc = 0x36FCB4u;
    // 0x36fcb4: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x36fcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x36fcb8: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x36fcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x36fcbc: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x36fcbcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x36fcc0: 0x121c82  srl         $v1, $s2, 18
    ctx->pc = 0x36fcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 18));
    // 0x36fcc4: 0x100008ba  b           . + 4 + (0x8BA << 2)
    ctx->pc = 0x36FCC4u;
    {
        const bool branch_taken_0x36fcc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36FCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FCC4u;
        // 0x36fcc8: 0xae830084  sw          $v1, 0x84($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 132), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fcc4) {
            ctx->pc = 0x371FB0u;
            goto label_371fb0;
        }
    }
    ctx->pc = 0x36FCCCu;
    // 0x36fccc: 0x0  nop
    ctx->pc = 0x36fcccu;
    // NOP
label_36fcd0:
    // 0x36fcd0: 0x121482  srl         $v0, $s2, 18
    ctx->pc = 0x36fcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 18));
    // 0x36fcd4: 0x100008b6  b           . + 4 + (0x8B6 << 2)
    ctx->pc = 0x36FCD4u;
    {
        const bool branch_taken_0x36fcd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36FCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FCD4u;
        // 0x36fcd8: 0xae820084  sw          $v0, 0x84($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fcd4) {
            ctx->pc = 0x371FB0u;
            goto label_371fb0;
        }
    }
    ctx->pc = 0x36FCDCu;
    // 0x36fcdc: 0x0  nop
    ctx->pc = 0x36fcdcu;
    // NOP
label_36fce0:
    // 0x36fce0: 0x2673000e  addiu       $s3, $s3, 0xE
    ctx->pc = 0x36fce0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 14));
    // 0x36fce4: 0x100008bb  b           . + 4 + (0x8BB << 2)
    ctx->pc = 0x36FCE4u;
    {
        const bool branch_taken_0x36fce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36FCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FCE4u;
        // 0x36fce8: 0xae820084  sw          $v0, 0x84($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fce4) {
            ctx->pc = 0x371FD4u;
            goto label_371fd4;
        }
    }
    ctx->pc = 0x36FCECu;
    // 0x36fcec: 0x0  nop
    ctx->pc = 0x36fcecu;
    // NOP
label_36fcf0:
    // 0x36fcf0: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x36fcf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x36fcf4: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x36FCF4u;
    {
        const bool branch_taken_0x36fcf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36FCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FCF4u;
        // 0x36fcf8: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fcf4) {
            ctx->pc = 0x36FD70u;
            goto label_36fd70;
        }
    }
    ctx->pc = 0x36FCFCu;
    // 0x36fcfc: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x36fcfcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x36fd00: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x36FD00u;
    {
        const bool branch_taken_0x36fd00 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x36FD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FD00u;
        // 0x36fd04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fd00) {
            ctx->pc = 0x36FD28u;
            goto label_36fd28;
        }
    }
    ctx->pc = 0x36FD08u;
    // 0x36fd08: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x36fd08u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x36fd0c: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x36fd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x36fd10: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x36fd10u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x36fd14: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x36fd14u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x36fd18: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x36fd18u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x36fd1c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x36FD1Cu;
    {
        const bool branch_taken_0x36fd1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36FD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FD1Cu;
        // 0x36fd20: 0xae830024  sw          $v1, 0x24($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fd1c) {
            ctx->pc = 0x36FD34u;
            goto label_36fd34;
        }
    }
    ctx->pc = 0x36FD24u;
    // 0x36fd24: 0x0  nop
    ctx->pc = 0x36fd24u;
    // NOP
label_36fd28:
    // 0x36fd28: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x36fd28u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x36fd2c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x36fd2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fd30: 0xae820024  sw          $v0, 0x24($s4)
    ctx->pc = 0x36fd30u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 2));
label_36fd34:
    // 0x36fd34: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x36fd34u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36fd38: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36fd38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36fd3c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x36fd3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36fd40: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36fd40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36fd44: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x36fd44u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x36fd48: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x36fd48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36fd4c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x36fd4cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x36fd50: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36fd50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36fd54: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x36fd54u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x36fd58: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x36fd58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36fd5c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x36fd5cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x36fd60: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36fd60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36fd64: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x36fd64u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x36fd68: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x36FD68u;
    {
        const bool branch_taken_0x36fd68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36FD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FD68u;
        // 0x36fd6c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fd68) {
            ctx->pc = 0x36FD7Cu;
            goto label_36fd7c;
        }
    }
    ctx->pc = 0x36FD70u;
label_36fd70:
    // 0x36fd70: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x36fd70u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x36fd74: 0xae820024  sw          $v0, 0x24($s4)
    ctx->pc = 0x36fd74u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 2));
    // 0x36fd78: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x36fd78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_36fd7c:
    // 0x36fd7c: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x36fd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x36fd80: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x36FD80u;
    {
        const bool branch_taken_0x36fd80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36FD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FD80u;
        // 0x36fd84: 0x2a62001f  slti        $v0, $s3, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fd80) {
            ctx->pc = 0x36FDECu;
            goto label_36fdec;
        }
    }
    ctx->pc = 0x36FD88u;
    // 0x36fd88: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x36fd88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x36fd8c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x36fd8cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_36fd90:
    // 0x36fd90: 0x2a620020  slti        $v0, $s3, 0x20
    ctx->pc = 0x36fd90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x36fd94: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x36FD94u;
    {
        const bool branch_taken_0x36fd94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36fd94) {
            ctx->pc = 0x36FD98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36FD94u;
            // 0x36fd98: 0x129200  sll         $s2, $s2, 8 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36FDDCu;
            goto label_36fddc;
        }
    }
    ctx->pc = 0x36FD9Cu;
    // 0x36fd9c: 0x2673ffe0  addiu       $s3, $s3, -0x20
    ctx->pc = 0x36fd9cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967264));
    // 0x36fda0: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x36fda0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x36fda4: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x36fda4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36fda8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36fda8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36fdac: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x36fdacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36fdb0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36fdb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36fdb4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x36fdb4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x36fdb8: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x36fdb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36fdbc: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x36fdbcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x36fdc0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36fdc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36fdc4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x36fdc4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x36fdc8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x36fdc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36fdcc: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x36fdccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x36fdd0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36fdd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36fdd4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x36fdd4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x36fdd8: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x36fdd8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_36fddc:
    // 0x36fddc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x36fddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x36fde0: 0x483ffeb  bgezl       $a0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x36FDE0u;
    {
        const bool branch_taken_0x36fde0 = (GPR_S64(ctx, 4) >= 0);
        if (branch_taken_0x36fde0) {
            ctx->pc = 0x36FDE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36FDE0u;
            // 0x36fde4: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36FD90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36fd90;
        }
    }
    ctx->pc = 0x36FDE8u;
    // 0x36fde8: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x36fde8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
label_36fdec:
    // 0x36fdec: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x36FDECu;
    {
        const bool branch_taken_0x36fdec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36FDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FDECu;
        // 0x36fdf0: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fdec) {
            ctx->pc = 0x36FE68u;
            goto label_36fe68;
        }
    }
    ctx->pc = 0x36FDF4u;
    // 0x36fdf4: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x36fdf4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x36fdf8: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x36FDF8u;
    {
        const bool branch_taken_0x36fdf8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x36FDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FDF8u;
        // 0x36fdfc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fdf8) {
            ctx->pc = 0x36FE20u;
            goto label_36fe20;
        }
    }
    ctx->pc = 0x36FE00u;
    // 0x36fe00: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x36fe00u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x36fe04: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x36fe04u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x36fe08: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x36fe08u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x36fe0c: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x36fe0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x36fe10: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x36fe10u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x36fe14: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x36FE14u;
    {
        const bool branch_taken_0x36fe14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36FE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FE14u;
        // 0x36fe18: 0xae830028  sw          $v1, 0x28($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fe14) {
            ctx->pc = 0x36FE2Cu;
            goto label_36fe2c;
        }
    }
    ctx->pc = 0x36FE1Cu;
    // 0x36fe1c: 0x0  nop
    ctx->pc = 0x36fe1cu;
    // NOP
label_36fe20:
    // 0x36fe20: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x36fe20u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x36fe24: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x36fe24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fe28: 0xae820028  sw          $v0, 0x28($s4)
    ctx->pc = 0x36fe28u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 2));
label_36fe2c:
    // 0x36fe2c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x36fe2cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36fe30: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36fe30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36fe34: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x36fe34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36fe38: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36fe38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36fe3c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x36fe3cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x36fe40: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x36fe40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36fe44: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x36fe44u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x36fe48: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36fe48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36fe4c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x36fe4cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x36fe50: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x36fe50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36fe54: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x36fe54u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x36fe58: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36fe58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36fe5c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x36fe5cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x36fe60: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x36FE60u;
    {
        const bool branch_taken_0x36fe60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36FE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FE60u;
        // 0x36fe64: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fe60) {
            ctx->pc = 0x36FE74u;
            goto label_36fe74;
        }
    }
    ctx->pc = 0x36FE68u;
label_36fe68:
    // 0x36fe68: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x36fe68u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x36fe6c: 0xae820028  sw          $v0, 0x28($s4)
    ctx->pc = 0x36fe6cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 2));
    // 0x36fe70: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x36fe70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_36fe74:
    // 0x36fe74: 0x8e820028  lw          $v0, 0x28($s4)
    ctx->pc = 0x36fe74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x36fe78: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x36FE78u;
    {
        const bool branch_taken_0x36fe78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36FE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FE78u;
        // 0x36fe7c: 0x2a62001f  slti        $v0, $s3, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fe78) {
            ctx->pc = 0x36FEE4u;
            goto label_36fee4;
        }
    }
    ctx->pc = 0x36FE80u;
    // 0x36fe80: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x36fe80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x36fe84: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x36fe84u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_36fe88:
    // 0x36fe88: 0x2a620020  slti        $v0, $s3, 0x20
    ctx->pc = 0x36fe88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x36fe8c: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x36FE8Cu;
    {
        const bool branch_taken_0x36fe8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36fe8c) {
            ctx->pc = 0x36FE90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36FE8Cu;
            // 0x36fe90: 0x129200  sll         $s2, $s2, 8 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36FED4u;
            goto label_36fed4;
        }
    }
    ctx->pc = 0x36FE94u;
    // 0x36fe94: 0x2673ffe0  addiu       $s3, $s3, -0x20
    ctx->pc = 0x36fe94u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967264));
    // 0x36fe98: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x36fe98u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x36fe9c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x36fe9cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36fea0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36fea0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36fea4: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x36fea4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36fea8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36fea8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36feac: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x36feacu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x36feb0: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x36feb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36feb4: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x36feb4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x36feb8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36feb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36febc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x36febcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x36fec0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x36fec0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36fec4: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x36fec4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x36fec8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36fec8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36fecc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x36feccu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x36fed0: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x36fed0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_36fed4:
    // 0x36fed4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x36fed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x36fed8: 0x483ffeb  bgezl       $a0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x36FED8u;
    {
        const bool branch_taken_0x36fed8 = (GPR_S64(ctx, 4) >= 0);
        if (branch_taken_0x36fed8) {
            ctx->pc = 0x36FEDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36FED8u;
            // 0x36fedc: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36FE88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36fe88;
        }
    }
    ctx->pc = 0x36FEE0u;
    // 0x36fee0: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x36fee0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
label_36fee4:
    // 0x36fee4: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x36FEE4u;
    {
        const bool branch_taken_0x36fee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36FEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FEE4u;
        // 0x36fee8: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fee4) {
            ctx->pc = 0x36FF60u;
            goto label_36ff60;
        }
    }
    ctx->pc = 0x36FEECu;
    // 0x36feec: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x36feecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x36fef0: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x36FEF0u;
    {
        const bool branch_taken_0x36fef0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x36FEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FEF0u;
        // 0x36fef4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fef0) {
            ctx->pc = 0x36FF18u;
            goto label_36ff18;
        }
    }
    ctx->pc = 0x36FEF8u;
    // 0x36fef8: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x36fef8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x36fefc: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x36fefcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x36ff00: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x36ff00u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x36ff04: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x36ff04u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x36ff08: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x36ff08u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x36ff0c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x36FF0Cu;
    {
        const bool branch_taken_0x36ff0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36FF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FF0Cu;
        // 0x36ff10: 0xae830158  sw          $v1, 0x158($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 344), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ff0c) {
            ctx->pc = 0x36FF24u;
            goto label_36ff24;
        }
    }
    ctx->pc = 0x36FF14u;
    // 0x36ff14: 0x0  nop
    ctx->pc = 0x36ff14u;
    // NOP
label_36ff18:
    // 0x36ff18: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x36ff18u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x36ff1c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x36ff1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ff20: 0xae820158  sw          $v0, 0x158($s4)
    ctx->pc = 0x36ff20u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 344), GPR_U32(ctx, 2));
label_36ff24:
    // 0x36ff24: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x36ff24u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36ff28: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36ff28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36ff2c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x36ff2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36ff30: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36ff30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36ff34: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x36ff34u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x36ff38: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x36ff38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36ff3c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x36ff3cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x36ff40: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36ff40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36ff44: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x36ff44u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x36ff48: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x36ff48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36ff4c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x36ff4cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x36ff50: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36ff50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36ff54: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x36ff54u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x36ff58: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x36FF58u;
    {
        const bool branch_taken_0x36ff58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36FF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FF58u;
        // 0x36ff5c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ff58) {
            ctx->pc = 0x36FF6Cu;
            goto label_36ff6c;
        }
    }
    ctx->pc = 0x36FF60u;
label_36ff60:
    // 0x36ff60: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x36ff60u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x36ff64: 0xae820158  sw          $v0, 0x158($s4)
    ctx->pc = 0x36ff64u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 344), GPR_U32(ctx, 2));
    // 0x36ff68: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x36ff68u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_36ff6c:
    // 0x36ff6c: 0x8e820158  lw          $v0, 0x158($s4)
    ctx->pc = 0x36ff6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 344)));
    // 0x36ff70: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x36FF70u;
    {
        const bool branch_taken_0x36ff70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36FF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FF70u;
        // 0x36ff74: 0x2a62001f  slti        $v0, $s3, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ff70) {
            ctx->pc = 0x36FFDCu;
            goto label_36ffdc;
        }
    }
    ctx->pc = 0x36FF78u;
    // 0x36ff78: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x36ff78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x36ff7c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x36ff7cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_36ff80:
    // 0x36ff80: 0x2a620020  slti        $v0, $s3, 0x20
    ctx->pc = 0x36ff80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x36ff84: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x36FF84u;
    {
        const bool branch_taken_0x36ff84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36ff84) {
            ctx->pc = 0x36FF88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36FF84u;
            // 0x36ff88: 0x129200  sll         $s2, $s2, 8 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36FFCCu;
            goto label_36ffcc;
        }
    }
    ctx->pc = 0x36FF8Cu;
    // 0x36ff8c: 0x2673ffe0  addiu       $s3, $s3, -0x20
    ctx->pc = 0x36ff8cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967264));
    // 0x36ff90: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x36ff90u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x36ff94: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x36ff94u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36ff98: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36ff98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36ff9c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x36ff9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36ffa0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36ffa0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36ffa4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x36ffa4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x36ffa8: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x36ffa8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36ffac: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x36ffacu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x36ffb0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36ffb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36ffb4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x36ffb4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x36ffb8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x36ffb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36ffbc: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x36ffbcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x36ffc0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36ffc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36ffc4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x36ffc4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x36ffc8: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x36ffc8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_36ffcc:
    // 0x36ffcc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x36ffccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x36ffd0: 0x483ffeb  bgezl       $a0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x36FFD0u;
    {
        const bool branch_taken_0x36ffd0 = (GPR_S64(ctx, 4) >= 0);
        if (branch_taken_0x36ffd0) {
            ctx->pc = 0x36FFD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36FFD0u;
            // 0x36ffd4: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36FF80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36ff80;
        }
    }
    ctx->pc = 0x36FFD8u;
    // 0x36ffd8: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x36ffd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
label_36ffdc:
    // 0x36ffdc: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x36FFDCu;
    {
        const bool branch_taken_0x36ffdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36FFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FFDCu;
        // 0x36ffe0: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ffdc) {
            ctx->pc = 0x370018u;
            goto label_370018;
        }
    }
    ctx->pc = 0x36FFE4u;
    // 0x36ffe4: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x36ffe4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x36ffe8: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x36FFE8u;
    {
        const bool branch_taken_0x36ffe8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x36FFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FFE8u;
        // 0x36ffec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ffe8) {
            ctx->pc = 0x370008u;
            goto label_370008;
        }
    }
    ctx->pc = 0x36FFF0u;
    // 0x36fff0: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x36fff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x36fff4: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x36fff4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x36fff8: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x36fff8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x36fffc: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x36fffcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x370000: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x370000u;
    {
        const bool branch_taken_0x370000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x370004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370000u;
        // 0x370004: 0xae83015c  sw          $v1, 0x15C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 348), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370000) {
            ctx->pc = 0x370010u;
            goto label_370010;
        }
    }
    ctx->pc = 0x370008u;
label_370008:
    // 0x370008: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x370008u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x37000c: 0xae82015c  sw          $v0, 0x15C($s4)
    ctx->pc = 0x37000cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 348), GPR_U32(ctx, 2));
label_370010:
    // 0x370010: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x370010u;
    {
        const bool branch_taken_0x370010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x370014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370010u;
        // 0x370014: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370010) {
            ctx->pc = 0x370020u;
            goto label_370020;
        }
    }
    ctx->pc = 0x370018u;
label_370018:
    // 0x370018: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x370018u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x37001c: 0xae82015c  sw          $v0, 0x15C($s4)
    ctx->pc = 0x37001cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 348), GPR_U32(ctx, 2));
label_370020:
    // 0x370020: 0x8e82015c  lw          $v0, 0x15C($s4)
    ctx->pc = 0x370020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 348)));
    // 0x370024: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x370024u;
    {
        const bool branch_taken_0x370024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x370024) {
            ctx->pc = 0x37005Cu;
            goto label_37005c;
        }
    }
    ctx->pc = 0x37002Cu;
    // 0x37002c: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x37002cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x370030: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x370030u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x370034: 0x0  nop
    ctx->pc = 0x370034u;
    // NOP
label_370038:
    // 0x370038: 0x2a620020  slti        $v0, $s3, 0x20
    ctx->pc = 0x370038u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x37003c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x37003Cu;
    {
        const bool branch_taken_0x37003c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x370040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37003Cu;
        // 0x370040: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37003c) {
            ctx->pc = 0x37004Cu;
            goto label_37004c;
        }
    }
    ctx->pc = 0x370044u;
    // 0x370044: 0x2673ffe0  addiu       $s3, $s3, -0x20
    ctx->pc = 0x370044u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967264));
    // 0x370048: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x370048u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_37004c:
    // 0x37004c: 0x0  nop
    ctx->pc = 0x37004cu;
    // NOP
    // 0x370050: 0x0  nop
    ctx->pc = 0x370050u;
    // NOP
    // 0x370054: 0x463fff8  bgezl       $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x370054u;
    {
        const bool branch_taken_0x370054 = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x370054) {
            ctx->pc = 0x370058u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x370054u;
            // 0x370058: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x370038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_370038;
        }
    }
    ctx->pc = 0x37005Cu;
label_37005c:
    // 0x37005c: 0xc0db8de  jal         func_36E378
    ctx->pc = 0x37005Cu;
    SET_GPR_U32(ctx, 31, 0x370064u);
    ctx->pc = 0x370060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37005Cu;
    // 0x370060: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36E378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36E378u, 0x37005Cu, 0x370064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370064u;
label_370064:
    // 0x370064: 0x100007dc  b           . + 4 + (0x7DC << 2)
    ctx->pc = 0x370064u;
    {
        const bool branch_taken_0x370064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x370068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370064u;
        // 0x370068: 0x2361823  subu        $v1, $s1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370064) {
            ctx->pc = 0x371FD8u;
            goto label_371fd8;
        }
    }
    ctx->pc = 0x37006Cu;
    // 0x37006c: 0x0  nop
    ctx->pc = 0x37006cu;
    // NOP
label_370070:
    // 0x370070: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x370070u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x370074: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x370074u;
    {
        const bool branch_taken_0x370074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x370078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370074u;
        // 0x370078: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370074) {
            ctx->pc = 0x3700F0u;
            goto label_3700f0;
        }
    }
    ctx->pc = 0x37007Cu;
    // 0x37007c: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x37007cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x370080: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x370080u;
    {
        const bool branch_taken_0x370080 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x370084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370080u;
        // 0x370084: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370080) {
            ctx->pc = 0x3700A8u;
            goto label_3700a8;
        }
    }
    ctx->pc = 0x370088u;
    // 0x370088: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x370088u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x37008c: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x37008cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x370090: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x370090u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x370094: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x370094u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x370098: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x370098u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x37009c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x37009Cu;
    {
        const bool branch_taken_0x37009c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3700A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37009Cu;
        // 0x3700a0: 0xae83019c  sw          $v1, 0x19C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 412), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37009c) {
            ctx->pc = 0x3700B4u;
            goto label_3700b4;
        }
    }
    ctx->pc = 0x3700A4u;
    // 0x3700a4: 0x0  nop
    ctx->pc = 0x3700a4u;
    // NOP
label_3700a8:
    // 0x3700a8: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x3700a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x3700ac: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x3700acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3700b0: 0xae82019c  sw          $v0, 0x19C($s4)
    ctx->pc = 0x3700b0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 412), GPR_U32(ctx, 2));
label_3700b4:
    // 0x3700b4: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x3700b4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3700b8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3700b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3700bc: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x3700bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3700c0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3700c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3700c4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x3700c4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x3700c8: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x3700c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3700cc: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x3700ccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x3700d0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3700d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3700d4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x3700d4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x3700d8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x3700d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3700dc: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x3700dcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x3700e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3700e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3700e4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x3700e4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x3700e8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3700E8u;
    {
        const bool branch_taken_0x3700e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3700ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3700E8u;
        // 0x3700ec: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3700e8) {
            ctx->pc = 0x3700FCu;
            goto label_3700fc;
        }
    }
    ctx->pc = 0x3700F0u;
label_3700f0:
    // 0x3700f0: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x3700f0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x3700f4: 0xae82019c  sw          $v0, 0x19C($s4)
    ctx->pc = 0x3700f4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 412), GPR_U32(ctx, 2));
    // 0x3700f8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3700f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3700fc:
    // 0x3700fc: 0x2a620018  slti        $v0, $s3, 0x18
    ctx->pc = 0x3700fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x370100: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x370100u;
    {
        const bool branch_taken_0x370100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x370104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370100u;
        // 0x370104: 0x121602  srl         $v0, $s2, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370100) {
            ctx->pc = 0x370178u;
            goto label_370178;
        }
    }
    ctx->pc = 0x370108u;
    // 0x370108: 0x2673ffe8  addiu       $s3, $s3, -0x18
    ctx->pc = 0x370108u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967272));
    // 0x37010c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x37010Cu;
    {
        const bool branch_taken_0x37010c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x370110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37010Cu;
        // 0x370110: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37010c) {
            ctx->pc = 0x370130u;
            goto label_370130;
        }
    }
    ctx->pc = 0x370114u;
    // 0x370114: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x370114u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x370118: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x370118u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x37011c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x37011cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x370120: 0x121e02  srl         $v1, $s2, 24
    ctx->pc = 0x370120u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
    // 0x370124: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x370124u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x370128: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x370128u;
    {
        const bool branch_taken_0x370128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37012Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370128u;
        // 0x37012c: 0xae8301a0  sw          $v1, 0x1A0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 416), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370128) {
            ctx->pc = 0x37013Cu;
            goto label_37013c;
        }
    }
    ctx->pc = 0x370130u;
label_370130:
    // 0x370130: 0x121602  srl         $v0, $s2, 24
    ctx->pc = 0x370130u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
    // 0x370134: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x370134u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370138: 0xae8201a0  sw          $v0, 0x1A0($s4)
    ctx->pc = 0x370138u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 416), GPR_U32(ctx, 2));
label_37013c:
    // 0x37013c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x37013cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x370140: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x370140u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x370144: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x370144u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x370148: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x370148u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x37014c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x37014cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x370150: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x370150u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x370154: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x370154u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x370158: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x370158u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x37015c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x37015cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x370160: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x370160u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x370164: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x370164u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x370168: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x370168u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x37016c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x37016cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x370170: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x370170u;
    {
        const bool branch_taken_0x370170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x370174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370170u;
        // 0x370174: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370170) {
            ctx->pc = 0x370184u;
            goto label_370184;
        }
    }
    ctx->pc = 0x370178u;
label_370178:
    // 0x370178: 0x129200  sll         $s2, $s2, 8
    ctx->pc = 0x370178u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 8));
    // 0x37017c: 0xae8201a0  sw          $v0, 0x1A0($s4)
    ctx->pc = 0x37017cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 416), GPR_U32(ctx, 2));
    // 0x370180: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x370180u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_370184:
    // 0x370184: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x370184u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x370188: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x370188u;
    {
        const bool branch_taken_0x370188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37018Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370188u;
        // 0x37018c: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370188) {
            ctx->pc = 0x370200u;
            goto label_370200;
        }
    }
    ctx->pc = 0x370190u;
    // 0x370190: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x370190u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x370194: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x370194u;
    {
        const bool branch_taken_0x370194 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x370198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370194u;
        // 0x370198: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370194) {
            ctx->pc = 0x3701B8u;
            goto label_3701b8;
        }
    }
    ctx->pc = 0x37019Cu;
    // 0x37019c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x37019cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x3701a0: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x3701a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x3701a4: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x3701a4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x3701a8: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x3701a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x3701ac: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x3701acu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x3701b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3701B0u;
    {
        const bool branch_taken_0x3701b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3701B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3701B0u;
        // 0x3701b4: 0xae8301a4  sw          $v1, 0x1A4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 420), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3701b0) {
            ctx->pc = 0x3701C4u;
            goto label_3701c4;
        }
    }
    ctx->pc = 0x3701B8u;
label_3701b8:
    // 0x3701b8: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x3701b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x3701bc: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x3701bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3701c0: 0xae8201a4  sw          $v0, 0x1A4($s4)
    ctx->pc = 0x3701c0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 420), GPR_U32(ctx, 2));
label_3701c4:
    // 0x3701c4: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x3701c4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3701c8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3701c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3701cc: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x3701ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3701d0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3701d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3701d4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x3701d4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x3701d8: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x3701d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3701dc: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x3701dcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x3701e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3701e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3701e4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x3701e4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x3701e8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x3701e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3701ec: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x3701ecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x3701f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3701f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3701f4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x3701f4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x3701f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3701F8u;
    {
        const bool branch_taken_0x3701f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3701FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3701F8u;
        // 0x3701fc: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3701f8) {
            ctx->pc = 0x37020Cu;
            goto label_37020c;
        }
    }
    ctx->pc = 0x370200u;
label_370200:
    // 0x370200: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x370200u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x370204: 0xae8201a4  sw          $v0, 0x1A4($s4)
    ctx->pc = 0x370204u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 420), GPR_U32(ctx, 2));
    // 0x370208: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x370208u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_37020c:
    // 0x37020c: 0x2a620019  slti        $v0, $s3, 0x19
    ctx->pc = 0x37020cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)25) ? 1 : 0);
    // 0x370210: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x370210u;
    {
        const bool branch_taken_0x370210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x370214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370210u;
        // 0x370214: 0x121642  srl         $v0, $s2, 25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370210) {
            ctx->pc = 0x370288u;
            goto label_370288;
        }
    }
    ctx->pc = 0x370218u;
    // 0x370218: 0x2673ffe7  addiu       $s3, $s3, -0x19
    ctx->pc = 0x370218u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967271));
    // 0x37021c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x37021Cu;
    {
        const bool branch_taken_0x37021c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x370220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37021Cu;
        // 0x370220: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37021c) {
            ctx->pc = 0x370240u;
            goto label_370240;
        }
    }
    ctx->pc = 0x370224u;
    // 0x370224: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x370224u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x370228: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x370228u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x37022c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x37022cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x370230: 0x121e42  srl         $v1, $s2, 25
    ctx->pc = 0x370230u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 25));
    // 0x370234: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x370234u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x370238: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x370238u;
    {
        const bool branch_taken_0x370238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37023Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370238u;
        // 0x37023c: 0xae8301a8  sw          $v1, 0x1A8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 424), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370238) {
            ctx->pc = 0x37024Cu;
            goto label_37024c;
        }
    }
    ctx->pc = 0x370240u;
label_370240:
    // 0x370240: 0x121642  srl         $v0, $s2, 25
    ctx->pc = 0x370240u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 25));
    // 0x370244: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x370244u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370248: 0xae8201a8  sw          $v0, 0x1A8($s4)
    ctx->pc = 0x370248u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 424), GPR_U32(ctx, 2));
label_37024c:
    // 0x37024c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x37024cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x370250: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x370250u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x370254: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x370254u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x370258: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x370258u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x37025c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x37025cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x370260: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x370260u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x370264: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x370264u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x370268: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x370268u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x37026c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x37026cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x370270: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x370270u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x370274: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x370274u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x370278: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x370278u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x37027c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x37027cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x370280: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x370280u;
    {
        const bool branch_taken_0x370280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x370284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370280u;
        // 0x370284: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370280) {
            ctx->pc = 0x370294u;
            goto label_370294;
        }
    }
    ctx->pc = 0x370288u;
label_370288:
    // 0x370288: 0x1291c0  sll         $s2, $s2, 7
    ctx->pc = 0x370288u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 7));
    // 0x37028c: 0xae8201a8  sw          $v0, 0x1A8($s4)
    ctx->pc = 0x37028cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 424), GPR_U32(ctx, 2));
    // 0x370290: 0x26730007  addiu       $s3, $s3, 0x7
    ctx->pc = 0x370290u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 7));
label_370294:
    // 0x370294: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x370294u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x370298: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x370298u;
    {
        const bool branch_taken_0x370298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37029Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370298u;
        // 0x37029c: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370298) {
            ctx->pc = 0x370310u;
            goto label_370310;
        }
    }
    ctx->pc = 0x3702A0u;
    // 0x3702a0: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x3702a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x3702a4: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x3702A4u;
    {
        const bool branch_taken_0x3702a4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3702A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3702A4u;
        // 0x3702a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3702a4) {
            ctx->pc = 0x3702C8u;
            goto label_3702c8;
        }
    }
    ctx->pc = 0x3702ACu;
    // 0x3702ac: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x3702acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x3702b0: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x3702b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x3702b4: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x3702b4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x3702b8: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x3702b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x3702bc: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x3702bcu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x3702c0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3702C0u;
    {
        const bool branch_taken_0x3702c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3702C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3702C0u;
        // 0x3702c4: 0xae830018  sw          $v1, 0x18($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3702c0) {
            ctx->pc = 0x3702D4u;
            goto label_3702d4;
        }
    }
    ctx->pc = 0x3702C8u;
label_3702c8:
    // 0x3702c8: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x3702c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x3702cc: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x3702ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3702d0: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x3702d0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
label_3702d4:
    // 0x3702d4: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x3702d4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3702d8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3702d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3702dc: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x3702dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3702e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3702e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3702e4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x3702e4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x3702e8: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x3702e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3702ec: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x3702ecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x3702f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3702f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3702f4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x3702f4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x3702f8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x3702f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3702fc: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x3702fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x370300: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x370300u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x370304: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x370304u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x370308: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x370308u;
    {
        const bool branch_taken_0x370308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37030Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370308u;
        // 0x37030c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370308) {
            ctx->pc = 0x37031Cu;
            goto label_37031c;
        }
    }
    ctx->pc = 0x370310u;
label_370310:
    // 0x370310: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x370310u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x370314: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x370314u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
    // 0x370318: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x370318u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_37031c:
    // 0x37031c: 0x2a62000c  slti        $v0, $s3, 0xC
    ctx->pc = 0x37031cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x370320: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x370320u;
    {
        const bool branch_taken_0x370320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x370324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370320u;
        // 0x370324: 0x121302  srl         $v0, $s2, 12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370320) {
            ctx->pc = 0x370398u;
            goto label_370398;
        }
    }
    ctx->pc = 0x370328u;
    // 0x370328: 0x2673fff4  addiu       $s3, $s3, -0xC
    ctx->pc = 0x370328u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967284));
    // 0x37032c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x37032Cu;
    {
        const bool branch_taken_0x37032c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x370330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37032Cu;
        // 0x370330: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37032c) {
            ctx->pc = 0x370350u;
            goto label_370350;
        }
    }
    ctx->pc = 0x370334u;
    // 0x370334: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x370334u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x370338: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x370338u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x37033c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x37033cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x370340: 0x121b02  srl         $v1, $s2, 12
    ctx->pc = 0x370340u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 12));
    // 0x370344: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x370344u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x370348: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x370348u;
    {
        const bool branch_taken_0x370348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37034Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370348u;
        // 0x37034c: 0xae8301ac  sw          $v1, 0x1AC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 428), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370348) {
            ctx->pc = 0x37035Cu;
            goto label_37035c;
        }
    }
    ctx->pc = 0x370350u;
label_370350:
    // 0x370350: 0x121302  srl         $v0, $s2, 12
    ctx->pc = 0x370350u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 12));
    // 0x370354: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x370354u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370358: 0xae8201ac  sw          $v0, 0x1AC($s4)
    ctx->pc = 0x370358u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 428), GPR_U32(ctx, 2));
label_37035c:
    // 0x37035c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x37035cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x370360: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x370360u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x370364: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x370364u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x370368: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x370368u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x37036c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x37036cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x370370: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x370370u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x370374: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x370374u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x370378: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x370378u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x37037c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x37037cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x370380: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x370380u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x370384: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x370384u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x370388: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x370388u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x37038c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x37038cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x370390: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x370390u;
    {
        const bool branch_taken_0x370390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x370394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370390u;
        // 0x370394: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370390) {
            ctx->pc = 0x3703A4u;
            goto label_3703a4;
        }
    }
    ctx->pc = 0x370398u;
label_370398:
    // 0x370398: 0x129500  sll         $s2, $s2, 20
    ctx->pc = 0x370398u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 20));
    // 0x37039c: 0xae8201ac  sw          $v0, 0x1AC($s4)
    ctx->pc = 0x37039cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 428), GPR_U32(ctx, 2));
    // 0x3703a0: 0x26730014  addiu       $s3, $s3, 0x14
    ctx->pc = 0x3703a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
label_3703a4:
    // 0x3703a4: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x3703a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x3703a8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3703A8u;
    {
        const bool branch_taken_0x3703a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3703ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3703A8u;
        // 0x3703ac: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3703a8) {
            ctx->pc = 0x370420u;
            goto label_370420;
        }
    }
    ctx->pc = 0x3703B0u;
    // 0x3703b0: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x3703b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x3703b4: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x3703B4u;
    {
        const bool branch_taken_0x3703b4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3703B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3703B4u;
        // 0x3703b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3703b4) {
            ctx->pc = 0x3703D8u;
            goto label_3703d8;
        }
    }
    ctx->pc = 0x3703BCu;
    // 0x3703bc: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x3703bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x3703c0: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x3703c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x3703c4: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x3703c4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x3703c8: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x3703c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x3703cc: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x3703ccu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x3703d0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3703D0u;
    {
        const bool branch_taken_0x3703d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3703D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3703D0u;
        // 0x3703d4: 0xae830018  sw          $v1, 0x18($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3703d0) {
            ctx->pc = 0x3703E4u;
            goto label_3703e4;
        }
    }
    ctx->pc = 0x3703D8u;
label_3703d8:
    // 0x3703d8: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x3703d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x3703dc: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x3703dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3703e0: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x3703e0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
label_3703e4:
    // 0x3703e4: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x3703e4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3703e8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3703e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3703ec: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x3703ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3703f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3703f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3703f4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x3703f4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x3703f8: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x3703f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3703fc: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x3703fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x370400: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x370400u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x370404: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x370404u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x370408: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x370408u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x37040c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x37040cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x370410: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x370410u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x370414: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x370414u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x370418: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x370418u;
    {
        const bool branch_taken_0x370418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37041Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370418u;
        // 0x37041c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370418) {
            ctx->pc = 0x37042Cu;
            goto label_37042c;
        }
    }
    ctx->pc = 0x370420u;
label_370420:
    // 0x370420: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x370420u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x370424: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x370424u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
    // 0x370428: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x370428u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_37042c:
    // 0x37042c: 0x2a62000a  slti        $v0, $s3, 0xA
    ctx->pc = 0x37042cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x370430: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x370430u;
    {
        const bool branch_taken_0x370430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x370434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370430u;
        // 0x370434: 0x121282  srl         $v0, $s2, 10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370430) {
            ctx->pc = 0x3704A8u;
            goto label_3704a8;
        }
    }
    ctx->pc = 0x370438u;
    // 0x370438: 0x2673fff6  addiu       $s3, $s3, -0xA
    ctx->pc = 0x370438u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967286));
    // 0x37043c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x37043Cu;
    {
        const bool branch_taken_0x37043c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x370440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37043Cu;
        // 0x370440: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37043c) {
            ctx->pc = 0x370460u;
            goto label_370460;
        }
    }
    ctx->pc = 0x370444u;
    // 0x370444: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x370444u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x370448: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x370448u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x37044c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x37044cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x370450: 0x121a82  srl         $v1, $s2, 10
    ctx->pc = 0x370450u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 10));
    // 0x370454: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x370454u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x370458: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x370458u;
    {
        const bool branch_taken_0x370458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37045Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370458u;
        // 0x37045c: 0xae8301b0  sw          $v1, 0x1B0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 432), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370458) {
            ctx->pc = 0x37046Cu;
            goto label_37046c;
        }
    }
    ctx->pc = 0x370460u;
label_370460:
    // 0x370460: 0x121282  srl         $v0, $s2, 10
    ctx->pc = 0x370460u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 10));
    // 0x370464: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x370464u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370468: 0xae8201b0  sw          $v0, 0x1B0($s4)
    ctx->pc = 0x370468u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 432), GPR_U32(ctx, 2));
label_37046c:
    // 0x37046c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x37046cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x370470: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x370470u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x370474: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x370474u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x370478: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x370478u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x37047c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x37047cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x370480: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x370480u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x370484: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x370484u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x370488: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x370488u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x37048c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x37048cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x370490: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x370490u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x370494: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x370494u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x370498: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x370498u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x37049c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x37049cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x3704a0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3704A0u;
    {
        const bool branch_taken_0x3704a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3704A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3704A0u;
        // 0x3704a4: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3704a0) {
            ctx->pc = 0x3704B4u;
            goto label_3704b4;
        }
    }
    ctx->pc = 0x3704A8u;
label_3704a8:
    // 0x3704a8: 0x129580  sll         $s2, $s2, 22
    ctx->pc = 0x3704a8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 22));
    // 0x3704ac: 0xae8201b0  sw          $v0, 0x1B0($s4)
    ctx->pc = 0x3704acu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 432), GPR_U32(ctx, 2));
    // 0x3704b0: 0x26730016  addiu       $s3, $s3, 0x16
    ctx->pc = 0x3704b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 22));
label_3704b4:
    // 0x3704b4: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x3704b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x3704b8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3704B8u;
    {
        const bool branch_taken_0x3704b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3704BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3704B8u;
        // 0x3704bc: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3704b8) {
            ctx->pc = 0x370530u;
            goto label_370530;
        }
    }
    ctx->pc = 0x3704C0u;
    // 0x3704c0: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x3704c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x3704c4: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x3704C4u;
    {
        const bool branch_taken_0x3704c4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3704C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3704C4u;
        // 0x3704c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3704c4) {
            ctx->pc = 0x3704E8u;
            goto label_3704e8;
        }
    }
    ctx->pc = 0x3704CCu;
    // 0x3704cc: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x3704ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x3704d0: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x3704d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x3704d4: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x3704d4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x3704d8: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x3704d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x3704dc: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x3704dcu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x3704e0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3704E0u;
    {
        const bool branch_taken_0x3704e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3704E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3704E0u;
        // 0x3704e4: 0xae830018  sw          $v1, 0x18($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3704e0) {
            ctx->pc = 0x3704F4u;
            goto label_3704f4;
        }
    }
    ctx->pc = 0x3704E8u;
label_3704e8:
    // 0x3704e8: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x3704e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x3704ec: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x3704ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3704f0: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x3704f0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
label_3704f4:
    // 0x3704f4: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x3704f4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3704f8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3704f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3704fc: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x3704fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x370500: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x370500u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x370504: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x370504u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x370508: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x370508u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x37050c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x37050cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x370510: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x370510u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x370514: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x370514u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x370518: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x370518u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x37051c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x37051cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x370520: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x370520u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x370524: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x370524u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x370528: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x370528u;
    {
        const bool branch_taken_0x370528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37052Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370528u;
        // 0x37052c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370528) {
            ctx->pc = 0x37053Cu;
            goto label_37053c;
        }
    }
    ctx->pc = 0x370530u;
label_370530:
    // 0x370530: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x370530u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x370534: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x370534u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
    // 0x370538: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x370538u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_37053c:
    // 0x37053c: 0x2a62000a  slti        $v0, $s3, 0xA
    ctx->pc = 0x37053cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x370540: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x370540u;
    {
        const bool branch_taken_0x370540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x370544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370540u;
        // 0x370544: 0x121282  srl         $v0, $s2, 10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370540) {
            ctx->pc = 0x370580u;
            goto label_370580;
        }
    }
    ctx->pc = 0x370548u;
    // 0x370548: 0x2673fff6  addiu       $s3, $s3, -0xA
    ctx->pc = 0x370548u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967286));
    // 0x37054c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x37054Cu;
    {
        const bool branch_taken_0x37054c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x370550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37054Cu;
        // 0x370550: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37054c) {
            ctx->pc = 0x370570u;
            goto label_370570;
        }
    }
    ctx->pc = 0x370554u;
    // 0x370554: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x370554u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x370558: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x370558u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x37055c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x37055cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x370560: 0x121a82  srl         $v1, $s2, 10
    ctx->pc = 0x370560u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 10));
    // 0x370564: 0x10000692  b           . + 4 + (0x692 << 2)
    ctx->pc = 0x370564u;
    {
        const bool branch_taken_0x370564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x370568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370564u;
        // 0x370568: 0xae8301b4  sw          $v1, 0x1B4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 436), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370564) {
            ctx->pc = 0x371FB0u;
            goto label_371fb0;
        }
    }
    ctx->pc = 0x37056Cu;
    // 0x37056c: 0x0  nop
    ctx->pc = 0x37056cu;
    // NOP
label_370570:
    // 0x370570: 0x121282  srl         $v0, $s2, 10
    ctx->pc = 0x370570u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 10));
    // 0x370574: 0x1000068e  b           . + 4 + (0x68E << 2)
    ctx->pc = 0x370574u;
    {
        const bool branch_taken_0x370574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x370578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370574u;
        // 0x370578: 0xae8201b4  sw          $v0, 0x1B4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 436), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370574) {
            ctx->pc = 0x371FB0u;
            goto label_371fb0;
        }
    }
    ctx->pc = 0x37057Cu;
    // 0x37057c: 0x0  nop
    ctx->pc = 0x37057cu;
    // NOP
label_370580:
    // 0x370580: 0x26730016  addiu       $s3, $s3, 0x16
    ctx->pc = 0x370580u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 22));
    // 0x370584: 0x10000693  b           . + 4 + (0x693 << 2)
    ctx->pc = 0x370584u;
    {
        const bool branch_taken_0x370584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x370588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370584u;
        // 0x370588: 0xae8201b4  sw          $v0, 0x1B4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 436), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370584) {
            ctx->pc = 0x371FD4u;
            goto label_371fd4;
        }
    }
    ctx->pc = 0x37058Cu;
    // 0x37058c: 0x0  nop
    ctx->pc = 0x37058cu;
    // NOP
label_370590:
    // 0x370590: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x370590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x370594: 0x2a63001e  slti        $v1, $s3, 0x1E
    ctx->pc = 0x370594u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x370598: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x370598u;
    {
        const bool branch_taken_0x370598 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x37059Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370598u;
        // 0x37059c: 0xae820310  sw          $v0, 0x310($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 784), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370598) {
            ctx->pc = 0x370610u;
            goto label_370610;
        }
    }
    ctx->pc = 0x3705A0u;
    // 0x3705a0: 0x2673ffe2  addiu       $s3, $s3, -0x1E
    ctx->pc = 0x3705a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967266));
    // 0x3705a4: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x3705A4u;
    {
        const bool branch_taken_0x3705a4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3705A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3705A4u;
        // 0x3705a8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3705a4) {
            ctx->pc = 0x3705C8u;
            goto label_3705c8;
        }
    }
    ctx->pc = 0x3705ACu;
    // 0x3705ac: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x3705acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x3705b0: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x3705b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x3705b4: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x3705b4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x3705b8: 0x121f82  srl         $v1, $s2, 30
    ctx->pc = 0x3705b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
    // 0x3705bc: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x3705bcu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x3705c0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3705C0u;
    {
        const bool branch_taken_0x3705c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3705C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3705C0u;
        // 0x3705c4: 0xae830088  sw          $v1, 0x88($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 136), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3705c0) {
            ctx->pc = 0x3705D4u;
            goto label_3705d4;
        }
    }
    ctx->pc = 0x3705C8u;
label_3705c8:
    // 0x3705c8: 0x121782  srl         $v0, $s2, 30
    ctx->pc = 0x3705c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
    // 0x3705cc: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x3705ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3705d0: 0xae820088  sw          $v0, 0x88($s4)
    ctx->pc = 0x3705d0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 136), GPR_U32(ctx, 2));
label_3705d4:
    // 0x3705d4: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x3705d4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3705d8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3705d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3705dc: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x3705dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3705e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3705e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3705e4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x3705e4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x3705e8: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x3705e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3705ec: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x3705ecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x3705f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3705f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3705f4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x3705f4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x3705f8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x3705f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3705fc: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x3705fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x370600: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x370600u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x370604: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x370604u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x370608: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x370608u;
    {
        const bool branch_taken_0x370608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37060Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370608u;
        // 0x37060c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370608) {
            ctx->pc = 0x370620u;
            goto label_370620;
        }
    }
    ctx->pc = 0x370610u;
label_370610:
    // 0x370610: 0x121782  srl         $v0, $s2, 30
    ctx->pc = 0x370610u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
    // 0x370614: 0x129080  sll         $s2, $s2, 2
    ctx->pc = 0x370614u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x370618: 0xae820088  sw          $v0, 0x88($s4)
    ctx->pc = 0x370618u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 136), GPR_U32(ctx, 2));
    // 0x37061c: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x37061cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
label_370620:
    // 0x370620: 0x2a62001c  slti        $v0, $s3, 0x1C
    ctx->pc = 0x370620u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)28) ? 1 : 0);
    // 0x370624: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x370624u;
    {
        const bool branch_taken_0x370624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x370628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370624u;
        // 0x370628: 0x121702  srl         $v0, $s2, 28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370624) {
            ctx->pc = 0x3706A0u;
            goto label_3706a0;
        }
    }
    ctx->pc = 0x37062Cu;
    // 0x37062c: 0x2673ffe4  addiu       $s3, $s3, -0x1C
    ctx->pc = 0x37062cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967268));
    // 0x370630: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x370630u;
    {
        const bool branch_taken_0x370630 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x370634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370630u;
        // 0x370634: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370630) {
            ctx->pc = 0x370658u;
            goto label_370658;
        }
    }
    ctx->pc = 0x370638u;
    // 0x370638: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x370638u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x37063c: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x37063cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x370640: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x370640u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x370644: 0x121f02  srl         $v1, $s2, 28
    ctx->pc = 0x370644u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 28));
    // 0x370648: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x370648u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x37064c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x37064Cu;
    {
        const bool branch_taken_0x37064c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x370650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37064Cu;
        // 0x370650: 0xae83008c  sw          $v1, 0x8C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 140), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37064c) {
            ctx->pc = 0x370664u;
            goto label_370664;
        }
    }
    ctx->pc = 0x370654u;
    // 0x370654: 0x0  nop
    ctx->pc = 0x370654u;
    // NOP
label_370658:
    // 0x370658: 0x121702  srl         $v0, $s2, 28
    ctx->pc = 0x370658u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 28));
    // 0x37065c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x37065cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370660: 0xae82008c  sw          $v0, 0x8C($s4)
    ctx->pc = 0x370660u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 140), GPR_U32(ctx, 2));
label_370664:
    // 0x370664: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x370664u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x370668: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x370668u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x37066c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x37066cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x370670: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x370670u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x370674: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x370674u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x370678: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x370678u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x37067c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x37067cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x370680: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x370680u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x370684: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x370684u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x370688: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x370688u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x37068c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x37068cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x370690: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x370690u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x370694: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x370694u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x370698: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x370698u;
    {
        const bool branch_taken_0x370698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37069Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370698u;
        // 0x37069c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370698) {
            ctx->pc = 0x3706ACu;
            goto label_3706ac;
        }
    }
    ctx->pc = 0x3706A0u;
label_3706a0:
    // 0x3706a0: 0x129100  sll         $s2, $s2, 4
    ctx->pc = 0x3706a0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x3706a4: 0xae82008c  sw          $v0, 0x8C($s4)
    ctx->pc = 0x3706a4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 140), GPR_U32(ctx, 2));
    // 0x3706a8: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x3706a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_3706ac:
    // 0x3706ac: 0x8e830088  lw          $v1, 0x88($s4)
    ctx->pc = 0x3706acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 136)));
    // 0x3706b0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3706b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3706b4: 0x146400e2  bne         $v1, $a0, . + 4 + (0xE2 << 2)
    ctx->pc = 0x3706B4u;
    {
        const bool branch_taken_0x3706b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x3706B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3706B4u;
        // 0x3706b8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3706b4) {
            ctx->pc = 0x370A40u;
            goto label_370a40;
        }
    }
    ctx->pc = 0x3706BCu;
    // 0x3706bc: 0x2a620012  slti        $v0, $s3, 0x12
    ctx->pc = 0x3706bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x3706c0: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3706C0u;
    {
        const bool branch_taken_0x3706c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3706C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3706C0u;
        // 0x3706c4: 0x121482  srl         $v0, $s2, 18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3706c0) {
            ctx->pc = 0x370738u;
            goto label_370738;
        }
    }
    ctx->pc = 0x3706C8u;
    // 0x3706c8: 0x2673ffee  addiu       $s3, $s3, -0x12
    ctx->pc = 0x3706c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967278));
    // 0x3706cc: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x3706CCu;
    {
        const bool branch_taken_0x3706cc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3706D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3706CCu;
        // 0x3706d0: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3706cc) {
            ctx->pc = 0x3706F0u;
            goto label_3706f0;
        }
    }
    ctx->pc = 0x3706D4u;
    // 0x3706d4: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x3706d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x3706d8: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x3706d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x3706dc: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x3706dcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x3706e0: 0x121c82  srl         $v1, $s2, 18
    ctx->pc = 0x3706e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 18));
    // 0x3706e4: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x3706e4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x3706e8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3706E8u;
    {
        const bool branch_taken_0x3706e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3706ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3706E8u;
        // 0x3706ec: 0xae830090  sw          $v1, 0x90($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3706e8) {
            ctx->pc = 0x3706FCu;
            goto label_3706fc;
        }
    }
    ctx->pc = 0x3706F0u;
label_3706f0:
    // 0x3706f0: 0x121482  srl         $v0, $s2, 18
    ctx->pc = 0x3706f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 18));
    // 0x3706f4: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x3706f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3706f8: 0xae820090  sw          $v0, 0x90($s4)
    ctx->pc = 0x3706f8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 144), GPR_U32(ctx, 2));
label_3706fc:
    // 0x3706fc: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x3706fcu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x370700: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x370700u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x370704: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x370704u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x370708: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x370708u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x37070c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x37070cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x370710: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x370710u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x370714: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x370714u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x370718: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x370718u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x37071c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x37071cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x370720: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x370720u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x370724: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x370724u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x370728: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x370728u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x37072c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x37072cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x370730: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x370730u;
    {
        const bool branch_taken_0x370730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x370734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370730u;
        // 0x370734: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370730) {
            ctx->pc = 0x370744u;
            goto label_370744;
        }
    }
    ctx->pc = 0x370738u;
label_370738:
    // 0x370738: 0x129380  sll         $s2, $s2, 14
    ctx->pc = 0x370738u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 14));
    // 0x37073c: 0xae820090  sw          $v0, 0x90($s4)
    ctx->pc = 0x37073cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 144), GPR_U32(ctx, 2));
    // 0x370740: 0x2673000e  addiu       $s3, $s3, 0xE
    ctx->pc = 0x370740u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 14));
label_370744:
    // 0x370744: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x370744u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x370748: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x370748u;
    {
        const bool branch_taken_0x370748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37074Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370748u;
        // 0x37074c: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370748) {
            ctx->pc = 0x3707C0u;
            goto label_3707c0;
        }
    }
    ctx->pc = 0x370750u;
    // 0x370750: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x370750u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x370754: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x370754u;
    {
        const bool branch_taken_0x370754 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x370758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370754u;
        // 0x370758: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370754) {
            ctx->pc = 0x370778u;
            goto label_370778;
        }
    }
    ctx->pc = 0x37075Cu;
    // 0x37075c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x37075cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x370760: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x370760u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x370764: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x370764u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x370768: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x370768u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x37076c: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x37076cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x370770: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x370770u;
    {
        const bool branch_taken_0x370770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x370774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370770u;
        // 0x370774: 0xae830018  sw          $v1, 0x18($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370770) {
            ctx->pc = 0x370784u;
            goto label_370784;
        }
    }
    ctx->pc = 0x370778u;
label_370778:
    // 0x370778: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x370778u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x37077c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x37077cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370780: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x370780u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
label_370784:
    // 0x370784: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x370784u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x370788: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x370788u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x37078c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x37078cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x370790: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x370790u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x370794: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x370794u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x370798: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x370798u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x37079c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x37079cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x3707a0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3707a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3707a4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x3707a4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x3707a8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x3707a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3707ac: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x3707acu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x3707b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3707b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3707b4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x3707b4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x3707b8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3707B8u;
    {
        const bool branch_taken_0x3707b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3707BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3707B8u;
        // 0x3707bc: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3707b8) {
            ctx->pc = 0x3707CCu;
            goto label_3707cc;
        }
    }
    ctx->pc = 0x3707C0u;
label_3707c0:
    // 0x3707c0: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x3707c0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x3707c4: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x3707c4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
    // 0x3707c8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3707c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3707cc:
    // 0x3707cc: 0x2a620012  slti        $v0, $s3, 0x12
    ctx->pc = 0x3707ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x3707d0: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3707D0u;
    {
        const bool branch_taken_0x3707d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3707D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3707D0u;
        // 0x3707d4: 0x121482  srl         $v0, $s2, 18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3707d0) {
            ctx->pc = 0x370848u;
            goto label_370848;
        }
    }
    ctx->pc = 0x3707D8u;
    // 0x3707d8: 0x2673ffee  addiu       $s3, $s3, -0x12
    ctx->pc = 0x3707d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967278));
    // 0x3707dc: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x3707DCu;
    {
        const bool branch_taken_0x3707dc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3707E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3707DCu;
        // 0x3707e0: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3707dc) {
            ctx->pc = 0x370800u;
            goto label_370800;
        }
    }
    ctx->pc = 0x3707E4u;
    // 0x3707e4: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x3707e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x3707e8: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x3707e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x3707ec: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x3707ecu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x3707f0: 0x121c82  srl         $v1, $s2, 18
    ctx->pc = 0x3707f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 18));
    // 0x3707f4: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x3707f4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x3707f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3707F8u;
    {
        const bool branch_taken_0x3707f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3707FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3707F8u;
        // 0x3707fc: 0xae830094  sw          $v1, 0x94($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 148), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3707f8) {
            ctx->pc = 0x37080Cu;
            goto label_37080c;
        }
    }
    ctx->pc = 0x370800u;
label_370800:
    // 0x370800: 0x121482  srl         $v0, $s2, 18
    ctx->pc = 0x370800u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 18));
    // 0x370804: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x370804u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370808: 0xae820094  sw          $v0, 0x94($s4)
    ctx->pc = 0x370808u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 148), GPR_U32(ctx, 2));
label_37080c:
    // 0x37080c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x37080cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x370810: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x370810u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x370814: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x370814u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x370818: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x370818u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x37081c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x37081cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x370820: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x370820u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x370824: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x370824u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x370828: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x370828u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x37082c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x37082cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x370830: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x370830u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x370834: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x370834u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x370838: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x370838u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x37083c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x37083cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x370840: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x370840u;
    {
        const bool branch_taken_0x370840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x370844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370840u;
        // 0x370844: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370840) {
            ctx->pc = 0x370854u;
            goto label_370854;
        }
    }
    ctx->pc = 0x370848u;
label_370848:
    // 0x370848: 0x129380  sll         $s2, $s2, 14
    ctx->pc = 0x370848u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 14));
    // 0x37084c: 0xae820094  sw          $v0, 0x94($s4)
    ctx->pc = 0x37084cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 148), GPR_U32(ctx, 2));
    // 0x370850: 0x2673000e  addiu       $s3, $s3, 0xE
    ctx->pc = 0x370850u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 14));
label_370854:
    // 0x370854: 0x2a62001b  slti        $v0, $s3, 0x1B
    ctx->pc = 0x370854u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)27) ? 1 : 0);
    // 0x370858: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x370858u;
    {
        const bool branch_taken_0x370858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37085Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370858u;
        // 0x37085c: 0x1216c2  srl         $v0, $s2, 27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370858) {
            ctx->pc = 0x3708D0u;
            goto label_3708d0;
        }
    }
    ctx->pc = 0x370860u;
    // 0x370860: 0x2673ffe5  addiu       $s3, $s3, -0x1B
    ctx->pc = 0x370860u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967269));
    // 0x370864: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x370864u;
    {
        const bool branch_taken_0x370864 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x370868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370864u;
        // 0x370868: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370864) {
            ctx->pc = 0x370888u;
            goto label_370888;
        }
    }
    ctx->pc = 0x37086Cu;
    // 0x37086c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x37086cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x370870: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x370870u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x370874: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x370874u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x370878: 0x121ec2  srl         $v1, $s2, 27
    ctx->pc = 0x370878u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 27));
    // 0x37087c: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x37087cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x370880: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x370880u;
    {
        const bool branch_taken_0x370880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x370884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370880u;
        // 0x370884: 0xae830098  sw          $v1, 0x98($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370880) {
            ctx->pc = 0x370894u;
            goto label_370894;
        }
    }
    ctx->pc = 0x370888u;
label_370888:
    // 0x370888: 0x1216c2  srl         $v0, $s2, 27
    ctx->pc = 0x370888u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 27));
    // 0x37088c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x37088cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370890: 0xae820098  sw          $v0, 0x98($s4)
    ctx->pc = 0x370890u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 152), GPR_U32(ctx, 2));
label_370894:
    // 0x370894: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x370894u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x370898: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x370898u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x37089c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x37089cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3708a0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3708a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3708a4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x3708a4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x3708a8: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x3708a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3708ac: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x3708acu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x3708b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3708b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3708b4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x3708b4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x3708b8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x3708b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3708bc: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x3708bcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x3708c0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3708c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3708c4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x3708c4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x3708c8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3708C8u;
    {
        const bool branch_taken_0x3708c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3708CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3708C8u;
        // 0x3708cc: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3708c8) {
            ctx->pc = 0x3708DCu;
            goto label_3708dc;
        }
    }
    ctx->pc = 0x3708D0u;
label_3708d0:
    // 0x3708d0: 0x129140  sll         $s2, $s2, 5
    ctx->pc = 0x3708d0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x3708d4: 0xae820098  sw          $v0, 0x98($s4)
    ctx->pc = 0x3708d4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 152), GPR_U32(ctx, 2));
    // 0x3708d8: 0x26730005  addiu       $s3, $s3, 0x5
    ctx->pc = 0x3708d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 5));
label_3708dc:
    // 0x3708dc: 0x2a62001b  slti        $v0, $s3, 0x1B
    ctx->pc = 0x3708dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)27) ? 1 : 0);
    // 0x3708e0: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3708E0u;
    {
        const bool branch_taken_0x3708e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3708E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3708E0u;
        // 0x3708e4: 0x1216c2  srl         $v0, $s2, 27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3708e0) {
            ctx->pc = 0x370958u;
            goto label_370958;
        }
    }
    ctx->pc = 0x3708E8u;
    // 0x3708e8: 0x2673ffe5  addiu       $s3, $s3, -0x1B
    ctx->pc = 0x3708e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967269));
    // 0x3708ec: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x3708ECu;
    {
        const bool branch_taken_0x3708ec = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3708F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3708ECu;
        // 0x3708f0: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3708ec) {
            ctx->pc = 0x370910u;
            goto label_370910;
        }
    }
    ctx->pc = 0x3708F4u;
    // 0x3708f4: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x3708f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x3708f8: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x3708f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x3708fc: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x3708fcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x370900: 0x121ec2  srl         $v1, $s2, 27
    ctx->pc = 0x370900u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 27));
    // 0x370904: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x370904u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x370908: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x370908u;
    {
        const bool branch_taken_0x370908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37090Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370908u;
        // 0x37090c: 0xae83009c  sw          $v1, 0x9C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370908) {
            ctx->pc = 0x37091Cu;
            goto label_37091c;
        }
    }
    ctx->pc = 0x370910u;
label_370910:
    // 0x370910: 0x1216c2  srl         $v0, $s2, 27
    ctx->pc = 0x370910u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 27));
    // 0x370914: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x370914u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370918: 0xae82009c  sw          $v0, 0x9C($s4)
    ctx->pc = 0x370918u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 156), GPR_U32(ctx, 2));
label_37091c:
    // 0x37091c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x37091cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x370920: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x370920u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x370924: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x370924u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x370928: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x370928u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x37092c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x37092cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x370930: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x370930u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x370934: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x370934u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x370938: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x370938u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x37093c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x37093cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x370940: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x370940u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x370944: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x370944u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x370948: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x370948u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x37094c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x37094cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x370950: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x370950u;
    {
        const bool branch_taken_0x370950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x370954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370950u;
        // 0x370954: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370950) {
            ctx->pc = 0x370964u;
            goto label_370964;
        }
    }
    ctx->pc = 0x370958u;
label_370958:
    // 0x370958: 0x129140  sll         $s2, $s2, 5
    ctx->pc = 0x370958u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x37095c: 0xae82009c  sw          $v0, 0x9C($s4)
    ctx->pc = 0x37095cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 156), GPR_U32(ctx, 2));
    // 0x370960: 0x26730005  addiu       $s3, $s3, 0x5
    ctx->pc = 0x370960u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 5));
label_370964:
    // 0x370964: 0x2a62001b  slti        $v0, $s3, 0x1B
    ctx->pc = 0x370964u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)27) ? 1 : 0);
    // 0x370968: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x370968u;
    {
        const bool branch_taken_0x370968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37096Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370968u;
        // 0x37096c: 0x1216c2  srl         $v0, $s2, 27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370968) {
            ctx->pc = 0x3709E0u;
            goto label_3709e0;
        }
    }
    ctx->pc = 0x370970u;
    // 0x370970: 0x2673ffe5  addiu       $s3, $s3, -0x1B
    ctx->pc = 0x370970u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967269));
    // 0x370974: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x370974u;
    {
        const bool branch_taken_0x370974 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x370978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370974u;
        // 0x370978: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370974) {
            ctx->pc = 0x370998u;
            goto label_370998;
        }
    }
    ctx->pc = 0x37097Cu;
    // 0x37097c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x37097cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x370980: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x370980u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x370984: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x370984u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x370988: 0x121ec2  srl         $v1, $s2, 27
    ctx->pc = 0x370988u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 27));
    // 0x37098c: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x37098cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x370990: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x370990u;
    {
        const bool branch_taken_0x370990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x370994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370990u;
        // 0x370994: 0xae8300a0  sw          $v1, 0xA0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 160), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370990) {
            ctx->pc = 0x3709A4u;
            goto label_3709a4;
        }
    }
    ctx->pc = 0x370998u;
label_370998:
    // 0x370998: 0x1216c2  srl         $v0, $s2, 27
    ctx->pc = 0x370998u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 27));
    // 0x37099c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x37099cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3709a0: 0xae8200a0  sw          $v0, 0xA0($s4)
    ctx->pc = 0x3709a0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 160), GPR_U32(ctx, 2));
label_3709a4:
    // 0x3709a4: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x3709a4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3709a8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3709a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3709ac: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x3709acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3709b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3709b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3709b4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x3709b4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x3709b8: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x3709b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3709bc: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x3709bcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x3709c0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3709c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3709c4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x3709c4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x3709c8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x3709c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3709cc: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x3709ccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x3709d0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3709d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3709d4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x3709d4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x3709d8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3709D8u;
    {
        const bool branch_taken_0x3709d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3709DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3709D8u;
        // 0x3709dc: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3709d8) {
            ctx->pc = 0x3709ECu;
            goto label_3709ec;
        }
    }
    ctx->pc = 0x3709E0u;
label_3709e0:
    // 0x3709e0: 0x129140  sll         $s2, $s2, 5
    ctx->pc = 0x3709e0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x3709e4: 0xae8200a0  sw          $v0, 0xA0($s4)
    ctx->pc = 0x3709e4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 160), GPR_U32(ctx, 2));
    // 0x3709e8: 0x26730005  addiu       $s3, $s3, 0x5
    ctx->pc = 0x3709e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 5));
label_3709ec:
    // 0x3709ec: 0x2a62001b  slti        $v0, $s3, 0x1B
    ctx->pc = 0x3709ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)27) ? 1 : 0);
    // 0x3709f0: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3709F0u;
    {
        const bool branch_taken_0x3709f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3709F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3709F0u;
        // 0x3709f4: 0x1216c2  srl         $v0, $s2, 27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3709f0) {
            ctx->pc = 0x370A30u;
            goto label_370a30;
        }
    }
    ctx->pc = 0x3709F8u;
    // 0x3709f8: 0x2673ffe5  addiu       $s3, $s3, -0x1B
    ctx->pc = 0x3709f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967269));
    // 0x3709fc: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x3709FCu;
    {
        const bool branch_taken_0x3709fc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x370A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3709FCu;
        // 0x370a00: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3709fc) {
            ctx->pc = 0x370A20u;
            goto label_370a20;
        }
    }
    ctx->pc = 0x370A04u;
    // 0x370a04: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x370a04u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x370a08: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x370a08u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x370a0c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x370a0cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x370a10: 0x121ec2  srl         $v1, $s2, 27
    ctx->pc = 0x370a10u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 27));
    // 0x370a14: 0x10000566  b           . + 4 + (0x566 << 2)
    ctx->pc = 0x370A14u;
    {
        const bool branch_taken_0x370a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x370A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370A14u;
        // 0x370a18: 0xae8300a4  sw          $v1, 0xA4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 164), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370a14) {
            ctx->pc = 0x371FB0u;
            goto label_371fb0;
        }
    }
    ctx->pc = 0x370A1Cu;
    // 0x370a1c: 0x0  nop
    ctx->pc = 0x370a1cu;
    // NOP
label_370a20:
    // 0x370a20: 0x1216c2  srl         $v0, $s2, 27
    ctx->pc = 0x370a20u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 27));
    // 0x370a24: 0x10000562  b           . + 4 + (0x562 << 2)
    ctx->pc = 0x370A24u;
    {
        const bool branch_taken_0x370a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x370A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370A24u;
        // 0x370a28: 0xae8200a4  sw          $v0, 0xA4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370a24) {
            ctx->pc = 0x371FB0u;
            goto label_371fb0;
        }
    }
    ctx->pc = 0x370A2Cu;
    // 0x370a2c: 0x0  nop
    ctx->pc = 0x370a2cu;
    // NOP
label_370a30:
    // 0x370a30: 0x26730005  addiu       $s3, $s3, 0x5
    ctx->pc = 0x370a30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 5));
    // 0x370a34: 0x10000567  b           . + 4 + (0x567 << 2)
    ctx->pc = 0x370A34u;
    {
        const bool branch_taken_0x370a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x370A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370A34u;
        // 0x370a38: 0xae8200a4  sw          $v0, 0xA4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370a34) {
            ctx->pc = 0x371FD4u;
            goto label_371fd4;
        }
    }
    ctx->pc = 0x370A3Cu;
    // 0x370a3c: 0x0  nop
    ctx->pc = 0x370a3cu;
    // NOP
label_370a40:
    // 0x370a40: 0x54620565  bnel        $v1, $v0, . + 4 + (0x565 << 2)
    ctx->pc = 0x370A40u;
    {
        const bool branch_taken_0x370a40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x370a40) {
            ctx->pc = 0x370A44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x370A40u;
            // 0x370a44: 0x2361823  subu        $v1, $s1, $s6 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x371FD8u;
            goto label_371fd8;
        }
    }
    ctx->pc = 0x370A48u;
    // 0x370a48: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x370a48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x370a4c: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x370A4Cu;
    {
        const bool branch_taken_0x370a4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x370A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370A4Cu;
        // 0x370a50: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370a4c) {
            ctx->pc = 0x370AC0u;
            goto label_370ac0;
        }
    }
    ctx->pc = 0x370A54u;
    // 0x370a54: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x370a54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x370a58: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x370A58u;
    {
        const bool branch_taken_0x370a58 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x370A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370A58u;
        // 0x370a5c: 0x931023  subu        $v0, $a0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370a58) {
            ctx->pc = 0x370A78u;
            goto label_370a78;
        }
    }
    ctx->pc = 0x370A60u;
    // 0x370a60: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x370a60u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x370a64: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x370a64u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x370a68: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x370a68u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x370a6c: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x370a6cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x370a70: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x370A70u;
    {
        const bool branch_taken_0x370a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x370A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370A70u;
        // 0x370a74: 0xae8300a8  sw          $v1, 0xA8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 168), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370a70) {
            ctx->pc = 0x370A84u;
            goto label_370a84;
        }
    }
    ctx->pc = 0x370A78u;
label_370a78:
    // 0x370a78: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x370a78u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x370a7c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x370a7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370a80: 0xae8200a8  sw          $v0, 0xA8($s4)
    ctx->pc = 0x370a80u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 168), GPR_U32(ctx, 2));
label_370a84:
    // 0x370a84: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x370a84u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x370a88: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x370a88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x370a8c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x370a8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x370a90: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x370a90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x370a94: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x370a94u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x370a98: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x370a98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x370a9c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x370a9cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x370aa0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x370aa0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x370aa4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x370aa4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x370aa8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x370aa8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x370aac: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x370aacu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x370ab0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x370ab0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x370ab4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x370ab4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x370ab8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x370AB8u;
    {
        const bool branch_taken_0x370ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x370ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370AB8u;
        // 0x370abc: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370ab8) {
            ctx->pc = 0x370ACCu;
            goto label_370acc;
        }
    }
    ctx->pc = 0x370AC0u;
label_370ac0:
    // 0x370ac0: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x370ac0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x370ac4: 0xae8200a8  sw          $v0, 0xA8($s4)
    ctx->pc = 0x370ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 168), GPR_U32(ctx, 2));
    // 0x370ac8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x370ac8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_370acc:
    // 0x370acc: 0x8e8200a8  lw          $v0, 0xA8($s4)
    ctx->pc = 0x370accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 168)));
    // 0x370ad0: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x370AD0u;
    {
        const bool branch_taken_0x370ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x370AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370AD0u;
        // 0x370ad4: 0x2a62001f  slti        $v0, $s3, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x370ad0) {
            ctx->pc = 0x370B5Cu;
            goto label_370b5c;
        }
    }
    ctx->pc = 0x370AD8u;
    // 0x370ad8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x370AD8u;
    {
        const bool branch_taken_0x370ad8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x370ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370AD8u;
        // 0x370adc: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370ad8) {
            ctx->pc = 0x370B50u;
            goto label_370b50;
        }
    }
    ctx->pc = 0x370AE0u;
    // 0x370ae0: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x370ae0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x370ae4: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x370AE4u;
    {
        const bool branch_taken_0x370ae4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x370AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370AE4u;
        // 0x370ae8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370ae4) {
            ctx->pc = 0x370B08u;
            goto label_370b08;
        }
    }
    ctx->pc = 0x370AECu;
    // 0x370aec: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x370aecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x370af0: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x370af0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x370af4: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x370af4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x370af8: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x370af8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x370afc: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x370afcu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x370b00: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x370B00u;
    {
        const bool branch_taken_0x370b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x370B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370B00u;
        // 0x370b04: 0xae8300ac  sw          $v1, 0xAC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 172), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370b00) {
            ctx->pc = 0x370B14u;
            goto label_370b14;
        }
    }
    ctx->pc = 0x370B08u;
label_370b08:
    // 0x370b08: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x370b08u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x370b0c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x370b0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370b10: 0xae8200ac  sw          $v0, 0xAC($s4)
    ctx->pc = 0x370b10u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 172), GPR_U32(ctx, 2));
label_370b14:
    // 0x370b14: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x370b14u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x370b18: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x370b18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x370b1c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x370b1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x370b20: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x370b20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x370b24: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x370b24u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x370b28: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x370b28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x370b2c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x370b2cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x370b30: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x370b30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x370b34: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x370b34u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x370b38: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x370b38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x370b3c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x370b3cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x370b40: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x370b40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x370b44: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x370b44u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x370b48: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x370B48u;
    {
        const bool branch_taken_0x370b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x370B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370B48u;
        // 0x370b4c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370b48) {
            ctx->pc = 0x370B5Cu;
            goto label_370b5c;
        }
    }
    ctx->pc = 0x370B50u;
label_370b50:
    // 0x370b50: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x370b50u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x370b54: 0xae8200ac  sw          $v0, 0xAC($s4)
    ctx->pc = 0x370b54u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 172), GPR_U32(ctx, 2));
    // 0x370b58: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x370b58u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_370b5c:
    // 0x370b5c: 0x2a62001d  slti        $v0, $s3, 0x1D
    ctx->pc = 0x370b5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x370b60: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x370B60u;
    {
        const bool branch_taken_0x370b60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x370B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370B60u;
        // 0x370b64: 0x121742  srl         $v0, $s2, 29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370b60) {
            ctx->pc = 0x370BD8u;
            goto label_370bd8;
        }
    }
    ctx->pc = 0x370B68u;
    // 0x370b68: 0x2673ffe3  addiu       $s3, $s3, -0x1D
    ctx->pc = 0x370b68u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967267));
    // 0x370b6c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x370B6Cu;
    {
        const bool branch_taken_0x370b6c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x370B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370B6Cu;
        // 0x370b70: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370b6c) {
            ctx->pc = 0x370B90u;
            goto label_370b90;
        }
    }
    ctx->pc = 0x370B74u;
    // 0x370b74: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x370b74u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x370b78: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x370b78u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x370b7c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x370b7cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x370b80: 0x121f42  srl         $v1, $s2, 29
    ctx->pc = 0x370b80u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 29));
    // 0x370b84: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x370b84u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x370b88: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x370B88u;
    {
        const bool branch_taken_0x370b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x370B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370B88u;
        // 0x370b8c: 0xae8300b0  sw          $v1, 0xB0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 176), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370b88) {
            ctx->pc = 0x370B9Cu;
            goto label_370b9c;
        }
    }
    ctx->pc = 0x370B90u;
label_370b90:
    // 0x370b90: 0x121742  srl         $v0, $s2, 29
    ctx->pc = 0x370b90u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 29));
    // 0x370b94: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x370b94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370b98: 0xae8200b0  sw          $v0, 0xB0($s4)
    ctx->pc = 0x370b98u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 176), GPR_U32(ctx, 2));
label_370b9c:
    // 0x370b9c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x370b9cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x370ba0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x370ba0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x370ba4: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x370ba4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x370ba8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x370ba8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x370bac: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x370bacu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x370bb0: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x370bb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x370bb4: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x370bb4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x370bb8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x370bb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x370bbc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x370bbcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x370bc0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x370bc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x370bc4: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x370bc4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x370bc8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x370bc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x370bcc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x370bccu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x370bd0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x370BD0u;
    {
        const bool branch_taken_0x370bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x370BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370BD0u;
        // 0x370bd4: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370bd0) {
            ctx->pc = 0x370BE4u;
            goto label_370be4;
        }
    }
    ctx->pc = 0x370BD8u;
label_370bd8:
    // 0x370bd8: 0x1290c0  sll         $s2, $s2, 3
    ctx->pc = 0x370bd8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x370bdc: 0xae8200b0  sw          $v0, 0xB0($s4)
    ctx->pc = 0x370bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 176), GPR_U32(ctx, 2));
    // 0x370be0: 0x26730003  addiu       $s3, $s3, 0x3
    ctx->pc = 0x370be0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
label_370be4:
    // 0x370be4: 0x2a62001d  slti        $v0, $s3, 0x1D
    ctx->pc = 0x370be4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x370be8: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x370BE8u;
    {
        const bool branch_taken_0x370be8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x370BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370BE8u;
        // 0x370bec: 0x121742  srl         $v0, $s2, 29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370be8) {
            ctx->pc = 0x370C28u;
            goto label_370c28;
        }
    }
    ctx->pc = 0x370BF0u;
    // 0x370bf0: 0x2673ffe3  addiu       $s3, $s3, -0x1D
    ctx->pc = 0x370bf0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967267));
    // 0x370bf4: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x370BF4u;
    {
        const bool branch_taken_0x370bf4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x370BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370BF4u;
        // 0x370bf8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370bf4) {
            ctx->pc = 0x370C18u;
            goto label_370c18;
        }
    }
    ctx->pc = 0x370BFCu;
    // 0x370bfc: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x370bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x370c00: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x370c00u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x370c04: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x370c04u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x370c08: 0x121f42  srl         $v1, $s2, 29
    ctx->pc = 0x370c08u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 29));
    // 0x370c0c: 0x100004e8  b           . + 4 + (0x4E8 << 2)
    ctx->pc = 0x370C0Cu;
    {
        const bool branch_taken_0x370c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x370C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370C0Cu;
        // 0x370c10: 0xae8300b4  sw          $v1, 0xB4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 180), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370c0c) {
            ctx->pc = 0x371FB0u;
            goto label_371fb0;
        }
    }
    ctx->pc = 0x370C14u;
    // 0x370c14: 0x0  nop
    ctx->pc = 0x370c14u;
    // NOP
label_370c18:
    // 0x370c18: 0x121742  srl         $v0, $s2, 29
    ctx->pc = 0x370c18u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 29));
    // 0x370c1c: 0x100004e4  b           . + 4 + (0x4E4 << 2)
    ctx->pc = 0x370C1Cu;
    {
        const bool branch_taken_0x370c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x370C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370C1Cu;
        // 0x370c20: 0xae8200b4  sw          $v0, 0xB4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370c1c) {
            ctx->pc = 0x371FB0u;
            goto label_371fb0;
        }
    }
    ctx->pc = 0x370C24u;
    // 0x370c24: 0x0  nop
    ctx->pc = 0x370c24u;
    // NOP
label_370c28:
    // 0x370c28: 0x26730003  addiu       $s3, $s3, 0x3
    ctx->pc = 0x370c28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
    // 0x370c2c: 0x100004e9  b           . + 4 + (0x4E9 << 2)
    ctx->pc = 0x370C2Cu;
    {
        const bool branch_taken_0x370c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x370C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370C2Cu;
        // 0x370c30: 0xae8200b4  sw          $v0, 0xB4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370c2c) {
            ctx->pc = 0x371FD4u;
            goto label_371fd4;
        }
    }
    ctx->pc = 0x370C34u;
    // 0x370c34: 0x0  nop
    ctx->pc = 0x370c34u;
    // NOP
label_370c38:
    // 0x370c38: 0xc0db8ae  jal         func_36E2B8
    ctx->pc = 0x370C38u;
    SET_GPR_U32(ctx, 31, 0x370C40u);
    ctx->pc = 0x370C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370C38u;
    // 0x370c3c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36E2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36E2B8u, 0x370C38u, 0x370C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370C40u;
label_370c40:
    // 0x370c40: 0x8e820038  lw          $v0, 0x38($s4)
    ctx->pc = 0x370c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
    // 0x370c44: 0x184004e3  blez        $v0, . + 4 + (0x4E3 << 2)
    ctx->pc = 0x370C44u;
    {
        const bool branch_taken_0x370c44 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x370C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370C44u;
        // 0x370c48: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370c44) {
            ctx->pc = 0x371FD4u;
            goto label_371fd4;
        }
    }
    ctx->pc = 0x370C4Cu;
    // 0x370c4c: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x370c4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x370c50: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x370c50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x370c54: 0x2685016c  addiu       $a1, $s4, 0x16C
    ctx->pc = 0x370c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 364));
    // 0x370c58: 0x26840160  addiu       $a0, $s4, 0x160
    ctx->pc = 0x370c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 352));
    // 0x370c5c: 0x0  nop
    ctx->pc = 0x370c5cu;
    // NOP
label_370c60:
    // 0x370c60: 0x2a620010  slti        $v0, $s3, 0x10
    ctx->pc = 0x370c60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x370c64: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x370C64u;
    {
        const bool branch_taken_0x370c64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x370C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370C64u;
        // 0x370c68: 0x121402  srl         $v0, $s2, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370c64) {
            ctx->pc = 0x370CD8u;
            goto label_370cd8;
        }
    }
    ctx->pc = 0x370C6Cu;
    // 0x370c6c: 0x2673fff0  addiu       $s3, $s3, -0x10
    ctx->pc = 0x370c6cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967280));
    // 0x370c70: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x370C70u;
    {
        const bool branch_taken_0x370c70 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x370C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370C70u;
        // 0x370c74: 0x1131023  subu        $v0, $t0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370c70) {
            ctx->pc = 0x370C90u;
            goto label_370c90;
        }
    }
    ctx->pc = 0x370C78u;
    // 0x370c78: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x370c78u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x370c7c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x370c7cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x370c80: 0x121c02  srl         $v1, $s2, 16
    ctx->pc = 0x370c80u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 16));
    // 0x370c84: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x370c84u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x370c88: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x370C88u;
    {
        const bool branch_taken_0x370c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x370C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370C88u;
        // 0x370c8c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370c88) {
            ctx->pc = 0x370C9Cu;
            goto label_370c9c;
        }
    }
    ctx->pc = 0x370C90u;
label_370c90:
    // 0x370c90: 0x121402  srl         $v0, $s2, 16
    ctx->pc = 0x370c90u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 16));
    // 0x370c94: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x370c94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370c98: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x370c98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_370c9c:
    // 0x370c9c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x370c9cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x370ca0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x370ca0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x370ca4: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x370ca4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x370ca8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x370ca8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x370cac: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x370cacu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x370cb0: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x370cb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x370cb4: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x370cb4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x370cb8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x370cb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x370cbc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x370cbcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x370cc0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x370cc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x370cc4: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x370cc4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x370cc8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x370cc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x370ccc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x370cccu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x370cd0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x370CD0u;
    {
        const bool branch_taken_0x370cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x370CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370CD0u;
        // 0x370cd4: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370cd0) {
            ctx->pc = 0x370CE4u;
            goto label_370ce4;
        }
    }
    ctx->pc = 0x370CD8u;
label_370cd8:
    // 0x370cd8: 0x129400  sll         $s2, $s2, 16
    ctx->pc = 0x370cd8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x370cdc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x370cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x370ce0: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x370ce0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_370ce4:
    // 0x370ce4: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x370ce4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x370ce8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x370CE8u;
    {
        const bool branch_taken_0x370ce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x370CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370CE8u;
        // 0x370cec: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370ce8) {
            ctx->pc = 0x370D60u;
            goto label_370d60;
        }
    }
    ctx->pc = 0x370CF0u;
    // 0x370cf0: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x370cf0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x370cf4: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x370CF4u;
    {
        const bool branch_taken_0x370cf4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x370CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370CF4u;
        // 0x370cf8: 0xf31023  subu        $v0, $a3, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370cf4) {
            ctx->pc = 0x370D18u;
            goto label_370d18;
        }
    }
    ctx->pc = 0x370CFCu;
    // 0x370cfc: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x370cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x370d00: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x370d00u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x370d04: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x370d04u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x370d08: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x370d08u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x370d0c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x370D0Cu;
    {
        const bool branch_taken_0x370d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x370D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370D0Cu;
        // 0x370d10: 0xae830018  sw          $v1, 0x18($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370d0c) {
            ctx->pc = 0x370D24u;
            goto label_370d24;
        }
    }
    ctx->pc = 0x370D14u;
    // 0x370d14: 0x0  nop
    ctx->pc = 0x370d14u;
    // NOP
label_370d18:
    // 0x370d18: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x370d18u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x370d1c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x370d1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370d20: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x370d20u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
label_370d24:
    // 0x370d24: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x370d24u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x370d28: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x370d28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x370d2c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x370d2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x370d30: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x370d30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x370d34: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x370d34u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x370d38: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x370d38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x370d3c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x370d3cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x370d40: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x370d40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x370d44: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x370d44u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x370d48: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x370d48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x370d4c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x370d4cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x370d50: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x370d50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x370d54: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x370d54u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x370d58: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x370D58u;
    {
        const bool branch_taken_0x370d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x370D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370D58u;
        // 0x370d5c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370d58) {
            ctx->pc = 0x370D6Cu;
            goto label_370d6c;
        }
    }
    ctx->pc = 0x370D60u;
label_370d60:
    // 0x370d60: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x370d60u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x370d64: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x370d64u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
    // 0x370d68: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x370d68u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_370d6c:
    // 0x370d6c: 0x2a620010  slti        $v0, $s3, 0x10
    ctx->pc = 0x370d6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x370d70: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x370D70u;
    {
        const bool branch_taken_0x370d70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x370D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370D70u;
        // 0x370d74: 0x121402  srl         $v0, $s2, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370d70) {
            ctx->pc = 0x370DE8u;
            goto label_370de8;
        }
    }
    ctx->pc = 0x370D78u;
    // 0x370d78: 0x2673fff0  addiu       $s3, $s3, -0x10
    ctx->pc = 0x370d78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967280));
    // 0x370d7c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x370D7Cu;
    {
        const bool branch_taken_0x370d7c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x370D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370D7Cu;
        // 0x370d80: 0x1131023  subu        $v0, $t0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370d7c) {
            ctx->pc = 0x370DA0u;
            goto label_370da0;
        }
    }
    ctx->pc = 0x370D84u;
    // 0x370d84: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x370d84u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x370d88: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x370d88u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x370d8c: 0x121c02  srl         $v1, $s2, 16
    ctx->pc = 0x370d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 16));
    // 0x370d90: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x370d90u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x370d94: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x370D94u;
    {
        const bool branch_taken_0x370d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x370D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370D94u;
        // 0x370d98: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370d94) {
            ctx->pc = 0x370DACu;
            goto label_370dac;
        }
    }
    ctx->pc = 0x370D9Cu;
    // 0x370d9c: 0x0  nop
    ctx->pc = 0x370d9cu;
    // NOP
label_370da0:
    // 0x370da0: 0x121402  srl         $v0, $s2, 16
    ctx->pc = 0x370da0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 16));
    // 0x370da4: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x370da4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370da8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x370da8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_370dac:
    // 0x370dac: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x370dacu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x370db0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x370db0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x370db4: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x370db4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x370db8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x370db8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x370dbc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x370dbcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x370dc0: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x370dc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x370dc4: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x370dc4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x370dc8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x370dc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x370dcc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x370dccu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x370dd0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x370dd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x370dd4: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x370dd4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x370dd8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x370dd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x370ddc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x370ddcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x370de0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x370DE0u;
    {
        const bool branch_taken_0x370de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x370DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370DE0u;
        // 0x370de4: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370de0) {
            ctx->pc = 0x370DF4u;
            goto label_370df4;
        }
    }
    ctx->pc = 0x370DE8u;
label_370de8:
    // 0x370de8: 0x129400  sll         $s2, $s2, 16
    ctx->pc = 0x370de8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x370dec: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x370decu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x370df0: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x370df0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_370df4:
    // 0x370df4: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x370df4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x370df8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x370DF8u;
    {
        const bool branch_taken_0x370df8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x370DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370DF8u;
        // 0x370dfc: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370df8) {
            ctx->pc = 0x370E70u;
            goto label_370e70;
        }
    }
    ctx->pc = 0x370E00u;
    // 0x370e00: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x370e00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x370e04: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x370E04u;
    {
        const bool branch_taken_0x370e04 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x370E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370E04u;
        // 0x370e08: 0xf31023  subu        $v0, $a3, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370e04) {
            ctx->pc = 0x370E28u;
            goto label_370e28;
        }
    }
    ctx->pc = 0x370E0Cu;
    // 0x370e0c: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x370e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x370e10: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x370e10u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x370e14: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x370e14u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x370e18: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x370e18u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x370e1c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x370E1Cu;
    {
        const bool branch_taken_0x370e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x370E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370E1Cu;
        // 0x370e20: 0xae830018  sw          $v1, 0x18($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370e1c) {
            ctx->pc = 0x370E34u;
            goto label_370e34;
        }
    }
    ctx->pc = 0x370E24u;
    // 0x370e24: 0x0  nop
    ctx->pc = 0x370e24u;
    // NOP
label_370e28:
    // 0x370e28: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x370e28u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x370e2c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x370e2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370e30: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x370e30u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
label_370e34:
    // 0x370e34: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x370e34u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x370e38: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x370e38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x370e3c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x370e3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x370e40: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x370e40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x370e44: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x370e44u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x370e48: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x370e48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x370e4c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x370e4cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x370e50: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x370e50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x370e54: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x370e54u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x370e58: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x370e58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x370e5c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x370e5cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x370e60: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x370e60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x370e64: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x370e64u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x370e68: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x370E68u;
    {
        const bool branch_taken_0x370e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x370E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370E68u;
        // 0x370e6c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370e68) {
            ctx->pc = 0x370E7Cu;
            goto label_370e7c;
        }
    }
    ctx->pc = 0x370E70u;
label_370e70:
    // 0x370e70: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x370e70u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x370e74: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x370e74u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
    // 0x370e78: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x370e78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_370e7c:
    // 0x370e7c: 0x8e820038  lw          $v0, 0x38($s4)
    ctx->pc = 0x370e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
    // 0x370e80: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x370e80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x370e84: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x370e84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x370e88: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x370e88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x370e8c: 0x1440ff74  bnez        $v0, . + 4 + (-0x8C << 2)
    ctx->pc = 0x370E8Cu;
    {
        const bool branch_taken_0x370e8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x370E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370E8Cu;
        // 0x370e90: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370e8c) {
            ctx->pc = 0x370C60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_370c60;
        }
    }
    ctx->pc = 0x370E94u;
    // 0x370e94: 0x10000450  b           . + 4 + (0x450 << 2)
    ctx->pc = 0x370E94u;
    {
        const bool branch_taken_0x370e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x370E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370E94u;
        // 0x370e98: 0x2361823  subu        $v1, $s1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370e94) {
            ctx->pc = 0x371FD8u;
            goto label_371fd8;
        }
    }
    ctx->pc = 0x370E9Cu;
    // 0x370e9c: 0x0  nop
    ctx->pc = 0x370e9cu;
    // NOP
label_370ea0:
    // 0x370ea0: 0x2a62001c  slti        $v0, $s3, 0x1C
    ctx->pc = 0x370ea0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)28) ? 1 : 0);
    // 0x370ea4: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x370EA4u;
    {
        const bool branch_taken_0x370ea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x370EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370EA4u;
        // 0x370ea8: 0x121702  srl         $v0, $s2, 28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370ea4) {
            ctx->pc = 0x370F20u;
            goto label_370f20;
        }
    }
    ctx->pc = 0x370EACu;
    // 0x370eac: 0x2673ffe4  addiu       $s3, $s3, -0x1C
    ctx->pc = 0x370eacu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967268));
    // 0x370eb0: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x370EB0u;
    {
        const bool branch_taken_0x370eb0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x370EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370EB0u;
        // 0x370eb4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370eb0) {
            ctx->pc = 0x370ED8u;
            goto label_370ed8;
        }
    }
    ctx->pc = 0x370EB8u;
    // 0x370eb8: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x370eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x370ebc: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x370ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x370ec0: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x370ec0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x370ec4: 0x121f02  srl         $v1, $s2, 28
    ctx->pc = 0x370ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 28));
    // 0x370ec8: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x370ec8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x370ecc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x370ECCu;
    {
        const bool branch_taken_0x370ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x370ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370ECCu;
        // 0x370ed0: 0xae830104  sw          $v1, 0x104($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 260), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370ecc) {
            ctx->pc = 0x370EE4u;
            goto label_370ee4;
        }
    }
    ctx->pc = 0x370ED4u;
    // 0x370ed4: 0x0  nop
    ctx->pc = 0x370ed4u;
    // NOP
label_370ed8:
    // 0x370ed8: 0x121702  srl         $v0, $s2, 28
    ctx->pc = 0x370ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 28));
    // 0x370edc: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x370edcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370ee0: 0xae820104  sw          $v0, 0x104($s4)
    ctx->pc = 0x370ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 260), GPR_U32(ctx, 2));
label_370ee4:
    // 0x370ee4: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x370ee4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x370ee8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x370ee8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x370eec: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x370eecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x370ef0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x370ef0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x370ef4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x370ef4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x370ef8: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x370ef8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x370efc: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x370efcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x370f00: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x370f00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x370f04: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x370f04u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x370f08: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x370f08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x370f0c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x370f0cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x370f10: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x370f10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x370f14: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x370f14u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x370f18: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x370F18u;
    {
        const bool branch_taken_0x370f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x370F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370F18u;
        // 0x370f1c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370f18) {
            ctx->pc = 0x370F2Cu;
            goto label_370f2c;
        }
    }
    ctx->pc = 0x370F20u;
label_370f20:
    // 0x370f20: 0x129100  sll         $s2, $s2, 4
    ctx->pc = 0x370f20u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x370f24: 0xae820104  sw          $v0, 0x104($s4)
    ctx->pc = 0x370f24u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 260), GPR_U32(ctx, 2));
    // 0x370f28: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x370f28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_370f2c:
    // 0x370f2c: 0x2a62001c  slti        $v0, $s3, 0x1C
    ctx->pc = 0x370f2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)28) ? 1 : 0);
    // 0x370f30: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x370F30u;
    {
        const bool branch_taken_0x370f30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x370F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370F30u;
        // 0x370f34: 0x121702  srl         $v0, $s2, 28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370f30) {
            ctx->pc = 0x370FA8u;
            goto label_370fa8;
        }
    }
    ctx->pc = 0x370F38u;
    // 0x370f38: 0x2673ffe4  addiu       $s3, $s3, -0x1C
    ctx->pc = 0x370f38u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967268));
    // 0x370f3c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x370F3Cu;
    {
        const bool branch_taken_0x370f3c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x370F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370F3Cu;
        // 0x370f40: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370f3c) {
            ctx->pc = 0x370F60u;
            goto label_370f60;
        }
    }
    ctx->pc = 0x370F44u;
    // 0x370f44: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x370f44u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x370f48: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x370f48u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x370f4c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x370f4cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x370f50: 0x121f02  srl         $v1, $s2, 28
    ctx->pc = 0x370f50u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 28));
    // 0x370f54: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x370f54u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x370f58: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x370F58u;
    {
        const bool branch_taken_0x370f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x370F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370F58u;
        // 0x370f5c: 0xae830108  sw          $v1, 0x108($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 264), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370f58) {
            ctx->pc = 0x370F6Cu;
            goto label_370f6c;
        }
    }
    ctx->pc = 0x370F60u;
label_370f60:
    // 0x370f60: 0x121702  srl         $v0, $s2, 28
    ctx->pc = 0x370f60u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 28));
    // 0x370f64: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x370f64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370f68: 0xae820108  sw          $v0, 0x108($s4)
    ctx->pc = 0x370f68u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 264), GPR_U32(ctx, 2));
label_370f6c:
    // 0x370f6c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x370f6cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x370f70: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x370f70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x370f74: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x370f74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x370f78: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x370f78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x370f7c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x370f7cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x370f80: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x370f80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x370f84: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x370f84u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x370f88: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x370f88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x370f8c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x370f8cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x370f90: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x370f90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x370f94: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x370f94u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x370f98: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x370f98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x370f9c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x370f9cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x370fa0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x370FA0u;
    {
        const bool branch_taken_0x370fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x370FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370FA0u;
        // 0x370fa4: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370fa0) {
            ctx->pc = 0x370FB4u;
            goto label_370fb4;
        }
    }
    ctx->pc = 0x370FA8u;
label_370fa8:
    // 0x370fa8: 0x129100  sll         $s2, $s2, 4
    ctx->pc = 0x370fa8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x370fac: 0xae820108  sw          $v0, 0x108($s4)
    ctx->pc = 0x370facu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 264), GPR_U32(ctx, 2));
    // 0x370fb0: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x370fb0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_370fb4:
    // 0x370fb4: 0x2a62001c  slti        $v0, $s3, 0x1C
    ctx->pc = 0x370fb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)28) ? 1 : 0);
    // 0x370fb8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x370FB8u;
    {
        const bool branch_taken_0x370fb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x370FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370FB8u;
        // 0x370fbc: 0x121702  srl         $v0, $s2, 28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370fb8) {
            ctx->pc = 0x371030u;
            goto label_371030;
        }
    }
    ctx->pc = 0x370FC0u;
    // 0x370fc0: 0x2673ffe4  addiu       $s3, $s3, -0x1C
    ctx->pc = 0x370fc0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967268));
    // 0x370fc4: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x370FC4u;
    {
        const bool branch_taken_0x370fc4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x370FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370FC4u;
        // 0x370fc8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370fc4) {
            ctx->pc = 0x370FE8u;
            goto label_370fe8;
        }
    }
    ctx->pc = 0x370FCCu;
    // 0x370fcc: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x370fccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x370fd0: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x370fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x370fd4: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x370fd4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x370fd8: 0x121f02  srl         $v1, $s2, 28
    ctx->pc = 0x370fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 28));
    // 0x370fdc: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x370fdcu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x370fe0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x370FE0u;
    {
        const bool branch_taken_0x370fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x370FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370FE0u;
        // 0x370fe4: 0xae83010c  sw          $v1, 0x10C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 268), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370fe0) {
            ctx->pc = 0x370FF4u;
            goto label_370ff4;
        }
    }
    ctx->pc = 0x370FE8u;
label_370fe8:
    // 0x370fe8: 0x121702  srl         $v0, $s2, 28
    ctx->pc = 0x370fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 28));
    // 0x370fec: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x370fecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370ff0: 0xae82010c  sw          $v0, 0x10C($s4)
    ctx->pc = 0x370ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 268), GPR_U32(ctx, 2));
label_370ff4:
    // 0x370ff4: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x370ff4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x370ff8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x370ff8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x370ffc: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x370ffcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x371000: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x371000u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x371004: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x371004u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x371008: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x371008u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x37100c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x37100cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x371010: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x371010u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x371014: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x371014u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x371018: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x371018u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x37101c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x37101cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x371020: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x371020u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x371024: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x371024u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x371028: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x371028u;
    {
        const bool branch_taken_0x371028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37102Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371028u;
        // 0x37102c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371028) {
            ctx->pc = 0x37103Cu;
            goto label_37103c;
        }
    }
    ctx->pc = 0x371030u;
label_371030:
    // 0x371030: 0x129100  sll         $s2, $s2, 4
    ctx->pc = 0x371030u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x371034: 0xae82010c  sw          $v0, 0x10C($s4)
    ctx->pc = 0x371034u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 268), GPR_U32(ctx, 2));
    // 0x371038: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x371038u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_37103c:
    // 0x37103c: 0x2a62001c  slti        $v0, $s3, 0x1C
    ctx->pc = 0x37103cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)28) ? 1 : 0);
    // 0x371040: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x371040u;
    {
        const bool branch_taken_0x371040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x371044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371040u;
        // 0x371044: 0x121702  srl         $v0, $s2, 28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371040) {
            ctx->pc = 0x3710B8u;
            goto label_3710b8;
        }
    }
    ctx->pc = 0x371048u;
    // 0x371048: 0x2673ffe4  addiu       $s3, $s3, -0x1C
    ctx->pc = 0x371048u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967268));
    // 0x37104c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x37104Cu;
    {
        const bool branch_taken_0x37104c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x371050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37104Cu;
        // 0x371050: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37104c) {
            ctx->pc = 0x371070u;
            goto label_371070;
        }
    }
    ctx->pc = 0x371054u;
    // 0x371054: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x371054u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x371058: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x371058u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x37105c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x37105cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x371060: 0x121f02  srl         $v1, $s2, 28
    ctx->pc = 0x371060u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 28));
    // 0x371064: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x371064u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x371068: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x371068u;
    {
        const bool branch_taken_0x371068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37106Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371068u;
        // 0x37106c: 0xae830110  sw          $v1, 0x110($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 272), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371068) {
            ctx->pc = 0x37107Cu;
            goto label_37107c;
        }
    }
    ctx->pc = 0x371070u;
label_371070:
    // 0x371070: 0x121702  srl         $v0, $s2, 28
    ctx->pc = 0x371070u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 28));
    // 0x371074: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x371074u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371078: 0xae820110  sw          $v0, 0x110($s4)
    ctx->pc = 0x371078u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 272), GPR_U32(ctx, 2));
label_37107c:
    // 0x37107c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x37107cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x371080: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x371080u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x371084: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x371084u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x371088: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x371088u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x37108c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x37108cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x371090: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x371090u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x371094: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x371094u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x371098: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x371098u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x37109c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x37109cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x3710a0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x3710a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3710a4: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x3710a4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x3710a8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3710a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3710ac: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x3710acu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x3710b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3710B0u;
    {
        const bool branch_taken_0x3710b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3710B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3710B0u;
        // 0x3710b4: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3710b0) {
            ctx->pc = 0x3710C4u;
            goto label_3710c4;
        }
    }
    ctx->pc = 0x3710B8u;
label_3710b8:
    // 0x3710b8: 0x129100  sll         $s2, $s2, 4
    ctx->pc = 0x3710b8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x3710bc: 0xae820110  sw          $v0, 0x110($s4)
    ctx->pc = 0x3710bcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 272), GPR_U32(ctx, 2));
    // 0x3710c0: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x3710c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_3710c4:
    // 0x3710c4: 0x2a62001e  slti        $v0, $s3, 0x1E
    ctx->pc = 0x3710c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x3710c8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3710C8u;
    {
        const bool branch_taken_0x3710c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3710CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3710C8u;
        // 0x3710cc: 0x121782  srl         $v0, $s2, 30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3710c8) {
            ctx->pc = 0x371140u;
            goto label_371140;
        }
    }
    ctx->pc = 0x3710D0u;
    // 0x3710d0: 0x2673ffe2  addiu       $s3, $s3, -0x1E
    ctx->pc = 0x3710d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967266));
    // 0x3710d4: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x3710D4u;
    {
        const bool branch_taken_0x3710d4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3710D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3710D4u;
        // 0x3710d8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3710d4) {
            ctx->pc = 0x3710F8u;
            goto label_3710f8;
        }
    }
    ctx->pc = 0x3710DCu;
    // 0x3710dc: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x3710dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x3710e0: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x3710e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x3710e4: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x3710e4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x3710e8: 0x121f82  srl         $v1, $s2, 30
    ctx->pc = 0x3710e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
    // 0x3710ec: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x3710ecu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x3710f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3710F0u;
    {
        const bool branch_taken_0x3710f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3710F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3710F0u;
        // 0x3710f4: 0xae830114  sw          $v1, 0x114($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 276), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3710f0) {
            ctx->pc = 0x371104u;
            goto label_371104;
        }
    }
    ctx->pc = 0x3710F8u;
label_3710f8:
    // 0x3710f8: 0x121782  srl         $v0, $s2, 30
    ctx->pc = 0x3710f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
    // 0x3710fc: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x3710fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371100: 0xae820114  sw          $v0, 0x114($s4)
    ctx->pc = 0x371100u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 276), GPR_U32(ctx, 2));
label_371104:
    // 0x371104: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x371104u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x371108: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x371108u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x37110c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x37110cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x371110: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x371110u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x371114: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x371114u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x371118: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x371118u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x37111c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x37111cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x371120: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x371120u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x371124: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x371124u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x371128: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x371128u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x37112c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x37112cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x371130: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x371130u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x371134: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x371134u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x371138: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x371138u;
    {
        const bool branch_taken_0x371138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37113Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371138u;
        // 0x37113c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371138) {
            ctx->pc = 0x37114Cu;
            goto label_37114c;
        }
    }
    ctx->pc = 0x371140u;
label_371140:
    // 0x371140: 0x129080  sll         $s2, $s2, 2
    ctx->pc = 0x371140u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x371144: 0xae820114  sw          $v0, 0x114($s4)
    ctx->pc = 0x371144u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 276), GPR_U32(ctx, 2));
    // 0x371148: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x371148u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
label_37114c:
    // 0x37114c: 0x2a62001e  slti        $v0, $s3, 0x1E
    ctx->pc = 0x37114cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x371150: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x371150u;
    {
        const bool branch_taken_0x371150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x371154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371150u;
        // 0x371154: 0x121782  srl         $v0, $s2, 30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371150) {
            ctx->pc = 0x3711C8u;
            goto label_3711c8;
        }
    }
    ctx->pc = 0x371158u;
    // 0x371158: 0x2673ffe2  addiu       $s3, $s3, -0x1E
    ctx->pc = 0x371158u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967266));
    // 0x37115c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x37115Cu;
    {
        const bool branch_taken_0x37115c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x371160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37115Cu;
        // 0x371160: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37115c) {
            ctx->pc = 0x371180u;
            goto label_371180;
        }
    }
    ctx->pc = 0x371164u;
    // 0x371164: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x371164u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x371168: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x371168u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x37116c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x37116cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x371170: 0x121f82  srl         $v1, $s2, 30
    ctx->pc = 0x371170u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
    // 0x371174: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x371174u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x371178: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x371178u;
    {
        const bool branch_taken_0x371178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37117Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371178u;
        // 0x37117c: 0xae830118  sw          $v1, 0x118($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 280), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371178) {
            ctx->pc = 0x37118Cu;
            goto label_37118c;
        }
    }
    ctx->pc = 0x371180u;
label_371180:
    // 0x371180: 0x121782  srl         $v0, $s2, 30
    ctx->pc = 0x371180u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
    // 0x371184: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x371184u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371188: 0xae820118  sw          $v0, 0x118($s4)
    ctx->pc = 0x371188u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 280), GPR_U32(ctx, 2));
label_37118c:
    // 0x37118c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x37118cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x371190: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x371190u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x371194: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x371194u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x371198: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x371198u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x37119c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x37119cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x3711a0: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x3711a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3711a4: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x3711a4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x3711a8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3711a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3711ac: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x3711acu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x3711b0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x3711b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3711b4: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x3711b4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x3711b8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3711b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3711bc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x3711bcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x3711c0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3711C0u;
    {
        const bool branch_taken_0x3711c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3711C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3711C0u;
        // 0x3711c4: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3711c0) {
            ctx->pc = 0x3711D4u;
            goto label_3711d4;
        }
    }
    ctx->pc = 0x3711C8u;
label_3711c8:
    // 0x3711c8: 0x129080  sll         $s2, $s2, 2
    ctx->pc = 0x3711c8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x3711cc: 0xae820118  sw          $v0, 0x118($s4)
    ctx->pc = 0x3711ccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 280), GPR_U32(ctx, 2));
    // 0x3711d0: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x3711d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
label_3711d4:
    // 0x3711d4: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x3711d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x3711d8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3711D8u;
    {
        const bool branch_taken_0x3711d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3711DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3711D8u;
        // 0x3711dc: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3711d8) {
            ctx->pc = 0x371250u;
            goto label_371250;
        }
    }
    ctx->pc = 0x3711E0u;
    // 0x3711e0: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x3711e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x3711e4: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x3711E4u;
    {
        const bool branch_taken_0x3711e4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3711E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3711E4u;
        // 0x3711e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3711e4) {
            ctx->pc = 0x371208u;
            goto label_371208;
        }
    }
    ctx->pc = 0x3711ECu;
    // 0x3711ec: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x3711ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x3711f0: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x3711f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x3711f4: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x3711f4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x3711f8: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x3711f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x3711fc: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x3711fcu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x371200: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x371200u;
    {
        const bool branch_taken_0x371200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x371204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371200u;
        // 0x371204: 0xae83011c  sw          $v1, 0x11C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 284), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371200) {
            ctx->pc = 0x371214u;
            goto label_371214;
        }
    }
    ctx->pc = 0x371208u;
label_371208:
    // 0x371208: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x371208u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x37120c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x37120cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371210: 0xae82011c  sw          $v0, 0x11C($s4)
    ctx->pc = 0x371210u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 284), GPR_U32(ctx, 2));
label_371214:
    // 0x371214: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x371214u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x371218: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x371218u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x37121c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x37121cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x371220: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x371220u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x371224: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x371224u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x371228: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x371228u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x37122c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x37122cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x371230: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x371230u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x371234: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x371234u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x371238: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x371238u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x37123c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x37123cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x371240: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x371240u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x371244: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x371244u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x371248: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x371248u;
    {
        const bool branch_taken_0x371248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37124Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371248u;
        // 0x37124c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371248) {
            ctx->pc = 0x37125Cu;
            goto label_37125c;
        }
    }
    ctx->pc = 0x371250u;
label_371250:
    // 0x371250: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x371250u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x371254: 0xae82011c  sw          $v0, 0x11C($s4)
    ctx->pc = 0x371254u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 284), GPR_U32(ctx, 2));
    // 0x371258: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x371258u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_37125c:
    // 0x37125c: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x37125cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x371260: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x371260u;
    {
        const bool branch_taken_0x371260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x371264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371260u;
        // 0x371264: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371260) {
            ctx->pc = 0x3712D8u;
            goto label_3712d8;
        }
    }
    ctx->pc = 0x371268u;
    // 0x371268: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x371268u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x37126c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x37126Cu;
    {
        const bool branch_taken_0x37126c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x371270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37126Cu;
        // 0x371270: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37126c) {
            ctx->pc = 0x371290u;
            goto label_371290;
        }
    }
    ctx->pc = 0x371274u;
    // 0x371274: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x371274u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x371278: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x371278u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x37127c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x37127cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x371280: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x371280u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x371284: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x371284u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x371288: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x371288u;
    {
        const bool branch_taken_0x371288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37128Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371288u;
        // 0x37128c: 0xae830120  sw          $v1, 0x120($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 288), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371288) {
            ctx->pc = 0x37129Cu;
            goto label_37129c;
        }
    }
    ctx->pc = 0x371290u;
label_371290:
    // 0x371290: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x371290u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x371294: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x371294u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371298: 0xae820120  sw          $v0, 0x120($s4)
    ctx->pc = 0x371298u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 288), GPR_U32(ctx, 2));
label_37129c:
    // 0x37129c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x37129cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3712a0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3712a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3712a4: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x3712a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3712a8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3712a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3712ac: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x3712acu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x3712b0: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x3712b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3712b4: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x3712b4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x3712b8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3712b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3712bc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x3712bcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x3712c0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x3712c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3712c4: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x3712c4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x3712c8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3712c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3712cc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x3712ccu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x3712d0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3712D0u;
    {
        const bool branch_taken_0x3712d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3712D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3712D0u;
        // 0x3712d4: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3712d0) {
            ctx->pc = 0x3712E4u;
            goto label_3712e4;
        }
    }
    ctx->pc = 0x3712D8u;
label_3712d8:
    // 0x3712d8: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x3712d8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x3712dc: 0xae820120  sw          $v0, 0x120($s4)
    ctx->pc = 0x3712dcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 288), GPR_U32(ctx, 2));
    // 0x3712e0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3712e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3712e4:
    // 0x3712e4: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x3712e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x3712e8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3712E8u;
    {
        const bool branch_taken_0x3712e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3712ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3712E8u;
        // 0x3712ec: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3712e8) {
            ctx->pc = 0x371360u;
            goto label_371360;
        }
    }
    ctx->pc = 0x3712F0u;
    // 0x3712f0: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x3712f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x3712f4: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x3712F4u;
    {
        const bool branch_taken_0x3712f4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3712F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3712F4u;
        // 0x3712f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3712f4) {
            ctx->pc = 0x371318u;
            goto label_371318;
        }
    }
    ctx->pc = 0x3712FCu;
    // 0x3712fc: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x3712fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x371300: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x371300u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x371304: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x371304u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x371308: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x371308u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x37130c: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x37130cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x371310: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x371310u;
    {
        const bool branch_taken_0x371310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x371314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371310u;
        // 0x371314: 0xae830124  sw          $v1, 0x124($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 292), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371310) {
            ctx->pc = 0x371324u;
            goto label_371324;
        }
    }
    ctx->pc = 0x371318u;
label_371318:
    // 0x371318: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x371318u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x37131c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x37131cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371320: 0xae820124  sw          $v0, 0x124($s4)
    ctx->pc = 0x371320u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 292), GPR_U32(ctx, 2));
label_371324:
    // 0x371324: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x371324u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x371328: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x371328u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x37132c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x37132cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x371330: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x371330u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x371334: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x371334u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x371338: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x371338u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x37133c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x37133cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x371340: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x371340u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x371344: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x371344u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x371348: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x371348u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x37134c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x37134cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x371350: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x371350u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x371354: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x371354u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x371358: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x371358u;
    {
        const bool branch_taken_0x371358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37135Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371358u;
        // 0x37135c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371358) {
            ctx->pc = 0x37136Cu;
            goto label_37136c;
        }
    }
    ctx->pc = 0x371360u;
label_371360:
    // 0x371360: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x371360u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x371364: 0xae820124  sw          $v0, 0x124($s4)
    ctx->pc = 0x371364u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 292), GPR_U32(ctx, 2));
    // 0x371368: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x371368u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_37136c:
    // 0x37136c: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x37136cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x371370: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x371370u;
    {
        const bool branch_taken_0x371370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x371374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371370u;
        // 0x371374: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371370) {
            ctx->pc = 0x3713E8u;
            goto label_3713e8;
        }
    }
    ctx->pc = 0x371378u;
    // 0x371378: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x371378u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x37137c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x37137Cu;
    {
        const bool branch_taken_0x37137c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x371380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37137Cu;
        // 0x371380: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37137c) {
            ctx->pc = 0x3713A0u;
            goto label_3713a0;
        }
    }
    ctx->pc = 0x371384u;
    // 0x371384: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x371384u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x371388: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x371388u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x37138c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x37138cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x371390: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x371390u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x371394: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x371394u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x371398: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x371398u;
    {
        const bool branch_taken_0x371398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37139Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371398u;
        // 0x37139c: 0xae830128  sw          $v1, 0x128($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 296), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371398) {
            ctx->pc = 0x3713ACu;
            goto label_3713ac;
        }
    }
    ctx->pc = 0x3713A0u;
label_3713a0:
    // 0x3713a0: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x3713a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x3713a4: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x3713a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3713a8: 0xae820128  sw          $v0, 0x128($s4)
    ctx->pc = 0x3713a8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 296), GPR_U32(ctx, 2));
label_3713ac:
    // 0x3713ac: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x3713acu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3713b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3713b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3713b4: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x3713b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3713b8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3713b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3713bc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x3713bcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x3713c0: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x3713c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3713c4: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x3713c4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x3713c8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3713c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3713cc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x3713ccu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x3713d0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x3713d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3713d4: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x3713d4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x3713d8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3713d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3713dc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x3713dcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x3713e0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3713E0u;
    {
        const bool branch_taken_0x3713e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3713E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3713E0u;
        // 0x3713e4: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3713e0) {
            ctx->pc = 0x3713F4u;
            goto label_3713f4;
        }
    }
    ctx->pc = 0x3713E8u;
label_3713e8:
    // 0x3713e8: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x3713e8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x3713ec: 0xae820128  sw          $v0, 0x128($s4)
    ctx->pc = 0x3713ecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 296), GPR_U32(ctx, 2));
    // 0x3713f0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3713f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3713f4:
    // 0x3713f4: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x3713f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x3713f8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3713F8u;
    {
        const bool branch_taken_0x3713f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3713FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3713F8u;
        // 0x3713fc: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3713f8) {
            ctx->pc = 0x371470u;
            goto label_371470;
        }
    }
    ctx->pc = 0x371400u;
    // 0x371400: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x371400u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x371404: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x371404u;
    {
        const bool branch_taken_0x371404 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x371408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371404u;
        // 0x371408: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371404) {
            ctx->pc = 0x371428u;
            goto label_371428;
        }
    }
    ctx->pc = 0x37140Cu;
    // 0x37140c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x37140cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x371410: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x371410u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x371414: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x371414u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x371418: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x371418u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x37141c: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x37141cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x371420: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x371420u;
    {
        const bool branch_taken_0x371420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x371424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371420u;
        // 0x371424: 0xae83012c  sw          $v1, 0x12C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 300), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371420) {
            ctx->pc = 0x371434u;
            goto label_371434;
        }
    }
    ctx->pc = 0x371428u;
label_371428:
    // 0x371428: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x371428u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x37142c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x37142cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371430: 0xae82012c  sw          $v0, 0x12C($s4)
    ctx->pc = 0x371430u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 300), GPR_U32(ctx, 2));
label_371434:
    // 0x371434: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x371434u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x371438: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x371438u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x37143c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x37143cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x371440: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x371440u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x371444: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x371444u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x371448: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x371448u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x37144c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x37144cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x371450: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x371450u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x371454: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x371454u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x371458: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x371458u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x37145c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x37145cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x371460: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x371460u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x371464: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x371464u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x371468: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x371468u;
    {
        const bool branch_taken_0x371468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37146Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371468u;
        // 0x37146c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371468) {
            ctx->pc = 0x37147Cu;
            goto label_37147c;
        }
    }
    ctx->pc = 0x371470u;
label_371470:
    // 0x371470: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x371470u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x371474: 0xae82012c  sw          $v0, 0x12C($s4)
    ctx->pc = 0x371474u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 300), GPR_U32(ctx, 2));
    // 0x371478: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x371478u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_37147c:
    // 0x37147c: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x37147cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x371480: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x371480u;
    {
        const bool branch_taken_0x371480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x371484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371480u;
        // 0x371484: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371480) {
            ctx->pc = 0x3714F8u;
            goto label_3714f8;
        }
    }
    ctx->pc = 0x371488u;
    // 0x371488: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x371488u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x37148c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x37148Cu;
    {
        const bool branch_taken_0x37148c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x371490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37148Cu;
        // 0x371490: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37148c) {
            ctx->pc = 0x3714B0u;
            goto label_3714b0;
        }
    }
    ctx->pc = 0x371494u;
    // 0x371494: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x371494u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x371498: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x371498u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x37149c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x37149cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x3714a0: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x3714a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x3714a4: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x3714a4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x3714a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3714A8u;
    {
        const bool branch_taken_0x3714a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3714ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3714A8u;
        // 0x3714ac: 0xae830130  sw          $v1, 0x130($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 304), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3714a8) {
            ctx->pc = 0x3714BCu;
            goto label_3714bc;
        }
    }
    ctx->pc = 0x3714B0u;
label_3714b0:
    // 0x3714b0: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x3714b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x3714b4: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x3714b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3714b8: 0xae820130  sw          $v0, 0x130($s4)
    ctx->pc = 0x3714b8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 304), GPR_U32(ctx, 2));
label_3714bc:
    // 0x3714bc: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x3714bcu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3714c0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3714c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3714c4: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x3714c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3714c8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3714c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3714cc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x3714ccu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x3714d0: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x3714d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3714d4: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x3714d4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x3714d8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3714d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3714dc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x3714dcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x3714e0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x3714e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3714e4: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x3714e4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x3714e8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3714e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3714ec: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x3714ecu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x3714f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3714F0u;
    {
        const bool branch_taken_0x3714f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3714F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3714F0u;
        // 0x3714f4: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3714f0) {
            ctx->pc = 0x371504u;
            goto label_371504;
        }
    }
    ctx->pc = 0x3714F8u;
label_3714f8:
    // 0x3714f8: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x3714f8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x3714fc: 0xae820130  sw          $v0, 0x130($s4)
    ctx->pc = 0x3714fcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 304), GPR_U32(ctx, 2));
    // 0x371500: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x371500u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_371504:
    // 0x371504: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x371504u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x371508: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x371508u;
    {
        const bool branch_taken_0x371508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37150Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371508u;
        // 0x37150c: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371508) {
            ctx->pc = 0x371580u;
            goto label_371580;
        }
    }
    ctx->pc = 0x371510u;
    // 0x371510: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x371510u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x371514: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x371514u;
    {
        const bool branch_taken_0x371514 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x371518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371514u;
        // 0x371518: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371514) {
            ctx->pc = 0x371538u;
            goto label_371538;
        }
    }
    ctx->pc = 0x37151Cu;
    // 0x37151c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x37151cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x371520: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x371520u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x371524: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x371524u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x371528: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x371528u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x37152c: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x37152cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x371530: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x371530u;
    {
        const bool branch_taken_0x371530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x371534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371530u;
        // 0x371534: 0xae830134  sw          $v1, 0x134($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 308), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371530) {
            ctx->pc = 0x371544u;
            goto label_371544;
        }
    }
    ctx->pc = 0x371538u;
label_371538:
    // 0x371538: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x371538u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x37153c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x37153cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371540: 0xae820134  sw          $v0, 0x134($s4)
    ctx->pc = 0x371540u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 308), GPR_U32(ctx, 2));
label_371544:
    // 0x371544: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x371544u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x371548: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x371548u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x37154c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x37154cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x371550: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x371550u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x371554: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x371554u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x371558: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x371558u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x37155c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x37155cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x371560: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x371560u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x371564: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x371564u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x371568: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x371568u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x37156c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x37156cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x371570: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x371570u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x371574: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x371574u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x371578: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x371578u;
    {
        const bool branch_taken_0x371578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37157Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371578u;
        // 0x37157c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371578) {
            ctx->pc = 0x37158Cu;
            goto label_37158c;
        }
    }
    ctx->pc = 0x371580u;
label_371580:
    // 0x371580: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x371580u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x371584: 0xae820134  sw          $v0, 0x134($s4)
    ctx->pc = 0x371584u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 308), GPR_U32(ctx, 2));
    // 0x371588: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x371588u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_37158c:
    // 0x37158c: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x37158cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x371590: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x371590u;
    {
        const bool branch_taken_0x371590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x371594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371590u;
        // 0x371594: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371590) {
            ctx->pc = 0x371608u;
            goto label_371608;
        }
    }
    ctx->pc = 0x371598u;
    // 0x371598: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x371598u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x37159c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x37159Cu;
    {
        const bool branch_taken_0x37159c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3715A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37159Cu;
        // 0x3715a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37159c) {
            ctx->pc = 0x3715C0u;
            goto label_3715c0;
        }
    }
    ctx->pc = 0x3715A4u;
    // 0x3715a4: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x3715a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x3715a8: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x3715a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x3715ac: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x3715acu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x3715b0: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x3715b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x3715b4: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x3715b4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x3715b8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3715B8u;
    {
        const bool branch_taken_0x3715b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3715BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3715B8u;
        // 0x3715bc: 0xae830138  sw          $v1, 0x138($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 312), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3715b8) {
            ctx->pc = 0x3715CCu;
            goto label_3715cc;
        }
    }
    ctx->pc = 0x3715C0u;
label_3715c0:
    // 0x3715c0: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x3715c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x3715c4: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x3715c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3715c8: 0xae820138  sw          $v0, 0x138($s4)
    ctx->pc = 0x3715c8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 312), GPR_U32(ctx, 2));
label_3715cc:
    // 0x3715cc: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x3715ccu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3715d0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3715d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3715d4: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x3715d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3715d8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3715d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3715dc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x3715dcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x3715e0: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x3715e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3715e4: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x3715e4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x3715e8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3715e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3715ec: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x3715ecu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x3715f0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x3715f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3715f4: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x3715f4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x3715f8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3715f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3715fc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x3715fcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x371600: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x371600u;
    {
        const bool branch_taken_0x371600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x371604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371600u;
        // 0x371604: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371600) {
            ctx->pc = 0x371614u;
            goto label_371614;
        }
    }
    ctx->pc = 0x371608u;
label_371608:
    // 0x371608: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x371608u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x37160c: 0xae820138  sw          $v0, 0x138($s4)
    ctx->pc = 0x37160cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 312), GPR_U32(ctx, 2));
    // 0x371610: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x371610u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_371614:
    // 0x371614: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x371614u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x371618: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x371618u;
    {
        const bool branch_taken_0x371618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37161Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371618u;
        // 0x37161c: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371618) {
            ctx->pc = 0x371690u;
            goto label_371690;
        }
    }
    ctx->pc = 0x371620u;
    // 0x371620: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x371620u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x371624: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x371624u;
    {
        const bool branch_taken_0x371624 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x371628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371624u;
        // 0x371628: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371624) {
            ctx->pc = 0x371648u;
            goto label_371648;
        }
    }
    ctx->pc = 0x37162Cu;
    // 0x37162c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x37162cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x371630: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x371630u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x371634: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x371634u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x371638: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x371638u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x37163c: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x37163cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x371640: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x371640u;
    {
        const bool branch_taken_0x371640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x371644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371640u;
        // 0x371644: 0xae83013c  sw          $v1, 0x13C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 316), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371640) {
            ctx->pc = 0x371654u;
            goto label_371654;
        }
    }
    ctx->pc = 0x371648u;
label_371648:
    // 0x371648: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x371648u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x37164c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x37164cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371650: 0xae82013c  sw          $v0, 0x13C($s4)
    ctx->pc = 0x371650u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 316), GPR_U32(ctx, 2));
label_371654:
    // 0x371654: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x371654u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x371658: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x371658u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x37165c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x37165cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x371660: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x371660u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x371664: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x371664u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x371668: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x371668u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x37166c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x37166cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x371670: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x371670u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x371674: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x371674u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x371678: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x371678u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x37167c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x37167cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x371680: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x371680u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x371684: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x371684u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x371688: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x371688u;
    {
        const bool branch_taken_0x371688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37168Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371688u;
        // 0x37168c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371688) {
            ctx->pc = 0x37169Cu;
            goto label_37169c;
        }
    }
    ctx->pc = 0x371690u;
label_371690:
    // 0x371690: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x371690u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x371694: 0xae82013c  sw          $v0, 0x13C($s4)
    ctx->pc = 0x371694u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 316), GPR_U32(ctx, 2));
    // 0x371698: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x371698u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_37169c:
    // 0x37169c: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x37169cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x3716a0: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3716A0u;
    {
        const bool branch_taken_0x3716a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3716A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3716A0u;
        // 0x3716a4: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3716a0) {
            ctx->pc = 0x371718u;
            goto label_371718;
        }
    }
    ctx->pc = 0x3716A8u;
    // 0x3716a8: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x3716a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x3716ac: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x3716ACu;
    {
        const bool branch_taken_0x3716ac = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3716B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3716ACu;
        // 0x3716b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3716ac) {
            ctx->pc = 0x3716D0u;
            goto label_3716d0;
        }
    }
    ctx->pc = 0x3716B4u;
    // 0x3716b4: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x3716b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x3716b8: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x3716b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x3716bc: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x3716bcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x3716c0: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x3716c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x3716c4: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x3716c4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x3716c8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3716C8u;
    {
        const bool branch_taken_0x3716c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3716CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3716C8u;
        // 0x3716cc: 0xae830140  sw          $v1, 0x140($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 320), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3716c8) {
            ctx->pc = 0x3716DCu;
            goto label_3716dc;
        }
    }
    ctx->pc = 0x3716D0u;
label_3716d0:
    // 0x3716d0: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x3716d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x3716d4: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x3716d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3716d8: 0xae820140  sw          $v0, 0x140($s4)
    ctx->pc = 0x3716d8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 320), GPR_U32(ctx, 2));
label_3716dc:
    // 0x3716dc: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x3716dcu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3716e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3716e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3716e4: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x3716e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3716e8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3716e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3716ec: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x3716ecu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x3716f0: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x3716f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3716f4: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x3716f4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x3716f8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3716f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3716fc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x3716fcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x371700: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x371700u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x371704: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x371704u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x371708: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x371708u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x37170c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x37170cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x371710: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x371710u;
    {
        const bool branch_taken_0x371710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x371714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371710u;
        // 0x371714: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371710) {
            ctx->pc = 0x371724u;
            goto label_371724;
        }
    }
    ctx->pc = 0x371718u;
label_371718:
    // 0x371718: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x371718u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x37171c: 0xae820140  sw          $v0, 0x140($s4)
    ctx->pc = 0x37171cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 320), GPR_U32(ctx, 2));
    // 0x371720: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x371720u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_371724:
    // 0x371724: 0x8e820140  lw          $v0, 0x140($s4)
    ctx->pc = 0x371724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 320)));
    // 0x371728: 0x1040009b  beqz        $v0, . + 4 + (0x9B << 2)
    ctx->pc = 0x371728u;
    {
        const bool branch_taken_0x371728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37172Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371728u;
        // 0x37172c: 0x2a62001f  slti        $v0, $s3, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x371728) {
            ctx->pc = 0x371998u;
            goto label_371998;
        }
    }
    ctx->pc = 0x371730u;
    // 0x371730: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x371730u;
    {
        const bool branch_taken_0x371730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x371734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371730u;
        // 0x371734: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371730) {
            ctx->pc = 0x3717A8u;
            goto label_3717a8;
        }
    }
    ctx->pc = 0x371738u;
    // 0x371738: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x371738u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x37173c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x37173Cu;
    {
        const bool branch_taken_0x37173c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x371740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37173Cu;
        // 0x371740: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37173c) {
            ctx->pc = 0x371760u;
            goto label_371760;
        }
    }
    ctx->pc = 0x371744u;
    // 0x371744: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x371744u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x371748: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x371748u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x37174c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x37174cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x371750: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x371750u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x371754: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x371754u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x371758: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x371758u;
    {
        const bool branch_taken_0x371758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37175Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371758u;
        // 0x37175c: 0xae830144  sw          $v1, 0x144($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 324), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371758) {
            ctx->pc = 0x37176Cu;
            goto label_37176c;
        }
    }
    ctx->pc = 0x371760u;
label_371760:
    // 0x371760: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x371760u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x371764: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x371764u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371768: 0xae820144  sw          $v0, 0x144($s4)
    ctx->pc = 0x371768u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 324), GPR_U32(ctx, 2));
label_37176c:
    // 0x37176c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x37176cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x371770: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x371770u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x371774: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x371774u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x371778: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x371778u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x37177c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x37177cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x371780: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x371780u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x371784: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x371784u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x371788: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x371788u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x37178c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x37178cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x371790: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x371790u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x371794: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x371794u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x371798: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x371798u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x37179c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x37179cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x3717a0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3717A0u;
    {
        const bool branch_taken_0x3717a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3717A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3717A0u;
        // 0x3717a4: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3717a0) {
            ctx->pc = 0x3717B4u;
            goto label_3717b4;
        }
    }
    ctx->pc = 0x3717A8u;
label_3717a8:
    // 0x3717a8: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x3717a8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x3717ac: 0xae820144  sw          $v0, 0x144($s4)
    ctx->pc = 0x3717acu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 324), GPR_U32(ctx, 2));
    // 0x3717b0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3717b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3717b4:
    // 0x3717b4: 0x2a62001d  slti        $v0, $s3, 0x1D
    ctx->pc = 0x3717b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x3717b8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3717B8u;
    {
        const bool branch_taken_0x3717b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3717BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3717B8u;
        // 0x3717bc: 0x121742  srl         $v0, $s2, 29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3717b8) {
            ctx->pc = 0x371830u;
            goto label_371830;
        }
    }
    ctx->pc = 0x3717C0u;
    // 0x3717c0: 0x2673ffe3  addiu       $s3, $s3, -0x1D
    ctx->pc = 0x3717c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967267));
    // 0x3717c4: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x3717C4u;
    {
        const bool branch_taken_0x3717c4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3717C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3717C4u;
        // 0x3717c8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3717c4) {
            ctx->pc = 0x3717E8u;
            goto label_3717e8;
        }
    }
    ctx->pc = 0x3717CCu;
    // 0x3717cc: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x3717ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x3717d0: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x3717d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x3717d4: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x3717d4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x3717d8: 0x121f42  srl         $v1, $s2, 29
    ctx->pc = 0x3717d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 29));
    // 0x3717dc: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x3717dcu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x3717e0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3717E0u;
    {
        const bool branch_taken_0x3717e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3717E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3717E0u;
        // 0x3717e4: 0xae830148  sw          $v1, 0x148($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 328), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3717e0) {
            ctx->pc = 0x3717F4u;
            goto label_3717f4;
        }
    }
    ctx->pc = 0x3717E8u;
label_3717e8:
    // 0x3717e8: 0x121742  srl         $v0, $s2, 29
    ctx->pc = 0x3717e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 29));
    // 0x3717ec: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x3717ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3717f0: 0xae820148  sw          $v0, 0x148($s4)
    ctx->pc = 0x3717f0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 328), GPR_U32(ctx, 2));
label_3717f4:
    // 0x3717f4: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x3717f4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3717f8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3717f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3717fc: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x3717fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x371800: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x371800u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x371804: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x371804u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x371808: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x371808u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x37180c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x37180cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x371810: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x371810u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x371814: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x371814u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x371818: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x371818u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x37181c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x37181cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x371820: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x371820u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x371824: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x371824u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x371828: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x371828u;
    {
        const bool branch_taken_0x371828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37182Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371828u;
        // 0x37182c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371828) {
            ctx->pc = 0x37183Cu;
            goto label_37183c;
        }
    }
    ctx->pc = 0x371830u;
label_371830:
    // 0x371830: 0x1290c0  sll         $s2, $s2, 3
    ctx->pc = 0x371830u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x371834: 0xae820148  sw          $v0, 0x148($s4)
    ctx->pc = 0x371834u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 328), GPR_U32(ctx, 2));
    // 0x371838: 0x26730003  addiu       $s3, $s3, 0x3
    ctx->pc = 0x371838u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
label_37183c:
    // 0x37183c: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x37183cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x371840: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x371840u;
    {
        const bool branch_taken_0x371840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x371844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371840u;
        // 0x371844: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371840) {
            ctx->pc = 0x3718B8u;
            goto label_3718b8;
        }
    }
    ctx->pc = 0x371848u;
    // 0x371848: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x371848u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x37184c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x37184Cu;
    {
        const bool branch_taken_0x37184c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x371850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37184Cu;
        // 0x371850: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37184c) {
            ctx->pc = 0x371870u;
            goto label_371870;
        }
    }
    ctx->pc = 0x371854u;
    // 0x371854: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x371854u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x371858: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x371858u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x37185c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x37185cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x371860: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x371860u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x371864: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x371864u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x371868: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x371868u;
    {
        const bool branch_taken_0x371868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37186Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371868u;
        // 0x37186c: 0xae83014c  sw          $v1, 0x14C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 332), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371868) {
            ctx->pc = 0x37187Cu;
            goto label_37187c;
        }
    }
    ctx->pc = 0x371870u;
label_371870:
    // 0x371870: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x371870u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x371874: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x371874u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371878: 0xae82014c  sw          $v0, 0x14C($s4)
    ctx->pc = 0x371878u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 332), GPR_U32(ctx, 2));
label_37187c:
    // 0x37187c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x37187cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x371880: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x371880u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x371884: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x371884u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x371888: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x371888u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x37188c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x37188cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x371890: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x371890u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x371894: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x371894u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x371898: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x371898u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x37189c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x37189cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x3718a0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x3718a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3718a4: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x3718a4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x3718a8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3718a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3718ac: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x3718acu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x3718b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3718B0u;
    {
        const bool branch_taken_0x3718b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3718B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3718B0u;
        // 0x3718b4: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3718b0) {
            ctx->pc = 0x3718C4u;
            goto label_3718c4;
        }
    }
    ctx->pc = 0x3718B8u;
label_3718b8:
    // 0x3718b8: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x3718b8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x3718bc: 0xae82014c  sw          $v0, 0x14C($s4)
    ctx->pc = 0x3718bcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 332), GPR_U32(ctx, 2));
    // 0x3718c0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3718c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3718c4:
    // 0x3718c4: 0x2a620019  slti        $v0, $s3, 0x19
    ctx->pc = 0x3718c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)25) ? 1 : 0);
    // 0x3718c8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3718C8u;
    {
        const bool branch_taken_0x3718c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3718CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3718C8u;
        // 0x3718cc: 0x121642  srl         $v0, $s2, 25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3718c8) {
            ctx->pc = 0x371940u;
            goto label_371940;
        }
    }
    ctx->pc = 0x3718D0u;
    // 0x3718d0: 0x2673ffe7  addiu       $s3, $s3, -0x19
    ctx->pc = 0x3718d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967271));
    // 0x3718d4: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x3718D4u;
    {
        const bool branch_taken_0x3718d4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3718D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3718D4u;
        // 0x3718d8: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3718d4) {
            ctx->pc = 0x3718F8u;
            goto label_3718f8;
        }
    }
    ctx->pc = 0x3718DCu;
    // 0x3718dc: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x3718dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x3718e0: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x3718e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x3718e4: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x3718e4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x3718e8: 0x121e42  srl         $v1, $s2, 25
    ctx->pc = 0x3718e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 25));
    // 0x3718ec: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x3718ecu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x3718f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3718F0u;
    {
        const bool branch_taken_0x3718f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3718F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3718F0u;
        // 0x3718f4: 0xae830150  sw          $v1, 0x150($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 336), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3718f0) {
            ctx->pc = 0x371904u;
            goto label_371904;
        }
    }
    ctx->pc = 0x3718F8u;
label_3718f8:
    // 0x3718f8: 0x121642  srl         $v0, $s2, 25
    ctx->pc = 0x3718f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 25));
    // 0x3718fc: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x3718fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371900: 0xae820150  sw          $v0, 0x150($s4)
    ctx->pc = 0x371900u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 336), GPR_U32(ctx, 2));
label_371904:
    // 0x371904: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x371904u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x371908: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x371908u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x37190c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x37190cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x371910: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x371910u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x371914: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x371914u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x371918: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x371918u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x37191c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x37191cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x371920: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x371920u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x371924: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x371924u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x371928: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x371928u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x37192c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x37192cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x371930: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x371930u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x371934: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x371934u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x371938: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x371938u;
    {
        const bool branch_taken_0x371938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37193Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371938u;
        // 0x37193c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371938) {
            ctx->pc = 0x37194Cu;
            goto label_37194c;
        }
    }
    ctx->pc = 0x371940u;
label_371940:
    // 0x371940: 0x1291c0  sll         $s2, $s2, 7
    ctx->pc = 0x371940u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 7));
    // 0x371944: 0xae820150  sw          $v0, 0x150($s4)
    ctx->pc = 0x371944u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 336), GPR_U32(ctx, 2));
    // 0x371948: 0x26730007  addiu       $s3, $s3, 0x7
    ctx->pc = 0x371948u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 7));
label_37194c:
    // 0x37194c: 0x2a620018  slti        $v0, $s3, 0x18
    ctx->pc = 0x37194cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x371950: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x371950u;
    {
        const bool branch_taken_0x371950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x371954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371950u;
        // 0x371954: 0x121602  srl         $v0, $s2, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371950) {
            ctx->pc = 0x371990u;
            goto label_371990;
        }
    }
    ctx->pc = 0x371958u;
    // 0x371958: 0x2673ffe8  addiu       $s3, $s3, -0x18
    ctx->pc = 0x371958u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967272));
    // 0x37195c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x37195Cu;
    {
        const bool branch_taken_0x37195c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x371960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37195Cu;
        // 0x371960: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37195c) {
            ctx->pc = 0x371980u;
            goto label_371980;
        }
    }
    ctx->pc = 0x371964u;
    // 0x371964: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x371964u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x371968: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x371968u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x37196c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x37196cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x371970: 0x121e02  srl         $v1, $s2, 24
    ctx->pc = 0x371970u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
    // 0x371974: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x371974u;
    {
        const bool branch_taken_0x371974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x371978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371974u;
        // 0x371978: 0xae830154  sw          $v1, 0x154($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 340), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371974) {
            ctx->pc = 0x371988u;
            goto label_371988;
        }
    }
    ctx->pc = 0x37197Cu;
    // 0x37197c: 0x0  nop
    ctx->pc = 0x37197cu;
    // NOP
label_371980:
    // 0x371980: 0x121602  srl         $v0, $s2, 24
    ctx->pc = 0x371980u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
    // 0x371984: 0xae820154  sw          $v0, 0x154($s4)
    ctx->pc = 0x371984u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 340), GPR_U32(ctx, 2));
label_371988:
    // 0x371988: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x371988u;
    {
        const bool branch_taken_0x371988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37198Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371988u;
        // 0x37198c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371988) {
            ctx->pc = 0x371998u;
            goto label_371998;
        }
    }
    ctx->pc = 0x371990u;
label_371990:
    // 0x371990: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x371990u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x371994: 0xae820154  sw          $v0, 0x154($s4)
    ctx->pc = 0x371994u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 340), GPR_U32(ctx, 2));
label_371998:
    // 0x371998: 0xc0db882  jal         func_36E208
    ctx->pc = 0x371998u;
    SET_GPR_U32(ctx, 31, 0x3719A0u);
    ctx->pc = 0x37199Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371998u;
    // 0x37199c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36E208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36E208u, 0x371998u, 0x3719A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3719A0u;
label_3719a0:
    // 0x3719a0: 0xc0db8c2  jal         func_36E308
    ctx->pc = 0x3719A0u;
    SET_GPR_U32(ctx, 31, 0x3719A8u);
    ctx->pc = 0x3719A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3719A0u;
    // 0x3719a4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36E308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36E308u, 0x3719A0u, 0x3719A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3719A8u;
label_3719a8:
    // 0x3719a8: 0x8e8203c4  lw          $v0, 0x3C4($s4)
    ctx->pc = 0x3719a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 964)));
    // 0x3719ac: 0x50400189  beql        $v0, $zero, . + 4 + (0x189 << 2)
    ctx->pc = 0x3719ACu;
    {
        const bool branch_taken_0x3719ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3719ac) {
            ctx->pc = 0x3719B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3719ACu;
            // 0x3719b0: 0xaea00154  sw          $zero, 0x154($s5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 21), 340), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x371FD4u;
            goto label_371fd4;
        }
    }
    ctx->pc = 0x3719B4u;
    // 0x3719b4: 0x10000188  b           . + 4 + (0x188 << 2)
    ctx->pc = 0x3719B4u;
    {
        const bool branch_taken_0x3719b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3719B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3719B4u;
        // 0x3719b8: 0x2361823  subu        $v1, $s1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3719b4) {
            ctx->pc = 0x371FD8u;
            goto label_371fd8;
        }
    }
    ctx->pc = 0x3719BCu;
    // 0x3719bc: 0x0  nop
    ctx->pc = 0x3719bcu;
    // NOP
label_3719c0:
    // 0x3719c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3719c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3719c4: 0x2a630016  slti        $v1, $s3, 0x16
    ctx->pc = 0x3719c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)22) ? 1 : 0);
    // 0x3719c8: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x3719C8u;
    {
        const bool branch_taken_0x3719c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3719CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3719C8u;
        // 0x3719cc: 0xae820314  sw          $v0, 0x314($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 788), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3719c8) {
            ctx->pc = 0x371A40u;
            goto label_371a40;
        }
    }
    ctx->pc = 0x3719D0u;
    // 0x3719d0: 0x2673ffea  addiu       $s3, $s3, -0x16
    ctx->pc = 0x3719d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967274));
    // 0x3719d4: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x3719D4u;
    {
        const bool branch_taken_0x3719d4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3719D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3719D4u;
        // 0x3719d8: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3719d4) {
            ctx->pc = 0x3719F8u;
            goto label_3719f8;
        }
    }
    ctx->pc = 0x3719DCu;
    // 0x3719dc: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x3719dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x3719e0: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x3719e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x3719e4: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x3719e4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x3719e8: 0x121d82  srl         $v1, $s2, 22
    ctx->pc = 0x3719e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 22));
    // 0x3719ec: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x3719ecu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x3719f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3719F0u;
    {
        const bool branch_taken_0x3719f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3719F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3719F0u;
        // 0x3719f4: 0xae830184  sw          $v1, 0x184($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 388), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3719f0) {
            ctx->pc = 0x371A04u;
            goto label_371a04;
        }
    }
    ctx->pc = 0x3719F8u;
label_3719f8:
    // 0x3719f8: 0x121582  srl         $v0, $s2, 22
    ctx->pc = 0x3719f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 22));
    // 0x3719fc: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x3719fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371a00: 0xae820184  sw          $v0, 0x184($s4)
    ctx->pc = 0x371a00u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 388), GPR_U32(ctx, 2));
label_371a04:
    // 0x371a04: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x371a04u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x371a08: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x371a08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x371a0c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x371a0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x371a10: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x371a10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x371a14: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x371a14u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x371a18: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x371a18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x371a1c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x371a1cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x371a20: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x371a20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x371a24: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x371a24u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x371a28: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x371a28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x371a2c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x371a2cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x371a30: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x371a30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x371a34: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x371a34u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x371a38: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x371A38u;
    {
        const bool branch_taken_0x371a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x371A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371A38u;
        // 0x371a3c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371a38) {
            ctx->pc = 0x371A50u;
            goto label_371a50;
        }
    }
    ctx->pc = 0x371A40u;
label_371a40:
    // 0x371a40: 0x121582  srl         $v0, $s2, 22
    ctx->pc = 0x371a40u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 22));
    // 0x371a44: 0x129280  sll         $s2, $s2, 10
    ctx->pc = 0x371a44u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 10));
    // 0x371a48: 0xae820184  sw          $v0, 0x184($s4)
    ctx->pc = 0x371a48u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 388), GPR_U32(ctx, 2));
    // 0x371a4c: 0x2673000a  addiu       $s3, $s3, 0xA
    ctx->pc = 0x371a4cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 10));
label_371a50:
    // 0x371a50: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x371a50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x371a54: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x371A54u;
    {
        const bool branch_taken_0x371a54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x371A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371A54u;
        // 0x371a58: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371a54) {
            ctx->pc = 0x371AD0u;
            goto label_371ad0;
        }
    }
    ctx->pc = 0x371A5Cu;
    // 0x371a5c: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x371a5cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x371a60: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x371A60u;
    {
        const bool branch_taken_0x371a60 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x371A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371A60u;
        // 0x371a64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371a60) {
            ctx->pc = 0x371A88u;
            goto label_371a88;
        }
    }
    ctx->pc = 0x371A68u;
    // 0x371a68: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x371a68u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x371a6c: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x371a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x371a70: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x371a70u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x371a74: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x371a74u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x371a78: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x371a78u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x371a7c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x371A7Cu;
    {
        const bool branch_taken_0x371a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x371A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371A7Cu;
        // 0x371a80: 0xae830018  sw          $v1, 0x18($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371a7c) {
            ctx->pc = 0x371A94u;
            goto label_371a94;
        }
    }
    ctx->pc = 0x371A84u;
    // 0x371a84: 0x0  nop
    ctx->pc = 0x371a84u;
    // NOP
label_371a88:
    // 0x371a88: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x371a88u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x371a8c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x371a8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371a90: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x371a90u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
label_371a94:
    // 0x371a94: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x371a94u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x371a98: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x371a98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x371a9c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x371a9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x371aa0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x371aa0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x371aa4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x371aa4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x371aa8: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x371aa8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x371aac: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x371aacu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x371ab0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x371ab0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x371ab4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x371ab4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x371ab8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x371ab8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x371abc: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x371abcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x371ac0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x371ac0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x371ac4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x371ac4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x371ac8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x371AC8u;
    {
        const bool branch_taken_0x371ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x371ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371AC8u;
        // 0x371acc: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371ac8) {
            ctx->pc = 0x371ADCu;
            goto label_371adc;
        }
    }
    ctx->pc = 0x371AD0u;
label_371ad0:
    // 0x371ad0: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x371ad0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x371ad4: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x371ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
    // 0x371ad8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x371ad8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_371adc:
    // 0x371adc: 0x2a620011  slti        $v0, $s3, 0x11
    ctx->pc = 0x371adcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x371ae0: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x371AE0u;
    {
        const bool branch_taken_0x371ae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x371AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371AE0u;
        // 0x371ae4: 0x121442  srl         $v0, $s2, 17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371ae0) {
            ctx->pc = 0x371B58u;
            goto label_371b58;
        }
    }
    ctx->pc = 0x371AE8u;
    // 0x371ae8: 0x2673ffef  addiu       $s3, $s3, -0x11
    ctx->pc = 0x371ae8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967279));
    // 0x371aec: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x371AECu;
    {
        const bool branch_taken_0x371aec = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x371AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371AECu;
        // 0x371af0: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371aec) {
            ctx->pc = 0x371B10u;
            goto label_371b10;
        }
    }
    ctx->pc = 0x371AF4u;
    // 0x371af4: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x371af4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x371af8: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x371af8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x371afc: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x371afcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x371b00: 0x121c42  srl         $v1, $s2, 17
    ctx->pc = 0x371b00u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 17));
    // 0x371b04: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x371b04u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x371b08: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x371B08u;
    {
        const bool branch_taken_0x371b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x371B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371B08u;
        // 0x371b0c: 0xae830188  sw          $v1, 0x188($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 392), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371b08) {
            ctx->pc = 0x371B1Cu;
            goto label_371b1c;
        }
    }
    ctx->pc = 0x371B10u;
label_371b10:
    // 0x371b10: 0x121442  srl         $v0, $s2, 17
    ctx->pc = 0x371b10u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 17));
    // 0x371b14: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x371b14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371b18: 0xae820188  sw          $v0, 0x188($s4)
    ctx->pc = 0x371b18u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 392), GPR_U32(ctx, 2));
label_371b1c:
    // 0x371b1c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x371b1cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x371b20: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x371b20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x371b24: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x371b24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x371b28: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x371b28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x371b2c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x371b2cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x371b30: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x371b30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x371b34: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x371b34u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x371b38: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x371b38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x371b3c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x371b3cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x371b40: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x371b40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x371b44: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x371b44u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x371b48: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x371b48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x371b4c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x371b4cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x371b50: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x371B50u;
    {
        const bool branch_taken_0x371b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x371B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371B50u;
        // 0x371b54: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371b50) {
            ctx->pc = 0x371B64u;
            goto label_371b64;
        }
    }
    ctx->pc = 0x371B58u;
label_371b58:
    // 0x371b58: 0x1293c0  sll         $s2, $s2, 15
    ctx->pc = 0x371b58u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 15));
    // 0x371b5c: 0xae820188  sw          $v0, 0x188($s4)
    ctx->pc = 0x371b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 392), GPR_U32(ctx, 2));
    // 0x371b60: 0x2673000f  addiu       $s3, $s3, 0xF
    ctx->pc = 0x371b60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 15));
label_371b64:
    // 0x371b64: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x371b64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x371b68: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x371B68u;
    {
        const bool branch_taken_0x371b68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x371B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371B68u;
        // 0x371b6c: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371b68) {
            ctx->pc = 0x371BE0u;
            goto label_371be0;
        }
    }
    ctx->pc = 0x371B70u;
    // 0x371b70: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x371b70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x371b74: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x371B74u;
    {
        const bool branch_taken_0x371b74 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x371B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371B74u;
        // 0x371b78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371b74) {
            ctx->pc = 0x371B98u;
            goto label_371b98;
        }
    }
    ctx->pc = 0x371B7Cu;
    // 0x371b7c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x371b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x371b80: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x371b80u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x371b84: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x371b84u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x371b88: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x371b88u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x371b8c: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x371b8cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x371b90: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x371B90u;
    {
        const bool branch_taken_0x371b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x371B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371B90u;
        // 0x371b94: 0xae830018  sw          $v1, 0x18($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371b90) {
            ctx->pc = 0x371BA4u;
            goto label_371ba4;
        }
    }
    ctx->pc = 0x371B98u;
label_371b98:
    // 0x371b98: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x371b98u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x371b9c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x371b9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371ba0: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x371ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
label_371ba4:
    // 0x371ba4: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x371ba4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x371ba8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x371ba8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x371bac: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x371bacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x371bb0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x371bb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x371bb4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x371bb4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x371bb8: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x371bb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x371bbc: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x371bbcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x371bc0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x371bc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x371bc4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x371bc4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x371bc8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x371bc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x371bcc: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x371bccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x371bd0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x371bd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x371bd4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x371bd4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x371bd8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x371BD8u;
    {
        const bool branch_taken_0x371bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x371BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371BD8u;
        // 0x371bdc: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371bd8) {
            ctx->pc = 0x371BECu;
            goto label_371bec;
        }
    }
    ctx->pc = 0x371BE0u;
label_371be0:
    // 0x371be0: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x371be0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x371be4: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x371be4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
    // 0x371be8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x371be8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_371bec:
    // 0x371bec: 0x2a620011  slti        $v0, $s3, 0x11
    ctx->pc = 0x371becu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x371bf0: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x371BF0u;
    {
        const bool branch_taken_0x371bf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x371BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371BF0u;
        // 0x371bf4: 0x121442  srl         $v0, $s2, 17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371bf0) {
            ctx->pc = 0x371C68u;
            goto label_371c68;
        }
    }
    ctx->pc = 0x371BF8u;
    // 0x371bf8: 0x2673ffef  addiu       $s3, $s3, -0x11
    ctx->pc = 0x371bf8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967279));
    // 0x371bfc: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x371BFCu;
    {
        const bool branch_taken_0x371bfc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x371C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371BFCu;
        // 0x371c00: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371bfc) {
            ctx->pc = 0x371C20u;
            goto label_371c20;
        }
    }
    ctx->pc = 0x371C04u;
    // 0x371c04: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x371c04u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x371c08: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x371c08u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x371c0c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x371c0cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x371c10: 0x121c42  srl         $v1, $s2, 17
    ctx->pc = 0x371c10u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 17));
    // 0x371c14: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x371c14u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x371c18: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x371C18u;
    {
        const bool branch_taken_0x371c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x371C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371C18u;
        // 0x371c1c: 0xae83018c  sw          $v1, 0x18C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 396), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371c18) {
            ctx->pc = 0x371C2Cu;
            goto label_371c2c;
        }
    }
    ctx->pc = 0x371C20u;
label_371c20:
    // 0x371c20: 0x121442  srl         $v0, $s2, 17
    ctx->pc = 0x371c20u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 17));
    // 0x371c24: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x371c24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371c28: 0xae82018c  sw          $v0, 0x18C($s4)
    ctx->pc = 0x371c28u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 396), GPR_U32(ctx, 2));
label_371c2c:
    // 0x371c2c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x371c2cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x371c30: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x371c30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x371c34: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x371c34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x371c38: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x371c38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x371c3c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x371c3cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x371c40: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x371c40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x371c44: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x371c44u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x371c48: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x371c48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x371c4c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x371c4cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x371c50: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x371c50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x371c54: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x371c54u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x371c58: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x371c58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x371c5c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x371c5cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x371c60: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x371C60u;
    {
        const bool branch_taken_0x371c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x371C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371C60u;
        // 0x371c64: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371c60) {
            ctx->pc = 0x371C74u;
            goto label_371c74;
        }
    }
    ctx->pc = 0x371C68u;
label_371c68:
    // 0x371c68: 0x1293c0  sll         $s2, $s2, 15
    ctx->pc = 0x371c68u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 15));
    // 0x371c6c: 0xae82018c  sw          $v0, 0x18C($s4)
    ctx->pc = 0x371c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 396), GPR_U32(ctx, 2));
    // 0x371c70: 0x2673000f  addiu       $s3, $s3, 0xF
    ctx->pc = 0x371c70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 15));
label_371c74:
    // 0x371c74: 0x2a62001e  slti        $v0, $s3, 0x1E
    ctx->pc = 0x371c74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x371c78: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x371C78u;
    {
        const bool branch_taken_0x371c78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x371C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371C78u;
        // 0x371c7c: 0x121782  srl         $v0, $s2, 30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371c78) {
            ctx->pc = 0x371CF0u;
            goto label_371cf0;
        }
    }
    ctx->pc = 0x371C80u;
    // 0x371c80: 0x2673ffe2  addiu       $s3, $s3, -0x1E
    ctx->pc = 0x371c80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967266));
    // 0x371c84: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x371C84u;
    {
        const bool branch_taken_0x371c84 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x371C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371C84u;
        // 0x371c88: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371c84) {
            ctx->pc = 0x371CA8u;
            goto label_371ca8;
        }
    }
    ctx->pc = 0x371C8Cu;
    // 0x371c8c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x371c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x371c90: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x371c90u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x371c94: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x371c94u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x371c98: 0x121f82  srl         $v1, $s2, 30
    ctx->pc = 0x371c98u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
    // 0x371c9c: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x371c9cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x371ca0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x371CA0u;
    {
        const bool branch_taken_0x371ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x371CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371CA0u;
        // 0x371ca4: 0xae830190  sw          $v1, 0x190($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 400), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371ca0) {
            ctx->pc = 0x371CB4u;
            goto label_371cb4;
        }
    }
    ctx->pc = 0x371CA8u;
label_371ca8:
    // 0x371ca8: 0x121782  srl         $v0, $s2, 30
    ctx->pc = 0x371ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
    // 0x371cac: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x371cacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371cb0: 0xae820190  sw          $v0, 0x190($s4)
    ctx->pc = 0x371cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 400), GPR_U32(ctx, 2));
label_371cb4:
    // 0x371cb4: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x371cb4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x371cb8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x371cb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x371cbc: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x371cbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x371cc0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x371cc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x371cc4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x371cc4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x371cc8: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x371cc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x371ccc: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x371cccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x371cd0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x371cd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x371cd4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x371cd4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x371cd8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x371cd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x371cdc: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x371cdcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x371ce0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x371ce0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x371ce4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x371ce4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x371ce8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x371CE8u;
    {
        const bool branch_taken_0x371ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x371CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371CE8u;
        // 0x371cec: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371ce8) {
            ctx->pc = 0x371CFCu;
            goto label_371cfc;
        }
    }
    ctx->pc = 0x371CF0u;
label_371cf0:
    // 0x371cf0: 0x129080  sll         $s2, $s2, 2
    ctx->pc = 0x371cf0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x371cf4: 0xae820190  sw          $v0, 0x190($s4)
    ctx->pc = 0x371cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 400), GPR_U32(ctx, 2));
    // 0x371cf8: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x371cf8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
label_371cfc:
    // 0x371cfc: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x371cfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x371d00: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x371D00u;
    {
        const bool branch_taken_0x371d00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x371D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371D00u;
        // 0x371d04: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371d00) {
            ctx->pc = 0x371D78u;
            goto label_371d78;
        }
    }
    ctx->pc = 0x371D08u;
    // 0x371d08: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x371d08u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x371d0c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x371D0Cu;
    {
        const bool branch_taken_0x371d0c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x371D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371D0Cu;
        // 0x371d10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371d0c) {
            ctx->pc = 0x371D30u;
            goto label_371d30;
        }
    }
    ctx->pc = 0x371D14u;
    // 0x371d14: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x371d14u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x371d18: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x371d18u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x371d1c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x371d1cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x371d20: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x371d20u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x371d24: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x371d24u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x371d28: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x371D28u;
    {
        const bool branch_taken_0x371d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x371D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371D28u;
        // 0x371d2c: 0xae830194  sw          $v1, 0x194($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 404), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371d28) {
            ctx->pc = 0x371D3Cu;
            goto label_371d3c;
        }
    }
    ctx->pc = 0x371D30u;
label_371d30:
    // 0x371d30: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x371d30u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x371d34: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x371d34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371d38: 0xae820194  sw          $v0, 0x194($s4)
    ctx->pc = 0x371d38u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 404), GPR_U32(ctx, 2));
label_371d3c:
    // 0x371d3c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x371d3cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x371d40: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x371d40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x371d44: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x371d44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x371d48: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x371d48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x371d4c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x371d4cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x371d50: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x371d50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x371d54: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x371d54u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x371d58: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x371d58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x371d5c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x371d5cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x371d60: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x371d60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x371d64: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x371d64u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x371d68: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x371d68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x371d6c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x371d6cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x371d70: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x371D70u;
    {
        const bool branch_taken_0x371d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x371D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371D70u;
        // 0x371d74: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371d70) {
            ctx->pc = 0x371D84u;
            goto label_371d84;
        }
    }
    ctx->pc = 0x371D78u;
label_371d78:
    // 0x371d78: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x371d78u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x371d7c: 0xae820194  sw          $v0, 0x194($s4)
    ctx->pc = 0x371d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 404), GPR_U32(ctx, 2));
    // 0x371d80: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x371d80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_371d84:
    // 0x371d84: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x371d84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x371d88: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x371D88u;
    {
        const bool branch_taken_0x371d88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x371D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371D88u;
        // 0x371d8c: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371d88) {
            ctx->pc = 0x371DC8u;
            goto label_371dc8;
        }
    }
    ctx->pc = 0x371D90u;
    // 0x371d90: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x371d90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x371d94: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x371D94u;
    {
        const bool branch_taken_0x371d94 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x371D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371D94u;
        // 0x371d98: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371d94) {
            ctx->pc = 0x371DB8u;
            goto label_371db8;
        }
    }
    ctx->pc = 0x371D9Cu;
    // 0x371d9c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x371d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x371da0: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x371da0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x371da4: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x371da4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x371da8: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x371da8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x371dac: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x371DACu;
    {
        const bool branch_taken_0x371dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x371DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371DACu;
        // 0x371db0: 0xae830198  sw          $v1, 0x198($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 408), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371dac) {
            ctx->pc = 0x371FB0u;
            goto label_371fb0;
        }
    }
    ctx->pc = 0x371DB4u;
    // 0x371db4: 0x0  nop
    ctx->pc = 0x371db4u;
    // NOP
label_371db8:
    // 0x371db8: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x371db8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x371dbc: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x371DBCu;
    {
        const bool branch_taken_0x371dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x371DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371DBCu;
        // 0x371dc0: 0xae820198  sw          $v0, 0x198($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 408), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371dbc) {
            ctx->pc = 0x371FB0u;
            goto label_371fb0;
        }
    }
    ctx->pc = 0x371DC4u;
    // 0x371dc4: 0x0  nop
    ctx->pc = 0x371dc4u;
    // NOP
label_371dc8:
    // 0x371dc8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x371dc8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x371dcc: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x371DCCu;
    {
        const bool branch_taken_0x371dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x371DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371DCCu;
        // 0x371dd0: 0xae820198  sw          $v0, 0x198($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 408), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371dcc) {
            ctx->pc = 0x371FD4u;
            goto label_371fd4;
        }
    }
    ctx->pc = 0x371DD4u;
    // 0x371dd4: 0x0  nop
    ctx->pc = 0x371dd4u;
    // NOP
label_371dd8:
    // 0x371dd8: 0x2a62001e  slti        $v0, $s3, 0x1E
    ctx->pc = 0x371dd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x371ddc: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x371DDCu;
    {
        const bool branch_taken_0x371ddc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x371DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371DDCu;
        // 0x371de0: 0x121782  srl         $v0, $s2, 30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371ddc) {
            ctx->pc = 0x371E58u;
            goto label_371e58;
        }
    }
    ctx->pc = 0x371DE4u;
    // 0x371de4: 0x2673ffe2  addiu       $s3, $s3, -0x1E
    ctx->pc = 0x371de4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967266));
    // 0x371de8: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x371DE8u;
    {
        const bool branch_taken_0x371de8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x371DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371DE8u;
        // 0x371dec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371de8) {
            ctx->pc = 0x371E10u;
            goto label_371e10;
        }
    }
    ctx->pc = 0x371DF0u;
    // 0x371df0: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x371df0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x371df4: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x371df4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x371df8: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x371df8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x371dfc: 0x121f82  srl         $v1, $s2, 30
    ctx->pc = 0x371dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
    // 0x371e00: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x371e00u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x371e04: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x371E04u;
    {
        const bool branch_taken_0x371e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x371E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371E04u;
        // 0x371e08: 0xae830178  sw          $v1, 0x178($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 376), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371e04) {
            ctx->pc = 0x371E1Cu;
            goto label_371e1c;
        }
    }
    ctx->pc = 0x371E0Cu;
    // 0x371e0c: 0x0  nop
    ctx->pc = 0x371e0cu;
    // NOP
label_371e10:
    // 0x371e10: 0x121782  srl         $v0, $s2, 30
    ctx->pc = 0x371e10u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
    // 0x371e14: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x371e14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371e18: 0xae820178  sw          $v0, 0x178($s4)
    ctx->pc = 0x371e18u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 376), GPR_U32(ctx, 2));
label_371e1c:
    // 0x371e1c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x371e1cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x371e20: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x371e20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x371e24: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x371e24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x371e28: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x371e28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x371e2c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x371e2cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x371e30: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x371e30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x371e34: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x371e34u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x371e38: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x371e38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x371e3c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x371e3cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x371e40: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x371e40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x371e44: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x371e44u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x371e48: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x371e48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x371e4c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x371e4cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x371e50: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x371E50u;
    {
        const bool branch_taken_0x371e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x371E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371E50u;
        // 0x371e54: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371e50) {
            ctx->pc = 0x371E64u;
            goto label_371e64;
        }
    }
    ctx->pc = 0x371E58u;
label_371e58:
    // 0x371e58: 0x129080  sll         $s2, $s2, 2
    ctx->pc = 0x371e58u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x371e5c: 0xae820178  sw          $v0, 0x178($s4)
    ctx->pc = 0x371e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 376), GPR_U32(ctx, 2));
    // 0x371e60: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x371e60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
label_371e64:
    // 0x371e64: 0x2a620016  slti        $v0, $s3, 0x16
    ctx->pc = 0x371e64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)22) ? 1 : 0);
    // 0x371e68: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x371E68u;
    {
        const bool branch_taken_0x371e68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x371E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371E68u;
        // 0x371e6c: 0x121582  srl         $v0, $s2, 22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371e68) {
            ctx->pc = 0x371EE0u;
            goto label_371ee0;
        }
    }
    ctx->pc = 0x371E70u;
    // 0x371e70: 0x2673ffea  addiu       $s3, $s3, -0x16
    ctx->pc = 0x371e70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967274));
    // 0x371e74: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x371E74u;
    {
        const bool branch_taken_0x371e74 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x371E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371E74u;
        // 0x371e78: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371e74) {
            ctx->pc = 0x371E98u;
            goto label_371e98;
        }
    }
    ctx->pc = 0x371E7Cu;
    // 0x371e7c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x371e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x371e80: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x371e80u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x371e84: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x371e84u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x371e88: 0x121d82  srl         $v1, $s2, 22
    ctx->pc = 0x371e88u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 22));
    // 0x371e8c: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x371e8cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x371e90: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x371E90u;
    {
        const bool branch_taken_0x371e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x371E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371E90u;
        // 0x371e94: 0xae83017c  sw          $v1, 0x17C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 380), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371e90) {
            ctx->pc = 0x371EA4u;
            goto label_371ea4;
        }
    }
    ctx->pc = 0x371E98u;
label_371e98:
    // 0x371e98: 0x121582  srl         $v0, $s2, 22
    ctx->pc = 0x371e98u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 22));
    // 0x371e9c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x371e9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371ea0: 0xae82017c  sw          $v0, 0x17C($s4)
    ctx->pc = 0x371ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 380), GPR_U32(ctx, 2));
label_371ea4:
    // 0x371ea4: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x371ea4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x371ea8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x371ea8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x371eac: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x371eacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x371eb0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x371eb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x371eb4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x371eb4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x371eb8: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x371eb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x371ebc: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x371ebcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x371ec0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x371ec0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x371ec4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x371ec4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x371ec8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x371ec8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x371ecc: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x371eccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x371ed0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x371ed0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x371ed4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x371ed4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x371ed8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x371ED8u;
    {
        const bool branch_taken_0x371ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x371EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371ED8u;
        // 0x371edc: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371ed8) {
            ctx->pc = 0x371EECu;
            goto label_371eec;
        }
    }
    ctx->pc = 0x371EE0u;
label_371ee0:
    // 0x371ee0: 0x129280  sll         $s2, $s2, 10
    ctx->pc = 0x371ee0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 10));
    // 0x371ee4: 0xae82017c  sw          $v0, 0x17C($s4)
    ctx->pc = 0x371ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 380), GPR_U32(ctx, 2));
    // 0x371ee8: 0x2673000a  addiu       $s3, $s3, 0xA
    ctx->pc = 0x371ee8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 10));
label_371eec:
    // 0x371eec: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x371eecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x371ef0: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x371EF0u;
    {
        const bool branch_taken_0x371ef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x371EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371EF0u;
        // 0x371ef4: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371ef0) {
            ctx->pc = 0x371F68u;
            goto label_371f68;
        }
    }
    ctx->pc = 0x371EF8u;
    // 0x371ef8: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x371ef8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x371efc: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x371EFCu;
    {
        const bool branch_taken_0x371efc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x371F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371EFCu;
        // 0x371f00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371efc) {
            ctx->pc = 0x371F20u;
            goto label_371f20;
        }
    }
    ctx->pc = 0x371F04u;
    // 0x371f04: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x371f04u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x371f08: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x371f08u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x371f0c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x371f0cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x371f10: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x371f10u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x371f14: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x371f14u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x371f18: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x371F18u;
    {
        const bool branch_taken_0x371f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x371F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371F18u;
        // 0x371f1c: 0xae830018  sw          $v1, 0x18($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371f18) {
            ctx->pc = 0x371F2Cu;
            goto label_371f2c;
        }
    }
    ctx->pc = 0x371F20u;
label_371f20:
    // 0x371f20: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x371f20u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x371f24: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x371f24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371f28: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x371f28u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
label_371f2c:
    // 0x371f2c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x371f2cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x371f30: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x371f30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x371f34: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x371f34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x371f38: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x371f38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x371f3c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x371f3cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x371f40: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x371f40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x371f44: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x371f44u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x371f48: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x371f48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x371f4c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x371f4cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x371f50: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x371f50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x371f54: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x371f54u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x371f58: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x371f58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x371f5c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x371f5cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x371f60: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x371F60u;
    {
        const bool branch_taken_0x371f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x371F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371F60u;
        // 0x371f64: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371f60) {
            ctx->pc = 0x371F74u;
            goto label_371f74;
        }
    }
    ctx->pc = 0x371F68u;
label_371f68:
    // 0x371f68: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x371f68u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x371f6c: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x371f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
    // 0x371f70: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x371f70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_371f74:
    // 0x371f74: 0x2a620016  slti        $v0, $s3, 0x16
    ctx->pc = 0x371f74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)22) ? 1 : 0);
    // 0x371f78: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x371F78u;
    {
        const bool branch_taken_0x371f78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x371F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371F78u;
        // 0x371f7c: 0x121582  srl         $v0, $s2, 22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371f78) {
            ctx->pc = 0x371FB8u;
            goto label_371fb8;
        }
    }
    ctx->pc = 0x371F80u;
    // 0x371f80: 0x2673ffea  addiu       $s3, $s3, -0x16
    ctx->pc = 0x371f80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967274));
    // 0x371f84: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x371F84u;
    {
        const bool branch_taken_0x371f84 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x371F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371F84u;
        // 0x371f88: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371f84) {
            ctx->pc = 0x371FA8u;
            goto label_371fa8;
        }
    }
    ctx->pc = 0x371F8Cu;
    // 0x371f8c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x371f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x371f90: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x371f90u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x371f94: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x371f94u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x371f98: 0x121d82  srl         $v1, $s2, 22
    ctx->pc = 0x371f98u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 22));
    // 0x371f9c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x371F9Cu;
    {
        const bool branch_taken_0x371f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x371FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371F9Cu;
        // 0x371fa0: 0xae830180  sw          $v1, 0x180($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 384), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371f9c) {
            ctx->pc = 0x371FB0u;
            goto label_371fb0;
        }
    }
    ctx->pc = 0x371FA4u;
    // 0x371fa4: 0x0  nop
    ctx->pc = 0x371fa4u;
    // NOP
label_371fa8:
    // 0x371fa8: 0x121582  srl         $v0, $s2, 22
    ctx->pc = 0x371fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 22));
    // 0x371fac: 0xae820180  sw          $v0, 0x180($s4)
    ctx->pc = 0x371facu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 384), GPR_U32(ctx, 2));
label_371fb0:
    // 0x371fb0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x371FB0u;
    {
        const bool branch_taken_0x371fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x371FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371FB0u;
        // 0x371fb4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371fb0) {
            ctx->pc = 0x371FD4u;
            goto label_371fd4;
        }
    }
    ctx->pc = 0x371FB8u;
label_371fb8:
    // 0x371fb8: 0x2673000a  addiu       $s3, $s3, 0xA
    ctx->pc = 0x371fb8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 10));
    // 0x371fbc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x371FBCu;
    {
        const bool branch_taken_0x371fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x371FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371FBCu;
        // 0x371fc0: 0xae820180  sw          $v0, 0x180($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 384), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371fbc) {
            ctx->pc = 0x371FD4u;
            goto label_371fd4;
        }
    }
    ctx->pc = 0x371FC4u;
    // 0x371fc4: 0x0  nop
    ctx->pc = 0x371fc4u;
    // NOP
label_371fc8:
    // 0x371fc8: 0x8e820494  lw          $v0, 0x494($s4)
    ctx->pc = 0x371fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1172)));
label_371fcc:
    // 0x371fcc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x371fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x371fd0: 0xae820494  sw          $v0, 0x494($s4)
    ctx->pc = 0x371fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1172), GPR_U32(ctx, 2));
label_371fd4:
    // 0x371fd4: 0x2361823  subu        $v1, $s1, $s6
    ctx->pc = 0x371fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
label_371fd8:
    // 0x371fd8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x371fd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x371fdc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x371fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x371fe0: 0xae80030c  sw          $zero, 0x30C($s4)
    ctx->pc = 0x371fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 780), GPR_U32(ctx, 0));
    // 0x371fe4: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x371fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x371fe8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x371fe8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x371fec: 0x2462ffc7  addiu       $v0, $v1, -0x39
    ctx->pc = 0x371fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967239));
    // 0x371ff0: 0x2463ffce  addiu       $v1, $v1, -0x32
    ctx->pc = 0x371ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967246));
    // 0x371ff4: 0x28440000  slti        $a0, $v0, 0x0
    ctx->pc = 0x371ff4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x371ff8: 0xae800308  sw          $zero, 0x308($s4)
    ctx->pc = 0x371ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 776), GPR_U32(ctx, 0));
    // 0x371ffc: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x371ffcu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x372000: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x372000u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x372004: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x372004u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x372008: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x372008u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37200c: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x37200cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x372010: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x372010u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x372014: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x372014u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x372018: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x372018u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37201c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x37201cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x372020: 0x3e00008  jr          $ra
    ctx->pc = 0x372020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x372024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372020u;
        // 0x372024: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x372028u;
}
