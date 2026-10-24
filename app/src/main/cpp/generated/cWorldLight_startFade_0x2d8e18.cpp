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

// Function: cWorldLight_startFade
// Address: 0x2d8e18 - 0x2d8eb0
void cWorldLight_startFade_0x2d8e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cWorldLight_startFade_0x2d8e18");
#endif

    ctx->pc = 0x2d8e18u;

    // 0x2d8e18: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2d8e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2d8e1c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2d8e1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8e20: 0x1023821  addu        $a3, $t0, $v0
    ctx->pc = 0x2d8e20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2d8e24: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x2d8e24u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x2d8e28: 0x8ce26284  lw          $v0, 0x6284($a3)
    ctx->pc = 0x2d8e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 25220)));
    // 0x2d8e2c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2d8e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x2d8e30: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2D8E30u;
    {
        const bool branch_taken_0x2d8e30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D8E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8E30u;
        // 0x2d8e34: 0x63403  sra         $a2, $a2, 16 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8e30) {
            ctx->pc = 0x2D8E94u;
            goto label_2d8e94;
        }
    }
    ctx->pc = 0x2D8E38u;
    // 0x2d8e38: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x2d8e38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x2d8e3c: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x2d8e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x2d8e40: 0x8c627a84  lw          $v0, 0x7A84($v1)
    ctx->pc = 0x2d8e40u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A84u));
    // 0x2d8e44: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2d8e44u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8e48: 0xa0e56168  sb          $a1, 0x6168($a3)
    ctx->pc = 0x2d8e48u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 24936), (uint8_t)GPR_U32(ctx, 5));
    // 0x2d8e4c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2d8e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2d8e50: 0xa4e06280  sh          $zero, 0x6280($a3)
    ctx->pc = 0x2d8e50u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 25216), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d8e54: 0xc2180a  movz        $v1, $a2, $v0
    ctx->pc = 0x2d8e54u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
    // 0x2d8e58: 0x1c600005  bgtz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D8E58u;
    {
        const bool branch_taken_0x2d8e58 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x2D8E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8E58u;
        // 0x2d8e5c: 0xa4e36282  sh          $v1, 0x6282($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 25218), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8e58) {
            ctx->pc = 0x2D8E70u;
            goto label_2d8e70;
        }
    }
    ctx->pc = 0x2D8E60u;
    // 0x2d8e60: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d8e60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2d8e64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d8e64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d8e68: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2D8E68u;
    {
        const bool branch_taken_0x2d8e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8E68u;
        // 0x2d8e6c: 0xe4e0616c  swc1        $f0, 0x616C($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 24940), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8e68) {
            ctx->pc = 0x2D8E74u;
            goto label_2d8e74;
        }
    }
    ctx->pc = 0x2D8E70u;
label_2d8e70:
    // 0x2d8e70: 0xace0616c  sw          $zero, 0x616C($a3)
    ctx->pc = 0x2d8e70u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24940), GPR_U32(ctx, 0));
label_2d8e74:
    // 0x2d8e74: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x2d8e74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x2d8e78: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2d8e78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2d8e7c: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x2d8e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x2d8e80: 0x3463ffdf  ori         $v1, $v1, 0xFFDF
    ctx->pc = 0x2d8e80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65503);
    // 0x2d8e84: 0x8c826284  lw          $v0, 0x6284($a0)
    ctx->pc = 0x2d8e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 25220)));
    // 0x2d8e88: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x2d8e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x2d8e8c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2d8e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2d8e90: 0xac826284  sw          $v0, 0x6284($a0)
    ctx->pc = 0x2d8e90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 25220), GPR_U32(ctx, 2));
label_2d8e94:
    // 0x2d8e94: 0x3e00008  jr          $ra
    ctx->pc = 0x2D8E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8E94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D8E9Cu;
    // 0x2d8e9c: 0x0  nop
    ctx->pc = 0x2d8e9cu;
    // NOP
    // 0x2d8ea0: 0xac626284  sw          $v0, 0x6284($v1)
    ctx->pc = 0x2d8ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 25220), GPR_U32(ctx, 2));
    // 0x2d8ea4: 0x0  nop
    ctx->pc = 0x2d8ea4u;
    // NOP
    // 0x2d8ea8: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x2d8ea8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x2d8eac: 0x0  nop
    ctx->pc = 0x2d8eacu;
    // NOP
    ctx->pc = 0x2d8eb0u;
}
