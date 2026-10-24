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

// Function: strncpy
// Address: 0x3a5da0 - 0x3a5f68
void strncpy_0x3a5da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("strncpy_0x3a5da0");
#endif

    switch (ctx->pc) {
        case 0x3a5ee0u: goto label_3a5ee0;
        case 0x3a5f18u: goto label_3a5f18;
        case 0x3a5f48u: goto label_3a5f48;
        default: break;
    }

    ctx->pc = 0x3a5da0u;

    // 0x3a5da0: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x3a5da0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5da4: 0xa43825  or          $a3, $a1, $a0
    ctx->pc = 0x3a5da4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x3a5da8: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x3a5da8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3a5dac: 0x30e20007  andi        $v0, $a3, 0x7
    ctx->pc = 0x3a5dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)7);
    // 0x3a5db0: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x3a5db0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3a5db4: 0x14400058  bnez        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x3A5DB4u;
    {
        const bool branch_taken_0x3a5db4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A5DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5DB4u;
        // 0x3a5db8: 0x30e2000f  andi        $v0, $a3, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5db4) {
            ctx->pc = 0x3A5F18u;
            goto label_3a5f18;
        }
    }
    ctx->pc = 0x3A5DBCu;
    // 0x3a5dbc: 0x142480a  movz        $t1, $t2, $v0
    ctx->pc = 0x3a5dbcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 10));
    // 0x3a5dc0: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x3A5DC0u;
    {
        const bool branch_taken_0x3a5dc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A5DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5DC0u;
        // 0x3a5dc4: 0xc9102b  sltu        $v0, $a2, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5dc0) {
            ctx->pc = 0x3A5E7Cu;
            goto label_3a5e7c;
        }
    }
    ctx->pc = 0x3A5DC8u;
    // 0x3a5dc8: 0x14400053  bnez        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x3A5DC8u;
    {
        const bool branch_taken_0x3a5dc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a5dc8) {
            ctx->pc = 0x3A5F18u;
            goto label_3a5f18;
        }
    }
    ctx->pc = 0x3A5DD0u;
    // 0x3a5dd0: 0x34078080  ori         $a3, $zero, 0x8080
    ctx->pc = 0x3a5dd0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x3a5dd4: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x3a5dd4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x3a5dd8: 0x34e78080  ori         $a3, $a3, 0x8080
    ctx->pc = 0x3a5dd8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32896);
    // 0x3a5ddc: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x3a5ddcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x3a5de0: 0x34e78080  ori         $a3, $a3, 0x8080
    ctx->pc = 0x3a5de0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32896);
    // 0x3a5de4: 0x73a78  dsll        $a3, $a3, 9
    ctx->pc = 0x3a5de4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 9);
    // 0x3a5de8: 0x34e70101  ori         $a3, $a3, 0x101
    ctx->pc = 0x3a5de8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)257);
    // 0x3a5dec: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x3a5decu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a5df0: 0x70e74b89  pcpyld      $t1, $a3, $a3
    ctx->pc = 0x3a5df0u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 7)));
    // 0x3a5df4: 0x70031ce9  pnor        $v1, $zero, $v1
    ctx->pc = 0x3a5df4u;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x3a5df8: 0x34078080  ori         $a3, $zero, 0x8080
    ctx->pc = 0x3a5df8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x3a5dfc: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x3a5dfcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x3a5e00: 0x34e78080  ori         $a3, $a3, 0x8080
    ctx->pc = 0x3a5e00u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32896);
    // 0x3a5e04: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x3a5e04u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x3a5e08: 0x34e78080  ori         $a3, $a3, 0x8080
    ctx->pc = 0x3a5e08u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32896);
    // 0x3a5e0c: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x3a5e0cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x3a5e10: 0x34e78080  ori         $a3, $a3, 0x8080
    ctx->pc = 0x3a5e10u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32896);
    // 0x3a5e14: 0x70691248  psubb       $v0, $v1, $t1
    ctx->pc = 0x3a5e14u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 3), GPR_VEC(ctx, 9)));
    // 0x3a5e18: 0x70e75389  pcpyld      $t2, $a3, $a3
    ctx->pc = 0x3a5e18u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 7)));
    // 0x3a5e1c: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x3a5e1cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x3a5e20: 0x704a1489  pand        $v0, $v0, $t2
    ctx->pc = 0x3a5e20u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x3a5e24: 0x70441ba9  pcpyud      $v1, $v0, $a0
    ctx->pc = 0x3a5e24u;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x3a5e28: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x3a5e28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3a5e2c: 0x14600039  bnez        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x3A5E2Cu;
    {
        const bool branch_taken_0x3a5e2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A5E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5E2Cu;
        // 0x3a5e30: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5e2c) {
            ctx->pc = 0x3A5F14u;
            goto label_3a5f14;
        }
    }
    ctx->pc = 0x3A5E34u;
    // 0x3a5e34: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x3a5e34u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a5e38: 0x24c6fff0  addiu       $a2, $a2, -0x10
    ctx->pc = 0x3a5e38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x3a5e3c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x3a5e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x3a5e40: 0x2cc20010  sltiu       $v0, $a2, 0x10
    ctx->pc = 0x3a5e40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x3a5e44: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x3a5e44u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x3a5e48: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x3A5E48u;
    {
        const bool branch_taken_0x3a5e48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A5E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5E48u;
        // 0x3a5e4c: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5e48) {
            ctx->pc = 0x3A5F14u;
            goto label_3a5f14;
        }
    }
    ctx->pc = 0x3A5E50u;
    // 0x3a5e50: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x3a5e50u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a5e54: 0x70021ce9  pnor        $v1, $zero, $v0
    ctx->pc = 0x3a5e54u;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x3a5e58: 0x70491248  psubb       $v0, $v0, $t1
    ctx->pc = 0x3a5e58u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x3a5e5c: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x3a5e5cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x3a5e60: 0x704a1489  pand        $v0, $v0, $t2
    ctx->pc = 0x3a5e60u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x3a5e64: 0x70441ba9  pcpyud      $v1, $v0, $a0
    ctx->pc = 0x3a5e64u;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x3a5e68: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3a5e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3a5e6c: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x3A5E6Cu;
    {
        const bool branch_taken_0x3a5e6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a5e6c) {
            ctx->pc = 0x3A5E70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A5E6Cu;
            // 0x3a5e70: 0x78a30000  lq          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A5EE0u;
            goto label_3a5ee0;
        }
    }
    ctx->pc = 0x3A5E74u;
    // 0x3a5e74: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x3A5E74u;
    {
        const bool branch_taken_0x3a5e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5E74u;
        // 0x3a5e78: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5e74) {
            ctx->pc = 0x3A5F18u;
            goto label_3a5f18;
        }
    }
    ctx->pc = 0x3A5E7Cu;
label_3a5e7c:
    // 0x3a5e7c: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x3A5E7Cu;
    {
        const bool branch_taken_0x3a5e7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a5e7c) {
            ctx->pc = 0x3A5F18u;
            goto label_3a5f18;
        }
    }
    ctx->pc = 0x3A5E84u;
    // 0x3a5e84: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x3a5e84u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a5e88: 0x34098080  ori         $t1, $zero, 0x8080
    ctx->pc = 0x3a5e88u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x3a5e8c: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x3a5e8cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x3a5e90: 0x35298080  ori         $t1, $t1, 0x8080
    ctx->pc = 0x3a5e90u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32896);
    // 0x3a5e94: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x3a5e94u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x3a5e98: 0x35298080  ori         $t1, $t1, 0x8080
    ctx->pc = 0x3a5e98u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32896);
    // 0x3a5e9c: 0x94a78  dsll        $t1, $t1, 9
    ctx->pc = 0x3a5e9cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 9);
    // 0x3a5ea0: 0x35290101  ori         $t1, $t1, 0x101
    ctx->pc = 0x3a5ea0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)257);
    // 0x3a5ea4: 0x340a8080  ori         $t2, $zero, 0x8080
    ctx->pc = 0x3a5ea4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x3a5ea8: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x3a5ea8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x3a5eac: 0x354a8080  ori         $t2, $t2, 0x8080
    ctx->pc = 0x3a5eacu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32896);
    // 0x3a5eb0: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x3a5eb0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x3a5eb4: 0x354a8080  ori         $t2, $t2, 0x8080
    ctx->pc = 0x3a5eb4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32896);
    // 0x3a5eb8: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x3a5eb8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x3a5ebc: 0x354a8080  ori         $t2, $t2, 0x8080
    ctx->pc = 0x3a5ebcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32896);
    // 0x3a5ec0: 0x69102f  dsubu       $v0, $v1, $t1
    ctx->pc = 0x3a5ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) - GPR_U64(ctx, 9));
    // 0x3a5ec4: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x3a5ec4u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x3a5ec8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3a5ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3a5ecc: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x3a5eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x3a5ed0: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3A5ED0u;
    {
        const bool branch_taken_0x3a5ed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A5ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5ED0u;
        // 0x3a5ed4: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5ed0) {
            ctx->pc = 0x3A5F14u;
            goto label_3a5f14;
        }
    }
    ctx->pc = 0x3A5ED8u;
    // 0x3a5ed8: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x3a5ed8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a5edc: 0x0  nop
    ctx->pc = 0x3a5edcu;
    // NOP
label_3a5ee0:
    // 0x3a5ee0: 0x24c6fff8  addiu       $a2, $a2, -0x8
    ctx->pc = 0x3a5ee0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x3a5ee4: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x3a5ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x3a5ee8: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x3a5ee8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x3a5eec: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x3a5eecu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    // 0x3a5ef0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A5EF0u;
    {
        const bool branch_taken_0x3a5ef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A5EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5EF0u;
        // 0x3a5ef4: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5ef0) {
            ctx->pc = 0x3A5F14u;
            goto label_3a5f14;
        }
    }
    ctx->pc = 0x3A5EF8u;
    // 0x3a5ef8: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x3a5ef8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a5efc: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x3a5efcu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x3a5f00: 0x49102f  dsubu       $v0, $v0, $t1
    ctx->pc = 0x3a5f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 9));
    // 0x3a5f04: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3a5f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3a5f08: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x3a5f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x3a5f0c: 0x5040fff4  beql        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x3A5F0Cu;
    {
        const bool branch_taken_0x3a5f0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a5f0c) {
            ctx->pc = 0x3A5F10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A5F0Cu;
            // 0x3a5f10: 0xdca30000  ld          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A5EE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a5ee0;
        }
    }
    ctx->pc = 0x3A5F14u;
label_3a5f14:
    // 0x3a5f14: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x3a5f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3a5f18:
    // 0x3a5f18: 0x10c00011  beqz        $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x3A5F18u;
    {
        const bool branch_taken_0x3a5f18 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5F18u;
        // 0x3a5f1c: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5f18) {
            ctx->pc = 0x3A5F60u;
            goto label_3a5f60;
        }
    }
    ctx->pc = 0x3A5F20u;
    // 0x3a5f20: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3a5f20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a5f24: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3a5f24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3a5f28: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3a5f28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3a5f2c: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3a5f2cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a5f30: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x3a5f30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x3a5f34: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3A5F34u;
    {
        const bool branch_taken_0x3a5f34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A5F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5F34u;
        // 0x3a5f38: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5f34) {
            ctx->pc = 0x3A5F18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a5f18;
        }
    }
    ctx->pc = 0x3A5F3Cu;
    // 0x3a5f3c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x3a5f3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5f40: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A5F40u;
    {
        const bool branch_taken_0x3a5f40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5F40u;
        // 0x3a5f44: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5f40) {
            ctx->pc = 0x3A5F60u;
            goto label_3a5f60;
        }
    }
    ctx->pc = 0x3A5F48u;
label_3a5f48:
    // 0x3a5f48: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x3a5f48u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a5f4c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x3a5f4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5f50: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3a5f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3a5f54: 0x0  nop
    ctx->pc = 0x3a5f54u;
    // NOP
    // 0x3a5f58: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3A5F58u;
    {
        const bool branch_taken_0x3a5f58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A5F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5F58u;
        // 0x3a5f5c: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5f58) {
            ctx->pc = 0x3A5F48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a5f48;
        }
    }
    ctx->pc = 0x3A5F60u;
label_3a5f60:
    // 0x3a5f60: 0x3e00008  jr          $ra
    ctx->pc = 0x3A5F60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A5F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5F60u;
        // 0x3a5f64: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A5F60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A5F68u;
}
