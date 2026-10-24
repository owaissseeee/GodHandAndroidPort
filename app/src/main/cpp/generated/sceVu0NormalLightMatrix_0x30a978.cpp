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

// Function: sceVu0NormalLightMatrix
// Address: 0x30a978 - 0x30aa40
void sceVu0NormalLightMatrix_0x30a978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceVu0NormalLightMatrix_0x30a978");
#endif

    switch (ctx->pc) {
        case 0x30a9b0u: goto label_30a9b0;
        case 0x30a9bcu: goto label_30a9bc;
        case 0x30a9ccu: goto label_30a9cc;
        case 0x30a9d8u: goto label_30a9d8;
        case 0x30a9e8u: goto label_30a9e8;
        case 0x30a9f4u: goto label_30a9f4;
        case 0x30aa1cu: goto label_30aa1c;
        default: break;
    }

    ctx->pc = 0x30a978u;

    // 0x30a978: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x30a978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x30a97c: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x30a97cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x30a980: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x30a980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x30a984: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x30a984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x30a988: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x30a988u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x30a98c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x30a98cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a990: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x30a990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x30a994: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x30a994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a998: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30a998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x30a99c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x30a99cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a9a0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x30a9a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a9a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30a9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30a9a8: 0xc0c293a  jal         func_30A4E8
    ctx->pc = 0x30A9A8u;
    SET_GPR_U32(ctx, 31, 0x30A9B0u);
    ctx->pc = 0x30A9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A9A8u;
    // 0x30a9ac: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A4E8u, 0x30A9A8u, 0x30A9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A9B0u;
label_30a9b0:
    // 0x30a9b0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x30a9b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a9b4: 0xc0c28dc  jal         func_30A370
    ctx->pc = 0x30A9B4u;
    SET_GPR_U32(ctx, 31, 0x30A9BCu);
    ctx->pc = 0x30A9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A9B4u;
    // 0x30a9b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A370u, 0x30A9B4u, 0x30A9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A9BCu;
label_30a9bc:
    // 0x30a9bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x30a9bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a9c0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x30a9c0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x30a9c4: 0xc0c293a  jal         func_30A4E8
    ctx->pc = 0x30A9C4u;
    SET_GPR_U32(ctx, 31, 0x30A9CCu);
    ctx->pc = 0x30A9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A9C4u;
    // 0x30a9c8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A4E8u, 0x30A9C4u, 0x30A9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A9CCu;
label_30a9cc:
    // 0x30a9cc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x30a9ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a9d0: 0xc0c28dc  jal         func_30A370
    ctx->pc = 0x30A9D0u;
    SET_GPR_U32(ctx, 31, 0x30A9D8u);
    ctx->pc = 0x30A9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A9D0u;
    // 0x30a9d4: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A370u, 0x30A9D0u, 0x30A9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A9D8u;
label_30a9d8:
    // 0x30a9d8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x30a9d8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x30a9dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x30a9dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a9e0: 0xc0c293a  jal         func_30A4E8
    ctx->pc = 0x30A9E0u;
    SET_GPR_U32(ctx, 31, 0x30A9E8u);
    ctx->pc = 0x30A9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A9E0u;
    // 0x30a9e4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A4E8u, 0x30A9E0u, 0x30A9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A9E8u;
label_30a9e8:
    // 0x30a9e8: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x30a9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x30a9ec: 0xc0c28dc  jal         func_30A370
    ctx->pc = 0x30A9ECu;
    SET_GPR_U32(ctx, 31, 0x30A9F4u);
    ctx->pc = 0x30A9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A9ECu;
    // 0x30a9f0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A370u, 0x30A9ECu, 0x30A9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A9F4u;
label_30a9f4:
    // 0x30a9f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x30a9f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30a9f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30a9f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a9fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x30a9fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x30aa00: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x30aa00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30aa04: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x30aa04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30aa08: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x30aa08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x30aa0c: 0xe601003c  swc1        $f1, 0x3C($s0)
    ctx->pc = 0x30aa0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x30aa10: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x30aa10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x30aa14: 0xc0c28ec  jal         func_30A3B0
    ctx->pc = 0x30AA14u;
    SET_GPR_U32(ctx, 31, 0x30AA1Cu);
    ctx->pc = 0x30AA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AA14u;
    // 0x30aa18: 0xe6000034  swc1        $f0, 0x34($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A3B0u, 0x30AA14u, 0x30AA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AA1Cu;
label_30aa1c:
    // 0x30aa1c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x30aa1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30aa20: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x30aa20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30aa24: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30aa24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30aa28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30aa28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30aa2c: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x30aa2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x30aa30: 0x3e00008  jr          $ra
    ctx->pc = 0x30AA30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30AA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AA30u;
        // 0x30aa34: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30AA30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30AA38u;
    // 0x30aa38: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x30aa38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x30aa3c: 0x0  nop
    ctx->pc = 0x30aa3cu;
    // NOP
    ctx->pc = 0x30aa40u;
}
