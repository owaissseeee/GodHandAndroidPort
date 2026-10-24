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
// Function: copyFromOrigin__14cEventScrLightP17cEventSeqScrLight
// Address: 0x7b19e0 - 0x7b1b08
void copyFromOrigin__14cEventScrLightP17cEventSeqScrLight_0x7b19e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("copyFromOrigin__14cEventScrLightP17cEventSeqScrLight_0x7b19e0");
#endif

    ctx->pc = 0x7b19e0u;

    // 0x7b19e0: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x7b19e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7b19e4: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x7b19e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x7b19e8: 0xc481002c  lwc1        $f1, 0x2C($a0)
    ctx->pc = 0x7b19e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x7b19ec: 0xe4a10010  swc1        $f1, 0x10($a1)
    ctx->pc = 0x7b19ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x7b19f0: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x7b19f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7b19f4: 0xe4a00014  swc1        $f0, 0x14($a1)
    ctx->pc = 0x7b19f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
    // 0x7b19f8: 0xc4810034  lwc1        $f1, 0x34($a0)
    ctx->pc = 0x7b19f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x7b19fc: 0xe4a10018  swc1        $f1, 0x18($a1)
    ctx->pc = 0x7b19fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x7b1a00: 0xc4800038  lwc1        $f0, 0x38($a0)
    ctx->pc = 0x7b1a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7b1a04: 0xe4a0001c  swc1        $f0, 0x1C($a1)
    ctx->pc = 0x7b1a04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
    // 0x7b1a08: 0xc481003c  lwc1        $f1, 0x3C($a0)
    ctx->pc = 0x7b1a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x7b1a0c: 0xe4a10020  swc1        $f1, 0x20($a1)
    ctx->pc = 0x7b1a0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x7b1a10: 0xc4800040  lwc1        $f0, 0x40($a0)
    ctx->pc = 0x7b1a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7b1a14: 0xe4a00024  swc1        $f0, 0x24($a1)
    ctx->pc = 0x7b1a14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
    // 0x7b1a18: 0xc4810044  lwc1        $f1, 0x44($a0)
    ctx->pc = 0x7b1a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x7b1a1c: 0xe4a10028  swc1        $f1, 0x28($a1)
    ctx->pc = 0x7b1a1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
    // 0x7b1a20: 0x90820048  lbu         $v0, 0x48($a0)
    ctx->pc = 0x7b1a20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x7b1a24: 0xa0a2002c  sb          $v0, 0x2C($a1)
    ctx->pc = 0x7b1a24u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 44), (uint8_t)GPR_U32(ctx, 2));
    // 0x7b1a28: 0x90830049  lbu         $v1, 0x49($a0)
    ctx->pc = 0x7b1a28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 73)));
    // 0x7b1a2c: 0xa0a3002d  sb          $v1, 0x2D($a1)
    ctx->pc = 0x7b1a2cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 45), (uint8_t)GPR_U32(ctx, 3));
    // 0x7b1a30: 0x9082004a  lbu         $v0, 0x4A($a0)
    ctx->pc = 0x7b1a30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 74)));
    // 0x7b1a34: 0xa0a2002e  sb          $v0, 0x2E($a1)
    ctx->pc = 0x7b1a34u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 46), (uint8_t)GPR_U32(ctx, 2));
    // 0x7b1a38: 0x9083004b  lbu         $v1, 0x4B($a0)
    ctx->pc = 0x7b1a38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 75)));
    // 0x7b1a3c: 0xa0a3002f  sb          $v1, 0x2F($a1)
    ctx->pc = 0x7b1a3cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 47), (uint8_t)GPR_U32(ctx, 3));
    // 0x7b1a40: 0x9082004c  lbu         $v0, 0x4C($a0)
    ctx->pc = 0x7b1a40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x7b1a44: 0xa0a20030  sb          $v0, 0x30($a1)
    ctx->pc = 0x7b1a44u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 48), (uint8_t)GPR_U32(ctx, 2));
    // 0x7b1a48: 0x9083004d  lbu         $v1, 0x4D($a0)
    ctx->pc = 0x7b1a48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 77)));
    // 0x7b1a4c: 0xa0a30031  sb          $v1, 0x31($a1)
    ctx->pc = 0x7b1a4cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 49), (uint8_t)GPR_U32(ctx, 3));
    // 0x7b1a50: 0x9082004e  lbu         $v0, 0x4E($a0)
    ctx->pc = 0x7b1a50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 78)));
    // 0x7b1a54: 0xa0a20032  sb          $v0, 0x32($a1)
    ctx->pc = 0x7b1a54u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 50), (uint8_t)GPR_U32(ctx, 2));
    // 0x7b1a58: 0x9083004f  lbu         $v1, 0x4F($a0)
    ctx->pc = 0x7b1a58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 79)));
    // 0x7b1a5c: 0xa0a30033  sb          $v1, 0x33($a1)
    ctx->pc = 0x7b1a5cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 51), (uint8_t)GPR_U32(ctx, 3));
    // 0x7b1a60: 0x90820050  lbu         $v0, 0x50($a0)
    ctx->pc = 0x7b1a60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x7b1a64: 0xa0a20034  sb          $v0, 0x34($a1)
    ctx->pc = 0x7b1a64u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 52), (uint8_t)GPR_U32(ctx, 2));
    // 0x7b1a68: 0x90830051  lbu         $v1, 0x51($a0)
    ctx->pc = 0x7b1a68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 81)));
    // 0x7b1a6c: 0xa0a30035  sb          $v1, 0x35($a1)
    ctx->pc = 0x7b1a6cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 53), (uint8_t)GPR_U32(ctx, 3));
    // 0x7b1a70: 0x90820052  lbu         $v0, 0x52($a0)
    ctx->pc = 0x7b1a70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 82)));
    // 0x7b1a74: 0xa0a20036  sb          $v0, 0x36($a1)
    ctx->pc = 0x7b1a74u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 54), (uint8_t)GPR_U32(ctx, 2));
    // 0x7b1a78: 0x90830053  lbu         $v1, 0x53($a0)
    ctx->pc = 0x7b1a78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 83)));
    // 0x7b1a7c: 0xa0a30037  sb          $v1, 0x37($a1)
    ctx->pc = 0x7b1a7cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 55), (uint8_t)GPR_U32(ctx, 3));
    // 0x7b1a80: 0x90820054  lbu         $v0, 0x54($a0)
    ctx->pc = 0x7b1a80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x7b1a84: 0xa0a20038  sb          $v0, 0x38($a1)
    ctx->pc = 0x7b1a84u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 56), (uint8_t)GPR_U32(ctx, 2));
    // 0x7b1a88: 0x90830055  lbu         $v1, 0x55($a0)
    ctx->pc = 0x7b1a88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 85)));
    // 0x7b1a8c: 0xa0a30039  sb          $v1, 0x39($a1)
    ctx->pc = 0x7b1a8cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 57), (uint8_t)GPR_U32(ctx, 3));
    // 0x7b1a90: 0x90820056  lbu         $v0, 0x56($a0)
    ctx->pc = 0x7b1a90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 86)));
    // 0x7b1a94: 0xa0a2003a  sb          $v0, 0x3A($a1)
    ctx->pc = 0x7b1a94u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 58), (uint8_t)GPR_U32(ctx, 2));
    // 0x7b1a98: 0x90830057  lbu         $v1, 0x57($a0)
    ctx->pc = 0x7b1a98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 87)));
    // 0x7b1a9c: 0xa0a3003b  sb          $v1, 0x3B($a1)
    ctx->pc = 0x7b1a9cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 59), (uint8_t)GPR_U32(ctx, 3));
    // 0x7b1aa0: 0x90820058  lbu         $v0, 0x58($a0)
    ctx->pc = 0x7b1aa0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x7b1aa4: 0xa0a2003c  sb          $v0, 0x3C($a1)
    ctx->pc = 0x7b1aa4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 60), (uint8_t)GPR_U32(ctx, 2));
    // 0x7b1aa8: 0x90830059  lbu         $v1, 0x59($a0)
    ctx->pc = 0x7b1aa8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 89)));
    // 0x7b1aac: 0xa0a3003d  sb          $v1, 0x3D($a1)
    ctx->pc = 0x7b1aacu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 61), (uint8_t)GPR_U32(ctx, 3));
    // 0x7b1ab0: 0x9082005a  lbu         $v0, 0x5A($a0)
    ctx->pc = 0x7b1ab0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 90)));
    // 0x7b1ab4: 0xa0a2003e  sb          $v0, 0x3E($a1)
    ctx->pc = 0x7b1ab4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 62), (uint8_t)GPR_U32(ctx, 2));
    // 0x7b1ab8: 0x9083005b  lbu         $v1, 0x5B($a0)
    ctx->pc = 0x7b1ab8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 91)));
    // 0x7b1abc: 0xa0a3003f  sb          $v1, 0x3F($a1)
    ctx->pc = 0x7b1abcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 63), (uint8_t)GPR_U32(ctx, 3));
    // 0x7b1ac0: 0xc480005c  lwc1        $f0, 0x5C($a0)
    ctx->pc = 0x7b1ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7b1ac4: 0xe4a00040  swc1        $f0, 0x40($a1)
    ctx->pc = 0x7b1ac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 64), bits); }
    // 0x7b1ac8: 0xc4810060  lwc1        $f1, 0x60($a0)
    ctx->pc = 0x7b1ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x7b1acc: 0xe4a10044  swc1        $f1, 0x44($a1)
    ctx->pc = 0x7b1accu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 68), bits); }
    // 0x7b1ad0: 0xc4800064  lwc1        $f0, 0x64($a0)
    ctx->pc = 0x7b1ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7b1ad4: 0xe4a00048  swc1        $f0, 0x48($a1)
    ctx->pc = 0x7b1ad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 72), bits); }
    // 0x7b1ad8: 0xc4810068  lwc1        $f1, 0x68($a0)
    ctx->pc = 0x7b1ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x7b1adc: 0xe4a1004c  swc1        $f1, 0x4C($a1)
    ctx->pc = 0x7b1adcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 76), bits); }
    // 0x7b1ae0: 0xc480006c  lwc1        $f0, 0x6C($a0)
    ctx->pc = 0x7b1ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7b1ae4: 0xe4a00050  swc1        $f0, 0x50($a1)
    ctx->pc = 0x7b1ae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 80), bits); }
    // 0x7b1ae8: 0xc4810070  lwc1        $f1, 0x70($a0)
    ctx->pc = 0x7b1ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x7b1aec: 0xe4a10054  swc1        $f1, 0x54($a1)
    ctx->pc = 0x7b1aecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 84), bits); }
    // 0x7b1af0: 0xc4800074  lwc1        $f0, 0x74($a0)
    ctx->pc = 0x7b1af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7b1af4: 0xe4a00058  swc1        $f0, 0x58($a1)
    ctx->pc = 0x7b1af4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 88), bits); }
    // 0x7b1af8: 0xc4810078  lwc1        $f1, 0x78($a0)
    ctx->pc = 0x7b1af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x7b1afc: 0x3e00008  jr          $ra
    ctx->pc = 0x7B1AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B1B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B1AFCu;
        // 0x7b1b00: 0xe4a1005c  swc1        $f1, 0x5C($a1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 92), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B1AFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B1B04u;
    // 0x7b1b04: 0x0  nop
    ctx->pc = 0x7b1b04u;
    // NOP
    ctx->pc = 0x7b1b08u;
}
} // namespace gh_event
