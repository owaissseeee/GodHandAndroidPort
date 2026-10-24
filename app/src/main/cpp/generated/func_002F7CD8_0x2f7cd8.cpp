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

// Function: func_002F7CD8
// Address: 0x2f7cd8 - 0x2f7d88
void func_002F7CD8_0x2f7cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002F7CD8_0x2f7cd8");
#endif

    switch (ctx->pc) {
        case 0x2f7cecu: goto label_2f7cec;
        case 0x2f7d38u: goto label_2f7d38;
        default: break;
    }

    ctx->pc = 0x2f7cd8u;

    // 0x2f7cd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f7cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f7cdc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2f7cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2f7ce0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f7ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f7ce4: 0xc0bef32  jal         func_2FBCC8
    ctx->pc = 0x2F7CE4u;
    SET_GPR_U32(ctx, 31, 0x2F7CECu);
    ctx->pc = 0x2F7CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7CE4u;
    // 0x2f7ce8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBCC8u, 0x2F7CE4u, 0x2F7CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7CECu;
label_2f7cec:
    // 0x2f7cec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f7cecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2f7cf0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f7cf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f7cf4: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x2f7cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x2f7cf8: 0x2442f7d0  addiu       $v0, $v0, -0x830
    ctx->pc = 0x2f7cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965200));
    // 0x2f7cfc: 0xae0002b0  sw          $zero, 0x2B0($s0)
    ctx->pc = 0x2f7cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 688), GPR_U32(ctx, 0));
    // 0x2f7d00: 0xae0200f0  sw          $v0, 0xF0($s0)
    ctx->pc = 0x2f7d00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
    // 0x2f7d04: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2f7d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f7d08: 0xe60002d4  swc1        $f0, 0x2D4($s0)
    ctx->pc = 0x2f7d08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 724), bits); }
    // 0x2f7d0c: 0x26020320  addiu       $v0, $s0, 0x320
    ctx->pc = 0x2f7d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 800));
    // 0x2f7d10: 0xae0002b4  sw          $zero, 0x2B4($s0)
    ctx->pc = 0x2f7d10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 692), GPR_U32(ctx, 0));
    // 0x2f7d14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f7d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f7d18: 0xae0002b8  sw          $zero, 0x2B8($s0)
    ctx->pc = 0x2f7d18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 696), GPR_U32(ctx, 0));
    // 0x2f7d1c: 0xae0002bc  sw          $zero, 0x2BC($s0)
    ctx->pc = 0x2f7d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 700), GPR_U32(ctx, 0));
    // 0x2f7d20: 0xae0002c0  sw          $zero, 0x2C0($s0)
    ctx->pc = 0x2f7d20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 704), GPR_U32(ctx, 0));
    // 0x2f7d24: 0xae0002c4  sw          $zero, 0x2C4($s0)
    ctx->pc = 0x2f7d24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 708), GPR_U32(ctx, 0));
    // 0x2f7d28: 0xae0002c8  sw          $zero, 0x2C8($s0)
    ctx->pc = 0x2f7d28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 712), GPR_U32(ctx, 0));
    // 0x2f7d2c: 0xae0002d8  sw          $zero, 0x2D8($s0)
    ctx->pc = 0x2f7d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 0));
    // 0x2f7d30: 0xae0002dc  sw          $zero, 0x2DC($s0)
    ctx->pc = 0x2f7d30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 732), GPR_U32(ctx, 0));
    // 0x2f7d34: 0x0  nop
    ctx->pc = 0x2f7d34u;
    // NOP
label_2f7d38:
    // 0x2f7d38: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x2f7d38u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2f7d3c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2f7d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2f7d40: 0x0  nop
    ctx->pc = 0x2f7d40u;
    // NOP
    // 0x2f7d44: 0x0  nop
    ctx->pc = 0x2f7d44u;
    // NOP
    // 0x2f7d48: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2F7D48u;
    {
        const bool branch_taken_0x2f7d48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2F7D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7D48u;
        // 0x2f7d4c: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7d48) {
            ctx->pc = 0x2F7D38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f7d38;
        }
    }
    ctx->pc = 0x2F7D50u;
    // 0x2f7d50: 0xfa000340  sqc2        $vf0, 0x340($s0)
    ctx->pc = 0x2f7d50u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 832), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2f7d54: 0xfa000350  sqc2        $vf0, 0x350($s0)
    ctx->pc = 0x2f7d54u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 848), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2f7d58: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2f7d58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7d5c: 0xae0002bc  sw          $zero, 0x2BC($s0)
    ctx->pc = 0x2f7d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 700), GPR_U32(ctx, 0));
    // 0x2f7d60: 0xae000360  sw          $zero, 0x360($s0)
    ctx->pc = 0x2f7d60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 864), GPR_U32(ctx, 0));
    // 0x2f7d64: 0xae000364  sw          $zero, 0x364($s0)
    ctx->pc = 0x2f7d64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 0));
    // 0x2f7d68: 0xae000368  sw          $zero, 0x368($s0)
    ctx->pc = 0x2f7d68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 872), GPR_U32(ctx, 0));
    // 0x2f7d6c: 0xae00036c  sw          $zero, 0x36C($s0)
    ctx->pc = 0x2f7d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 876), GPR_U32(ctx, 0));
    // 0x2f7d70: 0xae000370  sw          $zero, 0x370($s0)
    ctx->pc = 0x2f7d70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 880), GPR_U32(ctx, 0));
    // 0x2f7d74: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2f7d74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f7d78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f7d78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f7d7c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F7D7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F7D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7D7Cu;
        // 0x2f7d80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F7D7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F7D84u;
    // 0x2f7d84: 0x0  nop
    ctx->pc = 0x2f7d84u;
    // NOP
    ctx->pc = 0x2f7d88u;
}
