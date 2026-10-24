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

// Function: func_002D8EB0
// Address: 0x2d8eb0 - 0x2d8ff8
void func_002D8EB0_0x2d8eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002D8EB0_0x2d8eb0");
#endif

    switch (ctx->pc) {
        case 0x2d8f38u: goto label_2d8f38;
        case 0x2d8f78u: goto label_2d8f78;
        case 0x2d8fb8u: goto label_2d8fb8;
        default: break;
    }

    ctx->pc = 0x2d8eb0u;

    // 0x2d8eb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d8eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d8eb4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2d8eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2d8eb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d8eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d8ebc: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x2d8ebcu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8ec0: 0x1a32021  addu        $a0, $t5, $v1
    ctx->pc = 0x2d8ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x2d8ec4: 0x8c826284  lw          $v0, 0x6284($a0)
    ctx->pc = 0x2d8ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 25220)));
    // 0x2d8ec8: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2d8ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x2d8ecc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D8ECCu;
    {
        const bool branch_taken_0x2d8ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8ECCu;
        // 0x2d8ed0: 0x8c836288  lw          $v1, 0x6288($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 25224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8ecc) {
            ctx->pc = 0x2D8ED8u;
            goto label_2d8ed8;
        }
    }
    ctx->pc = 0x2D8ED4u;
    // 0x2d8ed4: 0x90836168  lbu         $v1, 0x6168($a0)
    ctx->pc = 0x2d8ed4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 24936)));
label_2d8ed8:
    // 0x2d8ed8: 0x34080  sll         $t0, $v1, 2
    ctx->pc = 0x2d8ed8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d8edc: 0x24826100  addiu       $v0, $a0, 0x6100
    ctx->pc = 0x2d8edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 24832));
    // 0x2d8ee0: 0x481821  addu        $v1, $v0, $t0
    ctx->pc = 0x2d8ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2d8ee4: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x2d8ee4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d8ee8: 0x10c00040  beqz        $a2, . + 4 + (0x40 << 2)
    ctx->pc = 0x2D8EE8u;
    {
        const bool branch_taken_0x2d8ee8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8EE8u;
        // 0x2d8eec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8ee8) {
            ctx->pc = 0x2D8FECu;
            goto label_2d8fec;
        }
    }
    ctx->pc = 0x2D8EF0u;
    // 0x2d8ef0: 0x8c876120  lw          $a3, 0x6120($a0)
    ctx->pc = 0x2d8ef0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24864)));
    // 0x2d8ef4: 0x10e0003e  beqz        $a3, . + 4 + (0x3E << 2)
    ctx->pc = 0x2D8EF4u;
    {
        const bool branch_taken_0x2d8ef4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8EF4u;
        // 0x2d8ef8: 0x7bb00000  lq          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8ef4) {
            ctx->pc = 0x2D8FF0u;
            goto label_2d8ff0;
        }
    }
    ctx->pc = 0x2D8EFCu;
    // 0x2d8efc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2d8efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d8f00: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x2D8F00u;
    {
        const bool branch_taken_0x2d8f00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8F00u;
        // 0x2d8f04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8f00) {
            ctx->pc = 0x2D8FF0u;
            goto label_2d8ff0;
        }
    }
    ctx->pc = 0x2D8F08u;
    // 0x2d8f08: 0x8c856124  lw          $a1, 0x6124($a0)
    ctx->pc = 0x2d8f08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24868)));
    // 0x2d8f0c: 0x54a00003  bnel        $a1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D8F0Cu;
    {
        const bool branch_taken_0x2d8f0c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d8f0c) {
            ctx->pc = 0x2D8F10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D8F0Cu;
            // 0x2d8f10: 0x8c826128  lw          $v0, 0x6128($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24872)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D8F1Cu;
            goto label_2d8f1c;
        }
    }
    ctx->pc = 0x2D8F14u;
    // 0x2d8f14: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x2D8F14u;
    {
        const bool branch_taken_0x2d8f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8F14u;
        // 0x2d8f18: 0xac806128  sw          $zero, 0x6128($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24872), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8f14) {
            ctx->pc = 0x2D8FF0u;
            goto label_2d8ff0;
        }
    }
    ctx->pc = 0x2D8F1Cu;
label_2d8f1c:
    // 0x2d8f1c: 0x5445000b  bnel        $v0, $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x2D8F1Cu;
    {
        const bool branch_taken_0x2d8f1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x2d8f1c) {
            ctx->pc = 0x2D8F20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D8F1Cu;
            // 0x2d8f20: 0xac856128  sw          $a1, 0x6128($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 24872), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D8F4Cu;
            goto label_2d8f4c;
        }
    }
    ctx->pc = 0x2D8F24u;
    // 0x2d8f24: 0x8c82612c  lw          $v0, 0x612C($a0)
    ctx->pc = 0x2d8f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24876)));
    // 0x2d8f28: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2d8f28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2d8f2c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2d8f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2d8f30: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x2D8F30u;
    {
        const bool branch_taken_0x2d8f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8F30u;
        // 0x2d8f34: 0xc21021  addu        $v0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8f30) {
            ctx->pc = 0x2D8FECu;
            goto label_2d8fec;
        }
    }
    ctx->pc = 0x2D8F38u;
label_2d8f38:
    // 0x2d8f38: 0xad05612c  sw          $a1, 0x612C($t0)
    ctx->pc = 0x2d8f38u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24876), GPR_U32(ctx, 5));
    // 0x2d8f3c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2d8f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2d8f40: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x2d8f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2d8f44: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2D8F44u;
    {
        const bool branch_taken_0x2d8f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8F44u;
        // 0x2d8f48: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8f44) {
            ctx->pc = 0x2D8FECu;
            goto label_2d8fec;
        }
    }
    ctx->pc = 0x2D8F4Cu;
label_2d8f4c:
    // 0x2d8f4c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2d8f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2d8f50: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2D8F50u;
    {
        const bool branch_taken_0x2d8f50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8F50u;
        // 0x2d8f54: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8f50) {
            ctx->pc = 0x2D8FE8u;
            goto label_2d8fe8;
        }
    }
    ctx->pc = 0x2D8F58u;
    // 0x2d8f58: 0xa0c82d  daddu       $t9, $a1, $zero
    ctx->pc = 0x2d8f58u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8f5c: 0x100c02d  daddu       $t8, $t0, $zero
    ctx->pc = 0x2d8f5cu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8f60: 0x60782d  daddu       $t7, $v1, $zero
    ctx->pc = 0x2d8f60u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8f64: 0x40702d  daddu       $t6, $v0, $zero
    ctx->pc = 0x2d8f64u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8f68: 0x24ea0012  addiu       $t2, $a3, 0x12
    ctx->pc = 0x2d8f68u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 18));
    // 0x2d8f6c: 0x3c100001  lui         $s0, 0x1
    ctx->pc = 0x2d8f6cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)1 << 16));
    // 0x2d8f70: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x2d8f70u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8f74: 0x0  nop
    ctx->pc = 0x2d8f74u;
    // NOP
label_2d8f78:
    // 0x2d8f78: 0x91420000  lbu         $v0, 0x0($t2)
    ctx->pc = 0x2d8f78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2d8f7c: 0x57220016  bnel        $t9, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2D8F7Cu;
    {
        const bool branch_taken_0x2d8f7c = (GPR_U64(ctx, 25) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d8f7c) {
            ctx->pc = 0x2D8F80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D8F7Cu;
            // 0x2d8f80: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D8FD8u;
            goto label_2d8fd8;
        }
    }
    ctx->pc = 0x2D8F84u;
    // 0x2d8f84: 0x8de30000  lw          $v1, 0x0($t7)
    ctx->pc = 0x2d8f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x2d8f88: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2d8f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d8f8c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2D8F8Cu;
    {
        const bool branch_taken_0x2d8f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8F8Cu;
        // 0x2d8f90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8f8c) {
            ctx->pc = 0x2D8FD4u;
            goto label_2d8fd4;
        }
    }
    ctx->pc = 0x2D8F94u;
    // 0x2d8f94: 0x1b04021  addu        $t0, $t5, $s0
    ctx->pc = 0x2d8f94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 16)));
    // 0x2d8f98: 0x25026100  addiu       $v0, $t0, 0x6100
    ctx->pc = 0x2d8f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 24832));
    // 0x2d8f9c: 0x8d036120  lw          $v1, 0x6120($t0)
    ctx->pc = 0x2d8f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24864)));
    // 0x2d8fa0: 0x584821  addu        $t1, $v0, $t8
    ctx->pc = 0x2d8fa0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x2d8fa4: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x2d8fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2d8fa8: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x2d8fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x2d8fac: 0x90670012  lbu         $a3, 0x12($v1)
    ctx->pc = 0x2d8facu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x2d8fb0: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x2d8fb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d8fb4: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x2d8fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_2d8fb8:
    // 0x2d8fb8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2d8fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d8fbc: 0x10e2ffde  beq         $a3, $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x2D8FBCu;
    {
        const bool branch_taken_0x2d8fbc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D8FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8FBCu;
        // 0x2d8fc0: 0x51900  sll         $v1, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8fbc) {
            ctx->pc = 0x2D8F38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d8f38;
        }
    }
    ctx->pc = 0x2D8FC4u;
    // 0x2d8fc4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2d8fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2d8fc8: 0xa6102b  sltu        $v0, $a1, $a2
    ctx->pc = 0x2d8fc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2d8fcc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2D8FCCu;
    {
        const bool branch_taken_0x2d8fcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D8FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8FCCu;
        // 0x2d8fd0: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8fcc) {
            ctx->pc = 0x2D8FB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d8fb8;
        }
    }
    ctx->pc = 0x2D8FD4u;
label_2d8fd4:
    // 0x2d8fd4: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x2d8fd4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_2d8fd8:
    // 0x2d8fd8: 0x254a0050  addiu       $t2, $t2, 0x50
    ctx->pc = 0x2d8fd8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 80));
    // 0x2d8fdc: 0x16e102b  sltu        $v0, $t3, $t6
    ctx->pc = 0x2d8fdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
    // 0x2d8fe0: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x2D8FE0u;
    {
        const bool branch_taken_0x2d8fe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D8FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8FE0u;
        // 0x2d8fe4: 0x258c0050  addiu       $t4, $t4, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8fe0) {
            ctx->pc = 0x2D8F78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d8f78;
        }
    }
    ctx->pc = 0x2D8FE8u;
label_2d8fe8:
    // 0x2d8fe8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d8fe8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d8fec:
    // 0x2d8fec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d8fecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2d8ff0:
    // 0x2d8ff0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D8FF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D8FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8FF0u;
        // 0x2d8ff4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8FF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D8FF8u;
}
