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

// Function: GetSingletonC
// Address: 0x1b5650 - 0x1b56d8
void GetSingletonC_0x1b5650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetSingletonC_0x1b5650");
#endif

    switch (ctx->pc) {
        case 0x1b5674u: goto label_1b5674;
        case 0x1b568cu: goto label_1b568c;
        default: break;
    }

    ctx->pc = 0x1b5650u;

    // 0x1b5650: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b5650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b5654: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x1b5654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x1b5658: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b5658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b565c: 0x8c6260b8  lw          $v0, 0x60B8($v1)
    ctx->pc = 0x1b565cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7860B8u));
    // 0x1b5660: 0x247060b8  addiu       $s0, $v1, 0x60B8
    ctx->pc = 0x1b5660u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 24760));
    // 0x1b5664: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B5664u;
    {
        const bool branch_taken_0x1b5664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B5668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5664u;
        // 0x1b5668: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5664) {
            ctx->pc = 0x1B568Cu;
            goto label_1b568c;
        }
    }
    ctx->pc = 0x1B566Cu;
    // 0x1b566c: 0xc06e016  jal         func_1B8058
    ctx->pc = 0x1B566Cu;
    SET_GPR_U32(ctx, 31, 0x1B5674u);
    ctx->pc = 0x1B8058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8058u, 0x1B566Cu, 0x1B5674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5674u;
label_1b5674:
    // 0x1b5674: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x1b5674u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x1b5678: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x1b5678u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x1b567c: 0x24a58828  addiu       $a1, $a1, -0x77D8
    ctx->pc = 0x1b567cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936616));
    // 0x1b5680: 0x24c65878  addiu       $a2, $a2, 0x5878
    ctx->pc = 0x1b5680u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22648));
    // 0x1b5684: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x1B5684u;
    SET_GPR_U32(ctx, 31, 0x1B568Cu);
    ctx->pc = 0x1B5688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5684u;
    // 0x1b5688: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x1B5684u, 0x1B568Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B568Cu;
label_1b568c:
    // 0x1b568c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b568cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5690: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b5690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b5694: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b5694u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b5698: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B569Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5698u;
        // 0x1b569c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B56A0u;
    // 0x1b56a0: 0xe48c060c  swc1        $f12, 0x60C($a0)
    ctx->pc = 0x1b56a0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1548), bits); }
    // 0x1b56a4: 0x0  nop
    ctx->pc = 0x1b56a4u;
    // NOP
    // 0x1b56a8: 0xe48c0614  swc1        $f12, 0x614($a0)
    ctx->pc = 0x1b56a8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1556), bits); }
    // 0x1b56ac: 0x0  nop
    ctx->pc = 0x1b56acu;
    // NOP
    // 0x1b56b0: 0xe48c0618  swc1        $f12, 0x618($a0)
    ctx->pc = 0x1b56b0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1560), bits); }
    // 0x1b56b4: 0x0  nop
    ctx->pc = 0x1b56b4u;
    // NOP
    // 0x1b56b8: 0xe48c061c  swc1        $f12, 0x61C($a0)
    ctx->pc = 0x1b56b8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1564), bits); }
    // 0x1b56bc: 0x0  nop
    ctx->pc = 0x1b56bcu;
    // NOP
    // 0x1b56c0: 0xe48c0624  swc1        $f12, 0x624($a0)
    ctx->pc = 0x1b56c0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1572), bits); }
    // 0x1b56c4: 0x0  nop
    ctx->pc = 0x1b56c4u;
    // NOP
    // 0x1b56c8: 0xe48c0628  swc1        $f12, 0x628($a0)
    ctx->pc = 0x1b56c8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1576), bits); }
    // 0x1b56cc: 0x0  nop
    ctx->pc = 0x1b56ccu;
    // NOP
    // 0x1b56d0: 0xac820600  sw          $v0, 0x600($a0)
    ctx->pc = 0x1b56d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1536), GPR_U32(ctx, 2));
    // 0x1b56d4: 0x0  nop
    ctx->pc = 0x1b56d4u;
    // NOP
    ctx->pc = 0x1b56d8u;
}
