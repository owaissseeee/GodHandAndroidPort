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

// Function: func_00150DC8
// Address: 0x150dc8 - 0x150f68
void func_00150DC8_0x150dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00150DC8_0x150dc8");
#endif

    switch (ctx->pc) {
        case 0x150f30u: goto label_150f30;
        case 0x150f58u: goto label_150f58;
        default: break;
    }

    ctx->pc = 0x150dc8u;

    // 0x150dc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x150dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x150dcc: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x150dccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150dd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x150dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x150dd4: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x150dd4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150dd8: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x150dd8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150ddc: 0x5400006  bltz        $t2, . + 4 + (0x6 << 2)
    ctx->pc = 0x150DDCu;
    {
        const bool branch_taken_0x150ddc = (GPR_S64(ctx, 10) < 0);
        ctx->pc = 0x150DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150DDCu;
        // 0x150de0: 0xc0602d  daddu       $t4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150ddc) {
            ctx->pc = 0x150DF8u;
            goto label_150df8;
        }
    }
    ctx->pc = 0x150DE4u;
    // 0x150de4: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x150de4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x150de8: 0x8c627a2c  lw          $v0, 0x7A2C($v1)
    ctx->pc = 0x150de8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A2Cu));
    // 0x150dec: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x150decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x150df0: 0x1440005a  bnez        $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x150DF0u;
    {
        const bool branch_taken_0x150df0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x150DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150DF0u;
        // 0x150df4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150df0) {
            ctx->pc = 0x150F5Cu;
            goto label_150f5c;
        }
    }
    ctx->pc = 0x150DF8u;
label_150df8:
    // 0x150df8: 0x8d26003c  lw          $a2, 0x3C($t1)
    ctx->pc = 0x150df8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 60)));
    // 0x150dfc: 0x24020280  addiu       $v0, $zero, 0x280
    ctx->pc = 0x150dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x150e00: 0x14c20003  bne         $a2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x150E00u;
    {
        const bool branch_taken_0x150e00 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x150E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150E00u;
        // 0x150e04: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150e00) {
            ctx->pc = 0x150E10u;
            goto label_150e10;
        }
    }
    ctx->pc = 0x150E08u;
    // 0x150e08: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x150E08u;
    {
        const bool branch_taken_0x150e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150E08u;
        // 0x150e0c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150e08) {
            ctx->pc = 0x150F5Cu;
            goto label_150f5c;
        }
    }
    ctx->pc = 0x150E10u;
label_150e10:
    // 0x150e10: 0x24030180  addiu       $v1, $zero, 0x180
    ctx->pc = 0x150e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x150e14: 0x8c4476b0  lw          $a0, 0x76B0($v0)
    ctx->pc = 0x150e14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30384)));
    // 0x150e18: 0xc31818  mult        $v1, $a2, $v1
    ctx->pc = 0x150e18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x150e1c: 0x240200c0  addiu       $v0, $zero, 0xC0
    ctx->pc = 0x150e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x150e20: 0x3c050fff  lui         $a1, 0xFFF
    ctx->pc = 0x150e20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4095 << 16));
    // 0x150e24: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x150e24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x150e28: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x150e28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x150e2c: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x150e2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x150e30: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x150e30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x150e34: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x150e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x150e38: 0xad26003c  sw          $a2, 0x3C($t1)
    ctx->pc = 0x150e38u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 60), GPR_U32(ctx, 6));
    // 0x150e3c: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x150e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x150e40: 0x3c062000  lui         $a2, 0x2000
    ctx->pc = 0x150e40u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8192 << 16));
    // 0x150e44: 0x34c60005  ori         $a2, $a2, 0x5
    ctx->pc = 0x150e44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)5);
    // 0x150e48: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x150e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x150e4c: 0x8d690004  lw          $t1, 0x4($t3)
    ctx->pc = 0x150e4cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x150e50: 0x643821  addu        $a3, $v1, $a0
    ctx->pc = 0x150e50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x150e54: 0x34420005  ori         $v0, $v0, 0x5
    ctx->pc = 0x150e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5);
    // 0x150e58: 0x24e30070  addiu       $v1, $a3, 0x70
    ctx->pc = 0x150e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 112));
    // 0x150e5c: 0xace2000c  sw          $v0, 0xC($a3)
    ctx->pc = 0x150e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
    // 0x150e60: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x150e60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x150e64: 0x39440001  xori        $a0, $t2, 0x1
    ctx->pc = 0x150e64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) ^ (uint64_t)(uint16_t)1);
    // 0x150e68: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x150e68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x150e6c: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x150e6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x150e70: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x150e70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x150e74: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x150e74u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    // 0x150e78: 0x79220010  lq          $v0, 0x10($t1)
    ctx->pc = 0x150e78u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x150e7c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x150E7Cu;
    {
        const bool branch_taken_0x150e7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x150E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150E7Cu;
        // 0x150e80: 0x7ce20020  sq          $v0, 0x20($a3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 7), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150e7c) {
            ctx->pc = 0x150E90u;
            goto label_150e90;
        }
    }
    ctx->pc = 0x150E84u;
    // 0x150e84: 0x8ce20024  lw          $v0, 0x24($a3)
    ctx->pc = 0x150e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x150e88: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x150E88u;
    {
        const bool branch_taken_0x150e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150E88u;
        // 0x150e8c: 0x4c1021  addu        $v0, $v0, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150e88) {
            ctx->pc = 0x150E98u;
            goto label_150e98;
        }
    }
    ctx->pc = 0x150E90u;
label_150e90:
    // 0x150e90: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x150e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x150e94: 0x1821025  or          $v0, $t4, $v0
    ctx->pc = 0x150e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) | GPR_U64(ctx, 2));
label_150e98:
    // 0x150e98: 0xace20024  sw          $v0, 0x24($a3)
    ctx->pc = 0x150e98u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 36), GPR_U32(ctx, 2));
    // 0x150e9c: 0x79230030  lq          $v1, 0x30($t1)
    ctx->pc = 0x150e9cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 9), 48)));
    // 0x150ea0: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x150ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x150ea4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x150ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x150ea8: 0x25240050  addiu       $a0, $t1, 0x50
    ctx->pc = 0x150ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 80));
    // 0x150eac: 0x7ce30040  sq          $v1, 0x40($a3)
    ctx->pc = 0x150eacu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 64), GPR_VEC(ctx, 3));
    // 0x150eb0: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x150eb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x150eb4: 0x3c053000  lui         $a1, 0x3000
    ctx->pc = 0x150eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12288 << 16));
    // 0x150eb8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x150eb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x150ebc: 0x8d230050  lw          $v1, 0x50($t1)
    ctx->pc = 0x150ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 80)));
    // 0x150ec0: 0x3c065000  lui         $a2, 0x5000
    ctx->pc = 0x150ec0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20480 << 16));
    // 0x150ec4: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x150ec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x150ec8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x150ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x150ecc: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x150eccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x150ed0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x150ed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x150ed4: 0xfce30070  sd          $v1, 0x70($a3)
    ctx->pc = 0x150ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 112), GPR_U64(ctx, 3));
    // 0x150ed8: 0x8d220050  lw          $v0, 0x50($t1)
    ctx->pc = 0x150ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 80)));
    // 0x150edc: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x150edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x150ee0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x150ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x150ee4: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x150ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x150ee8: 0x11000004  beqz        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x150EE8u;
    {
        const bool branch_taken_0x150ee8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x150EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150EE8u;
        // 0x150eec: 0xace2007c  sw          $v0, 0x7C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150ee8) {
            ctx->pc = 0x150EFCu;
            goto label_150efc;
        }
    }
    ctx->pc = 0x150EF0u;
    // 0x150ef0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x150ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x150ef4: 0x15020006  bne         $t0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x150EF4u;
    {
        const bool branch_taken_0x150ef4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x150EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150EF4u;
        // 0x150ef8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150ef4) {
            ctx->pc = 0x150F10u;
            goto label_150f10;
        }
    }
    ctx->pc = 0x150EFCu;
label_150efc:
    // 0x150efc: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x150efcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x150f00: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x150f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x150f04: 0x24844c80  addiu       $a0, $a0, 0x4C80
    ctx->pc = 0x150f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19584));
    // 0x150f08: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x150F08u;
    {
        const bool branch_taken_0x150f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150F08u;
        // 0x150f0c: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150f08) {
            ctx->pc = 0x150F28u;
            goto label_150f28;
        }
    }
    ctx->pc = 0x150F10u;
label_150f10:
    // 0x150f10: 0x15020009  bne         $t0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x150F10u;
    {
        const bool branch_taken_0x150f10 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x150F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150F10u;
        // 0x150f14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150f10) {
            ctx->pc = 0x150F38u;
            goto label_150f38;
        }
    }
    ctx->pc = 0x150F18u;
    // 0x150f18: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x150f18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x150f1c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x150f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x150f20: 0x24844c80  addiu       $a0, $a0, 0x4C80
    ctx->pc = 0x150f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19584));
    // 0x150f24: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x150f24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_150f28:
    // 0x150f28: 0xc0c6994  jal         func_31A650
    ctx->pc = 0x150F28u;
    SET_GPR_U32(ctx, 31, 0x150F30u);
    ctx->pc = 0x150F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150F28u;
    // 0x150f2c: 0x24e80080  addiu       $t0, $a3, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A650u, 0x150F28u, 0x150F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150F30u;
label_150f30:
    // 0x150f30: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x150F30u;
    {
        const bool branch_taken_0x150f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150F30u;
        // 0x150f34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150f30) {
            ctx->pc = 0x150F5Cu;
            goto label_150f5c;
        }
    }
    ctx->pc = 0x150F38u;
label_150f38:
    // 0x150f38: 0x15020008  bne         $t0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x150F38u;
    {
        const bool branch_taken_0x150f38 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x150F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150F38u;
        // 0x150f3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150f38) {
            ctx->pc = 0x150F5Cu;
            goto label_150f5c;
        }
    }
    ctx->pc = 0x150F40u;
    // 0x150f40: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x150f40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x150f44: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x150f44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x150f48: 0x24844c80  addiu       $a0, $a0, 0x4C80
    ctx->pc = 0x150f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19584));
    // 0x150f4c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x150f4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x150f50: 0xc0c6994  jal         func_31A650
    ctx->pc = 0x150F50u;
    SET_GPR_U32(ctx, 31, 0x150F58u);
    ctx->pc = 0x150F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150F50u;
    // 0x150f54: 0x24e80080  addiu       $t0, $a3, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A650u, 0x150F50u, 0x150F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150F58u;
label_150f58:
    // 0x150f58: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x150f58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_150f5c:
    // 0x150f5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x150f5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x150f60: 0x3e00008  jr          $ra
    ctx->pc = 0x150F60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150F60u;
        // 0x150f64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150F60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150F68u;
}
