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

// Function: func_001FFEB8
// Address: 0x1ffeb8 - 0x1fff30
void func_001FFEB8_0x1ffeb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001FFEB8_0x1ffeb8");
#endif

    switch (ctx->pc) {
        case 0x1fff20u: goto label_1fff20;
        default: break;
    }

    ctx->pc = 0x1ffeb8u;

    // 0x1ffeb8: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1ffeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x1ffebc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ffebcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ffec0: 0x94437a50  lhu         $v1, 0x7A50($v0)
    ctx->pc = 0x1ffec0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x747A50u));
    // 0x1ffec4: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x1ffec4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffec8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ffec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ffecc: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x1ffeccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1ffed0: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x1ffed0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1ffed4: 0x312900ff  andi        $t1, $t1, 0xFF
    ctx->pc = 0x1ffed4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x1ffed8: 0x10a30002  beq         $a1, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FFED8u;
    {
        const bool branch_taken_0x1ffed8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1FFEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFED8u;
        // 0x1ffedc: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffed8) {
            ctx->pc = 0x1FFEE4u;
            goto label_1ffee4;
        }
    }
    ctx->pc = 0x1FFEE0u;
    // 0x1ffee0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1ffee0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ffee4:
    // 0x1ffee4: 0xa5420014  sh          $v0, 0x14($t2)
    ctx->pc = 0x1ffee4u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 20), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ffee8: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x1ffee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffeec: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1ffeecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1ffef0: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x1ffef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ffef4: 0xe5400004  swc1        $f0, 0x4($t2)
    ctx->pc = 0x1ffef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
    // 0x1ffef8: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x1ffef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ffefc: 0xe5410008  swc1        $f1, 0x8($t2)
    ctx->pc = 0x1ffefcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 8), bits); }
    // 0x1fff00: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x1fff00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fff04: 0xe54c0010  swc1        $f12, 0x10($t2)
    ctx->pc = 0x1fff04u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 16), bits); }
    // 0x1fff08: 0xe540000c  swc1        $f0, 0xC($t2)
    ctx->pc = 0x1fff08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 12), bits); }
    // 0x1fff0c: 0xa1420016  sb          $v0, 0x16($t2)
    ctx->pc = 0x1fff0cu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 22), (uint8_t)GPR_U32(ctx, 2));
    // 0x1fff10: 0xa1470017  sb          $a3, 0x17($t2)
    ctx->pc = 0x1fff10u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 23), (uint8_t)GPR_U32(ctx, 7));
    // 0x1fff14: 0xad480018  sw          $t0, 0x18($t2)
    ctx->pc = 0x1fff14u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 24), GPR_U32(ctx, 8));
    // 0x1fff18: 0xc07ffe0  jal         func_1FFF80
    ctx->pc = 0x1FFF18u;
    SET_GPR_U32(ctx, 31, 0x1FFF20u);
    ctx->pc = 0x1FFF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFF18u;
    // 0x1fff1c: 0xa149003a  sb          $t1, 0x3A($t2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 10), 58), (uint8_t)GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFF80u, 0x1FFF18u, 0x1FFF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFF20u;
label_1fff20:
    // 0x1fff20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fff20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fff24: 0x3e00008  jr          $ra
    ctx->pc = 0x1FFF24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FFF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFF24u;
        // 0x1fff28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FFF24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FFF2Cu;
    // 0x1fff2c: 0x0  nop
    ctx->pc = 0x1fff2cu;
    // NOP
    ctx->pc = 0x1fff30u;
}
