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

// Function: __udivdi3
// Address: 0x3b8e88 - 0x3b9458
void ps2___udivdi3_0x3b8e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___udivdi3_0x3b8e88");
#endif

    ctx->pc = 0x3b8e88u;

    // 0x3b8e88: 0x5403f  dsra32      $t0, $a1, 0
    ctx->pc = 0x3b8e88u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x3b8e8c: 0x4583f  dsra32      $t3, $a0, 0
    ctx->pc = 0x3b8e8cu;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x3b8e90: 0x5483c  dsll32      $t1, $a1, 0
    ctx->pc = 0x3b8e90u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) << (32 + 0));
    // 0x3b8e94: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x3b8e94u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x3b8e98: 0x4603c  dsll32      $t4, $a0, 0
    ctx->pc = 0x3b8e98u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3b8e9c: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x3b8e9cu;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
    // 0x3b8ea0: 0x150000f2  bnez        $t0, . + 4 + (0xF2 << 2)
    ctx->pc = 0x3B8EA0u;
    {
        const bool branch_taken_0x3b8ea0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B8EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8EA0u;
        // 0x3b8ea4: 0x27bdfff0  addiu       $sp, $sp, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8ea0) {
            ctx->pc = 0x3B926Cu;
            goto label_3b926c;
        }
    }
    ctx->pc = 0x3B8EA8u;
    // 0x3b8ea8: 0x169102b  sltu        $v0, $t3, $t1
    ctx->pc = 0x3b8ea8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3b8eac: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x3B8EACu;
    {
        const bool branch_taken_0x3b8eac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8EACu;
        // 0x3b8eb0: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8eac) {
            ctx->pc = 0x3B8FFCu;
            goto label_3b8ffc;
        }
    }
    ctx->pc = 0x3B8EB4u;
    // 0x3b8eb4: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x3b8eb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3b8eb8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B8EB8u;
    {
        const bool branch_taken_0x3b8eb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B8EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8EB8u;
        // 0x3b8ebc: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8eb8) {
            ctx->pc = 0x3B8ED0u;
            goto label_3b8ed0;
        }
    }
    ctx->pc = 0x3B8EC0u;
    // 0x3b8ec0: 0x2d220100  sltiu       $v0, $t1, 0x100
    ctx->pc = 0x3b8ec0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x3b8ec4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x3b8ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3b8ec8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3B8EC8u;
    {
        const bool branch_taken_0x3b8ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8EC8u;
        // 0x3b8ecc: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8ec8) {
            ctx->pc = 0x3B8EE8u;
            goto label_3b8ee8;
        }
    }
    ctx->pc = 0x3B8ED0u;
label_3b8ed0:
    // 0x3b8ed0: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x3b8ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x3b8ed4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3b8ed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3b8ed8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3b8ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3b8edc: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x3b8edcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3b8ee0: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x3b8ee0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x3b8ee4: 0x0  nop
    ctx->pc = 0x3b8ee4u;
    // NOP
label_3b8ee8:
    // 0x3b8ee8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3b8ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3b8eec: 0xa92006  srlv        $a0, $t1, $a1
    ctx->pc = 0x3b8eecu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 5) & 0x1F));
    // 0x3b8ef0: 0x24420618  addiu       $v0, $v0, 0x618
    ctx->pc = 0x3b8ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1560));
    // 0x3b8ef4: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x3b8ef4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3b8ef8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3b8ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3b8efc: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3b8efcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3b8f00: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3b8f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3b8f04: 0xe33023  subu        $a2, $a3, $v1
    ctx->pc = 0x3b8f04u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x3b8f08: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B8F08u;
    {
        const bool branch_taken_0x3b8f08 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8F08u;
        // 0x3b8f0c: 0xe61023  subu        $v0, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8f08) {
            ctx->pc = 0x3B8F24u;
            goto label_3b8f24;
        }
    }
    ctx->pc = 0x3B8F10u;
    // 0x3b8f10: 0xcb1804  sllv        $v1, $t3, $a2
    ctx->pc = 0x3b8f10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 6) & 0x1F));
    // 0x3b8f14: 0x4c1006  srlv        $v0, $t4, $v0
    ctx->pc = 0x3b8f14u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 2) & 0x1F));
    // 0x3b8f18: 0xc94804  sllv        $t1, $t1, $a2
    ctx->pc = 0x3b8f18u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
    // 0x3b8f1c: 0x625825  or          $t3, $v1, $v0
    ctx->pc = 0x3b8f1cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3b8f20: 0xcc6004  sllv        $t4, $t4, $a2
    ctx->pc = 0x3b8f20u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 6) & 0x1F));
label_3b8f24:
    // 0x3b8f24: 0x92c02  srl         $a1, $t1, 16
    ctx->pc = 0x3b8f24u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x3b8f28: 0x3128ffff  andi        $t0, $t1, 0xFFFF
    ctx->pc = 0x3b8f28u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x3b8f2c: 0x165001b  divu        $zero, $t3, $a1
    ctx->pc = 0x3b8f2cu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 11) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 11) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,11); } }
    // 0x3b8f30: 0xc2402  srl         $a0, $t4, 16
    ctx->pc = 0x3b8f30u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), 16));
    // 0x3b8f34: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3B8F34u;
    {
        const bool branch_taken_0x3b8f34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b8f34) {
            ctx->pc = 0x3B8F38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B8F34u;
            // 0x3b8f38: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B8F3Cu;
            goto label_3b8f3c;
        }
    }
    ctx->pc = 0x3B8F3Cu;
label_3b8f3c:
    // 0x3b8f3c: 0x1012  mflo        $v0
    ctx->pc = 0x3b8f3cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3b8f40: 0x1810  mfhi        $v1
    ctx->pc = 0x3b8f40u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3b8f44: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3b8f44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b8f48: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3b8f48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3b8f4c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3b8f4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3b8f50: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3b8f50u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3b8f54: 0xe83018  mult        $a2, $a3, $t0
    ctx->pc = 0x3b8f54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3b8f58: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3b8f58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3b8f5c: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x3b8f5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3b8f60: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x3B8F60u;
    {
        const bool branch_taken_0x3b8f60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b8f60) {
            ctx->pc = 0x3B8F64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B8F60u;
            // 0x3b8f64: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B8F94u;
            goto label_3b8f94;
        }
    }
    ctx->pc = 0x3B8F68u;
    // 0x3b8f68: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x3b8f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x3b8f6c: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x3b8f6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3b8f70: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B8F70u;
    {
        const bool branch_taken_0x3b8f70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B8F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8F70u;
        // 0x3b8f74: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8f70) {
            ctx->pc = 0x3B8F90u;
            goto label_3b8f90;
        }
    }
    ctx->pc = 0x3B8F78u;
    // 0x3b8f78: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x3b8f78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3b8f7c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B8F7Cu;
    {
        const bool branch_taken_0x3b8f7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b8f7c) {
            ctx->pc = 0x3B8F80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B8F7Cu;
            // 0x3b8f80: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B8F94u;
            goto label_3b8f94;
        }
    }
    ctx->pc = 0x3B8F84u;
    // 0x3b8f84: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3b8f84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3b8f88: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x3b8f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x3b8f8c: 0x0  nop
    ctx->pc = 0x3b8f8cu;
    // NOP
label_3b8f90:
    // 0x3b8f90: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x3b8f90u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_3b8f94:
    // 0x3b8f94: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3B8F94u;
    {
        const bool branch_taken_0x3b8f94 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b8f94) {
            ctx->pc = 0x3B8F98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B8F94u;
            // 0x3b8f98: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B8F9Cu;
            goto label_3b8f9c;
        }
    }
    ctx->pc = 0x3B8F9Cu;
label_3b8f9c:
    // 0x3b8f9c: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x3b8f9cu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x3b8fa0: 0x3184ffff  andi        $a0, $t4, 0xFFFF
    ctx->pc = 0x3b8fa0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65535);
    // 0x3b8fa4: 0x1012  mflo        $v0
    ctx->pc = 0x3b8fa4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3b8fa8: 0x1810  mfhi        $v1
    ctx->pc = 0x3b8fa8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3b8fac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3b8facu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b8fb0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3b8fb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3b8fb4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3b8fb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3b8fb8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3b8fb8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3b8fbc: 0xa83018  mult        $a2, $a1, $t0
    ctx->pc = 0x3b8fbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3b8fc0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3b8fc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3b8fc4: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x3b8fc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3b8fc8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B8FC8u;
    {
        const bool branch_taken_0x3b8fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8FC8u;
        // 0x3b8fcc: 0x691821  addu        $v1, $v1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8fc8) {
            ctx->pc = 0x3B8FE8u;
            goto label_3b8fe8;
        }
    }
    ctx->pc = 0x3B8FD0u;
    // 0x3b8fd0: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x3b8fd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3b8fd4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B8FD4u;
    {
        const bool branch_taken_0x3b8fd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B8FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8FD4u;
        // 0x3b8fd8: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8fd4) {
            ctx->pc = 0x3B8FE8u;
            goto label_3b8fe8;
        }
    }
    ctx->pc = 0x3B8FDCu;
    // 0x3b8fdc: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x3b8fdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3b8fe0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3B8FE0u;
    {
        const bool branch_taken_0x3b8fe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b8fe0) {
            ctx->pc = 0x3B8FE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B8FE0u;
            // 0x3b8fe4: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B8FE8u;
            goto label_3b8fe8;
        }
    }
    ctx->pc = 0x3B8FE8u;
label_3b8fe8:
    // 0x3b8fe8: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x3b8fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x3b8fec: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3b8fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3b8ff0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3b8ff0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3b8ff4: 0x10000110  b           . + 4 + (0x110 << 2)
    ctx->pc = 0x3B8FF4u;
    {
        const bool branch_taken_0x3b8ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8FF4u;
        // 0x3b8ff8: 0x452825  or          $a1, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8ff4) {
            ctx->pc = 0x3B9438u;
            goto label_3b9438;
        }
    }
    ctx->pc = 0x3B8FFCu;
label_3b8ffc:
    // 0x3b8ffc: 0x1520000a  bnez        $t1, . + 4 + (0xA << 2)
    ctx->pc = 0x3B8FFCu;
    {
        const bool branch_taken_0x3b8ffc = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B9000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8FFCu;
        // 0x3b9000: 0x49102b  sltu        $v0, $v0, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8ffc) {
            ctx->pc = 0x3B9028u;
            goto label_3b9028;
        }
    }
    ctx->pc = 0x3B9004u;
    // 0x3b9004: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b9004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b9008: 0x51200001  beql        $t1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3B9008u;
    {
        const bool branch_taken_0x3b9008 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b9008) {
            ctx->pc = 0x3B900Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B9008u;
            // 0x3b900c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B9010u;
            goto label_3b9010;
        }
    }
    ctx->pc = 0x3B9010u;
label_3b9010:
    // 0x3b9010: 0x48001b  divu        $zero, $v0, $t0
    ctx->pc = 0x3b9010u;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x3b9014: 0x1012  mflo        $v0
    ctx->pc = 0x3b9014u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3b9018: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x3b9018u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b901c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3b901cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3b9020: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x3b9020u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3b9024: 0x0  nop
    ctx->pc = 0x3b9024u;
    // NOP
label_3b9028:
    // 0x3b9028: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B9028u;
    {
        const bool branch_taken_0x3b9028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B902Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9028u;
        // 0x3b902c: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9028) {
            ctx->pc = 0x3B9040u;
            goto label_3b9040;
        }
    }
    ctx->pc = 0x3B9030u;
    // 0x3b9030: 0x2d220100  sltiu       $v0, $t1, 0x100
    ctx->pc = 0x3b9030u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x3b9034: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x3b9034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3b9038: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3B9038u;
    {
        const bool branch_taken_0x3b9038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B903Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9038u;
        // 0x3b903c: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9038) {
            ctx->pc = 0x3B9058u;
            goto label_3b9058;
        }
    }
    ctx->pc = 0x3B9040u;
label_3b9040:
    // 0x3b9040: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x3b9040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x3b9044: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3b9044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3b9048: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3b9048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3b904c: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x3b904cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3b9050: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x3b9050u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x3b9054: 0x0  nop
    ctx->pc = 0x3b9054u;
    // NOP
label_3b9058:
    // 0x3b9058: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3b9058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3b905c: 0xa92006  srlv        $a0, $t1, $a1
    ctx->pc = 0x3b905cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 5) & 0x1F));
    // 0x3b9060: 0x24420618  addiu       $v0, $v0, 0x618
    ctx->pc = 0x3b9060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1560));
    // 0x3b9064: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x3b9064u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3b9068: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3b9068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3b906c: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3b906cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3b9070: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3b9070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3b9074: 0xe33023  subu        $a2, $a3, $v1
    ctx->pc = 0x3b9074u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x3b9078: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B9078u;
    {
        const bool branch_taken_0x3b9078 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B907Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9078u;
        // 0x3b907c: 0xe63823  subu        $a3, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9078) {
            ctx->pc = 0x3B9094u;
            goto label_3b9094;
        }
    }
    ctx->pc = 0x3B9080u;
    // 0x3b9080: 0x1695823  subu        $t3, $t3, $t1
    ctx->pc = 0x3b9080u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
    // 0x3b9084: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x3b9084u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b9088: 0x94402  srl         $t0, $t1, 16
    ctx->pc = 0x3b9088u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x3b908c: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x3B908Cu;
    {
        const bool branch_taken_0x3b908c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B908Cu;
        // 0x3b9090: 0x312affff  andi        $t2, $t1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b908c) {
            ctx->pc = 0x3B9198u;
            goto label_3b9198;
        }
    }
    ctx->pc = 0x3B9094u;
label_3b9094:
    // 0x3b9094: 0xcb1804  sllv        $v1, $t3, $a2
    ctx->pc = 0x3b9094u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 6) & 0x1F));
    // 0x3b9098: 0xec1006  srlv        $v0, $t4, $a3
    ctx->pc = 0x3b9098u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 7) & 0x1F));
    // 0x3b909c: 0xc94804  sllv        $t1, $t1, $a2
    ctx->pc = 0x3b909cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
    // 0x3b90a0: 0xeb3806  srlv        $a3, $t3, $a3
    ctx->pc = 0x3b90a0u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 11), GPR_U32(ctx, 7) & 0x1F));
    // 0x3b90a4: 0xcc6004  sllv        $t4, $t4, $a2
    ctx->pc = 0x3b90a4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 6) & 0x1F));
    // 0x3b90a8: 0x625825  or          $t3, $v1, $v0
    ctx->pc = 0x3b90a8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3b90ac: 0x94402  srl         $t0, $t1, 16
    ctx->pc = 0x3b90acu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x3b90b0: 0xe8001b  divu        $zero, $a3, $t0
    ctx->pc = 0x3b90b0u;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x3b90b4: 0x312affff  andi        $t2, $t1, 0xFFFF
    ctx->pc = 0x3b90b4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x3b90b8: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x3b90b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b90bc: 0xb2402  srl         $a0, $t3, 16
    ctx->pc = 0x3b90bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
    // 0x3b90c0: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3B90C0u;
    {
        const bool branch_taken_0x3b90c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b90c0) {
            ctx->pc = 0x3B90C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B90C0u;
            // 0x3b90c4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B90C8u;
            goto label_3b90c8;
        }
    }
    ctx->pc = 0x3B90C8u;
label_3b90c8:
    // 0x3b90c8: 0x140682d  daddu       $t5, $t2, $zero
    ctx->pc = 0x3b90c8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b90cc: 0x1012  mflo        $v0
    ctx->pc = 0x3b90ccu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3b90d0: 0x1810  mfhi        $v1
    ctx->pc = 0x3b90d0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3b90d4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3b90d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b90d8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3b90d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3b90dc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3b90dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3b90e0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3b90e0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3b90e4: 0xea3018  mult        $a2, $a3, $t2
    ctx->pc = 0x3b90e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3b90e8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3b90e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3b90ec: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x3b90ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3b90f0: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x3B90F0u;
    {
        const bool branch_taken_0x3b90f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b90f0) {
            ctx->pc = 0x3B90F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B90F0u;
            // 0x3b90f4: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B9124u;
            goto label_3b9124;
        }
    }
    ctx->pc = 0x3B90F8u;
    // 0x3b90f8: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x3b90f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x3b90fc: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x3b90fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3b9100: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B9100u;
    {
        const bool branch_taken_0x3b9100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B9104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9100u;
        // 0x3b9104: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9100) {
            ctx->pc = 0x3B9120u;
            goto label_3b9120;
        }
    }
    ctx->pc = 0x3B9108u;
    // 0x3b9108: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x3b9108u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3b910c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B910Cu;
    {
        const bool branch_taken_0x3b910c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b910c) {
            ctx->pc = 0x3B9110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B910Cu;
            // 0x3b9110: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B9124u;
            goto label_3b9124;
        }
    }
    ctx->pc = 0x3B9114u;
    // 0x3b9114: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3b9114u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3b9118: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x3b9118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x3b911c: 0x0  nop
    ctx->pc = 0x3b911cu;
    // NOP
label_3b9120:
    // 0x3b9120: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x3b9120u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_3b9124:
    // 0x3b9124: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3B9124u;
    {
        const bool branch_taken_0x3b9124 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b9124) {
            ctx->pc = 0x3B9128u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B9124u;
            // 0x3b9128: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B912Cu;
            goto label_3b912c;
        }
    }
    ctx->pc = 0x3B912Cu;
label_3b912c:
    // 0x3b912c: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x3b912cu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x3b9130: 0x3164ffff  andi        $a0, $t3, 0xFFFF
    ctx->pc = 0x3b9130u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
    // 0x3b9134: 0x1012  mflo        $v0
    ctx->pc = 0x3b9134u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3b9138: 0x1810  mfhi        $v1
    ctx->pc = 0x3b9138u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3b913c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3b913cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9140: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3b9140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3b9144: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3b9144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3b9148: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3b9148u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3b914c: 0xad3018  mult        $a2, $a1, $t5
    ctx->pc = 0x3b914cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3b9150: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3b9150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3b9154: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x3b9154u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3b9158: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3B9158u;
    {
        const bool branch_taken_0x3b9158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B915Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9158u;
        // 0x3b915c: 0x7103c  dsll32      $v0, $a3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9158) {
            ctx->pc = 0x3B9188u;
            goto label_3b9188;
        }
    }
    ctx->pc = 0x3B9160u;
    // 0x3b9160: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x3b9160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x3b9164: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x3b9164u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3b9168: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B9168u;
    {
        const bool branch_taken_0x3b9168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B916Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9168u;
        // 0x3b916c: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9168) {
            ctx->pc = 0x3B9184u;
            goto label_3b9184;
        }
    }
    ctx->pc = 0x3B9170u;
    // 0x3b9170: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x3b9170u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3b9174: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B9174u;
    {
        const bool branch_taken_0x3b9174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9174u;
        // 0x3b9178: 0x7103c  dsll32      $v0, $a3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9174) {
            ctx->pc = 0x3B9188u;
            goto label_3b9188;
        }
    }
    ctx->pc = 0x3B917Cu;
    // 0x3b917c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3b917cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3b9180: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x3b9180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_3b9184:
    // 0x3b9184: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x3b9184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
label_3b9188:
    // 0x3b9188: 0x665823  subu        $t3, $v1, $a2
    ctx->pc = 0x3b9188u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x3b918c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3b918cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3b9190: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3b9190u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3b9194: 0x456825  or          $t5, $v0, $a1
    ctx->pc = 0x3b9194u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_3b9198:
    // 0x3b9198: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x3b9198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b919c: 0xc2402  srl         $a0, $t4, 16
    ctx->pc = 0x3b919cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), 16));
    // 0x3b91a0: 0x165001b  divu        $zero, $t3, $a1
    ctx->pc = 0x3b91a0u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 11) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 11) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,11); } }
    // 0x3b91a4: 0x140402d  daddu       $t0, $t2, $zero
    ctx->pc = 0x3b91a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b91a8: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3B91A8u;
    {
        const bool branch_taken_0x3b91a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b91a8) {
            ctx->pc = 0x3B91ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B91A8u;
            // 0x3b91ac: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B91B0u;
            goto label_3b91b0;
        }
    }
    ctx->pc = 0x3B91B0u;
label_3b91b0:
    // 0x3b91b0: 0x1012  mflo        $v0
    ctx->pc = 0x3b91b0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3b91b4: 0x1810  mfhi        $v1
    ctx->pc = 0x3b91b4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3b91b8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3b91b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b91bc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3b91bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3b91c0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3b91c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3b91c4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3b91c4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3b91c8: 0xe83018  mult        $a2, $a3, $t0
    ctx->pc = 0x3b91c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3b91cc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3b91ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3b91d0: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x3b91d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3b91d4: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x3B91D4u;
    {
        const bool branch_taken_0x3b91d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b91d4) {
            ctx->pc = 0x3B91D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B91D4u;
            // 0x3b91d8: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B9204u;
            goto label_3b9204;
        }
    }
    ctx->pc = 0x3B91DCu;
    // 0x3b91dc: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x3b91dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x3b91e0: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x3b91e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3b91e4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B91E4u;
    {
        const bool branch_taken_0x3b91e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B91E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B91E4u;
        // 0x3b91e8: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b91e4) {
            ctx->pc = 0x3B9200u;
            goto label_3b9200;
        }
    }
    ctx->pc = 0x3B91ECu;
    // 0x3b91ec: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x3b91ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3b91f0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B91F0u;
    {
        const bool branch_taken_0x3b91f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b91f0) {
            ctx->pc = 0x3B91F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B91F0u;
            // 0x3b91f4: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B9204u;
            goto label_3b9204;
        }
    }
    ctx->pc = 0x3B91F8u;
    // 0x3b91f8: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3b91f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3b91fc: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x3b91fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_3b9200:
    // 0x3b9200: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x3b9200u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_3b9204:
    // 0x3b9204: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3B9204u;
    {
        const bool branch_taken_0x3b9204 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b9204) {
            ctx->pc = 0x3B9208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B9204u;
            // 0x3b9208: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B920Cu;
            goto label_3b920c;
        }
    }
    ctx->pc = 0x3B920Cu;
label_3b920c:
    // 0x3b920c: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x3b920cu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x3b9210: 0x3184ffff  andi        $a0, $t4, 0xFFFF
    ctx->pc = 0x3b9210u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65535);
    // 0x3b9214: 0x1012  mflo        $v0
    ctx->pc = 0x3b9214u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3b9218: 0x1810  mfhi        $v1
    ctx->pc = 0x3b9218u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3b921c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3b921cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9220: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3b9220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3b9224: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3b9224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3b9228: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3b9228u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3b922c: 0xa83018  mult        $a2, $a1, $t0
    ctx->pc = 0x3b922cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3b9230: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3b9230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3b9234: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x3b9234u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3b9238: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B9238u;
    {
        const bool branch_taken_0x3b9238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B923Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9238u;
        // 0x3b923c: 0x691821  addu        $v1, $v1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9238) {
            ctx->pc = 0x3B9258u;
            goto label_3b9258;
        }
    }
    ctx->pc = 0x3B9240u;
    // 0x3b9240: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x3b9240u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3b9244: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B9244u;
    {
        const bool branch_taken_0x3b9244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B9248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9244u;
        // 0x3b9248: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9244) {
            ctx->pc = 0x3B9258u;
            goto label_3b9258;
        }
    }
    ctx->pc = 0x3B924Cu;
    // 0x3b924c: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x3b924cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3b9250: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3B9250u;
    {
        const bool branch_taken_0x3b9250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b9250) {
            ctx->pc = 0x3B9254u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B9250u;
            // 0x3b9254: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B9258u;
            goto label_3b9258;
        }
    }
    ctx->pc = 0x3B9258u;
label_3b9258:
    // 0x3b9258: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x3b9258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x3b925c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3b925cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3b9260: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3b9260u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3b9264: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x3B9264u;
    {
        const bool branch_taken_0x3b9264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9264u;
        // 0x3b9268: 0x452825  or          $a1, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9264) {
            ctx->pc = 0x3B9440u;
            goto label_3b9440;
        }
    }
    ctx->pc = 0x3B926Cu;
label_3b926c:
    // 0x3b926c: 0x168102b  sltu        $v0, $t3, $t0
    ctx->pc = 0x3b926cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3b9270: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B9270u;
    {
        const bool branch_taken_0x3b9270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9270u;
        // 0x3b9274: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9270) {
            ctx->pc = 0x3B9280u;
            goto label_3b9280;
        }
    }
    ctx->pc = 0x3B9278u;
    // 0x3b9278: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x3B9278u;
    {
        const bool branch_taken_0x3b9278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B927Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9278u;
        // 0x3b927c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9278) {
            ctx->pc = 0x3B9438u;
            goto label_3b9438;
        }
    }
    ctx->pc = 0x3B9280u;
label_3b9280:
    // 0x3b9280: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x3b9280u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3b9284: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B9284u;
    {
        const bool branch_taken_0x3b9284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B9288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9284u;
        // 0x3b9288: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9284) {
            ctx->pc = 0x3B92A0u;
            goto label_3b92a0;
        }
    }
    ctx->pc = 0x3B928Cu;
    // 0x3b928c: 0x2d020100  sltiu       $v0, $t0, 0x100
    ctx->pc = 0x3b928cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x3b9290: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x3b9290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3b9294: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3B9294u;
    {
        const bool branch_taken_0x3b9294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9294u;
        // 0x3b9298: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9294) {
            ctx->pc = 0x3B92B8u;
            goto label_3b92b8;
        }
    }
    ctx->pc = 0x3B929Cu;
    // 0x3b929c: 0x0  nop
    ctx->pc = 0x3b929cu;
    // NOP
label_3b92a0:
    // 0x3b92a0: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x3b92a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x3b92a4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3b92a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3b92a8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3b92a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3b92ac: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x3b92acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3b92b0: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x3b92b0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x3b92b4: 0x0  nop
    ctx->pc = 0x3b92b4u;
    // NOP
label_3b92b8:
    // 0x3b92b8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3b92b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3b92bc: 0xa82006  srlv        $a0, $t0, $a1
    ctx->pc = 0x3b92bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x3b92c0: 0x24420618  addiu       $v0, $v0, 0x618
    ctx->pc = 0x3b92c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1560));
    // 0x3b92c4: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x3b92c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3b92c8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3b92c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3b92cc: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3b92ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3b92d0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3b92d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3b92d4: 0xe33023  subu        $a2, $a3, $v1
    ctx->pc = 0x3b92d4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x3b92d8: 0x54c00009  bnel        $a2, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3B92D8u;
    {
        const bool branch_taken_0x3b92d8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b92d8) {
            ctx->pc = 0x3B92DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B92D8u;
            // 0x3b92dc: 0xe63823  subu        $a3, $a3, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B9300u;
            goto label_3b9300;
        }
    }
    ctx->pc = 0x3B92E0u;
    // 0x3b92e0: 0x10b102b  sltu        $v0, $t0, $t3
    ctx->pc = 0x3b92e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x3b92e4: 0x14400054  bnez        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x3B92E4u;
    {
        const bool branch_taken_0x3b92e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B92E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B92E4u;
        // 0x3b92e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b92e4) {
            ctx->pc = 0x3B9438u;
            goto label_3b9438;
        }
    }
    ctx->pc = 0x3B92ECu;
    // 0x3b92ec: 0x189102b  sltu        $v0, $t4, $t1
    ctx->pc = 0x3b92ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3b92f0: 0x14400051  bnez        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x3B92F0u;
    {
        const bool branch_taken_0x3b92f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B92F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B92F0u;
        // 0x3b92f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b92f0) {
            ctx->pc = 0x3B9438u;
            goto label_3b9438;
        }
    }
    ctx->pc = 0x3B92F8u;
    // 0x3b92f8: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x3B92F8u;
    {
        const bool branch_taken_0x3b92f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B92FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B92F8u;
        // 0x3b92fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b92f8) {
            ctx->pc = 0x3B9438u;
            goto label_3b9438;
        }
    }
    ctx->pc = 0x3B9300u;
label_3b9300:
    // 0x3b9300: 0xc82804  sllv        $a1, $t0, $a2
    ctx->pc = 0x3b9300u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x3b9304: 0xec2006  srlv        $a0, $t4, $a3
    ctx->pc = 0x3b9304u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 7) & 0x1F));
    // 0x3b9308: 0xe91806  srlv        $v1, $t1, $a3
    ctx->pc = 0x3b9308u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 7) & 0x1F));
    // 0x3b930c: 0xeb3806  srlv        $a3, $t3, $a3
    ctx->pc = 0x3b930cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 11), GPR_U32(ctx, 7) & 0x1F));
    // 0x3b9310: 0xcb1004  sllv        $v0, $t3, $a2
    ctx->pc = 0x3b9310u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 6) & 0x1F));
    // 0x3b9314: 0x445825  or          $t3, $v0, $a0
    ctx->pc = 0x3b9314u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3b9318: 0xa34025  or          $t0, $a1, $v1
    ctx->pc = 0x3b9318u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x3b931c: 0xcc6004  sllv        $t4, $t4, $a2
    ctx->pc = 0x3b931cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 6) & 0x1F));
    // 0x3b9320: 0xc94804  sllv        $t1, $t1, $a2
    ctx->pc = 0x3b9320u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
    // 0x3b9324: 0x83402  srl         $a2, $t0, 16
    ctx->pc = 0x3b9324u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x3b9328: 0xe6001b  divu        $zero, $a3, $a2
    ctx->pc = 0x3b9328u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x3b932c: 0x3105ffff  andi        $a1, $t0, 0xFFFF
    ctx->pc = 0x3b932cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x3b9330: 0xb2402  srl         $a0, $t3, 16
    ctx->pc = 0x3b9330u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
    // 0x3b9334: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3B9334u;
    {
        const bool branch_taken_0x3b9334 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b9334) {
            ctx->pc = 0x3B9338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B9334u;
            // 0x3b9338: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B933Cu;
            goto label_3b933c;
        }
    }
    ctx->pc = 0x3B933Cu;
label_3b933c:
    // 0x3b933c: 0x1012  mflo        $v0
    ctx->pc = 0x3b933cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3b9340: 0x1810  mfhi        $v1
    ctx->pc = 0x3b9340u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3b9344: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x3b9344u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9348: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3b9348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3b934c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3b934cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3b9350: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3b9350u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3b9354: 0x1453818  mult        $a3, $t2, $a1
    ctx->pc = 0x3b9354u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x3b9358: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3b9358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3b935c: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x3b935cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3b9360: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x3B9360u;
    {
        const bool branch_taken_0x3b9360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b9360) {
            ctx->pc = 0x3B9364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B9360u;
            // 0x3b9364: 0x671823  subu        $v1, $v1, $a3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B9394u;
            goto label_3b9394;
        }
    }
    ctx->pc = 0x3B9368u;
    // 0x3b9368: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x3b9368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x3b936c: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x3b936cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3b9370: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B9370u;
    {
        const bool branch_taken_0x3b9370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B9374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9370u;
        // 0x3b9374: 0x254affff  addiu       $t2, $t2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9370) {
            ctx->pc = 0x3B9390u;
            goto label_3b9390;
        }
    }
    ctx->pc = 0x3B9378u;
    // 0x3b9378: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x3b9378u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3b937c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B937Cu;
    {
        const bool branch_taken_0x3b937c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b937c) {
            ctx->pc = 0x3B9380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B937Cu;
            // 0x3b9380: 0x671823  subu        $v1, $v1, $a3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B9394u;
            goto label_3b9394;
        }
    }
    ctx->pc = 0x3B9384u;
    // 0x3b9384: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x3b9384u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x3b9388: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x3b9388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x3b938c: 0x0  nop
    ctx->pc = 0x3b938cu;
    // NOP
label_3b9390:
    // 0x3b9390: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x3b9390u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_3b9394:
    // 0x3b9394: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3B9394u;
    {
        const bool branch_taken_0x3b9394 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b9394) {
            ctx->pc = 0x3B9398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B9394u;
            // 0x3b9398: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B939Cu;
            goto label_3b939c;
        }
    }
    ctx->pc = 0x3B939Cu;
label_3b939c:
    // 0x3b939c: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x3b939cu;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x3b93a0: 0x3164ffff  andi        $a0, $t3, 0xFFFF
    ctx->pc = 0x3b93a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
    // 0x3b93a4: 0x1012  mflo        $v0
    ctx->pc = 0x3b93a4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3b93a8: 0x1810  mfhi        $v1
    ctx->pc = 0x3b93a8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3b93ac: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3b93acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b93b0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3b93b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3b93b4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3b93b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3b93b8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3b93b8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3b93bc: 0xc53818  mult        $a3, $a2, $a1
    ctx->pc = 0x3b93bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x3b93c0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3b93c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3b93c4: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x3b93c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3b93c8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3B93C8u;
    {
        const bool branch_taken_0x3b93c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B93CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B93C8u;
        // 0x3b93cc: 0xa103c  dsll32      $v0, $t2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b93c8) {
            ctx->pc = 0x3B93F8u;
            goto label_3b93f8;
        }
    }
    ctx->pc = 0x3B93D0u;
    // 0x3b93d0: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x3b93d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x3b93d4: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x3b93d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3b93d8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B93D8u;
    {
        const bool branch_taken_0x3b93d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B93DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B93D8u;
        // 0x3b93dc: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b93d8) {
            ctx->pc = 0x3B93F4u;
            goto label_3b93f4;
        }
    }
    ctx->pc = 0x3B93E0u;
    // 0x3b93e0: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x3b93e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3b93e4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B93E4u;
    {
        const bool branch_taken_0x3b93e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B93E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B93E4u;
        // 0x3b93e8: 0xa103c  dsll32      $v0, $t2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b93e4) {
            ctx->pc = 0x3B93F8u;
            goto label_3b93f8;
        }
    }
    ctx->pc = 0x3B93ECu;
    // 0x3b93ec: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x3b93ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x3b93f0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3b93f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_3b93f4:
    // 0x3b93f4: 0xa103c  dsll32      $v0, $t2, 0
    ctx->pc = 0x3b93f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 0));
label_3b93f8:
    // 0x3b93f8: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x3b93f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x3b93fc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3b93fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3b9400: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3b9400u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3b9404: 0x462825  or          $a1, $v0, $a2
    ctx->pc = 0x3b9404u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x3b9408: 0xa90019  multu       $a1, $t1
    ctx->pc = 0x3b9408u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 5) * (uint64_t)GPR_U32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3b940c: 0x3010  mfhi        $a2
    ctx->pc = 0x3b940cu;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x3b9410: 0x2012  mflo        $a0
    ctx->pc = 0x3b9410u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x3b9414: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x3b9414u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3b9418: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B9418u;
    {
        const bool branch_taken_0x3b9418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b9418) {
            ctx->pc = 0x3B941Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B9418u;
            // 0x3b941c: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B9438u;
            goto label_3b9438;
        }
    }
    ctx->pc = 0x3B9420u;
    // 0x3b9420: 0x14c30007  bne         $a2, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B9420u;
    {
        const bool branch_taken_0x3b9420 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x3B9424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9420u;
        // 0x3b9424: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9420) {
            ctx->pc = 0x3B9440u;
            goto label_3b9440;
        }
    }
    ctx->pc = 0x3B9428u;
    // 0x3b9428: 0x184102b  sltu        $v0, $t4, $a0
    ctx->pc = 0x3b9428u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3b942c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B942Cu;
    {
        const bool branch_taken_0x3b942c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B942Cu;
        // 0x3b9430: 0x5183c  dsll32      $v1, $a1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b942c) {
            ctx->pc = 0x3B9444u;
            goto label_3b9444;
        }
    }
    ctx->pc = 0x3B9434u;
    // 0x3b9434: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3b9434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_3b9438:
    // 0x3b9438: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x3b9438u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b943c: 0x0  nop
    ctx->pc = 0x3b943cu;
    // NOP
label_3b9440:
    // 0x3b9440: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x3b9440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
label_3b9444:
    // 0x3b9444: 0xd103c  dsll32      $v0, $t5, 0
    ctx->pc = 0x3b9444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) << (32 + 0));
    // 0x3b9448: 0x3703e  dsrl32      $t6, $v1, 0
    ctx->pc = 0x3b9448u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3b944c: 0x1c21025  or          $v0, $t6, $v0
    ctx->pc = 0x3b944cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) | GPR_U64(ctx, 2));
    // 0x3b9450: 0x3e00008  jr          $ra
    ctx->pc = 0x3B9450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B9454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9450u;
        // 0x3b9454: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B9450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B9458u;
}
