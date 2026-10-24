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

// Function: cOmBase_shakeHeight
// Address: 0x1810a0 - 0x181118
void cOmBase_shakeHeight_0x1810a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmBase_shakeHeight_0x1810a0");
#endif

    switch (ctx->pc) {
        case 0x1810d4u: goto label_1810d4;
        default: break;
    }

    ctx->pc = 0x1810a0u;

    // 0x1810a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1810a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1810a4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1810a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1810a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1810a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1810ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1810acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1810b0: 0x86020600  lh          $v0, 0x600($s0)
    ctx->pc = 0x1810b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x1810b4: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1810B4u;
    {
        const bool branch_taken_0x1810b4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1810B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1810B4u;
        // 0x1810b8: 0x96030600  lhu         $v1, 0x600($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1536)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1810b4) {
            ctx->pc = 0x181104u;
            goto label_181104;
        }
    }
    ctx->pc = 0x1810BCu;
    // 0x1810bc: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x1810bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1810c0: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1810c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1810c4: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1810C4u;
    {
        const bool branch_taken_0x1810c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1810C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1810C4u;
        // 0x1810c8: 0xa6020600  sh          $v0, 0x600($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1536), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1810c4) {
            ctx->pc = 0x1810F8u;
            goto label_1810f8;
        }
    }
    ctx->pc = 0x1810CCu;
    // 0x1810cc: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1810CCu;
    SET_GPR_U32(ctx, 31, 0x1810D4u);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1810CCu, 0x1810D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1810D4u;
label_1810d4:
    // 0x1810d4: 0x3c013c75  lui         $at, 0x3C75
    ctx->pc = 0x1810d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15477 << 16));
    // 0x1810d8: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1810d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x1810dc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1810dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1810e0: 0xc6010604  lwc1        $f1, 0x604($s0)
    ctx->pc = 0x1810e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1810e4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1810e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1810e8: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x1810e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x1810ec: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1810ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1810f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1810F0u;
    {
        const bool branch_taken_0x1810f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1810F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1810F0u;
        // 0x1810f4: 0xe4410004  swc1        $f1, 0x4($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1810f0) {
            ctx->pc = 0x181104u;
            goto label_181104;
        }
    }
    ctx->pc = 0x1810F8u;
label_1810f8:
    // 0x1810f8: 0xc6000604  lwc1        $f0, 0x604($s0)
    ctx->pc = 0x1810f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1810fc: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x1810fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x181100: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x181100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_181104:
    // 0x181104: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x181104u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181108: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x181108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18110c: 0x3e00008  jr          $ra
    ctx->pc = 0x18110Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18110Cu;
        // 0x181110: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18110Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x181114u;
    // 0x181114: 0x0  nop
    ctx->pc = 0x181114u;
    // NOP
    ctx->pc = 0x181118u;
}
