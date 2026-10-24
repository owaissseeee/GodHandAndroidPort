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

// Function: Panel_resetToStartPose
// Address: 0x2b1830 - 0x2b1890
void Panel_resetToStartPose_0x2b1830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Panel_resetToStartPose_0x2b1830");
#endif

    switch (ctx->pc) {
        case 0x2b1874u: goto label_2b1874;
        case 0x2b187cu: goto label_2b187c;
        default: break;
    }

    ctx->pc = 0x2b1830u;

    // 0x2b1830: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b1830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b1834: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b1834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b1838: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b1838u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b183c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2b183cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2b1840: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2b1840u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b1844: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b1844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b1848: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b1848u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b184c: 0x2405ffec  addiu       $a1, $zero, -0x14
    ctx->pc = 0x2b184cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
    // 0x2b1850: 0x960200a6  lhu         $v0, 0xA6($s0)
    ctx->pc = 0x2b1850u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 166)));
    // 0x2b1854: 0x960300a8  lhu         $v1, 0xA8($s0)
    ctx->pc = 0x2b1854u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x2b1858: 0xa60200ae  sh          $v0, 0xAE($s0)
    ctx->pc = 0x2b1858u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 174), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b185c: 0xa60300b0  sh          $v1, 0xB0($s0)
    ctx->pc = 0x2b185cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 176), (uint16_t)GPR_U32(ctx, 3));
    // 0x2b1860: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x2b1860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x2b1864: 0xa606005c  sh          $a2, 0x5C($s0)
    ctx->pc = 0x2b1864u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 92), (uint16_t)GPR_U32(ctx, 6));
    // 0x2b1868: 0xa605005e  sh          $a1, 0x5E($s0)
    ctx->pc = 0x2b1868u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 94), (uint16_t)GPR_U32(ctx, 5));
    // 0x2b186c: 0xc0ac720  jal         func_2B1C80
    ctx->pc = 0x2B186Cu;
    SET_GPR_U32(ctx, 31, 0x2B1874u);
    ctx->pc = 0x2B1870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B186Cu;
    // 0x2b1870: 0xe6000054  swc1        $f0, 0x54($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B1C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1C80u, 0x2B186Cu, 0x2B1874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1874u;
label_2b1874:
    // 0x2b1874: 0xc0ac624  jal         func_2B1890
    ctx->pc = 0x2B1874u;
    SET_GPR_U32(ctx, 31, 0x2B187Cu);
    ctx->pc = 0x2B1878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1874u;
    // 0x2b1878: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B1890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1890u, 0x2B1874u, 0x2B187Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B187Cu;
label_2b187c:
    // 0x2b187c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2b187cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b1880: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b1880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b1884: 0x3e00008  jr          $ra
    ctx->pc = 0x2B1884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B1888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1884u;
        // 0x2b1888: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B1884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B188Cu;
    // 0x2b188c: 0x0  nop
    ctx->pc = 0x2b188cu;
    // NOP
    ctx->pc = 0x2b1890u;
}
