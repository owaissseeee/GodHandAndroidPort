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

// Function: open__7filebufPCcii
// Address: 0x38edc0 - 0x38ef20
void open__7filebufPCcii_0x38edc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("open__7filebufPCcii_0x38edc0");
#endif

    switch (ctx->pc) {
        case 0x38eea4u: goto label_38eea4;
        case 0x38eee8u: goto label_38eee8;
        case 0x38ef04u: goto label_38ef04;
        default: break;
    }

    ctx->pc = 0x38edc0u;

    // 0x38edc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x38edc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x38edc4: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x38edc4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38edc8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x38edc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x38edcc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38edccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x38edd0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x38edd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38edd4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x38edd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x38edd8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x38edd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38eddc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x38eddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x38ede0: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x38ede0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x38ede4: 0x4410043  bgez        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x38EDE4u;
    {
        const bool branch_taken_0x38ede4 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x38EDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EDE4u;
        // 0x38ede8: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ede4) {
            ctx->pc = 0x38EEF4u;
            goto label_38eef4;
        }
    }
    ctx->pc = 0x38EDECu;
    // 0x38edec: 0x36020002  ori         $v0, $s0, 0x2
    ctx->pc = 0x38edecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)2);
    // 0x38edf0: 0x32030008  andi        $v1, $s0, 0x8
    ctx->pc = 0x38edf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8);
    // 0x38edf4: 0x43800b  movn        $s0, $v0, $v1
    ctx->pc = 0x38edf4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x38edf8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x38edf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x38edfc: 0x32020003  andi        $v0, $s0, 0x3
    ctx->pc = 0x38edfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
    // 0x38ee00: 0x14440004  bne         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x38EE00u;
    {
        const bool branch_taken_0x38ee00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x38EE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EE00u;
        // 0x38ee04: 0x32020002  andi        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ee00) {
            ctx->pc = 0x38EE14u;
            goto label_38ee14;
        }
    }
    ctx->pc = 0x38EE08u;
    // 0x38ee08: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x38ee08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x38ee0c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x38EE0Cu;
    {
        const bool branch_taken_0x38ee0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38EE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EE0Cu;
        // 0x38ee10: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ee0c) {
            ctx->pc = 0x38EE3Cu;
            goto label_38ee3c;
        }
    }
    ctx->pc = 0x38EE14u;
label_38ee14:
    // 0x38ee14: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38EE14u;
    {
        const bool branch_taken_0x38ee14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38EE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EE14u;
        // 0x38ee18: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ee14) {
            ctx->pc = 0x38EE24u;
            goto label_38ee24;
        }
    }
    ctx->pc = 0x38EE1Cu;
    // 0x38ee1c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x38EE1Cu;
    {
        const bool branch_taken_0x38ee1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38EE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EE1Cu;
        // 0x38ee20: 0x24120004  addiu       $s2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ee1c) {
            ctx->pc = 0x38EE3Cu;
            goto label_38ee3c;
        }
    }
    ctx->pc = 0x38EE24u;
label_38ee24:
    // 0x38ee24: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x38ee24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x38ee28: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38EE28u;
    {
        const bool branch_taken_0x38ee28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38EE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EE28u;
        // 0x38ee2c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ee28) {
            ctx->pc = 0x38EE38u;
            goto label_38ee38;
        }
    }
    ctx->pc = 0x38EE30u;
    // 0x38ee30: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x38EE30u;
    {
        const bool branch_taken_0x38ee30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38EE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EE30u;
        // 0x38ee34: 0x24120008  addiu       $s2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ee30) {
            ctx->pc = 0x38EE3Cu;
            goto label_38ee3c;
        }
    }
    ctx->pc = 0x38EE38u;
label_38ee38:
    // 0x38ee38: 0x2412000c  addiu       $s2, $zero, 0xC
    ctx->pc = 0x38ee38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_38ee3c:
    // 0x38ee3c: 0x32020080  andi        $v0, $s0, 0x80
    ctx->pc = 0x38ee3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)128);
    // 0x38ee40: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x38EE40u;
    {
        const bool branch_taken_0x38ee40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38EE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EE40u;
        // 0x38ee44: 0x2402ff7f  addiu       $v0, $zero, -0x81 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ee40) {
            ctx->pc = 0x38EE4Cu;
            goto label_38ee4c;
        }
    }
    ctx->pc = 0x38EE48u;
    // 0x38ee48: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x38ee48u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_38ee4c:
    // 0x38ee4c: 0x32020010  andi        $v0, $s0, 0x10
    ctx->pc = 0x38ee4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16);
    // 0x38ee50: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x38EE50u;
    {
        const bool branch_taken_0x38ee50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38ee50) {
            ctx->pc = 0x38EE54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38EE50u;
            // 0x38ee54: 0x34840400  ori         $a0, $a0, 0x400 (Delay Slot)
            SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1024);
            ctx->in_delay_slot = false;
            ctx->pc = 0x38EE68u;
            goto label_38ee68;
        }
    }
    ctx->pc = 0x38EE58u;
    // 0x38ee58: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x38ee58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x38ee5c: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38EE5Cu;
    {
        const bool branch_taken_0x38ee5c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x38EE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EE5Cu;
        // 0x38ee60: 0x32020008  andi        $v0, $s0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ee5c) {
            ctx->pc = 0x38EE6Cu;
            goto label_38ee6c;
        }
    }
    ctx->pc = 0x38EE64u;
    // 0x38ee64: 0x34840400  ori         $a0, $a0, 0x400
    ctx->pc = 0x38ee64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1024);
label_38ee68:
    // 0x38ee68: 0x32020008  andi        $v0, $s0, 0x8
    ctx->pc = 0x38ee68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8);
label_38ee6c:
    // 0x38ee6c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38EE6Cu;
    {
        const bool branch_taken_0x38ee6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38EE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EE6Cu;
        // 0x38ee70: 0x32020020  andi        $v0, $s0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ee6c) {
            ctx->pc = 0x38EE7Cu;
            goto label_38ee7c;
        }
    }
    ctx->pc = 0x38EE74u;
    // 0x38ee74: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x38ee74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x38ee78: 0x36521000  ori         $s2, $s2, 0x1000
    ctx->pc = 0x38ee78u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)4096);
label_38ee7c:
    // 0x38ee7c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x38EE7Cu;
    {
        const bool branch_taken_0x38ee7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38EE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EE7Cu;
        // 0x38ee80: 0x34850800  ori         $a1, $a0, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ee7c) {
            ctx->pc = 0x38EE94u;
            goto label_38ee94;
        }
    }
    ctx->pc = 0x38EE84u;
    // 0x38ee84: 0x34830200  ori         $v1, $a0, 0x200
    ctx->pc = 0x38ee84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)512);
    // 0x38ee88: 0x3a020001  xori        $v0, $s0, 0x1
    ctx->pc = 0x38ee88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)1);
    // 0x38ee8c: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x38ee8cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x38ee90: 0x34850800  ori         $a1, $a0, 0x800
    ctx->pc = 0x38ee90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2048);
label_38ee94:
    // 0x38ee94: 0x32020040  andi        $v0, $s0, 0x40
    ctx->pc = 0x38ee94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)64);
    // 0x38ee98: 0x82280a  movz        $a1, $a0, $v0
    ctx->pc = 0x38ee98u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
    // 0x38ee9c: 0xc0ec0d8  jal         func_3B0360
    ctx->pc = 0x38EE9Cu;
    SET_GPR_U32(ctx, 31, 0x38EEA4u);
    ctx->pc = 0x38EEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EE9Cu;
    // 0x38eea0: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0360u, 0x38EE9Cu, 0x38EEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EEA4u;
label_38eea4:
    // 0x38eea4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x38eea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38eea8: 0x4800017  bltz        $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x38EEA8u;
    {
        const bool branch_taken_0x38eea8 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x38EEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EEA8u;
        // 0x38eeac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38eea8) {
            ctx->pc = 0x38EF08u;
            goto label_38ef08;
        }
    }
    ctx->pc = 0x38EEB0u;
    // 0x38eeb0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x38eeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x38eeb4: 0x2403eff3  addiu       $v1, $zero, -0x100D
    ctx->pc = 0x38eeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963187));
    // 0x38eeb8: 0x3245100c  andi        $a1, $s2, 0x100C
    ctx->pc = 0x38eeb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4108);
    // 0x38eebc: 0xae240038  sw          $a0, 0x38($s1)
    ctx->pc = 0x38eebcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 4));
    // 0x38eec0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x38eec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x38eec4: 0x3204000c  andi        $a0, $s0, 0xC
    ctx->pc = 0x38eec4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)12);
    // 0x38eec8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x38eec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x38eecc: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x38EECCu;
    {
        const bool branch_taken_0x38eecc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x38EED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EECCu;
        // 0x38eed0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38eecc) {
            ctx->pc = 0x38EEFCu;
            goto label_38eefc;
        }
    }
    ctx->pc = 0x38EED4u;
    // 0x38eed4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38eed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38eed8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x38eed8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38eedc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x38eedcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x38eee0: 0xc0e38fc  jal         func_38E3F0
    ctx->pc = 0x38EEE0u;
    SET_GPR_U32(ctx, 31, 0x38EEE8u);
    ctx->pc = 0x38EEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EEE0u;
    // 0x38eee4: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E3F0u, 0x38EEE0u, 0x38EEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EEE8u;
label_38eee8:
    // 0x38eee8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x38eee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x38eeec: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x38EEECu;
    {
        const bool branch_taken_0x38eeec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x38eeec) {
            ctx->pc = 0x38EEFCu;
            goto label_38eefc;
        }
    }
    ctx->pc = 0x38EEF4u;
label_38eef4:
    // 0x38eef4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x38EEF4u;
    {
        const bool branch_taken_0x38eef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38EEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EEF4u;
        // 0x38eef8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38eef4) {
            ctx->pc = 0x38EF08u;
            goto label_38ef08;
        }
    }
    ctx->pc = 0x38EEFCu;
label_38eefc:
    // 0x38eefc: 0xc0e3082  jal         func_38C208
    ctx->pc = 0x38EEFCu;
    SET_GPR_U32(ctx, 31, 0x38EF04u);
    ctx->pc = 0x38EF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EEFCu;
    // 0x38ef00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38C208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C208u, 0x38EEFCu, 0x38EF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EF04u;
label_38ef04:
    // 0x38ef04: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x38ef04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38ef08:
    // 0x38ef08: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x38ef08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38ef0c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x38ef0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38ef10: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x38ef10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38ef14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38ef14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38ef18: 0x3e00008  jr          $ra
    ctx->pc = 0x38EF18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38EF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EF18u;
        // 0x38ef1c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38EF18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38EF20u;
}
