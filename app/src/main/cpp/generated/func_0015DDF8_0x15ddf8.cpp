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

// Function: func_0015DDF8
// Address: 0x15ddf8 - 0x15e0a0
void func_0015DDF8_0x15ddf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0015DDF8_0x15ddf8");
#endif

    switch (ctx->pc) {
        case 0x15de58u: goto label_15de58;
        case 0x15de88u: goto label_15de88;
        default: break;
    }

    ctx->pc = 0x15ddf8u;

    // 0x15ddf8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x15ddf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x15ddfc: 0x80c02d  daddu       $t8, $a0, $zero
    ctx->pc = 0x15ddfcu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15de00: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x15de00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x15de04: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x15de04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x15de08: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x15de08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x15de0c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x15de0cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15de10: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x15de10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x15de14: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x15de14u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15de18: 0x7fb70000  sq          $s7, 0x0($sp)
    ctx->pc = 0x15de18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 23));
    // 0x15de1c: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x15de1cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15de20: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x15de20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x15de24: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x15de24u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15de28: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x15de28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x15de2c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x15de2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x15de30: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x15de30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x15de34: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x15de34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x15de38: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x15de38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x15de3c: 0x2842821  addu        $a1, $s4, $a0
    ctx->pc = 0x15de3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x15de40: 0x440001d  bltz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x15DE40u;
    {
        const bool branch_taken_0x15de40 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x15DE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DE40u;
        // 0x15de44: 0x2839821  addu        $s3, $s4, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15de40) {
            ctx->pc = 0x15DEB8u;
            goto label_15deb8;
        }
    }
    ctx->pc = 0x15DE48u;
    // 0x15de48: 0x96820010  lhu         $v0, 0x10($s4)
    ctx->pc = 0x15de48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x15de4c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x15de4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15de50: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x15DE50u;
    {
        const bool branch_taken_0x15de50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DE50u;
        // 0x15de54: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15de50) {
            ctx->pc = 0x15DE78u;
            goto label_15de78;
        }
    }
    ctx->pc = 0x15DE58u;
label_15de58:
    // 0x15de58: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x15de58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x15de5c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15de5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15de60: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x15de60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x15de64: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x15de64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x15de68: 0x96820010  lhu         $v0, 0x10($s4)
    ctx->pc = 0x15de68u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x15de6c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x15de6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x15de70: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x15DE70u;
    {
        const bool branch_taken_0x15de70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15DE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DE70u;
        // 0x15de74: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15de70) {
            ctx->pc = 0x15DE58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15de58;
        }
    }
    ctx->pc = 0x15DE78u;
label_15de78:
    // 0x15de78: 0x96820012  lhu         $v0, 0x12($s4)
    ctx->pc = 0x15de78u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 18)));
    // 0x15de7c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15de7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15de80: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x15DE80u;
    {
        const bool branch_taken_0x15de80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DE80u;
        // 0x15de84: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15de80) {
            ctx->pc = 0x15DEA8u;
            goto label_15dea8;
        }
    }
    ctx->pc = 0x15DE88u;
label_15de88:
    // 0x15de88: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x15de88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x15de8c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15de8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15de90: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x15de90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x15de94: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x15de94u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x15de98: 0x96820012  lhu         $v0, 0x12($s4)
    ctx->pc = 0x15de98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 18)));
    // 0x15de9c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x15de9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x15dea0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x15DEA0u;
    {
        const bool branch_taken_0x15dea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15DEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DEA0u;
        // 0x15dea4: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dea0) {
            ctx->pc = 0x15DE88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15de88;
        }
    }
    ctx->pc = 0x15DEA8u;
label_15dea8:
    // 0x15dea8: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x15dea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x15deac: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x15deacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x15deb0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x15deb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x15deb4: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x15deb4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_15deb8:
    // 0x15deb8: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x15deb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x15debc: 0x3c075000  lui         $a3, 0x5000
    ctx->pc = 0x15debcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20480 << 16));
    // 0x15dec0: 0x8e84000c  lw          $a0, 0xC($s4)
    ctx->pc = 0x15dec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x15dec4: 0x3c0b1000  lui         $t3, 0x1000
    ctx->pc = 0x15dec4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)4096 << 16));
    // 0x15dec8: 0x356b0006  ori         $t3, $t3, 0x6
    ctx->pc = 0x15dec8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)6);
    // 0x15decc: 0x2822821  addu        $a1, $s4, $v0
    ctx->pc = 0x15deccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x15ded0: 0x3c0a1100  lui         $t2, 0x1100
    ctx->pc = 0x15ded0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)4352 << 16));
    // 0x15ded4: 0x8cb90004  lw          $t9, 0x4($a1)
    ctx->pc = 0x15ded4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x15ded8: 0x34e70006  ori         $a3, $a3, 0x6
    ctx->pc = 0x15ded8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)6);
    // 0x15dedc: 0xff0b0000  sd          $t3, 0x0($t8)
    ctx->pc = 0x15dedcu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 11));
    // 0x15dee0: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x15dee0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x15dee4: 0x31b7c  dsll32      $v1, $v1, 13
    ctx->pc = 0x15dee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 13));
    // 0x15dee8: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x15dee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x15deec: 0xaf0a0008  sw          $t2, 0x8($t8)
    ctx->pc = 0x15deecu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 8), GPR_U32(ctx, 10));
    // 0x15def0: 0x2849821  addu        $s3, $s4, $a0
    ctx->pc = 0x15def0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x15def4: 0xaf07000c  sw          $a3, 0xC($t8)
    ctx->pc = 0x15def4u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 12), GPR_U32(ctx, 7));
    // 0x15def8: 0x3c060fff  lui         $a2, 0xFFF
    ctx->pc = 0x15def8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4095 << 16));
    // 0x15defc: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x15defcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x15df00: 0x27250060  addiu       $a1, $t9, 0x60
    ctx->pc = 0x15df00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 25), 96));
    // 0x15df04: 0x7b220000  lq          $v0, 0x0($t9)
    ctx->pc = 0x15df04u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x15df08: 0x3c103000  lui         $s0, 0x3000
    ctx->pc = 0x15df08u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)12288 << 16));
    // 0x15df0c: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x15df0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x15df10: 0x3c125000  lui         $s2, 0x5000
    ctx->pc = 0x15df10u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)20480 << 16));
    // 0x15df14: 0x7f020010  sq          $v0, 0x10($t8)
    ctx->pc = 0x15df14u;
    WRITE128(ADD32(GPR_U32(ctx, 24), 16), GPR_VEC(ctx, 2));
    // 0x15df18: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x15df18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x15df1c: 0xff030010  sd          $v1, 0x10($t8)
    ctx->pc = 0x15df1cu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 16), GPR_U64(ctx, 3));
    // 0x15df20: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x15df20u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
    // 0x15df24: 0x3c0d1000  lui         $t5, 0x1000
    ctx->pc = 0x15df24u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)4096 << 16));
    // 0x15df28: 0x35ad0002  ori         $t5, $t5, 0x2
    ctx->pc = 0x15df28u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)2);
    // 0x15df2c: 0x35080002  ori         $t0, $t0, 0x2
    ctx->pc = 0x15df2cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)2);
    // 0x15df30: 0x7b220010  lq          $v0, 0x10($t9)
    ctx->pc = 0x15df30u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 25), 16)));
    // 0x15df34: 0x34118000  ori         $s1, $zero, 0x8000
    ctx->pc = 0x15df34u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x15df38: 0x118b7c  dsll32      $s1, $s1, 13
    ctx->pc = 0x15df38u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 13));
    // 0x15df3c: 0x36318001  ori         $s1, $s1, 0x8001
    ctx->pc = 0x15df3cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)32769);
    // 0x15df40: 0x240e000e  addiu       $t6, $zero, 0xE
    ctx->pc = 0x15df40u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x15df44: 0x240f00ff  addiu       $t7, $zero, 0xFF
    ctx->pc = 0x15df44u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x15df48: 0x7f020020  sq          $v0, 0x20($t8)
    ctx->pc = 0x15df48u;
    WRITE128(ADD32(GPR_U32(ctx, 24), 32), GPR_VEC(ctx, 2));
    // 0x15df4c: 0x240c003f  addiu       $t4, $zero, 0x3F
    ctx->pc = 0x15df4cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x15df50: 0x34098000  ori         $t1, $zero, 0x8000
    ctx->pc = 0x15df50u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x15df54: 0x94b7c  dsll32      $t1, $t1, 13
    ctx->pc = 0x15df54u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 13));
    // 0x15df58: 0x35298004  ori         $t1, $t1, 0x8004
    ctx->pc = 0x15df58u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32772);
    // 0x15df5c: 0x8f020024  lw          $v0, 0x24($t8)
    ctx->pc = 0x15df5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 36)));
    // 0x15df60: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x15df60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x15df64: 0xaf020024  sw          $v0, 0x24($t8)
    ctx->pc = 0x15df64u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 36), GPR_U32(ctx, 2));
    // 0x15df68: 0x7b230020  lq          $v1, 0x20($t9)
    ctx->pc = 0x15df68u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 25), 32)));
    // 0x15df6c: 0x7f030030  sq          $v1, 0x30($t8)
    ctx->pc = 0x15df6cu;
    WRITE128(ADD32(GPR_U32(ctx, 24), 48), GPR_VEC(ctx, 3));
    // 0x15df70: 0x7b220030  lq          $v0, 0x30($t9)
    ctx->pc = 0x15df70u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 25), 48)));
    // 0x15df74: 0x7f020040  sq          $v0, 0x40($t8)
    ctx->pc = 0x15df74u;
    WRITE128(ADD32(GPR_U32(ctx, 24), 64), GPR_VEC(ctx, 2));
    // 0x15df78: 0x7b230040  lq          $v1, 0x40($t9)
    ctx->pc = 0x15df78u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 25), 64)));
    // 0x15df7c: 0x7f030050  sq          $v1, 0x50($t8)
    ctx->pc = 0x15df7cu;
    WRITE128(ADD32(GPR_U32(ctx, 24), 80), GPR_VEC(ctx, 3));
    // 0x15df80: 0x7b240050  lq          $a0, 0x50($t9)
    ctx->pc = 0x15df80u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 25), 80)));
    // 0x15df84: 0x7f040060  sq          $a0, 0x60($t8)
    ctx->pc = 0x15df84u;
    WRITE128(ADD32(GPR_U32(ctx, 24), 96), GPR_VEC(ctx, 4));
    // 0x15df88: 0x8f220050  lw          $v0, 0x50($t9)
    ctx->pc = 0x15df88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
    // 0x15df8c: 0xaf000078  sw          $zero, 0x78($t8)
    ctx->pc = 0x15df8cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 120), GPR_U32(ctx, 0));
    // 0x15df90: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x15df90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x15df94: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x15df94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x15df98: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x15df98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x15df9c: 0xff020070  sd          $v0, 0x70($t8)
    ctx->pc = 0x15df9cu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 112), GPR_U64(ctx, 2));
    // 0x15dfa0: 0x8f230050  lw          $v1, 0x50($t9)
    ctx->pc = 0x15dfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
    // 0x15dfa4: 0xff110090  sd          $s1, 0x90($t8)
    ctx->pc = 0x15dfa4u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 144), GPR_U64(ctx, 17));
    // 0x15dfa8: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x15dfa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x15dfac: 0xff0d0080  sd          $t5, 0x80($t8)
    ctx->pc = 0x15dfacu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 128), GPR_U64(ctx, 13));
    // 0x15dfb0: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x15dfb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x15dfb4: 0xaf000088  sw          $zero, 0x88($t8)
    ctx->pc = 0x15dfb4u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 136), GPR_U32(ctx, 0));
    // 0x15dfb8: 0xaf03007c  sw          $v1, 0x7C($t8)
    ctx->pc = 0x15dfb8u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 124), GPR_U32(ctx, 3));
    // 0x15dfbc: 0xaf08008c  sw          $t0, 0x8C($t8)
    ctx->pc = 0x15dfbcu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 140), GPR_U32(ctx, 8));
    // 0x15dfc0: 0xff0e0098  sd          $t6, 0x98($t8)
    ctx->pc = 0x15dfc0u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 152), GPR_U64(ctx, 14));
    // 0x15dfc4: 0xff0f00a0  sd          $t7, 0xA0($t8)
    ctx->pc = 0x15dfc4u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 160), GPR_U64(ctx, 15));
    // 0x15dfc8: 0xff0c00a8  sd          $t4, 0xA8($t8)
    ctx->pc = 0x15dfc8u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 168), GPR_U64(ctx, 12));
    // 0x15dfcc: 0x8e790004  lw          $t9, 0x4($s3)
    ctx->pc = 0x15dfccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x15dfd0: 0xff0b00b0  sd          $t3, 0xB0($t8)
    ctx->pc = 0x15dfd0u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 176), GPR_U64(ctx, 11));
    // 0x15dfd4: 0xaf0a00b8  sw          $t2, 0xB8($t8)
    ctx->pc = 0x15dfd4u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 184), GPR_U32(ctx, 10));
    // 0x15dfd8: 0x27240060  addiu       $a0, $t9, 0x60
    ctx->pc = 0x15dfd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 25), 96));
    // 0x15dfdc: 0xaf0700bc  sw          $a3, 0xBC($t8)
    ctx->pc = 0x15dfdcu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 188), GPR_U32(ctx, 7));
    // 0x15dfe0: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x15dfe0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x15dfe4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x15dfe4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x15dfe8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x15dfe8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15dfec: 0x7b220000  lq          $v0, 0x0($t9)
    ctx->pc = 0x15dfecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x15dff0: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x15dff0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15dff4: 0x7f0200c0  sq          $v0, 0xC0($t8)
    ctx->pc = 0x15dff4u;
    WRITE128(ADD32(GPR_U32(ctx, 24), 192), GPR_VEC(ctx, 2));
    // 0x15dff8: 0xff0900c0  sd          $t1, 0xC0($t8)
    ctx->pc = 0x15dff8u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 192), GPR_U64(ctx, 9));
    // 0x15dffc: 0x7b220010  lq          $v0, 0x10($t9)
    ctx->pc = 0x15dffcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 25), 16)));
    // 0x15e000: 0x7f0200d0  sq          $v0, 0xD0($t8)
    ctx->pc = 0x15e000u;
    WRITE128(ADD32(GPR_U32(ctx, 24), 208), GPR_VEC(ctx, 2));
    // 0x15e004: 0xaf1600d4  sw          $s6, 0xD4($t8)
    ctx->pc = 0x15e004u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 212), GPR_U32(ctx, 22));
    // 0x15e008: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x15e008u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15e00c: 0x7b220020  lq          $v0, 0x20($t9)
    ctx->pc = 0x15e00cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 25), 32)));
    // 0x15e010: 0x7f0200e0  sq          $v0, 0xE0($t8)
    ctx->pc = 0x15e010u;
    WRITE128(ADD32(GPR_U32(ctx, 24), 224), GPR_VEC(ctx, 2));
    // 0x15e014: 0x7b230030  lq          $v1, 0x30($t9)
    ctx->pc = 0x15e014u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 25), 48)));
    // 0x15e018: 0x7f0300f0  sq          $v1, 0xF0($t8)
    ctx->pc = 0x15e018u;
    WRITE128(ADD32(GPR_U32(ctx, 24), 240), GPR_VEC(ctx, 3));
    // 0x15e01c: 0x7b220040  lq          $v0, 0x40($t9)
    ctx->pc = 0x15e01cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 25), 64)));
    // 0x15e020: 0x7f020100  sq          $v0, 0x100($t8)
    ctx->pc = 0x15e020u;
    WRITE128(ADD32(GPR_U32(ctx, 24), 256), GPR_VEC(ctx, 2));
    // 0x15e024: 0x7b230050  lq          $v1, 0x50($t9)
    ctx->pc = 0x15e024u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 25), 80)));
    // 0x15e028: 0x7f030110  sq          $v1, 0x110($t8)
    ctx->pc = 0x15e028u;
    WRITE128(ADD32(GPR_U32(ctx, 24), 272), GPR_VEC(ctx, 3));
    // 0x15e02c: 0x8f220050  lw          $v0, 0x50($t9)
    ctx->pc = 0x15e02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
    // 0x15e030: 0xaf000128  sw          $zero, 0x128($t8)
    ctx->pc = 0x15e030u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 296), GPR_U32(ctx, 0));
    // 0x15e034: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x15e034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x15e038: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x15e038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x15e03c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x15e03cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x15e040: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x15e040u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15e044: 0xff020120  sd          $v0, 0x120($t8)
    ctx->pc = 0x15e044u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 288), GPR_U64(ctx, 2));
    // 0x15e048: 0x8f230050  lw          $v1, 0x50($t9)
    ctx->pc = 0x15e048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
    // 0x15e04c: 0xff110140  sd          $s1, 0x140($t8)
    ctx->pc = 0x15e04cu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 320), GPR_U64(ctx, 17));
    // 0x15e050: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x15e050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x15e054: 0xff0c0158  sd          $t4, 0x158($t8)
    ctx->pc = 0x15e054u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 344), GPR_U64(ctx, 12));
    // 0x15e058: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x15e058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x15e05c: 0xff0d0130  sd          $t5, 0x130($t8)
    ctx->pc = 0x15e05cu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 304), GPR_U64(ctx, 13));
    // 0x15e060: 0xaf08013c  sw          $t0, 0x13C($t8)
    ctx->pc = 0x15e060u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 316), GPR_U32(ctx, 8));
    // 0x15e064: 0xaf03012c  sw          $v1, 0x12C($t8)
    ctx->pc = 0x15e064u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 300), GPR_U32(ctx, 3));
    // 0x15e068: 0xff0e0148  sd          $t6, 0x148($t8)
    ctx->pc = 0x15e068u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 328), GPR_U64(ctx, 14));
    // 0x15e06c: 0xff0f0150  sd          $t7, 0x150($t8)
    ctx->pc = 0x15e06cu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 336), GPR_U64(ctx, 15));
    // 0x15e070: 0xaf000138  sw          $zero, 0x138($t8)
    ctx->pc = 0x15e070u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 312), GPR_U32(ctx, 0));
    // 0x15e074: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x15e074u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15e078: 0xde820020  ld          $v0, 0x20($s4)
    ctx->pc = 0x15e078u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x15e07c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x15e07cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15e080: 0xfee20000  sd          $v0, 0x0($s7)
    ctx->pc = 0x15e080u;
    WRITE64(ADD32(GPR_U32(ctx, 23), 0), GPR_U64(ctx, 2));
    // 0x15e084: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x15e084u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15e088: 0x7bb70000  lq          $s7, 0x0($sp)
    ctx->pc = 0x15e088u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15e08c: 0x3e00008  jr          $ra
    ctx->pc = 0x15E08Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E08Cu;
        // 0x15e090: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E08Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15E094u;
    // 0x15e094: 0x0  nop
    ctx->pc = 0x15e094u;
    // NOP
    // 0x15e098: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x15e098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x15e09c: 0x0  nop
    ctx->pc = 0x15e09cu;
    // NOP
    ctx->pc = 0x15e0a0u;
}
