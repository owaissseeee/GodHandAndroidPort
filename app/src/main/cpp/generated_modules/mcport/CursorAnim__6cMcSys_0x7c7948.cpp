#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: CursorAnim__6cMcSys
// Address: 0x7c7948 - 0x7c7a40
void CursorAnim__6cMcSys_0x7c7948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CursorAnim__6cMcSys_0x7c7948");
#endif

    switch (ctx->pc) {
        case 0x7c7980u: goto label_7c7980;
        case 0x7c7998u: goto label_7c7998;
        case 0x7c79c0u: goto label_7c79c0;
        case 0x7c79dcu: goto label_7c79dc;
        case 0x7c79f4u: goto label_7c79f4;
        case 0x7c7a1cu: goto label_7c7a1c;
        default: break;
    }

    ctx->pc = 0x7c7948u;

    // 0x7c7948: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x7c7948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x7c794c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x7c794cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x7c7950: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x7c7950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x7c7954: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7c7954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7c7958: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x7c7958u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x7c795c: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x7c795cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x7c7960: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x7c7960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x7c7964: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x7C7964u;
    {
        const bool branch_taken_0x7c7964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C7968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C7964u;
        // 0x7c7968: 0x24900020  addiu       $s0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c7964) {
            ctx->pc = 0x7C7A2Cu;
            goto label_7c7a2c;
        }
    }
    ctx->pc = 0x7C796Cu;
    // 0x7c796c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7c796cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c7970: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x7c7970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x7c7974: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x7c7974u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x7c7978: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x7C7978u;
    SET_GPR_U32(ctx, 31, 0x7C7980u);
    ctx->pc = 0x7C797Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C7978u;
    // 0x7c797c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x7C7978u, 0x7C7980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C7980u;
label_7c7980:
    // 0x7c7980: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x7c7980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7c7984: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c7984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c7988: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7c7988u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c798c: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x7c798cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x7c7990: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x7C7990u;
    SET_GPR_U32(ctx, 31, 0x7C7998u);
    ctx->pc = 0x7C7994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C7990u;
    // 0x7c7994: 0xe440003c  swc1        $f0, 0x3C($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x7C7990u, 0x7C7998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C7998u;
label_7c7998:
    // 0x7c7998: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x7c7998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x7c799c: 0x3c014296  lui         $at, 0x4296
    ctx->pc = 0x7c799cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17046 << 16));
    // 0x7c79a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x7c79a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7c79a4: 0x0  nop
    ctx->pc = 0x7c79a4u;
    // NOP
    // 0x7c79a8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x7c79a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x7c79ac: 0x0  nop
    ctx->pc = 0x7c79acu;
    // NOP
    // 0x7c79b0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x7C79B0u;
    {
        const bool branch_taken_0x7c79b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x7C79B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C79B0u;
        // 0x7c79b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c79b0) {
            ctx->pc = 0x7C79D0u;
            goto label_7c79d0;
        }
    }
    ctx->pc = 0x7C79B8u;
    // 0x7c79b8: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x7C79B8u;
    SET_GPR_U32(ctx, 31, 0x7C79C0u);
    ctx->pc = 0x7C79BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C79B8u;
    // 0x7c79bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x7C79B8u, 0x7C79C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C79C0u;
label_7c79c0:
    // 0x7c79c0: 0x3c0142a2  lui         $at, 0x42A2
    ctx->pc = 0x7c79c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17058 << 16));
    // 0x7c79c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x7c79c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7c79c8: 0x0  nop
    ctx->pc = 0x7c79c8u;
    // NOP
    // 0x7c79cc: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x7c79ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
label_7c79d0:
    // 0x7c79d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c79d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c79d4: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x7C79D4u;
    SET_GPR_U32(ctx, 31, 0x7C79DCu);
    ctx->pc = 0x7C79D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C79D4u;
    // 0x7c79d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x7C79D4u, 0x7C79DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C79DCu;
label_7c79dc:
    // 0x7c79dc: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x7c79dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7c79e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c79e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c79e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7c79e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c79e8: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x7c79e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x7c79ec: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x7C79ECu;
    SET_GPR_U32(ctx, 31, 0x7C79F4u);
    ctx->pc = 0x7C79F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C79ECu;
    // 0x7c79f0: 0xe440003c  swc1        $f0, 0x3C($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x7C79ECu, 0x7C79F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C79F4u;
label_7c79f4:
    // 0x7c79f4: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x7c79f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x7c79f8: 0x3c0143ab  lui         $at, 0x43AB
    ctx->pc = 0x7c79f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17323 << 16));
    // 0x7c79fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x7c79fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7c7a00: 0x0  nop
    ctx->pc = 0x7c7a00u;
    // NOP
    // 0x7c7a04: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x7c7a04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x7c7a08: 0x0  nop
    ctx->pc = 0x7c7a08u;
    // NOP
    // 0x7c7a0c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x7C7A0Cu;
    {
        const bool branch_taken_0x7c7a0c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x7C7A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C7A0Cu;
        // 0x7c7a10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c7a0c) {
            ctx->pc = 0x7C7A2Cu;
            goto label_7c7a2c;
        }
    }
    ctx->pc = 0x7C7A14u;
    // 0x7c7a14: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x7C7A14u;
    SET_GPR_U32(ctx, 31, 0x7C7A1Cu);
    ctx->pc = 0x7C7A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C7A14u;
    // 0x7c7a18: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x7C7A14u, 0x7C7A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C7A1Cu;
label_7c7a1c:
    // 0x7c7a1c: 0x3c0143a8  lui         $at, 0x43A8
    ctx->pc = 0x7c7a1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17320 << 16));
    // 0x7c7a20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x7c7a20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7c7a24: 0x0  nop
    ctx->pc = 0x7c7a24u;
    // NOP
    // 0x7c7a28: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x7c7a28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
label_7c7a2c:
    // 0x7c7a2c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x7c7a2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7c7a30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c7a30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c7a34: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x7c7a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x7c7a38: 0x3e00008  jr          $ra
    ctx->pc = 0x7C7A38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C7A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C7A38u;
        // 0x7c7a3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C7A38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C7A40u;
}
} // namespace gh_mcport
