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

// Function: func_002D4C20
// Address: 0x2d4c20 - 0x2d4da0
void func_002D4C20_0x2d4c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002D4C20_0x2d4c20");
#endif

    switch (ctx->pc) {
        case 0x2d4cfcu: goto label_2d4cfc;
        case 0x2d4d20u: goto label_2d4d20;
        case 0x2d4d68u: goto label_2d4d68;
        default: break;
    }

    ctx->pc = 0x2d4c20u;

    // 0x2d4c20: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2d4c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2d4c24: 0x3c091000  lui         $t1, 0x1000
    ctx->pc = 0x2d4c24u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4096 << 16));
    // 0x2d4c28: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2d4c28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2d4c2c: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x2d4c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x2d4c30: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x2d4c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x2d4c34: 0x3529e020  ori         $t1, $t1, 0xE020
    ctx->pc = 0x2d4c34u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)57376);
    // 0x2d4c38: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x2d4c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x2d4c3c: 0x3442fc00  ori         $v0, $v0, 0xFC00
    ctx->pc = 0x2d4c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64512);
    // 0x2d4c40: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x2d4c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x2d4c44: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2d4c44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2d4c48: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x2d4c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x2d4c4c: 0x3463e010  ori         $v1, $v1, 0xE010
    ctx->pc = 0x2d4c4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57360);
    // 0x2d4c50: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2d4c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2d4c54: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x2d4c54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x2d4c58: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x2d4c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x2d4c5c: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x2d4c5cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2d4c60: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x2d4c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x2d4c64: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2d4c64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4c68: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x2d4c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x2d4c6c: 0x3c111000  lui         $s1, 0x1000
    ctx->pc = 0x2d4c6cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)4096 << 16));
    // 0x2d4c70: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d4c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d4c74: 0x3c1e1000  lui         $fp, 0x1000
    ctx->pc = 0x2d4c74u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)4096 << 16));
    // 0x2d4c78: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x2d4c78u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x2d4c7c: 0x3c171000  lui         $s7, 0x1000
    ctx->pc = 0x2d4c7cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)4096 << 16));
    // 0x2d4c80: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2d4c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2d4c84: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x2d4c84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
    // 0x2d4c88: 0x3442d410  ori         $v0, $v0, 0xD410
    ctx->pc = 0x2d4c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54288);
    // 0x2d4c8c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2d4c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2d4c90: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x2d4c90u;
    runtime->Store32(rdram, ctx, 0x1000D410u, GPR_U32(ctx, 6));
    // 0x2d4c94: 0x3463d420  ori         $v1, $v1, 0xD420
    ctx->pc = 0x2d4c94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54304);
    // 0x2d4c98: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x2d4c98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2d4c9c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2d4c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2d4ca0: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x2d4ca0u;
    runtime->Store32(rdram, ctx, 0x1000D420u, GPR_U32(ctx, 6));
    // 0x2d4ca4: 0x3442d480  ori         $v0, $v0, 0xD480
    ctx->pc = 0x2d4ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54400);
    // 0x2d4ca8: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x2d4ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x2d4cac: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x2d4cacu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x2d4cb0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2d4cb0u;
    runtime->Store32(rdram, ctx, 0x1000D480u, GPR_U32(ctx, 3));
    // 0x2d4cb4: 0x34c6d400  ori         $a2, $a2, 0xD400
    ctx->pc = 0x2d4cb4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)54272);
    // 0x2d4cb8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2d4cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2d4cbc: 0x24030101  addiu       $v1, $zero, 0x101
    ctx->pc = 0x2d4cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x2d4cc0: 0x3c161000  lui         $s6, 0x1000
    ctx->pc = 0x2d4cc0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)4096 << 16));
    // 0x2d4cc4: 0x3c151000  lui         $s5, 0x1000
    ctx->pc = 0x2d4cc4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)4096 << 16));
    // 0x2d4cc8: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x2d4cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2d4ccc: 0x3c141000  lui         $s4, 0x1000
    ctx->pc = 0x2d4cccu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)4096 << 16));
    // 0x2d4cd0: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x2d4cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x2d4cd4: 0x3631e020  ori         $s1, $s1, 0xE020
    ctx->pc = 0x2d4cd4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)57376);
    // 0x2d4cd8: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x2d4cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x2d4cdc: 0x37dee010  ori         $fp, $fp, 0xE010
    ctx->pc = 0x2d4cdcu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)57360);
    // 0x2d4ce0: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x2d4ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x2d4ce4: 0x36f7d010  ori         $s7, $s7, 0xD010
    ctx->pc = 0x2d4ce4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)53264);
    // 0x2d4ce8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2d4ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2d4cec: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x2d4cecu;
    runtime->Store32(rdram, ctx, 0x1000D400u, GPR_U32(ctx, 3));
    // 0x2d4cf0: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2d4cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2d4cf4: 0xc0b5368  jal         func_2D4DA0
    ctx->pc = 0x2D4CF4u;
    SET_GPR_U32(ctx, 31, 0x2D4CFCu);
    ctx->pc = 0x2D4CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4CF4u;
    // 0x2d4cf8: 0x36d6d020  ori         $s6, $s6, 0xD020 (Delay Slot)
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)53280);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4DA0u, 0x2D4CF4u, 0x2D4CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4CFCu;
label_2d4cfc:
    // 0x2d4cfc: 0x36b5d080  ori         $s5, $s5, 0xD080
    ctx->pc = 0x2d4cfcu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)53376);
    // 0x2d4d00: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2d4d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2d4d04: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x2d4d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d4d08: 0x3694d000  ori         $s4, $s4, 0xD000
    ctx->pc = 0x2d4d08u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)53248);
    // 0x2d4d0c: 0x3c137000  lui         $s3, 0x7000
    ctx->pc = 0x2d4d0cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)28672 << 16));
    // 0x2d4d10: 0x3442fc00  ori         $v0, $v0, 0xFC00
    ctx->pc = 0x2d4d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64512);
    // 0x2d4d14: 0x2412000f  addiu       $s2, $zero, 0xF
    ctx->pc = 0x2d4d14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2d4d18: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2d4d18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2d4d1c: 0x0  nop
    ctx->pc = 0x2d4d1cu;
    // NOP
label_2d4d20:
    // 0x2d4d20: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2d4d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2d4d24: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x2d4d24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x2d4d28: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2d4d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d4d2c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2d4d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2d4d30: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x2d4d30u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
    // 0x2d4d34: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2d4d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d4d38: 0xaef00000  sw          $s0, 0x0($s7)
    ctx->pc = 0x2d4d38u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 16));
    // 0x2d4d3c: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x2d4d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x2d4d40: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x2d4d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d4d44: 0xaeb30000  sw          $s3, 0x0($s5)
    ctx->pc = 0x2d4d44u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 19));
    // 0x2d4d48: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2d4d48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2d4d4c: 0x26730040  addiu       $s3, $s3, 0x40
    ctx->pc = 0x2d4d4cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x2d4d50: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2d4d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d4d54: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x2d4d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x2d4d58: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2d4d58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2d4d5c: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x2d4d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x2d4d60: 0xc0b5368  jal         func_2D4DA0
    ctx->pc = 0x2D4D60u;
    SET_GPR_U32(ctx, 31, 0x2D4D68u);
    ctx->pc = 0x2D4D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4D60u;
    // 0x2d4d64: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4DA0u, 0x2D4D60u, 0x2D4D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4D68u;
label_2d4d68:
    // 0x2d4d68: 0x641ffed  bgez        $s2, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2D4D68u;
    {
        const bool branch_taken_0x2d4d68 = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x2D4D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4D68u;
        // 0x2d4d6c: 0x7ba30010  lq          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4d68) {
            ctx->pc = 0x2D4D20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d4d20;
        }
    }
    ctx->pc = 0x2D4D70u;
    // 0x2d4d70: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x2d4d70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2d4d74: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x2d4d74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2d4d78: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x2d4d78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d4d7c: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x2d4d7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d4d80: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x2d4d80u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d4d84: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2d4d84u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d4d88: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x2d4d88u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d4d8c: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x2d4d8cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d4d90: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x2d4d90u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d4d94: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d4d94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d4d98: 0x3e00008  jr          $ra
    ctx->pc = 0x2D4D98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4D98u;
        // 0x2d4d9c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4D98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D4DA0u;
}
