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
// Function: movePlayDirect__C14cEventObjLightPC17cEventSeqObjLight
// Address: 0x7b0800 - 0x7b0828
void movePlayDirect__C14cEventObjLightPC17cEventSeqObjLight_0x7b0800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("movePlayDirect__C14cEventObjLightPC17cEventSeqObjLight_0x7b0800");
#endif

    ctx->pc = 0x7b0800u;

    // 0x7b0800: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x7b0800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x7b0804: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x7b0804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x7b0808: 0x24424700  addiu       $v0, $v0, 0x4700
    ctx->pc = 0x7b0808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18176));
    // 0x7b080c: 0xe4410040  swc1        $f1, 0x40($v0)
    ctx->pc = 0x7b080cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x604740u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x604740u, _value); } while (0); }
    // 0x7b0810: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x7b0810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7b0814: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x7b0814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x604744u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x604744u, _value); } while (0); }
    // 0x7b0818: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x7b0818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x7b081c: 0x3e00008  jr          $ra
    ctx->pc = 0x7B081Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B0820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B081Cu;
        // 0x7b0820: 0xe4410048  swc1        $f1, 0x48($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B081Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B0824u;
    // 0x7b0824: 0x0  nop
    ctx->pc = 0x7b0824u;
    // NOP
    ctx->pc = 0x7b0828u;
}
} // namespace gh_event
