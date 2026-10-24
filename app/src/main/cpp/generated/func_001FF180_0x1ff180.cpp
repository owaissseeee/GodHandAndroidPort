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

// Function: func_001FF180
// Address: 0x1ff180 - 0x1ff238
void func_001FF180_0x1ff180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001FF180_0x1ff180");
#endif

    switch (ctx->pc) {
        case 0x1ff1acu: goto label_1ff1ac;
        case 0x1ff1c0u: goto label_1ff1c0;
        case 0x1ff1e8u: goto label_1ff1e8;
        default: break;
    }

    ctx->pc = 0x1ff180u;

    // 0x1ff180: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1ff180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1ff184: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1ff184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1ff188: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1ff188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1ff18c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ff18cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff190: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1ff190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1ff194: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1ff194u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff198: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1ff198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1ff19c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1ff19cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff1a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ff1a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ff1a4: 0xc0c1e38  jal         func_3078E0
    ctx->pc = 0x1FF1A4u;
    SET_GPR_U32(ctx, 31, 0x1FF1ACu);
    ctx->pc = 0x1FF1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF1A4u;
    // 0x1ff1a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3078E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3078E0u, 0x1FF1A4u, 0x1FF1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF1ACu;
label_1ff1ac:
    // 0x1ff1ac: 0xae300014  sw          $s0, 0x14($s1)
    ctx->pc = 0x1ff1acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 16));
    // 0x1ff1b0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ff1b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff1b4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1ff1b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff1b8: 0xc0c1e46  jal         func_307918
    ctx->pc = 0x1FF1B8u;
    SET_GPR_U32(ctx, 31, 0x1FF1C0u);
    ctx->pc = 0x1FF1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF1B8u;
    // 0x1ff1bc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307918u, 0x1FF1B8u, 0x1FF1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF1C0u;
label_1ff1c0:
    // 0x1ff1c0: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1ff1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x1ff1c4: 0x8e270014  lw          $a3, 0x14($s1)
    ctx->pc = 0x1ff1c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1ff1c8: 0x24843f20  addiu       $a0, $a0, 0x3F20
    ctx->pc = 0x1ff1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16160));
    // 0x1ff1cc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1ff1ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff1d0: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x1ff1d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1ff1d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ff1d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff1d8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1ff1d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff1dc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1ff1dcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff1e0: 0xc08032c  jal         func_200CB0
    ctx->pc = 0x1FF1E0u;
    SET_GPR_U32(ctx, 31, 0x1FF1E8u);
    ctx->pc = 0x1FF1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF1E0u;
    // 0x1ff1e4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200CB0u, 0x1FF1E0u, 0x1FF1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF1E8u;
label_1ff1e8:
    // 0x1ff1e8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1FF1E8u;
    {
        const bool branch_taken_0x1ff1e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF1E8u;
        // 0x1ff1ec: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff1e8) {
            ctx->pc = 0x1FF214u;
            goto label_1ff214;
        }
    }
    ctx->pc = 0x1FF1F0u;
    // 0x1ff1f0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1ff1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1ff1f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ff1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ff1f8: 0xae33000c  sw          $s3, 0xC($s1)
    ctx->pc = 0x1ff1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 19));
    // 0x1ff1fc: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1ff1fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1ff200: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1ff200u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1ff204: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1ff204u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1ff208: 0xae320020  sw          $s2, 0x20($s1)
    ctx->pc = 0x1ff208u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 18));
    // 0x1ff20c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FF20Cu;
    {
        const bool branch_taken_0x1ff20c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF20Cu;
        // 0x1ff210: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff20c) {
            ctx->pc = 0x1FF218u;
            goto label_1ff218;
        }
    }
    ctx->pc = 0x1FF214u;
label_1ff214:
    // 0x1ff214: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ff214u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ff218:
    // 0x1ff218: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1ff218u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ff21c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1ff21cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ff220: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1ff220u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ff224: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1ff224u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ff228: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ff228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ff22c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF22Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF22Cu;
        // 0x1ff230: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF22Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF234u;
    // 0x1ff234: 0x0  nop
    ctx->pc = 0x1ff234u;
    // NOP
    ctx->pc = 0x1ff238u;
}
