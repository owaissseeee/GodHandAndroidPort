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

// Function: func_0032D1A0
// Address: 0x32d1a0 - 0x32d250
void func_0032D1A0_0x32d1a0(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032D1A0_0x32d1a0");
#endif

    if (__builtin_expect(ctx->pc != 0x32d1a0u, 0)) {
        switch (ctx->pc) {
            case 0x32d1d4u: goto label_32d1d4;
            case 0x32d1dcu: goto label_32d1dc;
            case 0x32d1f0u: goto label_32d1f0;
            case 0x32d210u: goto label_32d210;
            case 0x32d22cu: goto label_32d22c;
            default: break;
        }
    }


    // 0x32d1a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32d1a4: 0x3c02003d  lui         $v0, 0x3D
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x32d1a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32d1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32d1ac: 0x24501474  addiu       $s0, $v0, 0x1474
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 5236));
    // 0x32d1b0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x32d1b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x32d1b4: 0x3c03003d  lui         $v1, 0x3D
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x32d1b8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x32d1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3D1474u));
    // 0x32d1bc: 0x24631470  addiu       $v1, $v1, 0x1470
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5232));
    // 0x32d1c0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x32d1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3D1470u));
    // 0x32d1c4: 0x1480001d  bnez        $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x32D1C4u;
    {
        const bool branch_taken_0x32d1c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x32D1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D1C4u;
        // 0x32d1c8: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d1c4) {
            ctx->pc = 0x32D23Cu;
            goto label_32d23c;
        }
    }
    // 0x32d1cc: 0xc0c9254  jal         func_324950
    ctx->pc = 0x32D1CCu;
    SET_GPR_U32(ctx, 31, 0x32D1D4u);
    if (!runtime->callDirectStatic(rdram, ctx, &func_00324950_0x324950, 0x324950u, 0x32d1d4u)) {
        return;
    }
label_32d1d4:
    // 0x32d1d4: 0xc0cbc8c  jal         func_32F230
    ctx->pc = 0x32D1D4u;
    SET_GPR_U32(ctx, 31, 0x32D1DCu);
    if (!runtime->callDirectStatic(rdram, ctx, &func_0032F230_0x32f230, 0x32f230u, 0x32d1dcu)) {
        return;
    }
label_32d1dc:
    // 0x32d1dc: 0x3c04003d  lui         $a0, 0x3D
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x32d1e0: 0x282d  daddu       $a1, $zero, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d1e4: 0x24841488  addiu       $a0, $a0, 0x1488
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5256));
    // 0x32d1e8: 0xc0e94bc  jal         func_3A52F0
    SET_GPR_U32(ctx, 31, 0x32D1F0u);
    ctx->pc = 0x32D1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D1E8u;
    // 0x32d1ec: 0x240609e0  addiu       $a2, $zero, 0x9E0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2528));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &memset_0x3a52f0, 0x3a52f0u, 0x32d1f0u)) {
        return;
    }
label_32d1f0:
    // 0x32d1f0: 0x3c060033  lui         $a2, 0x33
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x32d1f4: 0x3c080045  lui         $t0, 0x45
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)69 << 16));
    // 0x32d1f8: 0x24c6d170  addiu       $a2, $a2, -0x2E90
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955376));
    // 0x32d1fc: 0x25082980  addiu       $t0, $t0, 0x2980
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 10624));
    // 0x32d200: 0x24040002  addiu       $a0, $zero, 0x2
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32d204: 0x282d  daddu       $a1, $zero, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d208: 0xc0cee84  jal         func_33BA10
    SET_GPR_U32(ctx, 31, 0x32D210u);
    ctx->pc = 0x32D20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D208u;
    // 0x32d20c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_0033BA10_0x33ba10, 0x33ba10u, 0x32d210u)) {
        return;
    }
label_32d210:
    // 0x32d210: 0x3c050033  lui         $a1, 0x33
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x32d214: 0x3c070045  lui         $a3, 0x45
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)69 << 16));
    // 0x32d218: 0x24040005  addiu       $a0, $zero, 0x5
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x32d21c: 0x24a5d198  addiu       $a1, $a1, -0x2E68
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955416));
    // 0x32d220: 0x24e72990  addiu       $a3, $a3, 0x2990
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 10640));
    // 0x32d224: 0xc0cee04  jal         func_33B810
    SET_GPR_U32(ctx, 31, 0x32D22Cu);
    ctx->pc = 0x32D228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D224u;
    // 0x32d228: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_0033B810_0x33b810, 0x33b810u, 0x32d22cu)) {
        return;
    }
label_32d22c:
    // 0x32d22c: 0x3c03003d  lui         $v1, 0x3D
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x32d230: 0xac621478  sw          $v0, 0x1478($v1)
    ctx->pc = 0x32d230u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3D1478u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3D1478u, _value); } while (0);
    // 0x32d234: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x32d234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x32d238: 0x24820001  addiu       $v0, $a0, 0x1
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_32d23c:
    // 0x32d23c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x32d23cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32d240: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x32d240u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x32d244: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32d244u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32d248: 0x3e00008  jr          $ra
    ctx->pc = 0x32D248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32D24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D248u;
        // 0x32d24c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32D248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32D250u;
}