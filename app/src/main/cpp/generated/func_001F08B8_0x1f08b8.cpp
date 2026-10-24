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

// Function: func_001F08B8
// Address: 0x1f08b8 - 0x1f0978
void func_001F08B8_0x1f08b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001F08B8_0x1f08b8");
#endif

    switch (ctx->pc) {
        case 0x1f0904u: goto label_1f0904;
        case 0x1f092cu: goto label_1f092c;
        case 0x1f095cu: goto label_1f095c;
        default: break;
    }

    ctx->pc = 0x1f08b8u;

    // 0x1f08b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f08b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f08bc: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1f08bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x1f08c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f08c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f08c4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f08c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f08c8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1f08c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f08cc: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x1f08ccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1f08d0: 0x240503ed  addiu       $a1, $zero, 0x3ED
    ctx->pc = 0x1f08d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1005));
    // 0x1f08d4: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x1f08d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1f08d8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1f08d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f08dc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1f08dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1f08e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f08e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f08e4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1f08e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1f08e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f08e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f08ec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f08ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f08f0: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1f08f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1f08f4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1f08f4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1f08f8: 0xe7b5000c  swc1        $f21, 0xC($sp)
    ctx->pc = 0x1f08f8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1f08fc: 0xc07c126  jal         func_1F0498
    ctx->pc = 0x1F08FCu;
    SET_GPR_U32(ctx, 31, 0x1F0904u);
    ctx->pc = 0x1F0900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F08FCu;
    // 0x1f0900: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0498u, 0x1F08FCu, 0x1F0904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0904u;
label_1f0904:
    // 0x1f0904: 0xae020c64  sw          $v0, 0xC64($s0)
    ctx->pc = 0x1f0904u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3172), GPR_U32(ctx, 2));
    // 0x1f0908: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1f0908u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f090c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1f090cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1f0910: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f0910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0914: 0xe7b40004  swc1        $f20, 0x4($sp)
    ctx->pc = 0x1f0914u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1f0918: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1f0918u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1f091c: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x1f091cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1f0920: 0x240503ed  addiu       $a1, $zero, 0x3ED
    ctx->pc = 0x1f0920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1005));
    // 0x1f0924: 0xc07c126  jal         func_1F0498
    ctx->pc = 0x1F0924u;
    SET_GPR_U32(ctx, 31, 0x1F092Cu);
    ctx->pc = 0x1F0928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0924u;
    // 0x1f0928: 0xe7b5000c  swc1        $f21, 0xC($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0498u, 0x1F0924u, 0x1F092Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F092Cu;
label_1f092c:
    // 0x1f092c: 0x3c01c0a0  lui         $at, 0xC0A0
    ctx->pc = 0x1f092cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49312 << 16));
    // 0x1f0930: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f0930u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0934: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1f0934u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1f0938: 0xae020c68  sw          $v0, 0xC68($s0)
    ctx->pc = 0x1f0938u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3176), GPR_U32(ctx, 2));
    // 0x1f093c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f093cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0940: 0xe7b5000c  swc1        $f21, 0xC($sp)
    ctx->pc = 0x1f0940u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1f0944: 0x240503ed  addiu       $a1, $zero, 0x3ED
    ctx->pc = 0x1f0944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1005));
    // 0x1f0948: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1f0948u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1f094c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1f094cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0950: 0xe7b40004  swc1        $f20, 0x4($sp)
    ctx->pc = 0x1f0950u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1f0954: 0xc07c126  jal         func_1F0498
    ctx->pc = 0x1F0954u;
    SET_GPR_U32(ctx, 31, 0x1F095Cu);
    ctx->pc = 0x1F0958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0954u;
    // 0x1f0958: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0498u, 0x1F0954u, 0x1F095Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F095Cu;
label_1f095c:
    // 0x1f095c: 0xae020c6c  sw          $v0, 0xC6C($s0)
    ctx->pc = 0x1f095cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3180), GPR_U32(ctx, 2));
    // 0x1f0960: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1f0960u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f0964: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f0964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f0968: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x1f0968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1f096c: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x1f096cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f0970: 0x3e00008  jr          $ra
    ctx->pc = 0x1F0970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0970u;
        // 0x1f0974: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F0978u;
}
