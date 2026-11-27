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

// Function: __divdi3
// Address: 0x3b7fe0 - 0x3b86d0
void ps2___divdi3_0x3b7fe0(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___divdi3_0x3b7fe0");
#endif


    // 0x3b7fe0: 0x80402d  daddu       $t0, $a0, $zero
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7fe4: 0xa0482d  daddu       $t1, $a1, $zero
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7fe8: 0x8503f  dsra32      $t2, $t0, 0
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x3b7fec: 0xa203c  dsll32      $a0, $t2, 0
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) << (32 + 0));
    // 0x3b7ff0: 0x4203f  dsra32      $a0, $a0, 0
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x3b7ff4: 0x4810016  bgez        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x3B7FF4u;
    {
        const bool branch_taken_0x3b7ff4 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x3B7FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7FF4u;
        // 0x3b7ff8: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7ff4) {
            ctx->pc = 0x3B8050u;
            goto label_3b8050;
        }
    }
    // 0x3b7ffc: 0x8103c  dsll32      $v0, $t0, 0
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 0));
    // 0x3b8000: 0x2103f  dsra32      $v0, $v0, 0
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3b8004: 0x2403ffff  addiu       $v1, $zero, -0x1
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3b8008: 0x3183c  dsll32      $v1, $v1, 0
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3b800c: 0x21023  negu        $v0, $v0
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x3b8010: 0xc33024  and         $a2, $a2, $v1
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x3b8014: 0x2103c  dsll32      $v0, $v0, 0
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3b8018: 0x41823  negu        $v1, $a0
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x3b801c: 0x2103e  dsrl32      $v0, $v0, 0
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3b8020: 0x3c04ffff  lui         $a0, 0xFFFF
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x3b8024: 0x4203e  dsrl32      $a0, $a0, 0
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x3b8028: 0xc23025  or          $a2, $a2, $v0
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x3b802c: 0x240fffff  addiu       $t7, $zero, -0x1
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3b8030: 0x6103c  dsll32      $v0, $a2, 0
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x3b8034: 0x2103f  dsra32      $v0, $v0, 0
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3b8038: 0x2102b  sltu        $v0, $zero, $v0
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3b803c: 0xc43024  and         $a2, $a2, $a0
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x3b8040: 0x621823  subu        $v1, $v1, $v0
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3b8044: 0x3183c  dsll32      $v1, $v1, 0
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3b8048: 0xc34025  or          $t0, $a2, $v1
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x3b804c: 0x8503f  dsra32      $t2, $t0, 0
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 8) >> (32 + 0));
label_3b8050:
    // 0x3b8050: 0x9203f  dsra32      $a0, $t1, 0
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x3b8054: 0x4810015  bgez        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3B8054u;
    {
        const bool branch_taken_0x3b8054 = (GPR_S64(ctx, 4) >= 0);
        if (branch_taken_0x3b8054) {
            ctx->pc = 0x3B80ACu;
            goto label_3b80ac;
        }
    }
    // 0x3b805c: 0x9103c  dsll32      $v0, $t1, 0
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) << (32 + 0));
    // 0x3b8060: 0x2103f  dsra32      $v0, $v0, 0
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3b8064: 0x2403ffff  addiu       $v1, $zero, -0x1
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3b8068: 0x3183c  dsll32      $v1, $v1, 0
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3b806c: 0x21023  negu        $v0, $v0
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x3b8070: 0xe33824  and         $a3, $a3, $v1
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x3b8074: 0x2103c  dsll32      $v0, $v0, 0
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3b8078: 0x41823  negu        $v1, $a0
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x3b807c: 0x2103e  dsrl32      $v0, $v0, 0
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3b8080: 0x3c04ffff  lui         $a0, 0xFFFF
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x3b8084: 0x4203e  dsrl32      $a0, $a0, 0
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x3b8088: 0xe23825  or          $a3, $a3, $v0
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x3b808c: 0xf7827  nor         $t7, $zero, $t7
    SET_GPR_U64(ctx, 15, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 15)));
    // 0x3b8090: 0x7103c  dsll32      $v0, $a3, 0
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x3b8094: 0x2103f  dsra32      $v0, $v0, 0
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3b8098: 0x2102b  sltu        $v0, $zero, $v0
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3b809c: 0xe43824  and         $a3, $a3, $a0
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x3b80a0: 0x621823  subu        $v1, $v1, $v0
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3b80a4: 0x3183c  dsll32      $v1, $v1, 0
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3b80a8: 0xe34825  or          $t1, $a3, $v1
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_3b80ac:
    // 0x3b80ac: 0x8603c  dsll32      $t4, $t0, 0
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 8) << (32 + 0));
    // 0x3b80b0: 0xc603f  dsra32      $t4, $t4, 0
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
    // 0x3b80b4: 0x9283f  dsra32      $a1, $t1, 0
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x3b80b8: 0xa503c  dsll32      $t2, $t2, 0
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x3b80bc: 0xa503f  dsra32      $t2, $t2, 0
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 0));
    // 0x3b80c0: 0x9403c  dsll32      $t0, $t1, 0
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) << (32 + 0));
    // 0x3b80c4: 0x8403f  dsra32      $t0, $t0, 0
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x3b80c8: 0x14a000f2  bnez        $a1, . + 4 + (0xF2 << 2)
    ctx->pc = 0x3B80C8u;
    {
        const bool branch_taken_0x3b80c8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B80CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B80C8u;
        // 0x3b80cc: 0x145102b  sltu        $v0, $t2, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b80c8) {
            ctx->pc = 0x3B8494u;
            goto label_3b8494;
        }
    }
    // 0x3b80d0: 0x148102b  sltu        $v0, $t2, $t0
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3b80d4: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x3B80D4u;
    {
        const bool branch_taken_0x3b80d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B80D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B80D4u;
        // 0x3b80d8: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b80d4) {
            ctx->pc = 0x3B8224u;
            goto label_3b8224;
        }
    }
    // 0x3b80dc: 0x48102b  sltu        $v0, $v0, $t0
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3b80e0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B80E0u;
    {
        const bool branch_taken_0x3b80e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B80E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B80E0u;
        // 0x3b80e4: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b80e0) {
            ctx->pc = 0x3B80F8u;
            goto label_3b80f8;
        }
    }
    // 0x3b80e8: 0x2d020100  sltiu       $v0, $t0, 0x100
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x3b80ec: 0x24050008  addiu       $a1, $zero, 0x8
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3b80f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3B80F0u;
    {
        const bool branch_taken_0x3b80f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B80F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B80F0u;
        // 0x3b80f4: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b80f0) {
            ctx->pc = 0x3B8110u;
            goto label_3b8110;
        }
    }
label_3b80f8:
    // 0x3b80f8: 0x24050018  addiu       $a1, $zero, 0x18
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x3b80fc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3b8100: 0x24030010  addiu       $v1, $zero, 0x10
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3b8104: 0x48102b  sltu        $v0, $v0, $t0
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3b8108: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x3b8108u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x3b810c: 0x0  nop
    // NOP
label_3b8110:
    // 0x3b8110: 0x3c020046  lui         $v0, 0x46
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3b8114: 0xa82006  srlv        $a0, $t0, $a1
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x3b8118: 0x24420418  addiu       $v0, $v0, 0x418
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1048));
    // 0x3b811c: 0x24070020  addiu       $a3, $zero, 0x20
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3b8120: 0x822021  addu        $a0, $a0, $v0
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3b8124: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3b8124u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3b8128: 0x651821  addu        $v1, $v1, $a1
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3b812c: 0xe33023  subu        $a2, $a3, $v1
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x3b8130: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B8130u;
    {
        const bool branch_taken_0x3b8130 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8130u;
        // 0x3b8134: 0xe61023  subu        $v0, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8130) {
            ctx->pc = 0x3B814Cu;
            goto label_3b814c;
        }
    }
    // 0x3b8138: 0xca1804  sllv        $v1, $t2, $a2
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 6) & 0x1F));
    // 0x3b813c: 0x4c1006  srlv        $v0, $t4, $v0
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 2) & 0x1F));
    // 0x3b8140: 0xc84004  sllv        $t0, $t0, $a2
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x3b8144: 0x625025  or          $t2, $v1, $v0
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3b8148: 0xcc6004  sllv        $t4, $t4, $a2
    ctx->pc = 0x3b8148u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 6) & 0x1F));
label_3b814c:
    // 0x3b814c: 0x82c02  srl         $a1, $t0, 16
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x3b8150: 0x3109ffff  andi        $t1, $t0, 0xFFFF
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x3b8154: 0x145001b  divu        $zero, $t2, $a1
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
    // 0x3b8158: 0xc2402  srl         $a0, $t4, 16
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), 16));
    // 0x3b815c: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3B815Cu;
    {
        const bool branch_taken_0x3b815c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b815c) {
            ctx->pc = 0x3B8160u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B815Cu;
            // 0x3b8160: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B8164u;
            goto label_3b8164;
        }
    }
label_3b8164:
    // 0x3b8164: 0x1012  mflo        $v0
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3b8168: 0x1810  mfhi        $v1
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3b816c: 0x40382d  daddu       $a3, $v0, $zero
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b8170: 0x3183c  dsll32      $v1, $v1, 0
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3b8174: 0x31c38  dsll        $v1, $v1, 16
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3b8178: 0x3183f  dsra32      $v1, $v1, 0
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3b817c: 0xe93018  mult        $a2, $a3, $t1
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3b8180: 0x641825  or          $v1, $v1, $a0
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3b8184: 0x66102b  sltu        $v0, $v1, $a2
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3b8188: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x3B8188u;
    {
        const bool branch_taken_0x3b8188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b8188) {
            ctx->pc = 0x3B818Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B8188u;
            // 0x3b818c: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B81BCu;
            goto label_3b81bc;
        }
    }
    // 0x3b8190: 0x681821  addu        $v1, $v1, $t0
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x3b8194: 0x68102b  sltu        $v0, $v1, $t0
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3b8198: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B8198u;
    {
        const bool branch_taken_0x3b8198 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B819Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8198u;
        // 0x3b819c: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8198) {
            ctx->pc = 0x3B81B8u;
            goto label_3b81b8;
        }
    }
    // 0x3b81a0: 0x66102b  sltu        $v0, $v1, $a2
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3b81a4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B81A4u;
    {
        const bool branch_taken_0x3b81a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b81a4) {
            ctx->pc = 0x3B81A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B81A4u;
            // 0x3b81a8: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B81BCu;
            goto label_3b81bc;
        }
    }
    // 0x3b81ac: 0x24e7ffff  addiu       $a3, $a3, -0x1
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3b81b0: 0x681821  addu        $v1, $v1, $t0
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x3b81b4: 0x0  nop
    // NOP
label_3b81b8:
    // 0x3b81b8: 0x661823  subu        $v1, $v1, $a2
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_3b81bc:
    // 0x3b81bc: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3B81BCu;
    {
        const bool branch_taken_0x3b81bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b81bc) {
            ctx->pc = 0x3B81C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B81BCu;
            // 0x3b81c0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B81C4u;
            goto label_3b81c4;
        }
    }
    ctx->pc = 0x3B81C4u;
label_3b81c4:
    // 0x3b81c4: 0x65001b  divu        $zero, $v1, $a1
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x3b81c8: 0x3184ffff  andi        $a0, $t4, 0xFFFF
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65535);
    // 0x3b81cc: 0x1012  mflo        $v0
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3b81d0: 0x1810  mfhi        $v1
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3b81d4: 0x40282d  daddu       $a1, $v0, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b81d8: 0x3183c  dsll32      $v1, $v1, 0
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3b81dc: 0x31c38  dsll        $v1, $v1, 16
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3b81e0: 0x3183f  dsra32      $v1, $v1, 0
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3b81e4: 0xa93018  mult        $a2, $a1, $t1
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3b81e8: 0x641825  or          $v1, $v1, $a0
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3b81ec: 0x66102b  sltu        $v0, $v1, $a2
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3b81f0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B81F0u;
    {
        const bool branch_taken_0x3b81f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B81F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B81F0u;
        // 0x3b81f4: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b81f0) {
            ctx->pc = 0x3B8210u;
            goto label_3b8210;
        }
    }
    // 0x3b81f8: 0x68102b  sltu        $v0, $v1, $t0
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3b81fc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B81FCu;
    {
        const bool branch_taken_0x3b81fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B8200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B81FCu;
        // 0x3b8200: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b81fc) {
            ctx->pc = 0x3B8210u;
            goto label_3b8210;
        }
    }
    // 0x3b8204: 0x66102b  sltu        $v0, $v1, $a2
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3b8208: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3B8208u;
    {
        const bool branch_taken_0x3b8208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b8208) {
            ctx->pc = 0x3B820Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B8208u;
            // 0x3b820c: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B8210u;
            goto label_3b8210;
        }
    }
label_3b8210:
    // 0x3b8210: 0x7103c  dsll32      $v0, $a3, 0
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x3b8214: 0x21438  dsll        $v0, $v0, 16
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3b8218: 0x2103f  dsra32      $v0, $v0, 0
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3b821c: 0x1000010e  b           . + 4 + (0x10E << 2)
    ctx->pc = 0x3B821Cu;
    {
        const bool branch_taken_0x3b821c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B821Cu;
        // 0x3b8220: 0x452825  or          $a1, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b821c) {
            ctx->pc = 0x3B8658u;
            goto label_3b8658;
        }
    }
label_3b8224:
    // 0x3b8224: 0x1500000a  bnez        $t0, . + 4 + (0xA << 2)
    ctx->pc = 0x3B8224u;
    {
        const bool branch_taken_0x3b8224 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B8228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8224u;
        // 0x3b8228: 0x48102b  sltu        $v0, $v0, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8224) {
            ctx->pc = 0x3B8250u;
            goto label_3b8250;
        }
    }
    // 0x3b822c: 0x24020001  addiu       $v0, $zero, 0x1
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b8230: 0x51000001  beql        $t0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3B8230u;
    {
        const bool branch_taken_0x3b8230 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b8230) {
            ctx->pc = 0x3B8234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B8230u;
            // 0x3b8234: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B8238u;
            goto label_3b8238;
        }
    }
    ctx->pc = 0x3B8238u;
label_3b8238:
    // 0x3b8238: 0x45001b  divu        $zero, $v0, $a1
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x3b823c: 0x1012  mflo        $v0
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3b8240: 0x40402d  daddu       $t0, $v0, $zero
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b8244: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3b8248: 0x48102b  sltu        $v0, $v0, $t0
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3b824c: 0x0  nop
    // NOP
label_3b8250:
    // 0x3b8250: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B8250u;
    {
        const bool branch_taken_0x3b8250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B8254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8250u;
        // 0x3b8254: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8250) {
            ctx->pc = 0x3B8268u;
            goto label_3b8268;
        }
    }
    // 0x3b8258: 0x2d020100  sltiu       $v0, $t0, 0x100
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x3b825c: 0x24050008  addiu       $a1, $zero, 0x8
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3b8260: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3B8260u;
    {
        const bool branch_taken_0x3b8260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8260u;
        // 0x3b8264: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8260) {
            ctx->pc = 0x3B8280u;
            goto label_3b8280;
        }
    }
label_3b8268:
    // 0x3b8268: 0x24050018  addiu       $a1, $zero, 0x18
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x3b826c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3b8270: 0x24030010  addiu       $v1, $zero, 0x10
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3b8274: 0x48102b  sltu        $v0, $v0, $t0
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3b8278: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x3b8278u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x3b827c: 0x0  nop
    // NOP
label_3b8280:
    // 0x3b8280: 0x3c020046  lui         $v0, 0x46
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3b8284: 0xa82006  srlv        $a0, $t0, $a1
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x3b8288: 0x24420418  addiu       $v0, $v0, 0x418
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1048));
    // 0x3b828c: 0x24070020  addiu       $a3, $zero, 0x20
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3b8290: 0x822021  addu        $a0, $a0, $v0
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3b8294: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3b8294u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3b8298: 0x651821  addu        $v1, $v1, $a1
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3b829c: 0xe33023  subu        $a2, $a3, $v1
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x3b82a0: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B82A0u;
    {
        const bool branch_taken_0x3b82a0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B82A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B82A0u;
        // 0x3b82a4: 0xe63823  subu        $a3, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b82a0) {
            ctx->pc = 0x3B82BCu;
            goto label_3b82bc;
        }
    }
    // 0x3b82a8: 0x1485023  subu        $t2, $t2, $t0
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x3b82ac: 0x240d0001  addiu       $t5, $zero, 0x1
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b82b0: 0x84c02  srl         $t1, $t0, 16
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x3b82b4: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x3B82B4u;
    {
        const bool branch_taken_0x3b82b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B82B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B82B4u;
        // 0x3b82b8: 0x310bffff  andi        $t3, $t0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b82b4) {
            ctx->pc = 0x3B83C0u;
            goto label_3b83c0;
        }
    }
    ctx->pc = 0x3B82BCu;
label_3b82bc:
    // 0x3b82bc: 0xca1804  sllv        $v1, $t2, $a2
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 6) & 0x1F));
    // 0x3b82c0: 0xec1006  srlv        $v0, $t4, $a3
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 7) & 0x1F));
    // 0x3b82c4: 0xc84004  sllv        $t0, $t0, $a2
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x3b82c8: 0xea3806  srlv        $a3, $t2, $a3
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 7) & 0x1F));
    // 0x3b82cc: 0xcc6004  sllv        $t4, $t4, $a2
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 6) & 0x1F));
    // 0x3b82d0: 0x625025  or          $t2, $v1, $v0
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3b82d4: 0x84c02  srl         $t1, $t0, 16
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x3b82d8: 0xe9001b  divu        $zero, $a3, $t1
    { uint32_t divisor = GPR_U32(ctx, 9); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x3b82dc: 0x310bffff  andi        $t3, $t0, 0xFFFF
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x3b82e0: 0x120282d  daddu       $a1, $t1, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b82e4: 0xa2402  srl         $a0, $t2, 16
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x3b82e8: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3B82E8u;
    {
        const bool branch_taken_0x3b82e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b82e8) {
            ctx->pc = 0x3B82ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B82E8u;
            // 0x3b82ec: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B82F0u;
            goto label_3b82f0;
        }
    }
label_3b82f0:
    // 0x3b82f0: 0x160682d  daddu       $t5, $t3, $zero
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b82f4: 0x1012  mflo        $v0
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3b82f8: 0x1810  mfhi        $v1
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3b82fc: 0x40382d  daddu       $a3, $v0, $zero
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b8300: 0x3183c  dsll32      $v1, $v1, 0
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3b8304: 0x31c38  dsll        $v1, $v1, 16
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3b8308: 0x3183f  dsra32      $v1, $v1, 0
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3b830c: 0xeb3018  mult        $a2, $a3, $t3
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3b8310: 0x641825  or          $v1, $v1, $a0
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3b8314: 0x66102b  sltu        $v0, $v1, $a2
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3b8318: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x3B8318u;
    {
        const bool branch_taken_0x3b8318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b8318) {
            ctx->pc = 0x3B831Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B8318u;
            // 0x3b831c: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B834Cu;
            goto label_3b834c;
        }
    }
    // 0x3b8320: 0x681821  addu        $v1, $v1, $t0
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x3b8324: 0x68102b  sltu        $v0, $v1, $t0
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3b8328: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B8328u;
    {
        const bool branch_taken_0x3b8328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B832Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8328u;
        // 0x3b832c: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8328) {
            ctx->pc = 0x3B8348u;
            goto label_3b8348;
        }
    }
    // 0x3b8330: 0x66102b  sltu        $v0, $v1, $a2
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3b8334: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B8334u;
    {
        const bool branch_taken_0x3b8334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b8334) {
            ctx->pc = 0x3B8338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B8334u;
            // 0x3b8338: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B834Cu;
            goto label_3b834c;
        }
    }
    // 0x3b833c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3b8340: 0x681821  addu        $v1, $v1, $t0
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x3b8344: 0x0  nop
    // NOP
label_3b8348:
    // 0x3b8348: 0x661823  subu        $v1, $v1, $a2
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_3b834c:
    // 0x3b834c: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3B834Cu;
    {
        const bool branch_taken_0x3b834c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b834c) {
            ctx->pc = 0x3B8350u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B834Cu;
            // 0x3b8350: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B8354u;
            goto label_3b8354;
        }
    }
    ctx->pc = 0x3B8354u;
label_3b8354:
    // 0x3b8354: 0x65001b  divu        $zero, $v1, $a1
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x3b8358: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x3b835c: 0x1012  mflo        $v0
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3b8360: 0x1810  mfhi        $v1
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3b8364: 0x40282d  daddu       $a1, $v0, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b8368: 0x3183c  dsll32      $v1, $v1, 0
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3b836c: 0x31c38  dsll        $v1, $v1, 16
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3b8370: 0x3183f  dsra32      $v1, $v1, 0
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3b8374: 0xad3018  mult        $a2, $a1, $t5
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3b8378: 0x641825  or          $v1, $v1, $a0
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3b837c: 0x66102b  sltu        $v0, $v1, $a2
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3b8380: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3B8380u;
    {
        const bool branch_taken_0x3b8380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8380u;
        // 0x3b8384: 0x7103c  dsll32      $v0, $a3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8380) {
            ctx->pc = 0x3B83B0u;
            goto label_3b83b0;
        }
    }
    // 0x3b8388: 0x681821  addu        $v1, $v1, $t0
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x3b838c: 0x68102b  sltu        $v0, $v1, $t0
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3b8390: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B8390u;
    {
        const bool branch_taken_0x3b8390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B8394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8390u;
        // 0x3b8394: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8390) {
            ctx->pc = 0x3B83ACu;
            goto label_3b83ac;
        }
    }
    // 0x3b8398: 0x66102b  sltu        $v0, $v1, $a2
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3b839c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B839Cu;
    {
        const bool branch_taken_0x3b839c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B83A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B839Cu;
        // 0x3b83a0: 0x7103c  dsll32      $v0, $a3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b839c) {
            ctx->pc = 0x3B83B0u;
            goto label_3b83b0;
        }
    }
    // 0x3b83a4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3b83a8: 0x681821  addu        $v1, $v1, $t0
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_3b83ac:
    // 0x3b83ac: 0x7103c  dsll32      $v0, $a3, 0
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
label_3b83b0:
    // 0x3b83b0: 0x665023  subu        $t2, $v1, $a2
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x3b83b4: 0x21438  dsll        $v0, $v0, 16
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3b83b8: 0x2103f  dsra32      $v0, $v0, 0
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3b83bc: 0x456825  or          $t5, $v0, $a1
    ctx->pc = 0x3b83bcu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_3b83c0:
    // 0x3b83c0: 0x120282d  daddu       $a1, $t1, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b83c4: 0xc2402  srl         $a0, $t4, 16
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), 16));
    // 0x3b83c8: 0x145001b  divu        $zero, $t2, $a1
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
    // 0x3b83cc: 0x160482d  daddu       $t1, $t3, $zero
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b83d0: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3B83D0u;
    {
        const bool branch_taken_0x3b83d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b83d0) {
            ctx->pc = 0x3B83D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B83D0u;
            // 0x3b83d4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B83D8u;
            goto label_3b83d8;
        }
    }
label_3b83d8:
    // 0x3b83d8: 0x1012  mflo        $v0
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3b83dc: 0x1810  mfhi        $v1
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3b83e0: 0x40382d  daddu       $a3, $v0, $zero
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b83e4: 0x3183c  dsll32      $v1, $v1, 0
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3b83e8: 0x31c38  dsll        $v1, $v1, 16
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3b83ec: 0x3183f  dsra32      $v1, $v1, 0
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3b83f0: 0xe93018  mult        $a2, $a3, $t1
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3b83f4: 0x641825  or          $v1, $v1, $a0
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3b83f8: 0x66102b  sltu        $v0, $v1, $a2
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3b83fc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x3B83FCu;
    {
        const bool branch_taken_0x3b83fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b83fc) {
            ctx->pc = 0x3B8400u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B83FCu;
            // 0x3b8400: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B842Cu;
            goto label_3b842c;
        }
    }
    // 0x3b8404: 0x681821  addu        $v1, $v1, $t0
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x3b8408: 0x68102b  sltu        $v0, $v1, $t0
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3b840c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B840Cu;
    {
        const bool branch_taken_0x3b840c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B8410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B840Cu;
        // 0x3b8410: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b840c) {
            ctx->pc = 0x3B8428u;
            goto label_3b8428;
        }
    }
    // 0x3b8414: 0x66102b  sltu        $v0, $v1, $a2
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3b8418: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B8418u;
    {
        const bool branch_taken_0x3b8418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b8418) {
            ctx->pc = 0x3B841Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B8418u;
            // 0x3b841c: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B842Cu;
            goto label_3b842c;
        }
    }
    // 0x3b8420: 0x24e7ffff  addiu       $a3, $a3, -0x1
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3b8424: 0x681821  addu        $v1, $v1, $t0
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_3b8428:
    // 0x3b8428: 0x661823  subu        $v1, $v1, $a2
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_3b842c:
    // 0x3b842c: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3B842Cu;
    {
        const bool branch_taken_0x3b842c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b842c) {
            ctx->pc = 0x3B8430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B842Cu;
            // 0x3b8430: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B8434u;
            goto label_3b8434;
        }
    }
    ctx->pc = 0x3B8434u;
label_3b8434:
    // 0x3b8434: 0x65001b  divu        $zero, $v1, $a1
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x3b8438: 0x3184ffff  andi        $a0, $t4, 0xFFFF
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65535);
    // 0x3b843c: 0x1012  mflo        $v0
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3b8440: 0x1810  mfhi        $v1
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3b8444: 0x40282d  daddu       $a1, $v0, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b8448: 0x3183c  dsll32      $v1, $v1, 0
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3b844c: 0x31c38  dsll        $v1, $v1, 16
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3b8450: 0x3183f  dsra32      $v1, $v1, 0
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3b8454: 0xa93018  mult        $a2, $a1, $t1
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3b8458: 0x641825  or          $v1, $v1, $a0
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3b845c: 0x66102b  sltu        $v0, $v1, $a2
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3b8460: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B8460u;
    {
        const bool branch_taken_0x3b8460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8460u;
        // 0x3b8464: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8460) {
            ctx->pc = 0x3B8480u;
            goto label_3b8480;
        }
    }
    // 0x3b8468: 0x68102b  sltu        $v0, $v1, $t0
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3b846c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B846Cu;
    {
        const bool branch_taken_0x3b846c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B8470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B846Cu;
        // 0x3b8470: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b846c) {
            ctx->pc = 0x3B8480u;
            goto label_3b8480;
        }
    }
    // 0x3b8474: 0x66102b  sltu        $v0, $v1, $a2
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3b8478: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3B8478u;
    {
        const bool branch_taken_0x3b8478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b8478) {
            ctx->pc = 0x3B847Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B8478u;
            // 0x3b847c: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B8480u;
            goto label_3b8480;
        }
    }
label_3b8480:
    // 0x3b8480: 0x7103c  dsll32      $v0, $a3, 0
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x3b8484: 0x21438  dsll        $v0, $v0, 16
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3b8488: 0x2103f  dsra32      $v0, $v0, 0
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3b848c: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x3B848Cu;
    {
        const bool branch_taken_0x3b848c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B848Cu;
        // 0x3b8490: 0x452825  or          $a1, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b848c) {
            ctx->pc = 0x3B8660u;
            goto label_3b8660;
        }
    }
label_3b8494:
    // 0x3b8494: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B8494u;
    {
        const bool branch_taken_0x3b8494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8494u;
        // 0x3b8498: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8494) {
            ctx->pc = 0x3B84A4u;
            goto label_3b84a4;
        }
    }
    // 0x3b849c: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x3B849Cu;
    {
        const bool branch_taken_0x3b849c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B84A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B849Cu;
        // 0x3b84a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b849c) {
            ctx->pc = 0x3B8658u;
            goto label_3b8658;
        }
    }
label_3b84a4:
    // 0x3b84a4: 0x45102b  sltu        $v0, $v0, $a1
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x3b84a8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B84A8u;
    {
        const bool branch_taken_0x3b84a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B84ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B84A8u;
        // 0x3b84ac: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b84a8) {
            ctx->pc = 0x3B84C0u;
            goto label_3b84c0;
        }
    }
    // 0x3b84b0: 0x2ca20100  sltiu       $v0, $a1, 0x100
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x3b84b4: 0x24060008  addiu       $a2, $zero, 0x8
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3b84b8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3B84B8u;
    {
        const bool branch_taken_0x3b84b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B84BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B84B8u;
        // 0x3b84bc: 0x2300b  movn        $a2, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b84b8) {
            ctx->pc = 0x3B84D8u;
            goto label_3b84d8;
        }
    }
label_3b84c0:
    // 0x3b84c0: 0x24060018  addiu       $a2, $zero, 0x18
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x3b84c4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3b84c8: 0x24030010  addiu       $v1, $zero, 0x10
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3b84cc: 0x45102b  sltu        $v0, $v0, $a1
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x3b84d0: 0x62300a  movz        $a2, $v1, $v0
    ctx->pc = 0x3b84d0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x3b84d4: 0x0  nop
    // NOP
label_3b84d8:
    // 0x3b84d8: 0x3c020046  lui         $v0, 0x46
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3b84dc: 0xc52006  srlv        $a0, $a1, $a2
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x3b84e0: 0x24420418  addiu       $v0, $v0, 0x418
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1048));
    // 0x3b84e4: 0x24070020  addiu       $a3, $zero, 0x20
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3b84e8: 0x822021  addu        $a0, $a0, $v0
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3b84ec: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3b84ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3b84f0: 0x661821  addu        $v1, $v1, $a2
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x3b84f4: 0xe33023  subu        $a2, $a3, $v1
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x3b84f8: 0x54c00009  bnel        $a2, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3B84F8u;
    {
        const bool branch_taken_0x3b84f8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b84f8) {
            ctx->pc = 0x3B84FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B84F8u;
            // 0x3b84fc: 0xe63823  subu        $a3, $a3, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B8520u;
            goto label_3b8520;
        }
    }
    // 0x3b8500: 0xaa102b  sltu        $v0, $a1, $t2
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3b8504: 0x14400054  bnez        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x3B8504u;
    {
        const bool branch_taken_0x3b8504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B8508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8504u;
        // 0x3b8508: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8504) {
            ctx->pc = 0x3B8658u;
            goto label_3b8658;
        }
    }
    // 0x3b850c: 0x188102b  sltu        $v0, $t4, $t0
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3b8510: 0x14400051  bnez        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x3B8510u;
    {
        const bool branch_taken_0x3b8510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B8514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8510u;
        // 0x3b8514: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8510) {
            ctx->pc = 0x3B8658u;
            goto label_3b8658;
        }
    }
    // 0x3b8518: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x3B8518u;
    {
        const bool branch_taken_0x3b8518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B851Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8518u;
        // 0x3b851c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8518) {
            ctx->pc = 0x3B8658u;
            goto label_3b8658;
        }
    }
    ctx->pc = 0x3B8520u;
label_3b8520:
    // 0x3b8520: 0xc52804  sllv        $a1, $a1, $a2
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x3b8524: 0xec2006  srlv        $a0, $t4, $a3
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 7) & 0x1F));
    // 0x3b8528: 0xe81806  srlv        $v1, $t0, $a3
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 7) & 0x1F));
    // 0x3b852c: 0xea3806  srlv        $a3, $t2, $a3
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 7) & 0x1F));
    // 0x3b8530: 0xca1004  sllv        $v0, $t2, $a2
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 6) & 0x1F));
    // 0x3b8534: 0x445025  or          $t2, $v0, $a0
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3b8538: 0xa32825  or          $a1, $a1, $v1
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x3b853c: 0xcc6004  sllv        $t4, $t4, $a2
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 6) & 0x1F));
    // 0x3b8540: 0xc84004  sllv        $t0, $t0, $a2
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x3b8544: 0x53402  srl         $a2, $a1, 16
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x3b8548: 0xe6001b  divu        $zero, $a3, $a2
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x3b854c: 0x30abffff  andi        $t3, $a1, 0xFFFF
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x3b8550: 0xa2402  srl         $a0, $t2, 16
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x3b8554: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3B8554u;
    {
        const bool branch_taken_0x3b8554 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b8554) {
            ctx->pc = 0x3B8558u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B8554u;
            // 0x3b8558: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B855Cu;
            goto label_3b855c;
        }
    }
label_3b855c:
    // 0x3b855c: 0x1012  mflo        $v0
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3b8560: 0x1810  mfhi        $v1
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3b8564: 0x40482d  daddu       $t1, $v0, $zero
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b8568: 0x3183c  dsll32      $v1, $v1, 0
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3b856c: 0x31c38  dsll        $v1, $v1, 16
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3b8570: 0x3183f  dsra32      $v1, $v1, 0
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3b8574: 0x12b3818  mult        $a3, $t1, $t3
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x3b8578: 0x641825  or          $v1, $v1, $a0
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3b857c: 0x67102b  sltu        $v0, $v1, $a3
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3b8580: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x3B8580u;
    {
        const bool branch_taken_0x3b8580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b8580) {
            ctx->pc = 0x3B8584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B8580u;
            // 0x3b8584: 0x671823  subu        $v1, $v1, $a3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B85B4u;
            goto label_3b85b4;
        }
    }
    // 0x3b8588: 0x651821  addu        $v1, $v1, $a1
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3b858c: 0x65102b  sltu        $v0, $v1, $a1
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x3b8590: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B8590u;
    {
        const bool branch_taken_0x3b8590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B8594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8590u;
        // 0x3b8594: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8590) {
            ctx->pc = 0x3B85B0u;
            goto label_3b85b0;
        }
    }
    // 0x3b8598: 0x67102b  sltu        $v0, $v1, $a3
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3b859c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B859Cu;
    {
        const bool branch_taken_0x3b859c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b859c) {
            ctx->pc = 0x3B85A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B859Cu;
            // 0x3b85a0: 0x671823  subu        $v1, $v1, $a3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B85B4u;
            goto label_3b85b4;
        }
    }
    // 0x3b85a4: 0x2529ffff  addiu       $t1, $t1, -0x1
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x3b85a8: 0x651821  addu        $v1, $v1, $a1
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3b85ac: 0x0  nop
    // NOP
label_3b85b0:
    // 0x3b85b0: 0x671823  subu        $v1, $v1, $a3
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_3b85b4:
    // 0x3b85b4: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3B85B4u;
    {
        const bool branch_taken_0x3b85b4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b85b4) {
            ctx->pc = 0x3B85B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B85B4u;
            // 0x3b85b8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B85BCu;
            goto label_3b85bc;
        }
    }
    ctx->pc = 0x3B85BCu;
label_3b85bc:
    // 0x3b85bc: 0x66001b  divu        $zero, $v1, $a2
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x3b85c0: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x3b85c4: 0x1012  mflo        $v0
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3b85c8: 0x1810  mfhi        $v1
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3b85cc: 0x40302d  daddu       $a2, $v0, $zero
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b85d0: 0x3183c  dsll32      $v1, $v1, 0
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3b85d4: 0x31c38  dsll        $v1, $v1, 16
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3b85d8: 0x3183f  dsra32      $v1, $v1, 0
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3b85dc: 0xcb3818  mult        $a3, $a2, $t3
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x3b85e0: 0x641825  or          $v1, $v1, $a0
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3b85e4: 0x67102b  sltu        $v0, $v1, $a3
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3b85e8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3B85E8u;
    {
        const bool branch_taken_0x3b85e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B85ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B85E8u;
        // 0x3b85ec: 0x9103c  dsll32      $v0, $t1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b85e8) {
            ctx->pc = 0x3B8618u;
            goto label_3b8618;
        }
    }
    // 0x3b85f0: 0x651821  addu        $v1, $v1, $a1
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3b85f4: 0x65102b  sltu        $v0, $v1, $a1
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x3b85f8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B85F8u;
    {
        const bool branch_taken_0x3b85f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B85FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B85F8u;
        // 0x3b85fc: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b85f8) {
            ctx->pc = 0x3B8614u;
            goto label_3b8614;
        }
    }
    // 0x3b8600: 0x67102b  sltu        $v0, $v1, $a3
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3b8604: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B8604u;
    {
        const bool branch_taken_0x3b8604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8604u;
        // 0x3b8608: 0x9103c  dsll32      $v0, $t1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8604) {
            ctx->pc = 0x3B8618u;
            goto label_3b8618;
        }
    }
    // 0x3b860c: 0x651821  addu        $v1, $v1, $a1
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3b8610: 0x24c6ffff  addiu       $a2, $a2, -0x1
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_3b8614:
    // 0x3b8614: 0x9103c  dsll32      $v0, $t1, 0
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) << (32 + 0));
label_3b8618:
    // 0x3b8618: 0x671823  subu        $v1, $v1, $a3
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x3b861c: 0x21438  dsll        $v0, $v0, 16
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3b8620: 0x2103f  dsra32      $v0, $v0, 0
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3b8624: 0x462825  or          $a1, $v0, $a2
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x3b8628: 0xa80019  multu       $a1, $t0
    { uint64_t result = (uint64_t)GPR_U32(ctx, 5) * (uint64_t)GPR_U32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3b862c: 0x3010  mfhi        $a2
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x3b8630: 0x2012  mflo        $a0
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x3b8634: 0x66102b  sltu        $v0, $v1, $a2
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3b8638: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B8638u;
    {
        const bool branch_taken_0x3b8638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b8638) {
            ctx->pc = 0x3B863Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B8638u;
            // 0x3b863c: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B8658u;
            goto label_3b8658;
        }
    }
    // 0x3b8640: 0x14c30007  bne         $a2, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B8640u;
    {
        const bool branch_taken_0x3b8640 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x3B8644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8640u;
        // 0x3b8644: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8640) {
            ctx->pc = 0x3B8660u;
            goto label_3b8660;
        }
    }
    // 0x3b8648: 0x184102b  sltu        $v0, $t4, $a0
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3b864c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B864Cu;
    {
        const bool branch_taken_0x3b864c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B864Cu;
        // 0x3b8650: 0x5103c  dsll32      $v0, $a1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b864c) {
            ctx->pc = 0x3B8664u;
            goto label_3b8664;
        }
    }
    // 0x3b8654: 0x24a5ffff  addiu       $a1, $a1, -0x1
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_3b8658:
    // 0x3b8658: 0x682d  daddu       $t5, $zero, $zero
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b865c: 0x0  nop
    // NOP
label_3b8660:
    // 0x3b8660: 0x5103c  dsll32      $v0, $a1, 0
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
label_3b8664:
    // 0x3b8664: 0xd183c  dsll32      $v1, $t5, 0
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) << (32 + 0));
    // 0x3b8668: 0x2c03e  dsrl32      $t8, $v0, 0
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3b866c: 0x3c05ffff  lui         $a1, 0xFFFF
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x3b8670: 0x5283e  dsrl32      $a1, $a1, 0
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x3b8674: 0x11e00013  beqz        $t7, . + 4 + (0x13 << 2)
    ctx->pc = 0x3B8674u;
    {
        const bool branch_taken_0x3b8674 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8674u;
        // 0x3b8678: 0x3032025  or          $a0, $t8, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 24) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8674) {
            ctx->pc = 0x3B86C4u;
            goto label_3b86c4;
        }
    }
    // 0x3b867c: 0x4103c  dsll32      $v0, $a0, 0
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3b8680: 0x2103f  dsra32      $v0, $v0, 0
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3b8684: 0x2403ffff  addiu       $v1, $zero, -0x1
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3b8688: 0x3183c  dsll32      $v1, $v1, 0
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3b868c: 0x21023  negu        $v0, $v0
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x3b8690: 0x1c37024  and         $t6, $t6, $v1
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 3));
    // 0x3b8694: 0x2103c  dsll32      $v0, $v0, 0
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3b8698: 0x4203f  dsra32      $a0, $a0, 0
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x3b869c: 0x2103e  dsrl32      $v0, $v0, 0
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3b86a0: 0x42023  negu        $a0, $a0
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x3b86a4: 0x1c27025  or          $t6, $t6, $v0
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 2));
    // 0x3b86a8: 0xe183c  dsll32      $v1, $t6, 0
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 14) << (32 + 0));
    // 0x3b86ac: 0x3183f  dsra32      $v1, $v1, 0
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3b86b0: 0x3182b  sltu        $v1, $zero, $v1
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3b86b4: 0x1c57024  and         $t6, $t6, $a1
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 5));
    // 0x3b86b8: 0x832023  subu        $a0, $a0, $v1
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3b86bc: 0x4203c  dsll32      $a0, $a0, 0
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3b86c0: 0x1c42025  or          $a0, $t6, $a0
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 14) | GPR_U64(ctx, 4));
label_3b86c4:
    // 0x3b86c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3B86C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B86C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B86C4u;
        // 0x3b86c8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B86C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x3b86cc: 0x0  nop
    // NOP
    ctx->pc = 0x3b86d0u;
}