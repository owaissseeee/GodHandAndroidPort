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

// Function: strncat
// Address: 0x3a5a20 - 0x3a5bd8
void strncat_0x3a5a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("strncat_0x3a5a20");
#endif

    switch (ctx->pc) {
        case 0x3a5aa8u: goto label_3a5aa8;
        case 0x3a5b28u: goto label_3a5b28;
        case 0x3a5b58u: goto label_3a5b58;
        case 0x3a5ba0u: goto label_3a5ba0;
        default: break;
    }

    ctx->pc = 0x3a5a20u;

    // 0x3a5a20: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x3a5a20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5a24: 0x31020007  andi        $v0, $t0, 0x7
    ctx->pc = 0x3a5a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)7);
    // 0x3a5a28: 0x54400048  bnel        $v0, $zero, . + 4 + (0x48 << 2)
    ctx->pc = 0x3A5A28u;
    {
        const bool branch_taken_0x3a5a28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a5a28) {
            ctx->pc = 0x3A5A2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A5A28u;
            // 0x3a5a2c: 0x80820000  lb          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A5B4Cu;
            goto label_3a5b4c;
        }
    }
    ctx->pc = 0x3A5A30u;
    // 0x3a5a30: 0x3103000f  andi        $v1, $t0, 0xF
    ctx->pc = 0x3a5a30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)15);
    // 0x3a5a34: 0x54600027  bnel        $v1, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x3A5A34u;
    {
        const bool branch_taken_0x3a5a34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a5a34) {
            ctx->pc = 0x3A5A38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A5A34u;
            // 0x3a5a38: 0xdd020000  ld          $v0, 0x0($t0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A5AD4u;
            goto label_3a5ad4;
        }
    }
    ctx->pc = 0x3A5A3Cu;
    // 0x3a5a3c: 0x34078080  ori         $a3, $zero, 0x8080
    ctx->pc = 0x3a5a3cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x3a5a40: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x3a5a40u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x3a5a44: 0x34e78080  ori         $a3, $a3, 0x8080
    ctx->pc = 0x3a5a44u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32896);
    // 0x3a5a48: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x3a5a48u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x3a5a4c: 0x34e78080  ori         $a3, $a3, 0x8080
    ctx->pc = 0x3a5a4cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32896);
    // 0x3a5a50: 0x73a78  dsll        $a3, $a3, 9
    ctx->pc = 0x3a5a50u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 9);
    // 0x3a5a54: 0x34e70101  ori         $a3, $a3, 0x101
    ctx->pc = 0x3a5a54u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)257);
    // 0x3a5a58: 0x79020000  lq          $v0, 0x0($t0)
    ctx->pc = 0x3a5a58u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3a5a5c: 0x70e74b89  pcpyld      $t1, $a3, $a3
    ctx->pc = 0x3a5a5cu;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 7)));
    // 0x3a5a60: 0x34048080  ori         $a0, $zero, 0x8080
    ctx->pc = 0x3a5a60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x3a5a64: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x3a5a64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x3a5a68: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x3a5a68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x3a5a6c: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x3a5a6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x3a5a70: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x3a5a70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x3a5a74: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x3a5a74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x3a5a78: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x3a5a78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x3a5a7c: 0x70491a48  psubb       $v1, $v0, $t1
    ctx->pc = 0x3a5a7cu;
    SET_GPR_VEC(ctx, 3, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x3a5a80: 0x700214e9  pnor        $v0, $zero, $v0
    ctx->pc = 0x3a5a80u;
    SET_GPR_VEC(ctx, 2, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x3a5a84: 0x70845389  pcpyld      $t2, $a0, $a0
    ctx->pc = 0x3a5a84u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 4)));
    // 0x3a5a88: 0x70621c89  pand        $v1, $v1, $v0
    ctx->pc = 0x3a5a88u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x3a5a8c: 0x706a1c89  pand        $v1, $v1, $t2
    ctx->pc = 0x3a5a8cu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 10)));
    // 0x3a5a90: 0x706413a9  pcpyud      $v0, $v1, $a0
    ctx->pc = 0x3a5a90u;
    SET_GPR_VEC(ctx, 2, _mm_unpackhi_epi64(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x3a5a94: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3a5a94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3a5a98: 0x1460002a  bnez        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x3A5A98u;
    {
        const bool branch_taken_0x3a5a98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A5A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5A98u;
        // 0x3a5a9c: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5a98) {
            ctx->pc = 0x3A5B44u;
            goto label_3a5b44;
        }
    }
    ctx->pc = 0x3A5AA0u;
    // 0x3a5aa0: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x3a5aa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x3a5aa4: 0x0  nop
    ctx->pc = 0x3a5aa4u;
    // NOP
label_3a5aa8:
    // 0x3a5aa8: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x3a5aa8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3a5aac: 0x70021ce9  pnor        $v1, $zero, $v0
    ctx->pc = 0x3a5aacu;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x3a5ab0: 0x70491248  psubb       $v0, $v0, $t1
    ctx->pc = 0x3a5ab0u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x3a5ab4: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x3a5ab4u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x3a5ab8: 0x704a1489  pand        $v0, $v0, $t2
    ctx->pc = 0x3a5ab8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x3a5abc: 0x70441ba9  pcpyud      $v1, $v0, $a0
    ctx->pc = 0x3a5abcu;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x3a5ac0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3a5ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3a5ac4: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3A5AC4u;
    {
        const bool branch_taken_0x3a5ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5AC4u;
        // 0x3a5ac8: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5ac4) {
            ctx->pc = 0x3A5AA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a5aa8;
        }
    }
    ctx->pc = 0x3A5ACCu;
    // 0x3a5acc: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x3A5ACCu;
    {
        const bool branch_taken_0x3a5acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5ACCu;
        // 0x3a5ad0: 0x24e7fff0  addiu       $a3, $a3, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5acc) {
            ctx->pc = 0x3A5B44u;
            goto label_3a5b44;
        }
    }
    ctx->pc = 0x3A5AD4u;
label_3a5ad4:
    // 0x3a5ad4: 0x34098080  ori         $t1, $zero, 0x8080
    ctx->pc = 0x3a5ad4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x3a5ad8: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x3a5ad8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x3a5adc: 0x35298080  ori         $t1, $t1, 0x8080
    ctx->pc = 0x3a5adcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32896);
    // 0x3a5ae0: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x3a5ae0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x3a5ae4: 0x35298080  ori         $t1, $t1, 0x8080
    ctx->pc = 0x3a5ae4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32896);
    // 0x3a5ae8: 0x94a78  dsll        $t1, $t1, 9
    ctx->pc = 0x3a5ae8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 9);
    // 0x3a5aec: 0x35290101  ori         $t1, $t1, 0x101
    ctx->pc = 0x3a5aecu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)257);
    // 0x3a5af0: 0x34048080  ori         $a0, $zero, 0x8080
    ctx->pc = 0x3a5af0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x3a5af4: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x3a5af4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x3a5af8: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x3a5af8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x3a5afc: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x3a5afcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x3a5b00: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x3a5b00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x3a5b04: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x3a5b04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x3a5b08: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x3a5b08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x3a5b0c: 0x49182f  dsubu       $v1, $v0, $t1
    ctx->pc = 0x3a5b0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) - GPR_U64(ctx, 9));
    // 0x3a5b10: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x3a5b10u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x3a5b14: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3a5b14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3a5b18: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3a5b18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x3a5b1c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3A5B1Cu;
    {
        const bool branch_taken_0x3a5b1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A5B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5B1Cu;
        // 0x3a5b20: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5b1c) {
            ctx->pc = 0x3A5B44u;
            goto label_3a5b44;
        }
    }
    ctx->pc = 0x3A5B24u;
    // 0x3a5b24: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x3a5b24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_3a5b28:
    // 0x3a5b28: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x3a5b28u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3a5b2c: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x3a5b2cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x3a5b30: 0x49102f  dsubu       $v0, $v0, $t1
    ctx->pc = 0x3a5b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 9));
    // 0x3a5b34: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3a5b34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3a5b38: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x3a5b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x3a5b3c: 0x5040fffa  beql        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3A5B3Cu;
    {
        const bool branch_taken_0x3a5b3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a5b3c) {
            ctx->pc = 0x3A5B40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A5B3Cu;
            // 0x3a5b40: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A5B28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a5b28;
        }
    }
    ctx->pc = 0x3A5B44u;
label_3a5b44:
    // 0x3a5b44: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x3a5b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5b48: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x3a5b48u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3a5b4c:
    // 0x3a5b4c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A5B4Cu;
    {
        const bool branch_taken_0x3a5b4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5B4Cu;
        // 0x3a5b50: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5b4c) {
            ctx->pc = 0x3A5B70u;
            goto label_3a5b70;
        }
    }
    ctx->pc = 0x3A5B54u;
    // 0x3a5b54: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3a5b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3a5b58:
    // 0x3a5b58: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x3a5b58u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3a5b5c: 0x0  nop
    ctx->pc = 0x3a5b5cu;
    // NOP
    // 0x3a5b60: 0x0  nop
    ctx->pc = 0x3a5b60u;
    // NOP
    // 0x3a5b64: 0x0  nop
    ctx->pc = 0x3a5b64u;
    // NOP
    // 0x3a5b68: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3A5B68u;
    {
        const bool branch_taken_0x3a5b68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a5b68) {
            ctx->pc = 0x3A5B6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A5B68u;
            // 0x3a5b6c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A5B58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a5b58;
        }
    }
    ctx->pc = 0x3A5B70u;
label_3a5b70:
    // 0x3a5b70: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3a5b70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3a5b74: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3a5b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3a5b78: 0x10c20014  beq         $a2, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3A5B78u;
    {
        const bool branch_taken_0x3a5b78 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x3a5b78) {
            ctx->pc = 0x3A5BCCu;
            goto label_3a5bcc;
        }
    }
    ctx->pc = 0x3A5B80u;
    // 0x3a5b80: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3a5b80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a5b84: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3a5b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3a5b88: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3a5b88u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a5b8c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x3a5b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x3a5b90: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3A5B90u;
    {
        const bool branch_taken_0x3a5b90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5B90u;
        // 0x3a5b94: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5b90) {
            ctx->pc = 0x3A5BCCu;
            goto label_3a5bcc;
        }
    }
    ctx->pc = 0x3A5B98u;
    // 0x3a5b98: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3a5b98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x3a5b9c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3a5b9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_3a5ba0:
    // 0x3a5ba0: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3A5BA0u;
    {
        const bool branch_taken_0x3a5ba0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a5ba0) {
            ctx->pc = 0x3A5BA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A5BA0u;
            // 0x3a5ba4: 0xa0800000  sb          $zero, 0x0($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A5BA8u;
            goto label_3a5ba8;
        }
    }
    ctx->pc = 0x3A5BA8u;
label_3a5ba8:
    // 0x3a5ba8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3a5ba8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3a5bac: 0x10c30007  beq         $a2, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A5BACu;
    {
        const bool branch_taken_0x3a5bac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a5bac) {
            ctx->pc = 0x3A5BCCu;
            goto label_3a5bcc;
        }
    }
    ctx->pc = 0x3A5BB4u;
    // 0x3a5bb4: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3a5bb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a5bb8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3a5bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3a5bbc: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3a5bbcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a5bc0: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x3a5bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x3a5bc4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x3A5BC4u;
    {
        const bool branch_taken_0x3a5bc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A5BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5BC4u;
        // 0x3a5bc8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5bc4) {
            ctx->pc = 0x3A5BA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a5ba0;
        }
    }
    ctx->pc = 0x3A5BCCu;
label_3a5bcc:
    // 0x3a5bcc: 0x3e00008  jr          $ra
    ctx->pc = 0x3A5BCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A5BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5BCCu;
        // 0x3a5bd0: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A5BCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A5BD4u;
    // 0x3a5bd4: 0x0  nop
    ctx->pc = 0x3a5bd4u;
    // NOP
    ctx->pc = 0x3a5bd8u;
}
