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

// Function: cCoreSave_getLevelProgress
// Address: 0x1fa080 - 0x1fa148
void cCoreSave_getLevelProgress_0x1fa080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_getLevelProgress_0x1fa080");
#endif

    switch (ctx->pc) {
        case 0x1fa0b0u: goto label_1fa0b0;
        default: break;
    }

    ctx->pc = 0x1fa080u;

    // 0x1fa080: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fa080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fa084: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1fa084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1fa088: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fa088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fa08c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fa08cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa090: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1fa090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fa094: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FA094u;
    {
        const bool branch_taken_0x1fa094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fa094) {
            ctx->pc = 0x1FA0A8u;
            goto label_1fa0a8;
        }
    }
    ctx->pc = 0x1FA09Cu;
    // 0x1fa09c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1fa09cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fa0a0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1FA0A0u;
    {
        const bool branch_taken_0x1fa0a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA0A0u;
        // 0x1fa0a4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa0a0) {
            ctx->pc = 0x1FA138u;
            goto label_1fa138;
        }
    }
    ctx->pc = 0x1FA0A8u;
label_1fa0a8:
    // 0x1fa0a8: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x1FA0A8u;
    SET_GPR_U32(ctx, 31, 0x1FA0B0u);
    ctx->pc = 0x1FA0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA0A8u;
    // 0x1fa0ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x1FA0A8u, 0x1FA0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA0B0u;
label_1fa0b0:
    // 0x1fa0b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fa0b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa0b4: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x1fa0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x1fa0b8: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x1fa0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1fa0bc: 0x2446f160  addiu       $a2, $v0, -0xEA0
    ctx->pc = 0x1fa0bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963552));
    // 0x1fa0c0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1fa0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fa0c4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1fa0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1fa0c8: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FA0C8u;
    {
        const bool branch_taken_0x1fa0c8 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x1FA0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA0C8u;
        // 0x1fa0cc: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa0c8) {
            ctx->pc = 0x1FA0D8u;
            goto label_1fa0d8;
        }
    }
    ctx->pc = 0x1FA0D0u;
    // 0x1fa0d0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1FA0D0u;
    {
        const bool branch_taken_0x1fa0d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA0D0u;
        // 0x1fa0d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa0d0) {
            ctx->pc = 0x1FA0E8u;
            goto label_1fa0e8;
        }
    }
    ctx->pc = 0x1FA0D8u;
label_1fa0d8:
    // 0x1fa0d8: 0x2482fffe  addiu       $v0, $a0, -0x2
    ctx->pc = 0x1fa0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
    // 0x1fa0dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1fa0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fa0e0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1fa0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1fa0e4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1fa0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1fa0e8:
    // 0x1fa0e8: 0xa41023  subu        $v0, $a1, $a0
    ctx->pc = 0x1fa0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1fa0ec: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1fa0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fa0f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1fa0f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fa0f4: 0x0  nop
    ctx->pc = 0x1fa0f4u;
    // NOP
    // 0x1fa0f8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1fa0f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1fa0fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1fa0fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fa100: 0x8462001c  lh          $v0, 0x1C($v1)
    ctx->pc = 0x1fa100u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1fa104: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1fa104u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fa108: 0x0  nop
    ctx->pc = 0x1fa108u;
    // NOP
    // 0x1fa10c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1FA10Cu;
    {
        const bool branch_taken_0x1fa10c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1FA110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA10Cu;
        // 0x1fa110: 0x441023  subu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa10c) {
            ctx->pc = 0x1FA11Cu;
            goto label_1fa11c;
        }
    }
    ctx->pc = 0x1FA114u;
    // 0x1fa114: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x1fa114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x1fa118: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1fa118u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1fa11c:
    // 0x1fa11c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fa11cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fa120: 0x0  nop
    ctx->pc = 0x1fa120u;
    // NOP
    // 0x1fa124: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1fa124u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1fa128: 0x0  nop
    ctx->pc = 0x1fa128u;
    // NOP
    // 0x1fa12c: 0x0  nop
    ctx->pc = 0x1fa12cu;
    // NOP
    // 0x1fa130: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1fa130u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x1fa134: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1fa134u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fa138:
    // 0x1fa138: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fa138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fa13c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FA13Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FA140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA13Cu;
        // 0x1fa140: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA13Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FA144u;
    // 0x1fa144: 0x0  nop
    ctx->pc = 0x1fa144u;
    // NOP
    ctx->pc = 0x1fa148u;
}
