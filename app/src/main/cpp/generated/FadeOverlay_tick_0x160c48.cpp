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

// Function: FadeOverlay_tick
// Address: 0x160c48 - 0x160d50
void FadeOverlay_tick_0x160c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FadeOverlay_tick_0x160c48");
#endif

    ctx->pc = 0x160c48u;

    // 0x160c48: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x160c48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160c4c: 0x90c30ed4  lbu         $v1, 0xED4($a2)
    ctx->pc = 0x160c4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3796)));
    // 0x160c50: 0x1060003c  beqz        $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x160C50u;
    {
        const bool branch_taken_0x160c50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x160C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160C50u;
        // 0x160c54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160c50) {
            ctx->pc = 0x160D44u;
            goto label_160d44;
        }
    }
    ctx->pc = 0x160C58u;
    // 0x160c58: 0x1062003a  beq         $v1, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x160C58u;
    {
        const bool branch_taken_0x160c58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x160C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160C58u;
        // 0x160c5c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160c58) {
            ctx->pc = 0x160D44u;
            goto label_160d44;
        }
    }
    ctx->pc = 0x160C60u;
    // 0x160c60: 0x14620019  bne         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x160C60u;
    {
        const bool branch_taken_0x160c60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x160C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160C60u;
        // 0x160c64: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160c60) {
            ctx->pc = 0x160CC8u;
            goto label_160cc8;
        }
    }
    ctx->pc = 0x160C68u;
    // 0x160c68: 0x8cc50ed8  lw          $a1, 0xED8($a2)
    ctx->pc = 0x160c68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3800)));
    // 0x160c6c: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x160c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x160c70: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x160c70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x160c74: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x160c74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x160c78: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x160c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x160c7c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x160c7cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160c80: 0x0  nop
    ctx->pc = 0x160c80u;
    // NOP
    // 0x160c84: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x160c84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x160c88: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x160c88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x160c8c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x160c8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x160c90: 0x8cc30ed0  lw          $v1, 0xED0($a2)
    ctx->pc = 0x160c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3792)));
    // 0x160c94: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x160c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x160c98: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x160c98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x160c9c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x160c9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x160ca0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x160ca0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x160ca4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x160ca4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x160ca8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x160ca8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x160cac: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x160cacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x160cb0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x160cb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x160cb4: 0x14a40002  bne         $a1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x160CB4u;
    {
        const bool branch_taken_0x160cb4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x160CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160CB4u;
        // 0x160cb8: 0xacc30ed0  sw          $v1, 0xED0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 3792), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160cb4) {
            ctx->pc = 0x160CC0u;
            goto label_160cc0;
        }
    }
    ctx->pc = 0x160CBCu;
    // 0x160cbc: 0xa0c00ed4  sb          $zero, 0xED4($a2)
    ctx->pc = 0x160cbcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3796), (uint8_t)GPR_U32(ctx, 0));
label_160cc0:
    // 0x160cc0: 0x90c30ed4  lbu         $v1, 0xED4($a2)
    ctx->pc = 0x160cc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3796)));
    // 0x160cc4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x160cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_160cc8:
    // 0x160cc8: 0x5462001c  bnel        $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x160CC8u;
    {
        const bool branch_taken_0x160cc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x160cc8) {
            ctx->pc = 0x160CCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x160CC8u;
            // 0x160ccc: 0x8cc20ed8  lw          $v0, 0xED8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3800)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x160D3Cu;
            goto label_160d3c;
        }
    }
    ctx->pc = 0x160CD0u;
    // 0x160cd0: 0x8cc50ed8  lw          $a1, 0xED8($a2)
    ctx->pc = 0x160cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3800)));
    // 0x160cd4: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x160cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x160cd8: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x160cd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x160cdc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x160cdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x160ce0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x160ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x160ce4: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x160ce4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x160ce8: 0x0  nop
    ctx->pc = 0x160ce8u;
    // NOP
    // 0x160cec: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x160cecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x160cf0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x160cf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x160cf4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x160cf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160cf8: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x160cf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x160cfc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x160cfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x160d00: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x160d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x160d04: 0x8cc30ed0  lw          $v1, 0xED0($a2)
    ctx->pc = 0x160d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3792)));
    // 0x160d08: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x160d08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x160d0c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x160d0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x160d10: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x160d10u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x160d14: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x160d14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x160d18: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x160d18u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x160d1c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x160d1cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x160d20: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x160d20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x160d24: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x160d24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x160d28: 0x14a40003  bne         $a1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x160D28u;
    {
        const bool branch_taken_0x160d28 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x160D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160D28u;
        // 0x160d2c: 0xacc30ed0  sw          $v1, 0xED0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 3792), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160d28) {
            ctx->pc = 0x160D38u;
            goto label_160d38;
        }
    }
    ctx->pc = 0x160D30u;
    // 0x160d30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x160d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160d34: 0xa0c20ed4  sb          $v0, 0xED4($a2)
    ctx->pc = 0x160d34u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3796), (uint8_t)GPR_U32(ctx, 2));
label_160d38:
    // 0x160d38: 0x8cc20ed8  lw          $v0, 0xED8($a2)
    ctx->pc = 0x160d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3800)));
label_160d3c:
    // 0x160d3c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x160d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x160d40: 0xacc20ed8  sw          $v0, 0xED8($a2)
    ctx->pc = 0x160d40u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 3800), GPR_U32(ctx, 2));
label_160d44:
    // 0x160d44: 0x3e00008  jr          $ra
    ctx->pc = 0x160D44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160D44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x160D4Cu;
    // 0x160d4c: 0x0  nop
    ctx->pc = 0x160d4cu;
    // NOP
    ctx->pc = 0x160d50u;
}
