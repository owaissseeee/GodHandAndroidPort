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

// Function: cSnd_BgmNodeSet
// Address: 0x2cc9c0 - 0x2cca78
void cSnd_BgmNodeSet_0x2cc9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSnd_BgmNodeSet_0x2cc9c0");
#endif

    switch (ctx->pc) {
        case 0x2cca0cu: goto label_2cca0c;
        case 0x2cca14u: goto label_2cca14;
        case 0x2cca40u: goto label_2cca40;
        default: break;
    }

    ctx->pc = 0x2cc9c0u;

    // 0x2cc9c0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2cc9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2cc9c4: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x2cc9c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x2cc9c8: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2cc9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x2cc9cc: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2cc9ccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc9d0: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2cc9d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x2cc9d4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2cc9d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc9d8: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x2cc9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x2cc9dc: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2cc9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2cc9e0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2cc9e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x2cc9e4: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x2cc9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x2cc9e8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2cc9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2cc9ec: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2cc9ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc9f0: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x2cc9f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x2cc9f4: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2cc9f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc9f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2cc9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2cc9fc: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x2cc9fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cca00: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x2cca00u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cca04: 0xc0b4b66  jal         func_2D2D98
    ctx->pc = 0x2CCA04u;
    SET_GPR_U32(ctx, 31, 0x2CCA0Cu);
    ctx->pc = 0x2CCA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCA04u;
    // 0x2cca08: 0x140a82d  daddu       $s5, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2D98u, 0x2CCA04u, 0x2CCA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCA0Cu;
label_2cca0c:
    // 0x2cca0c: 0xc0b3fda  jal         func_2CFF68
    ctx->pc = 0x2CCA0Cu;
    SET_GPR_U32(ctx, 31, 0x2CCA14u);
    ctx->pc = 0x2CCA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCA0Cu;
    // 0x2cca10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFF68u, 0x2CCA0Cu, 0x2CCA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCA14u;
label_2cca14:
    // 0x2cca14: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2CCA14u;
    {
        const bool branch_taken_0x2cca14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCA14u;
        // 0x2cca18: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cca14) {
            ctx->pc = 0x2CCA48u;
            goto label_2cca48;
        }
    }
    ctx->pc = 0x2CCA1Cu;
    // 0x2cca1c: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x2cca1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x2cca20: 0xafb20004  sw          $s2, 0x4($sp)
    ctx->pc = 0x2cca20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 18));
    // 0x2cca24: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2cca24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cca28: 0xafb30008  sw          $s3, 0x8($sp)
    ctx->pc = 0x2cca28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 19));
    // 0x2cca2c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2cca2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cca30: 0xa7b4000c  sh          $s4, 0xC($sp)
    ctx->pc = 0x2cca30u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 20));
    // 0x2cca34: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2cca34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cca38: 0xc0b31ca  jal         func_2CC728
    ctx->pc = 0x2CCA38u;
    SET_GPR_U32(ctx, 31, 0x2CCA40u);
    ctx->pc = 0x2CCA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCA38u;
    // 0x2cca3c: 0xa7b5000e  sh          $s5, 0xE($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 14), (uint16_t)GPR_U32(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC728u, 0x2CCA38u, 0x2CCA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCA40u;
label_2cca40:
    // 0x2cca40: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CCA40u;
    {
        const bool branch_taken_0x2cca40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCA40u;
        // 0x2cca44: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cca40) {
            ctx->pc = 0x2CCA50u;
            goto label_2cca50;
        }
    }
    ctx->pc = 0x2CCA48u;
label_2cca48:
    // 0x2cca48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cca48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cca4c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2cca4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2cca50:
    // 0x2cca50: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x2cca50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2cca54: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x2cca54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2cca58: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2cca58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cca5c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2cca5cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cca60: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x2cca60u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cca64: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x2cca64u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cca68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2cca68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cca6c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CCA6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CCA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCA6Cu;
        // 0x2cca70: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CCA6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CCA74u;
    // 0x2cca74: 0x0  nop
    ctx->pc = 0x2cca74u;
    // NOP
    ctx->pc = 0x2cca78u;
}
