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

// Function: func_00309D88
// Address: 0x309d88 - 0x30a200
void func_00309D88_0x309d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00309D88_0x309d88");
#endif

    switch (ctx->pc) {
        case 0x309e30u: goto label_309e30;
        case 0x309f38u: goto label_309f38;
        case 0x30a028u: goto label_30a028;
        case 0x30a108u: goto label_30a108;
        case 0x30a13cu: goto label_30a13c;
        case 0x30a1d0u: goto label_30a1d0;
        default: break;
    }

    ctx->pc = 0x309d88u;

    // 0x309d88: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x309d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x309d8c: 0x240200b0  addiu       $v0, $zero, 0xB0
    ctx->pc = 0x309d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x309d90: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x309d90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x309d94: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x309d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x309d98: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x309d98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x309d9c: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x309d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x309da0: 0x24847ba0  addiu       $a0, $a0, 0x7BA0
    ctx->pc = 0x309da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31648));
    // 0x309da4: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x309da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    // 0x309da8: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x309da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
    // 0x309dac: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x309dacu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309db0: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x309db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x309db4: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x309db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x309db8: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x309db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
    // 0x309dbc: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x309dbcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309dc0: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x309dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x309dc4: 0x26f20018  addiu       $s2, $s7, 0x18
    ctx->pc = 0x309dc4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 24));
    // 0x309dc8: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x309dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x309dcc: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x309dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x309dd0: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x309dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x309dd4: 0x8ee30018  lw          $v1, 0x18($s7)
    ctx->pc = 0x309dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 24)));
    // 0x309dd8: 0x8eea0008  lw          $t2, 0x8($s7)
    ctx->pc = 0x309dd8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x309ddc: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x309ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x309de0: 0x8ee9000c  lw          $t1, 0xC($s7)
    ctx->pc = 0x309de0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
    // 0x309de4: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x309de4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x309de8: 0x8ee50000  lw          $a1, 0x0($s7)
    ctx->pc = 0x309de8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x309dec: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x309decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x309df0: 0xafa60010  sw          $a2, 0x10($sp)
    ctx->pc = 0x309df0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
    // 0x309df4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x309df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x309df8: 0xafa70020  sw          $a3, 0x20($sp)
    ctx->pc = 0x309df8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 7));
    // 0x309dfc: 0xa2f024  and         $fp, $a1, $v0
    ctx->pc = 0x309dfcu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x309e00: 0xafa80024  sw          $t0, 0x24($sp)
    ctx->pc = 0x309e00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 8));
    // 0x309e04: 0x64b021  addu        $s6, $v1, $a0
    ctx->pc = 0x309e04u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x309e08: 0x2ea9821  addu        $s3, $s7, $t2
    ctx->pc = 0x309e08u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 10)));
    // 0x309e0c: 0x13c00072  beqz        $fp, . + 4 + (0x72 << 2)
    ctx->pc = 0x309E0Cu;
    {
        const bool branch_taken_0x309e0c = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x309E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309E0Cu;
        // 0x309e10: 0x2e9a821  addu        $s5, $s7, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309e0c) {
            ctx->pc = 0x309FD8u;
            goto label_309fd8;
        }
    }
    ctx->pc = 0x309E14u;
    // 0x309e14: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x309e14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x309e18: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x309e18u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x309e1c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x309e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x309e20: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x309e20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x309e24: 0xffa20028  sd          $v0, 0x28($sp)
    ctx->pc = 0x309e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 2));
    // 0x309e28: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x309e28u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x309e2c: 0x948fa  dsrl        $t1, $t1, 3
    ctx->pc = 0x309e2cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> 3);
label_309e30:
    // 0x309e30: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x309e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x309e34: 0x240300b0  addiu       $v1, $zero, 0xB0
    ctx->pc = 0x309e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x309e38: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x309e38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x309e3c: 0x3c070074  lui         $a3, 0x74
    ctx->pc = 0x309e3cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)116 << 16));
    // 0x309e40: 0x24e47ba0  addiu       $a0, $a3, 0x7BA0
    ctx->pc = 0x309e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 31648));
    // 0x309e44: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x309e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x309e48: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x309e48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x309e4c: 0x448821  addu        $s1, $v0, $a0
    ctx->pc = 0x309e4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x309e50: 0xa22a0000  sb          $t2, 0x0($s1)
    ctx->pc = 0x309e50u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 10));
    // 0x309e54: 0xa22a0001  sb          $t2, 0x1($s1)
    ctx->pc = 0x309e54u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 10));
    // 0x309e58: 0xde500008  ld          $s0, 0x8($s2)
    ctx->pc = 0x309e58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x309e5c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x309e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x309e60: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x309E60u;
    {
        const bool branch_taken_0x309e60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x309E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309E60u;
        // 0x309e64: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309e60) {
            ctx->pc = 0x309E8Cu;
            goto label_309e8c;
        }
    }
    ctx->pc = 0x309E68u;
    // 0x309e68: 0x10153a  dsrl        $v0, $s0, 20
    ctx->pc = 0x309e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) >> 20);
    // 0x309e6c: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x309e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x309e70: 0x3044003f  andi        $a0, $v0, 0x3F
    ctx->pc = 0x309e70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x309e74: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x309E74u;
    {
        const bool branch_taken_0x309e74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x309E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309E74u;
        // 0x309e78: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309e74) {
            ctx->pc = 0x309E84u;
            goto label_309e84;
        }
    }
    ctx->pc = 0x309E7Cu;
    // 0x309e7c: 0x54820003  bnel        $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x309E7Cu;
    {
        const bool branch_taken_0x309e7c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x309e7c) {
            ctx->pc = 0x309E80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x309E7Cu;
            // 0x309e80: 0xa2200002  sb          $zero, 0x2($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x309E8Cu;
            goto label_309e8c;
        }
    }
    ctx->pc = 0x309E84u;
label_309e84:
    // 0x309e84: 0x92420004  lbu         $v0, 0x4($s2)
    ctx->pc = 0x309e84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x309e88: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x309e88u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
label_309e8c:
    // 0x309e8c: 0xdfa20028  ld          $v0, 0x28($sp)
    ctx->pc = 0x309e8cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x309e90: 0x30c33fff  andi        $v1, $a2, 0x3FFF
    ctx->pc = 0x309e90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
    // 0x309e94: 0x96e40006  lhu         $a0, 0x6($s7)
    ctx->pc = 0x309e94u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 6)));
    // 0x309e98: 0x62eba  dsrl        $a1, $a2, 26
    ctx->pc = 0x309e98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) >> 26);
    // 0x309e9c: 0x96e70004  lhu         $a3, 0x4($s7)
    ctx->pc = 0x309e9cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x309ea0: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x309ea0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x309ea4: 0x2402c000  addiu       $v0, $zero, -0x4000
    ctx->pc = 0x309ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x309ea8: 0x30633fff  andi        $v1, $v1, 0x3FFF
    ctx->pc = 0x309ea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x309eac: 0xe43818  mult        $a3, $a3, $a0
    ctx->pc = 0x309eacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x309eb0: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x309eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x309eb4: 0x438025  or          $s0, $v0, $v1
    ctx->pc = 0x309eb4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x309eb8: 0x637ba  dsrl        $a2, $a2, 30
    ctx->pc = 0x309eb8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 30);
    // 0x309ebc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x309ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x309ec0: 0x10217e  dsrl32      $a0, $s0, 5
    ctx->pc = 0x309ec0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) >> (32 + 5));
    // 0x309ec4: 0x30a5000f  andi        $a1, $a1, 0xF
    ctx->pc = 0x309ec4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x309ec8: 0x30c6000f  andi        $a2, $a2, 0xF
    ctx->pc = 0x309ec8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x309ecc: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x309eccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x309ed0: 0x24e3003f  addiu       $v1, $a3, 0x3F
    ctx->pc = 0x309ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 63));
    // 0x309ed4: 0xe2180b  movn        $v1, $a3, $v0
    ctx->pc = 0x309ed4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 7));
    // 0x309ed8: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x309ed8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x309edc: 0x8fa70020  lw          $a3, 0x20($sp)
    ctx->pc = 0x309edcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x309ee0: 0x30843fff  andi        $a0, $a0, 0x3FFF
    ctx->pc = 0x309ee0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16383);
    // 0x309ee4: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x309ee4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x309ee8: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x309ee8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x309eec: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x309eecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x309ef0: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x309ef0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x309ef4: 0xa82804  sllv        $a1, $t0, $a1
    ctx->pc = 0x309ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x309ef8: 0x31983  sra         $v1, $v1, 6
    ctx->pc = 0x309ef8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 6));
    // 0x309efc: 0xc83004  sllv        $a2, $t0, $a2
    ctx->pc = 0x309efcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x309f00: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x309f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x309f04: 0xa6230012  sh          $v1, 0x12($s1)
    ctx->pc = 0x309f04u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 3));
    // 0x309f08: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x309f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x309f0c: 0xa6250004  sh          $a1, 0x4($s1)
    ctx->pc = 0x309f0cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 5));
    // 0x309f10: 0xa6260006  sh          $a2, 0x6($s1)
    ctx->pc = 0x309f10u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 6));
    // 0x309f14: 0xa2220003  sb          $v0, 0x3($s1)
    ctx->pc = 0x309f14u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x309f18: 0xa63e0010  sh          $fp, 0x10($s1)
    ctx->pc = 0x309f18u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 30));
    // 0x309f1c: 0xae330008  sw          $s3, 0x8($s1)
    ctx->pc = 0x309f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 19));
    // 0x309f20: 0xae35000c  sw          $s5, 0xC($s1)
    ctx->pc = 0x309f20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 21));
    // 0x309f24: 0xae370014  sw          $s7, 0x14($s1)
    ctx->pc = 0x309f24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 23));
    // 0x309f28: 0x7fa80030  sq          $t0, 0x30($sp)
    ctx->pc = 0x309f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 8));
    // 0x309f2c: 0x7fa90040  sq          $t1, 0x40($sp)
    ctx->pc = 0x309f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 9));
    // 0x309f30: 0xc0c28a6  jal         func_30A298
    ctx->pc = 0x309F30u;
    SET_GPR_U32(ctx, 31, 0x309F38u);
    ctx->pc = 0x309F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309F30u;
    // 0x309f34: 0x7faa0050  sq          $t2, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A298u, 0x309F30u, 0x309F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309F38u;
label_309f38:
    // 0x309f38: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x309f38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x309f3c: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x309f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x309f40: 0x3403fff8  ori         $v1, $zero, 0xFFF8
    ctx->pc = 0x309f40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x309f44: 0x31ef8  dsll        $v1, $v1, 27
    ctx->pc = 0x309f44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 27);
    // 0x309f48: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x309f48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x309f4c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x309f4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x309f50: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x309f50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x309f54: 0x31978  dsll        $v1, $v1, 5
    ctx->pc = 0x309f54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 5);
    // 0x309f58: 0x3463001f  ori         $v1, $v1, 0x1F
    ctx->pc = 0x309f58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)31);
    // 0x309f5c: 0x2117c  dsll32      $v0, $v0, 5
    ctx->pc = 0x309f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 5));
    // 0x309f60: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x309f60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x309f64: 0x38a40001  xori        $a0, $a1, 0x1
    ctx->pc = 0x309f64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    // 0x309f68: 0x7ba80030  lq          $t0, 0x30($sp)
    ctx->pc = 0x309f68u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x309f6c: 0x628025  or          $s0, $v1, $v0
    ctx->pc = 0x309f6cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x309f70: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x309f70u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x309f74: 0x7ba90040  lq          $t1, 0x40($sp)
    ctx->pc = 0x309f74u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x309f78: 0x10880006  beq         $a0, $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x309F78u;
    {
        const bool branch_taken_0x309f78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 8));
        ctx->pc = 0x309F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309F78u;
        // 0x309f7c: 0x7baa0050  lq          $t2, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309f78) {
            ctx->pc = 0x309F94u;
            goto label_309f94;
        }
    }
    ctx->pc = 0x309F80u;
    // 0x309f80: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x309f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x309f84: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x309F84u;
    {
        const bool branch_taken_0x309f84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x309F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309F84u;
        // 0x309f88: 0x2091824  and         $v1, $s0, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309f84) {
            ctx->pc = 0x309FA4u;
            goto label_309fa4;
        }
    }
    ctx->pc = 0x309F8Cu;
    // 0x309f8c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x309F8Cu;
    {
        const bool branch_taken_0x309f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x309f8c) {
            ctx->pc = 0x309FB0u;
            goto label_309fb0;
        }
    }
    ctx->pc = 0x309F94u;
label_309f94:
    // 0x309f94: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x309f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x309f98: 0x217fc  dsll32      $v0, $v0, 31
    ctx->pc = 0x309f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 31));
    // 0x309f9c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x309F9Cu;
    {
        const bool branch_taken_0x309f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x309FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309F9Cu;
        // 0x309fa0: 0x2091824  and         $v1, $s0, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309f9c) {
            ctx->pc = 0x309FACu;
            goto label_309fac;
        }
    }
    ctx->pc = 0x309FA4u;
label_309fa4:
    // 0x309fa4: 0x3402a000  ori         $v0, $zero, 0xA000
    ctx->pc = 0x309fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x309fa8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x309fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_309fac:
    // 0x309fac: 0x628025  or          $s0, $v1, $v0
    ctx->pc = 0x309facu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_309fb0:
    // 0x309fb0: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x309fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x309fb4: 0x214f8  dsll        $v0, $v0, 19
    ctx->pc = 0x309fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 19);
    // 0x309fb8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x309fb8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x309fbc: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x309fbcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x309fc0: 0x29e182b  sltu        $v1, $s4, $fp
    ctx->pc = 0x309fc0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x309fc4: 0xfe300018  sd          $s0, 0x18($s1)
    ctx->pc = 0x309fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 24), GPR_U64(ctx, 16));
    // 0x309fc8: 0xde420010  ld          $v0, 0x10($s2)
    ctx->pc = 0x309fc8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x309fcc: 0x26520018  addiu       $s2, $s2, 0x18
    ctx->pc = 0x309fccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x309fd0: 0x1460ff97  bnez        $v1, . + 4 + (-0x69 << 2)
    ctx->pc = 0x309FD0u;
    {
        const bool branch_taken_0x309fd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x309FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309FD0u;
        // 0x309fd4: 0xfe220020  sd          $v0, 0x20($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309fd0) {
            ctx->pc = 0x309E30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_309e30;
        }
    }
    ctx->pc = 0x309FD8u;
label_309fd8:
    // 0x309fd8: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x309fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x309fdc: 0x440007a  bltz        $v0, . + 4 + (0x7A << 2)
    ctx->pc = 0x309FDCu;
    {
        const bool branch_taken_0x309fdc = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x309FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309FDCu;
        // 0x309fe0: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309fdc) {
            ctx->pc = 0x30A1C8u;
            goto label_30a1c8;
        }
    }
    ctx->pc = 0x309FE4u;
    // 0x309fe4: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x309fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x309fe8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x309fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x309fec: 0xaec00038  sw          $zero, 0x38($s6)
    ctx->pc = 0x309fecu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 56), GPR_U32(ctx, 0));
    // 0x309ff0: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x309ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
    // 0x309ff4: 0xaec0003c  sw          $zero, 0x3C($s6)
    ctx->pc = 0x309ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 60), GPR_U32(ctx, 0));
    // 0x309ff8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x309ff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x309ffc: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x309ffcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a000: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x30a000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x30a004: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x30a004u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a008: 0xfec20030  sd          $v0, 0x30($s6)
    ctx->pc = 0x30a008u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 48), GPR_U64(ctx, 2));
    // 0x30a00c: 0x26c60040  addiu       $a2, $s6, 0x40
    ctx->pc = 0x30a00cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 64));
    // 0x30a010: 0x96e20010  lhu         $v0, 0x10($s7)
    ctx->pc = 0x30a010u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 16)));
    // 0x30a014: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x30A014u;
    {
        const bool branch_taken_0x30a014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A014u;
        // 0x30a018: 0x26de0080  addiu       $fp, $s6, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 22), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a014) {
            ctx->pc = 0x30A06Cu;
            goto label_30a06c;
        }
    }
    ctx->pc = 0x30A01Cu;
    // 0x30a01c: 0x3c051100  lui         $a1, 0x1100
    ctx->pc = 0x30a01cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4352 << 16));
    // 0x30a020: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x30a020u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x30a024: 0x0  nop
    ctx->pc = 0x30a024u;
    // NOP
label_30a028:
    // 0x30a028: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x30a028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x30a02c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x30a02cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x30a030: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x30a030u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x30a034: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x30a034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x30a038: 0xae650008  sw          $a1, 0x8($s3)
    ctx->pc = 0x30a038u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 5));
    // 0x30a03c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x30a03cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x30a040: 0xae630004  sw          $v1, 0x4($s3)
    ctx->pc = 0x30a040u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
    // 0x30a044: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x30a044u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
    // 0x30a048: 0x24700010  addiu       $s0, $v1, 0x10
    ctx->pc = 0x30a048u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x30a04c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x30a04cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30a050: 0x8fa70010  lw          $a3, 0x10($sp)
    ctx->pc = 0x30a050u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30a054: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x30a054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x30a058: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x30a058u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x30a05c: 0x96e30010  lhu         $v1, 0x10($s7)
    ctx->pc = 0x30a05cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 16)));
    // 0x30a060: 0x283182b  sltu        $v1, $s4, $v1
    ctx->pc = 0x30a060u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x30a064: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x30A064u;
    {
        const bool branch_taken_0x30a064 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30A068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A064u;
        // 0x30a068: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a064) {
            ctx->pc = 0x30A028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30a028;
        }
    }
    ctx->pc = 0x30A06Cu;
label_30a06c:
    // 0x30a06c: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x30a06cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x30a070: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x30a070u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x30a074: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x30a074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x30a078: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x30a078u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x30a07c: 0xc31024  and         $v0, $a2, $v1
    ctx->pc = 0x30a07cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x30a080: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x30a080u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
    // 0x30a084: 0x2a31824  and         $v1, $s5, $v1
    ctx->pc = 0x30a084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & GPR_U64(ctx, 3));
    // 0x30a088: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x30a088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30a08c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x30a08cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x30a090: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x30a090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x30a094: 0xfe620000  sd          $v0, 0x0($s3)
    ctx->pc = 0x30a094u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 2));
    // 0x30a098: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x30a098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x30a09c: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x30a09cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
    // 0x30a0a0: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x30a0a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x30a0a4: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x30a0a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x30a0a8: 0x34428001  ori         $v0, $v0, 0x8001
    ctx->pc = 0x30a0a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
    // 0x30a0ac: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x30a0acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x30a0b0: 0x34a50002  ori         $a1, $a1, 0x2
    ctx->pc = 0x30a0b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
    // 0x30a0b4: 0x34840002  ori         $a0, $a0, 0x2
    ctx->pc = 0x30a0b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x30a0b8: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x30a0b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x30a0bc: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x30a0bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x30a0c0: 0x2408003f  addiu       $t0, $zero, 0x3F
    ctx->pc = 0x30a0c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x30a0c4: 0xfec50040  sd          $a1, 0x40($s6)
    ctx->pc = 0x30a0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 64), GPR_U64(ctx, 5));
    // 0x30a0c8: 0xaec4004c  sw          $a0, 0x4C($s6)
    ctx->pc = 0x30a0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 76), GPR_U32(ctx, 4));
    // 0x30a0cc: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x30a0ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a0d0: 0xfec20050  sd          $v0, 0x50($s6)
    ctx->pc = 0x30a0d0u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 80), GPR_U64(ctx, 2));
    // 0x30a0d4: 0xfec60058  sd          $a2, 0x58($s6)
    ctx->pc = 0x30a0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 88), GPR_U64(ctx, 6));
    // 0x30a0d8: 0xfec70060  sd          $a3, 0x60($s6)
    ctx->pc = 0x30a0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 96), GPR_U64(ctx, 7));
    // 0x30a0dc: 0xfec80068  sd          $t0, 0x68($s6)
    ctx->pc = 0x30a0dcu;
    WRITE64(ADD32(GPR_U32(ctx, 22), 104), GPR_U64(ctx, 8));
    // 0x30a0e0: 0xfec30070  sd          $v1, 0x70($s6)
    ctx->pc = 0x30a0e0u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 112), GPR_U64(ctx, 3));
    // 0x30a0e4: 0xaec00048  sw          $zero, 0x48($s6)
    ctx->pc = 0x30a0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 72), GPR_U32(ctx, 0));
    // 0x30a0e8: 0xaec00078  sw          $zero, 0x78($s6)
    ctx->pc = 0x30a0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 120), GPR_U32(ctx, 0));
    // 0x30a0ec: 0xaec0007c  sw          $zero, 0x7C($s6)
    ctx->pc = 0x30a0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 124), GPR_U32(ctx, 0));
    // 0x30a0f0: 0x96e20012  lhu         $v0, 0x12($s7)
    ctx->pc = 0x30a0f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 18)));
    // 0x30a0f4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x30A0F4u;
    {
        const bool branch_taken_0x30a0f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A0F4u;
        // 0x30a0f8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a0f4) {
            ctx->pc = 0x30A150u;
            goto label_30a150;
        }
    }
    ctx->pc = 0x30A0FCu;
    // 0x30a0fc: 0x3c131100  lui         $s3, 0x1100
    ctx->pc = 0x30a0fcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4352 << 16));
    // 0x30a100: 0x3c125000  lui         $s2, 0x5000
    ctx->pc = 0x30a100u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)20480 << 16));
    // 0x30a104: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x30a104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_30a108:
    // 0x30a108: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x30a108u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x30a10c: 0x96a20000  lhu         $v0, 0x0($s5)
    ctx->pc = 0x30a10cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x30a110: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x30a110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x30a114: 0xaeb30008  sw          $s3, 0x8($s5)
    ctx->pc = 0x30a114u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 19));
    // 0x30a118: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x30a118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x30a11c: 0xaea30004  sw          $v1, 0x4($s5)
    ctx->pc = 0x30a11cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 3));
    // 0x30a120: 0xaea2000c  sw          $v0, 0xC($s5)
    ctx->pc = 0x30a120u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 2));
    // 0x30a124: 0x24700010  addiu       $s0, $v1, 0x10
    ctx->pc = 0x30a124u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x30a128: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x30a128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30a12c: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x30a12cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x30a130: 0x96040004  lhu         $a0, 0x4($s0)
    ctx->pc = 0x30a130u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30a134: 0xc0c28a6  jal         func_30A298
    ctx->pc = 0x30A134u;
    SET_GPR_U32(ctx, 31, 0x30A13Cu);
    ctx->pc = 0x30A138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A134u;
    // 0x30a138: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A298u, 0x30A134u, 0x30A13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A13Cu;
label_30a13c:
    // 0x30a13c: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x30a13cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x30a140: 0x96e20012  lhu         $v0, 0x12($s7)
    ctx->pc = 0x30a140u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 18)));
    // 0x30a144: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x30a144u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x30a148: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x30A148u;
    {
        const bool branch_taken_0x30a148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30a148) {
            ctx->pc = 0x30A14Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30A148u;
            // 0x30a14c: 0x8ea30004  lw          $v1, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30A108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30a108;
        }
    }
    ctx->pc = 0x30A150u;
label_30a150:
    // 0x30a150: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x30a150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x30a154: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x30a154u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x30a158: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30a158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x30a15c: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x30a15cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x30a160: 0x3c21024  and         $v0, $fp, $v0
    ctx->pc = 0x30a160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & GPR_U64(ctx, 2));
    // 0x30a164: 0xaea0000c  sw          $zero, 0xC($s5)
    ctx->pc = 0x30a164u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 0));
    // 0x30a168: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x30a168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30a16c: 0xaea00008  sw          $zero, 0x8($s5)
    ctx->pc = 0x30a16cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 0));
    // 0x30a170: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x30a170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x30a174: 0x3c087000  lui         $t0, 0x7000
    ctx->pc = 0x30a174u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)28672 << 16));
    // 0x30a178: 0x35080002  ori         $t0, $t0, 0x2
    ctx->pc = 0x30a178u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)2);
    // 0x30a17c: 0xfea20000  sd          $v0, 0x0($s5)
    ctx->pc = 0x30a17cu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
    // 0x30a180: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x30a180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x30a184: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x30a184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x30a188: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x30a188u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x30a18c: 0x4237c  dsll32      $a0, $a0, 13
    ctx->pc = 0x30a18cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 13));
    // 0x30a190: 0x34848001  ori         $a0, $a0, 0x8001
    ctx->pc = 0x30a190u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32769);
    // 0x30a194: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x30a194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x30a198: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x30a198u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x30a19c: 0xfec200a8  sd          $v0, 0xA8($s6)
    ctx->pc = 0x30a19cu;
    WRITE64(ADD32(GPR_U32(ctx, 22), 168), GPR_U64(ctx, 2));
    // 0x30a1a0: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x30a1a0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x30a1a4: 0xfec80080  sd          $t0, 0x80($s6)
    ctx->pc = 0x30a1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 128), GPR_U64(ctx, 8));
    // 0x30a1a8: 0xaec3008c  sw          $v1, 0x8C($s6)
    ctx->pc = 0x30a1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 140), GPR_U32(ctx, 3));
    // 0x30a1ac: 0xfec40090  sd          $a0, 0x90($s6)
    ctx->pc = 0x30a1acu;
    WRITE64(ADD32(GPR_U32(ctx, 22), 144), GPR_U64(ctx, 4));
    // 0x30a1b0: 0xfec50098  sd          $a1, 0x98($s6)
    ctx->pc = 0x30a1b0u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 152), GPR_U64(ctx, 5));
    // 0x30a1b4: 0xfec600a0  sd          $a2, 0xA0($s6)
    ctx->pc = 0x30a1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 160), GPR_U64(ctx, 6));
    // 0x30a1b8: 0xaec00088  sw          $zero, 0x88($s6)
    ctx->pc = 0x30a1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 136), GPR_U32(ctx, 0));
    // 0x30a1bc: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x30a1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x30a1c0: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x30a1c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x30a1c4: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x30a1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
label_30a1c8:
    // 0x30a1c8: 0xc0ebfc8  jal         func_3AFF20
    ctx->pc = 0x30A1C8u;
    SET_GPR_U32(ctx, 31, 0x30A1D0u);
    ctx->pc = 0x30A1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A1C8u;
    // 0x30a1cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFF20u, 0x30A1C8u, 0x30A1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A1D0u;
label_30a1d0:
    // 0x30a1d0: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x30a1d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x30a1d4: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x30a1d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x30a1d8: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x30a1d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x30a1dc: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x30a1dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x30a1e0: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x30a1e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x30a1e4: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x30a1e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x30a1e8: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x30a1e8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x30a1ec: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x30a1ecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x30a1f0: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x30a1f0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x30a1f4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x30a1f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x30a1f8: 0x3e00008  jr          $ra
    ctx->pc = 0x30A1F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30A1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A1F8u;
        // 0x30a1fc: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30A1F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30A200u;
}
