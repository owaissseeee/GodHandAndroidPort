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

// Function: func_002D9F68
// Address: 0x2d9f68 - 0x2d9ff8
void func_002D9F68_0x2d9f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002D9F68_0x2d9f68");
#endif

    switch (ctx->pc) {
        case 0x2d9fbcu: goto label_2d9fbc;
        case 0x2d9fdcu: goto label_2d9fdc;
        default: break;
    }

    ctx->pc = 0x2d9f68u;

    // 0x2d9f68: 0x27bdfe10  addiu       $sp, $sp, -0x1F0
    ctx->pc = 0x2d9f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966800));
    // 0x2d9f6c: 0x7fb00170  sq          $s0, 0x170($sp)
    ctx->pc = 0x2d9f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 16));
    // 0x2d9f70: 0x7fb10160  sq          $s1, 0x160($sp)
    ctx->pc = 0x2d9f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 17));
    // 0x2d9f74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d9f74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9f78: 0x7fb20150  sq          $s2, 0x150($sp)
    ctx->pc = 0x2d9f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 18));
    // 0x2d9f7c: 0x27b10100  addiu       $s1, $sp, 0x100
    ctx->pc = 0x2d9f7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2d9f80: 0xffbf0140  sd          $ra, 0x140($sp)
    ctx->pc = 0x2d9f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 31));
    // 0x2d9f84: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2d9f84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9f88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d9f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9f8c: 0x8605023a  lh          $a1, 0x23A($s0)
    ctx->pc = 0x2d9f8cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 570)));
    // 0x2d9f90: 0xffa701c8  sd          $a3, 0x1C8($sp)
    ctx->pc = 0x2d9f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 456), GPR_U64(ctx, 7));
    // 0x2d9f94: 0xffa601c0  sd          $a2, 0x1C0($sp)
    ctx->pc = 0x2d9f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 6));
    // 0x2d9f98: 0xffa801d0  sd          $t0, 0x1D0($sp)
    ctx->pc = 0x2d9f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 464), GPR_U64(ctx, 8));
    // 0x2d9f9c: 0xffa901d8  sd          $t1, 0x1D8($sp)
    ctx->pc = 0x2d9f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 472), GPR_U64(ctx, 9));
    // 0x2d9fa0: 0xffaa01e0  sd          $t2, 0x1E0($sp)
    ctx->pc = 0x2d9fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 480), GPR_U64(ctx, 10));
    // 0x2d9fa4: 0xffab01e8  sd          $t3, 0x1E8($sp)
    ctx->pc = 0x2d9fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 488), GPR_U64(ctx, 11));
    // 0x2d9fa8: 0xe7ac01b0  swc1        $f12, 0x1B0($sp)
    ctx->pc = 0x2d9fa8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
    // 0x2d9fac: 0xe7ae01b4  swc1        $f14, 0x1B4($sp)
    ctx->pc = 0x2d9facu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 436), bits); }
    // 0x2d9fb0: 0xe7b001b8  swc1        $f16, 0x1B8($sp)
    ctx->pc = 0x2d9fb0u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
    // 0x2d9fb4: 0xc0c14f0  jal         func_3053C0
    ctx->pc = 0x2D9FB4u;
    SET_GPR_U32(ctx, 31, 0x2D9FBCu);
    ctx->pc = 0x2D9FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9FB4u;
    // 0x2d9fb8: 0xe7b201bc  swc1        $f18, 0x1BC($sp) (Delay Slot)
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 444), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3053C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3053C0u, 0x2D9FB4u, 0x2D9FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9FBCu;
label_2d9fbc:
    // 0x2d9fbc: 0x9607023c  lhu         $a3, 0x23C($s0)
    ctx->pc = 0x2d9fbcu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 572)));
    // 0x2d9fc0: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2d9fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2d9fc4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2d9fc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9fc8: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x2d9fc8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9fcc: 0x24a5d3b0  addiu       $a1, $a1, -0x2C50
    ctx->pc = 0x2d9fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955952));
    // 0x2d9fd0: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2d9fd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2d9fd4: 0xc0e9b16  jal         func_3A6C58
    ctx->pc = 0x2D9FD4u;
    SET_GPR_U32(ctx, 31, 0x2D9FDCu);
    ctx->pc = 0x2D9FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9FD4u;
    // 0x2d9fd8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6C58u, 0x2D9FD4u, 0x2D9FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9FDCu;
label_2d9fdc:
    // 0x2d9fdc: 0x7bb00170  lq          $s0, 0x170($sp)
    ctx->pc = 0x2d9fdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2d9fe0: 0x7bb10160  lq          $s1, 0x160($sp)
    ctx->pc = 0x2d9fe0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2d9fe4: 0x7bb20150  lq          $s2, 0x150($sp)
    ctx->pc = 0x2d9fe4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2d9fe8: 0xdfbf0140  ld          $ra, 0x140($sp)
    ctx->pc = 0x2d9fe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2d9fec: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9FECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9FECu;
        // 0x2d9ff0: 0x27bd01f0  addiu       $sp, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9FECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D9FF4u;
    // 0x2d9ff4: 0x0  nop
    ctx->pc = 0x2d9ff4u;
    // NOP
    ctx->pc = 0x2d9ff8u;
}
