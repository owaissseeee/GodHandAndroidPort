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

// Function: func_00148358
// Address: 0x148358 - 0x1483c8
void func_00148358_0x148358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00148358_0x148358");
#endif

    ctx->pc = 0x148358u;

    // 0x148358: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x148358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x14835c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14835cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x148360: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x148360u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148364: 0xac80038c  sw          $zero, 0x38C($a0)
    ctx->pc = 0x148364u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 908), GPR_U32(ctx, 0));
    // 0x148368: 0xe48002a8  swc1        $f0, 0x2A8($a0)
    ctx->pc = 0x148368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 680), bits); }
    // 0x14836c: 0xac800390  sw          $zero, 0x390($a0)
    ctx->pc = 0x14836cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 912), GPR_U32(ctx, 0));
    // 0x148370: 0xe48001b0  swc1        $f0, 0x1B0($a0)
    ctx->pc = 0x148370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 432), bits); }
    // 0x148374: 0xac8001b4  sw          $zero, 0x1B4($a0)
    ctx->pc = 0x148374u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 436), GPR_U32(ctx, 0));
    // 0x148378: 0xac8001b8  sw          $zero, 0x1B8($a0)
    ctx->pc = 0x148378u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 440), GPR_U32(ctx, 0));
    // 0x14837c: 0xac8001c0  sw          $zero, 0x1C0($a0)
    ctx->pc = 0x14837cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 448), GPR_U32(ctx, 0));
    // 0x148380: 0xe48001c4  swc1        $f0, 0x1C4($a0)
    ctx->pc = 0x148380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 452), bits); }
    // 0x148384: 0xac8001c8  sw          $zero, 0x1C8($a0)
    ctx->pc = 0x148384u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 456), GPR_U32(ctx, 0));
    // 0x148388: 0xac8001d0  sw          $zero, 0x1D0($a0)
    ctx->pc = 0x148388u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 464), GPR_U32(ctx, 0));
    // 0x14838c: 0xac8001d4  sw          $zero, 0x1D4($a0)
    ctx->pc = 0x14838cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 468), GPR_U32(ctx, 0));
    // 0x148390: 0xe48001d8  swc1        $f0, 0x1D8($a0)
    ctx->pc = 0x148390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 472), bits); }
    // 0x148394: 0xe4800280  swc1        $f0, 0x280($a0)
    ctx->pc = 0x148394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 640), bits); }
    // 0x148398: 0xac800284  sw          $zero, 0x284($a0)
    ctx->pc = 0x148398u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 644), GPR_U32(ctx, 0));
    // 0x14839c: 0xac800288  sw          $zero, 0x288($a0)
    ctx->pc = 0x14839cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 648), GPR_U32(ctx, 0));
    // 0x1483a0: 0xac800290  sw          $zero, 0x290($a0)
    ctx->pc = 0x1483a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 656), GPR_U32(ctx, 0));
    // 0x1483a4: 0xe4800294  swc1        $f0, 0x294($a0)
    ctx->pc = 0x1483a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 660), bits); }
    // 0x1483a8: 0xac800298  sw          $zero, 0x298($a0)
    ctx->pc = 0x1483a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 664), GPR_U32(ctx, 0));
    // 0x1483ac: 0xac8002a0  sw          $zero, 0x2A0($a0)
    ctx->pc = 0x1483acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 672), GPR_U32(ctx, 0));
    // 0x1483b0: 0xac8002a4  sw          $zero, 0x2A4($a0)
    ctx->pc = 0x1483b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 676), GPR_U32(ctx, 0));
    // 0x1483b4: 0xac800404  sw          $zero, 0x404($a0)
    ctx->pc = 0x1483b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1028), GPR_U32(ctx, 0));
    // 0x1483b8: 0xac800408  sw          $zero, 0x408($a0)
    ctx->pc = 0x1483b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1032), GPR_U32(ctx, 0));
    // 0x1483bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1483BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1483C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1483BCu;
        // 0x1483c0: 0xac800410  sw          $zero, 0x410($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1040), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1483BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1483C4u;
    // 0x1483c4: 0x0  nop
    ctx->pc = 0x1483c4u;
    // NOP
    ctx->pc = 0x1483c8u;
}
