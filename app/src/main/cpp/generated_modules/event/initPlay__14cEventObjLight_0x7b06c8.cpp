#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: initPlay__14cEventObjLight
// Address: 0x7b06c8 - 0x7b0730
void initPlay__14cEventObjLight_0x7b06c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("initPlay__14cEventObjLight_0x7b06c8");
#endif

    switch (ctx->pc) {
        case 0x7b06e4u: goto label_7b06e4;
        case 0x7b06f4u: goto label_7b06f4;
        default: break;
    }

    ctx->pc = 0x7b06c8u;

    // 0x7b06c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7b06c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7b06cc: 0x3c05007b  lui         $a1, 0x7B
    ctx->pc = 0x7b06ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)123 << 16));
    // 0x7b06d0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x7b06d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x7b06d4: 0x24a54ea0  addiu       $a1, $a1, 0x4EA0
    ctx->pc = 0x7b06d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20128));
    // 0x7b06d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7b06d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7b06dc: 0xc1ecfb6  jal         func_7B3ED8
    ctx->pc = 0x7B06DCu;
    SET_GPR_U32(ctx, 31, 0x7B06E4u);
    ctx->pc = 0x7B06E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B06DCu;
    // 0x7b06e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B3ED8u, 0x7B06DCu, 0x7B06E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B06E4u;
label_7b06e4:
    // 0x7b06e4: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x7b06e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x7b06e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7b06e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b06ec: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x7B06ECu;
    SET_GPR_U32(ctx, 31, 0x7B06F4u);
    ctx->pc = 0x7B06F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B06ECu;
    // 0x7b06f0: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x7B06ECu, 0x7B06F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B06F4u;
label_7b06f4:
    // 0x7b06f4: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x7b06f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x7b06f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7b06f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7b06fc: 0x24634700  addiu       $v1, $v1, 0x4700
    ctx->pc = 0x7b06fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18176));
    // 0x7b0700: 0xc4600040  lwc1        $f0, 0x40($v1)
    ctx->pc = 0x7b0700u;
    { uint32_t bits = FAST_READ32(0x604740u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7b0704: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x7b0704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x7b0708: 0xc4610044  lwc1        $f1, 0x44($v1)
    ctx->pc = 0x7b0708u;
    { uint32_t bits = FAST_READ32(0x604744u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x7b070c: 0xe6010028  swc1        $f1, 0x28($s0)
    ctx->pc = 0x7b070cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x7b0710: 0xc4600048  lwc1        $f0, 0x48($v1)
    ctx->pc = 0x7b0710u;
    { uint32_t bits = FAST_READ32(0x604748u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7b0714: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x7b0714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x7b0718: 0xc461004c  lwc1        $f1, 0x4C($v1)
    ctx->pc = 0x7b0718u;
    { uint32_t bits = FAST_READ32(0x60474Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x7b071c: 0xe6010030  swc1        $f1, 0x30($s0)
    ctx->pc = 0x7b071cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x7b0720: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x7b0720u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7b0724: 0x3e00008  jr          $ra
    ctx->pc = 0x7B0724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B0728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B0724u;
        // 0x7b0728: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B0724u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B072Cu;
    // 0x7b072c: 0x0  nop
    ctx->pc = 0x7b072cu;
    // NOP
    ctx->pc = 0x7b0730u;
}
} // namespace gh_event
