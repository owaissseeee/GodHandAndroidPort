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

// Function: func_0030AA40
// Address: 0x30aa40 - 0x30ab48
void func_0030AA40_0x30aa40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0030AA40_0x30aa40");
#endif

    switch (ctx->pc) {
        case 0x30aac8u: goto label_30aac8;
        case 0x30aaf0u: goto label_30aaf0;
        case 0x30ab18u: goto label_30ab18;
        default: break;
    }

    ctx->pc = 0x30aa40u;

    // 0x30aa40: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x30aa40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x30aa44: 0x46008807  neg.s       $f0, $f17
    ctx->pc = 0x30aa44u;
    ctx->f[0] = FPU_NEG_S(ctx->f[17]);
    // 0x30aa48: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x30aa48u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x30aa4c: 0x46009507  neg.s       $f20, $f18
    ctx->pc = 0x30aa4cu;
    ctx->f[20] = FPU_NEG_S(ctx->f[18]);
    // 0x30aa50: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x30aa50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30aa54: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x30aa54u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x30aa58: 0x46120000  add.s       $f0, $f0, $f18
    ctx->pc = 0x30aa58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[18]);
    // 0x30aa5c: 0x46130d42  mul.s       $f21, $f1, $f19
    ctx->pc = 0x30aa5cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[19]);
    // 0x30aa60: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x30aa60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x30aa64: 0x4613a502  mul.s       $f20, $f20, $f19
    ctx->pc = 0x30aa64u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[19]);
    // 0x30aa68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x30aa68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30aa6c: 0x46018c42  mul.s       $f17, $f17, $f1
    ctx->pc = 0x30aa6cu;
    ctx->f[17] = FPU_MUL_S(ctx->f[17], ctx->f[1]);
    // 0x30aa70: 0xe7ba0090  swc1        $f26, 0x90($sp)
    ctx->pc = 0x30aa70u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x30aa74: 0x46009cc7  neg.s       $f19, $f19
    ctx->pc = 0x30aa74u;
    ctx->f[19] = FPU_NEG_S(ctx->f[19]);
    // 0x30aa78: 0xe7b90088  swc1        $f25, 0x88($sp)
    ctx->pc = 0x30aa78u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x30aa7c: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x30aa7cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x30aa80: 0xe7b80080  swc1        $f24, 0x80($sp)
    ctx->pc = 0x30aa80u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x30aa84: 0x4611a500  add.s       $f20, $f20, $f17
    ctx->pc = 0x30aa84u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[17]);
    // 0x30aa88: 0xe7b70078  swc1        $f23, 0x78($sp)
    ctx->pc = 0x30aa88u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x30aa8c: 0x46019cc0  add.s       $f19, $f19, $f1
    ctx->pc = 0x30aa8cu;
    ctx->f[19] = FPU_ADD_S(ctx->f[19], ctx->f[1]);
    // 0x30aa90: 0xe7b60070  swc1        $f22, 0x70($sp)
    ctx->pc = 0x30aa90u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x30aa94: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x30aa94u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x30aa98: 0x46006e06  mov.s       $f24, $f13
    ctx->pc = 0x30aa98u;
    ctx->f[24] = FPU_MOV_S(ctx->f[13]);
    // 0x30aa9c: 0x460075c6  mov.s       $f23, $f14
    ctx->pc = 0x30aa9cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[14]);
    // 0x30aaa0: 0x46007e86  mov.s       $f26, $f15
    ctx->pc = 0x30aaa0u;
    ctx->f[26] = FPU_MOV_S(ctx->f[15]);
    // 0x30aaa4: 0x0  nop
    ctx->pc = 0x30aaa4u;
    // NOP
    // 0x30aaa8: 0x0  nop
    ctx->pc = 0x30aaa8u;
    // NOP
    // 0x30aaac: 0x4613ad43  div.s       $f21, $f21, $f19
    ctx->pc = 0x30aaacu;
    ctx->f[21] = ps2FpuDivide(ctx->fcr31, ctx->f[21], ctx->f[19]);
    // 0x30aab0: 0x0  nop
    ctx->pc = 0x30aab0u;
    // NOP
    // 0x30aab4: 0x0  nop
    ctx->pc = 0x30aab4u;
    // NOP
    // 0x30aab8: 0x4613a503  div.s       $f20, $f20, $f19
    ctx->pc = 0x30aab8u;
    ctx->f[20] = ps2FpuDivide(ctx->fcr31, ctx->f[20], ctx->f[19]);
    // 0x30aabc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x30aabcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x30aac0: 0xc0c2968  jal         func_30A5A0
    ctx->pc = 0x30AAC0u;
    SET_GPR_U32(ctx, 31, 0x30AAC8u);
    ctx->pc = 0x30AAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AAC0u;
    // 0x30aac4: 0x46008646  mov.s       $f25, $f16 (Delay Slot)
    ctx->f[25] = FPU_MOV_S(ctx->f[16]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A5A0u, 0x30AAC0u, 0x30AAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AAC8u;
label_30aac8:
    // 0x30aac8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x30aac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x30aacc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30aaccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30aad0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x30aad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30aad4: 0xe6160014  swc1        $f22, 0x14($s0)
    ctx->pc = 0x30aad4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x30aad8: 0xe6160000  swc1        $f22, 0x0($s0)
    ctx->pc = 0x30aad8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x30aadc: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x30aadcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x30aae0: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x30aae0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x30aae4: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x30aae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x30aae8: 0xc0c2968  jal         func_30A5A0
    ctx->pc = 0x30AAE8u;
    SET_GPR_U32(ctx, 31, 0x30AAF0u);
    ctx->pc = 0x30AAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AAE8u;
    // 0x30aaec: 0xe6000038  swc1        $f0, 0x38($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A5A0u, 0x30AAE8u, 0x30AAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AAF0u;
label_30aaf0:
    // 0x30aaf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30aaf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30aaf4: 0xe7b80000  swc1        $f24, 0x0($sp)
    ctx->pc = 0x30aaf4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x30aaf8: 0xe7b70014  swc1        $f23, 0x14($sp)
    ctx->pc = 0x30aaf8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x30aafc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x30aafcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ab00: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x30ab00u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x30ab04: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x30ab04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ab08: 0xe7ba0030  swc1        $f26, 0x30($sp)
    ctx->pc = 0x30ab08u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x30ab0c: 0xe7b90034  swc1        $f25, 0x34($sp)
    ctx->pc = 0x30ab0cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x30ab10: 0xc0c28b8  jal         func_30A2E0
    ctx->pc = 0x30AB10u;
    SET_GPR_U32(ctx, 31, 0x30AB18u);
    ctx->pc = 0x30AB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AB10u;
    // 0x30ab14: 0xe7b40038  swc1        $f20, 0x38($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2E0u, 0x30AB10u, 0x30AB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AB18u;
label_30ab18:
    // 0x30ab18: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x30ab18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30ab1c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x30ab1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30ab20: 0xc7ba0090  lwc1        $f26, 0x90($sp)
    ctx->pc = 0x30ab20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x30ab24: 0xc7b90088  lwc1        $f25, 0x88($sp)
    ctx->pc = 0x30ab24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x30ab28: 0xc7b80080  lwc1        $f24, 0x80($sp)
    ctx->pc = 0x30ab28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x30ab2c: 0xc7b70078  lwc1        $f23, 0x78($sp)
    ctx->pc = 0x30ab2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x30ab30: 0xc7b60070  lwc1        $f22, 0x70($sp)
    ctx->pc = 0x30ab30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x30ab34: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x30ab34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x30ab38: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x30ab38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x30ab3c: 0x3e00008  jr          $ra
    ctx->pc = 0x30AB3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30AB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AB3Cu;
        // 0x30ab40: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30AB3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30AB44u;
    // 0x30ab44: 0x0  nop
    ctx->pc = 0x30ab44u;
    // NOP
    ctx->pc = 0x30ab48u;
}
