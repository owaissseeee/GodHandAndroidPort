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

// Function: func_00133AA8
// Address: 0x133aa8 - 0x133b28
void func_00133AA8_0x133aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00133AA8_0x133aa8");
#endif

    switch (ctx->pc) {
        case 0x133ac8u: goto label_133ac8;
        default: break;
    }

    ctx->pc = 0x133aa8u;

    // 0x133aa8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x133aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x133aac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x133aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x133ab0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x133ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x133ab4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x133ab4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133ab8: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x133ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x133abc: 0x26060050  addiu       $a2, $s0, 0x50
    ctx->pc = 0x133abcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x133ac0: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x133AC0u;
    SET_GPR_U32(ctx, 31, 0x133AC8u);
    ctx->pc = 0x133AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133AC0u;
    // 0x133ac4: 0x8e050040  lw          $a1, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x133AC0u, 0x133AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133AC8u;
label_133ac8:
    // 0x133ac8: 0xc6000070  lwc1        $f0, 0x70($s0)
    ctx->pc = 0x133ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133acc: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x133accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x133ad0: 0xc6010060  lwc1        $f1, 0x60($s0)
    ctx->pc = 0x133ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x133ad4: 0xc6020064  lwc1        $f2, 0x64($s0)
    ctx->pc = 0x133ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x133ad8: 0xc6030068  lwc1        $f3, 0x68($s0)
    ctx->pc = 0x133ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x133adc: 0x46000900  add.s       $f4, $f1, $f0
    ctx->pc = 0x133adcu;
    ctx->f[4] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x133ae0: 0x46001180  add.s       $f6, $f2, $f0
    ctx->pc = 0x133ae0u;
    ctx->f[6] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x133ae4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x133ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x133ae8: 0x46001940  add.s       $f5, $f3, $f0
    ctx->pc = 0x133ae8u;
    ctx->f[5] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x133aec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x133aecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133af0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x133af0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x133af4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x133af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x133af8: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x133af8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x133afc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x133afcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x133b00: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x133b00u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x133b04: 0xe6040020  swc1        $f4, 0x20($s0)
    ctx->pc = 0x133b04u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x133b08: 0xe6010010  swc1        $f1, 0x10($s0)
    ctx->pc = 0x133b08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x133b0c: 0xe6020014  swc1        $f2, 0x14($s0)
    ctx->pc = 0x133b0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x133b10: 0xe6030018  swc1        $f3, 0x18($s0)
    ctx->pc = 0x133b10u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x133b14: 0xe6060024  swc1        $f6, 0x24($s0)
    ctx->pc = 0x133b14u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x133b18: 0xe6050028  swc1        $f5, 0x28($s0)
    ctx->pc = 0x133b18u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x133b1c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x133b1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x133b20: 0x3e00008  jr          $ra
    ctx->pc = 0x133B20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x133B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133B20u;
        // 0x133b24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133B20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x133B28u;
}
