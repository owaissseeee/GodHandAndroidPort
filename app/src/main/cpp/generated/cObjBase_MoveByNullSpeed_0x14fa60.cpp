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

// Function: cObjBase_MoveByNullSpeed
// Address: 0x14fa60 - 0x14fb48
void cObjBase_MoveByNullSpeed_0x14fa60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cObjBase_MoveByNullSpeed_0x14fa60");
#endif

    switch (ctx->pc) {
        case 0x14faf4u: goto label_14faf4;
        default: break;
    }

    ctx->pc = 0x14fa60u;

    // 0x14fa60: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x14fa60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x14fa64: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14fa64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14fa68: 0x8c437a84  lw          $v1, 0x7A84($v0)
    ctx->pc = 0x14fa68u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A84u));
    // 0x14fa6c: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x14fa6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x14fa70: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x14fa70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x14fa74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x14fa74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14fa78: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x14fa78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x14fa7c: 0x1460002c  bnez        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x14FA7Cu;
    {
        const bool branch_taken_0x14fa7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14FA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FA7Cu;
        // 0x14fa80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fa7c) {
            ctx->pc = 0x14FB30u;
            goto label_14fb30;
        }
    }
    ctx->pc = 0x14FA84u;
    // 0x14fa84: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x14fa84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x14fa88: 0xc6030110  lwc1        $f3, 0x110($s0)
    ctx->pc = 0x14fa88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14fa8c: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x14fa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x14fa90: 0xc6010330  lwc1        $f1, 0x330($s0)
    ctx->pc = 0x14fa90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14fa94: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x14fa94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fa98: 0xc6040114  lwc1        $f4, 0x114($s0)
    ctx->pc = 0x14fa98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x14fa9c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x14fa9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14faa0: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x14faa0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x14faa4: 0xc6020334  lwc1        $f2, 0x334($s0)
    ctx->pc = 0x14faa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14faa8: 0xc6000338  lwc1        $f0, 0x338($s0)
    ctx->pc = 0x14faa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14faac: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x14faacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fab0: 0xc6030118  lwc1        $f3, 0x118($s0)
    ctx->pc = 0x14fab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14fab4: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x14fab4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x14fab8: 0x460d0842  mul.s       $f1, $f1, $f13
    ctx->pc = 0x14fab8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[13]);
    // 0x14fabc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14fabcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x14fac0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x14fac0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x14fac4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x14fac4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x14fac8: 0xe7ac0014  swc1        $f12, 0x14($sp)
    ctx->pc = 0x14fac8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x14facc: 0x460d1082  mul.s       $f2, $f2, $f13
    ctx->pc = 0x14faccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[13]);
    // 0x14fad0: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x14fad0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x14fad4: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x14fad4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x14fad8: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x14fad8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14fadc: 0x460d0002  mul.s       $f0, $f0, $f13
    ctx->pc = 0x14fadcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x14fae0: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x14fae0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x14fae4: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x14fae4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x14fae8: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x14fae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x14faec: 0xc05420c  jal         func_150830
    ctx->pc = 0x14FAECu;
    SET_GPR_U32(ctx, 31, 0x14FAF4u);
    ctx->pc = 0x14FAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FAECu;
    // 0x14faf0: 0xe444000c  swc1        $f4, 0xC($v0) (Delay Slot)
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x150830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150830u, 0x14FAECu, 0x14FAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FAF4u;
label_14faf4:
    // 0x14faf4: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x14faf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x14faf8: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x14faf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14fafc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x14fafcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14fb00: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14fb00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x14fb04: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x14fb04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x14fb08: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x14fb08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x14fb0c: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x14fb0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14fb10: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x14fb10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14fb14: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14fb14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x14fb18: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x14fb18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x14fb1c: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x14fb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x14fb20: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x14fb20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14fb24: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x14fb24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14fb28: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14fb28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x14fb2c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x14fb2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_14fb30:
    // 0x14fb30: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x14fb30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14fb34: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14fb34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14fb38: 0x3e00008  jr          $ra
    ctx->pc = 0x14FB38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14FB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FB38u;
        // 0x14fb3c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14FB38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14FB40u;
    // 0x14fb40: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x14fb40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x14fb44: 0x0  nop
    ctx->pc = 0x14fb44u;
    // NOP
    ctx->pc = 0x14fb48u;
}
