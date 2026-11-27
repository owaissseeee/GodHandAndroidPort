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

// Function: sceCdBreak
// Address: 0x399b20 - 0x399bd8
void sceCdBreak_0x399b20(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceCdBreak_0x399b20");
#endif

    if (__builtin_expect(ctx->pc != 0x399b20u, 0)) {
        switch (ctx->pc) {
            case 0x399b38u: goto label_399b38;
            case 0x399b84u: goto label_399b84;
            case 0x399b98u: goto label_399b98;
            case 0x399bc0u: goto label_399bc0;
            default: break;
        }
    }


    // 0x399b20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x399b24: 0x2404001e  addiu       $a0, $zero, 0x1E
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x399b28: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x399b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x399b2c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x399b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x399b30: 0xc0e63ac  jal         func_398EB0
    SET_GPR_U32(ctx, 31, 0x399B38u);
    ctx->pc = 0x399B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399B30u;
    // 0x399b34: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398EB0u, 0x399B30u, 0x399B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_399b38:
    // 0x399b38: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x399B38u;
    {
        const bool branch_taken_0x399b38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x399B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399B38u;
        // 0x399b3c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399b38) {
            ctx->pc = 0x399B48u;
            goto label_399b48;
        }
    }
    // 0x399b40: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x399B40u;
    {
        const bool branch_taken_0x399b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x399B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399B40u;
        // 0x399b44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399b40) {
            ctx->pc = 0x399BC4u;
            goto label_399bc4;
        }
    }
label_399b48:
    // 0x399b48: 0x3c100040  lui         $s0, 0x40
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x399b4c: 0x24519840  addiu       $s1, $v0, -0x67C0
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940736));
    // 0x399b50: 0x24030008  addiu       $v1, $zero, 0x8
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x399b54: 0x3c040040  lui         $a0, 0x40
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x399b58: 0xae0386a0  sw          $v1, -0x7960($s0)
    ctx->pc = 0x399b58u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3F86A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F86A0u, _value); } while (0);
    // 0x399b5c: 0x2484a1c0  addiu       $a0, $a0, -0x5E40
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943168));
    // 0x399b60: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x399b60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x399b64: 0x24050016  addiu       $a1, $zero, 0x16
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x399b68: 0x302d  daddu       $a2, $zero, $zero
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399b6c: 0x382d  daddu       $a3, $zero, $zero
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399b70: 0x402d  daddu       $t0, $zero, $zero
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399b74: 0x220482d  daddu       $t1, $s1, $zero
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399b78: 0x240a0004  addiu       $t2, $zero, 0x4
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x399b7c: 0xc0ecc4a  jal         func_3B3128
    SET_GPR_U32(ctx, 31, 0x399B84u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399B7Cu;
    // 0x399b80: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3128u, 0x399B7Cu, 0x399B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_399b84:
    // 0x399b84: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x399B84u;
    {
        const bool branch_taken_0x399b84 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x399B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399B84u;
        // 0x399b88: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399b84) {
            ctx->pc = 0x399BA4u;
            goto label_399ba4;
        }
    }
    // 0x399b8c: 0x8c44866c  lw          $a0, -0x7994($v0)
    ctx->pc = 0x399b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936172)));
    // 0x399b90: 0xc0ebf30  jal         func_3AFCC0
    ctx->pc = 0x399B90u;
    SET_GPR_U32(ctx, 31, 0x399B98u);
    if (!runtime->callDirectStatic(rdram, ctx, &SignalSema_0x3afcc0, 0x3afcc0u, 0x399b98u)) {
        return;
    }
label_399b98:
    // 0x399b98: 0xae0086a0  sw          $zero, -0x7960($s0)
    ctx->pc = 0x399b98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294936224), GPR_U32(ctx, 0));
    // 0x399b9c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x399B9Cu;
    {
        const bool branch_taken_0x399b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x399BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399B9Cu;
        // 0x399ba0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399b9c) {
            ctx->pc = 0x399BC4u;
            goto label_399bc4;
        }
    }
label_399ba4:
    // 0x399ba4: 0xae0086a0  sw          $zero, -0x7960($s0)
    ctx->pc = 0x399ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294936224), GPR_U32(ctx, 0));
    // 0x399ba8: 0x3c030040  lui         $v1, 0x40
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x399bac: 0x3c022000  lui         $v0, 0x2000
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x399bb0: 0x2221025  or          $v0, $s1, $v0
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x399bb4: 0x8c64866c  lw          $a0, -0x7994($v1)
    ctx->pc = 0x399bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3F866Cu));
    // 0x399bb8: 0xc0ebf30  jal         func_3AFCC0
    SET_GPR_U32(ctx, 31, 0x399BC0u);
    ctx->pc = 0x399BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399BB8u;
    // 0x399bbc: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &SignalSema_0x3afcc0, 0x3afcc0u, 0x399bc0u)) {
        return;
    }
label_399bc0:
    // 0x399bc0: 0x200102d  daddu       $v0, $s0, $zero
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_399bc4:
    // 0x399bc4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x399bc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x399bc8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x399bc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x399bcc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x399bccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x399bd0: 0x3e00008  jr          $ra
    ctx->pc = 0x399BD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x399BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399BD0u;
        // 0x399bd4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x399BD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x399BD8u;
}