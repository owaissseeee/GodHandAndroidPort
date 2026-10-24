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

// Function: Ang_blendLate
// Address: 0x2da8d8 - 0x2da940
void Ang_blendLate_0x2da8d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Ang_blendLate_0x2da8d8");
#endif

    switch (ctx->pc) {
        case 0x2da8fcu: goto label_2da8fc;
        case 0x2da908u: goto label_2da908;
        case 0x2da910u: goto label_2da910;
        case 0x2da91cu: goto label_2da91c;
        default: break;
    }

    ctx->pc = 0x2da8d8u;

    // 0x2da8d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2da8d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2da8dc: 0xe7b50018  swc1        $f21, 0x18($sp)
    ctx->pc = 0x2da8dcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2da8e0: 0xe7b60020  swc1        $f22, 0x20($sp)
    ctx->pc = 0x2da8e0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2da8e4: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x2da8e4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x2da8e8: 0x46007586  mov.s       $f22, $f14
    ctx->pc = 0x2da8e8u;
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
    // 0x2da8ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2da8ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2da8f0: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x2da8f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2da8f4: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x2DA8F4u;
    SET_GPR_U32(ctx, 31, 0x2DA8FCu);
    ctx->pc = 0x2DA8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA8F4u;
    // 0x2da8f8: 0x46006b06  mov.s       $f12, $f13 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x2DA8F4u, 0x2DA8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA8FCu;
label_2da8fc:
    // 0x2da8fc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2da8fcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2da900: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x2DA900u;
    SET_GPR_U32(ctx, 31, 0x2DA908u);
    ctx->pc = 0x2DA904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA900u;
    // 0x2da904: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x2DA900u, 0x2DA908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA908u;
label_2da908:
    // 0x2da908: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x2DA908u;
    SET_GPR_U32(ctx, 31, 0x2DA910u);
    ctx->pc = 0x2DA90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA908u;
    // 0x2da90c: 0x46140301  sub.s       $f12, $f0, $f20 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x2DA908u, 0x2DA910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA910u;
label_2da910:
    // 0x2da910: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x2da910u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x2da914: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x2DA914u;
    SET_GPR_U32(ctx, 31, 0x2DA91Cu);
    ctx->pc = 0x2DA918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA914u;
    // 0x2da918: 0x4600a300  add.s       $f12, $f20, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x2DA914u, 0x2DA91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA91Cu;
label_2da91c:
    // 0x2da91c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2da91cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2da920: 0xc7b60020  lwc1        $f22, 0x20($sp)
    ctx->pc = 0x2da920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2da924: 0xc7b50018  lwc1        $f21, 0x18($sp)
    ctx->pc = 0x2da924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2da928: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x2da928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2da92c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DA92Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DA930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA92Cu;
        // 0x2da930: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DA92Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DA934u;
    // 0x2da934: 0x0  nop
    ctx->pc = 0x2da934u;
    // NOP
    // 0x2da938: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2da938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2da93c: 0x0  nop
    ctx->pc = 0x2da93cu;
    // NOP
    ctx->pc = 0x2da940u;
}
