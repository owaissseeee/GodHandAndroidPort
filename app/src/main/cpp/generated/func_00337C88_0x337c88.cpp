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

// Function: func_00337C88
// Address: 0x337c88 - 0x337d20
void func_00337C88_0x337c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00337C88_0x337c88");
#endif

    switch (ctx->pc) {
        case 0x337cdcu: goto label_337cdc;
        default: break;
    }

    ctx->pc = 0x337c88u;

    // 0x337c88: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x337c88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x337c8c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x337c8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x337c90: 0x8c430710  lw          $v1, 0x710($v0)
    ctx->pc = 0x337c90u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3E0710u));
    // 0x337c94: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x337c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x337c98: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x337c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x337c9c: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x337C9Cu;
    {
        const bool branch_taken_0x337c9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x337CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337C9Cu;
        // 0x337ca0: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337c9c) {
            ctx->pc = 0x337CB4u;
            goto label_337cb4;
        }
    }
    ctx->pc = 0x337CA4u;
    // 0x337ca4: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x337ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x337ca8: 0x8c430708  lw          $v1, 0x708($v0)
    ctx->pc = 0x337ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3E0708u));
    // 0x337cac: 0x18600013  blez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x337CACu;
    {
        const bool branch_taken_0x337cac = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x337CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337CACu;
        // 0x337cb0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337cac) {
            ctx->pc = 0x337CFCu;
            goto label_337cfc;
        }
    }
    ctx->pc = 0x337CB4u;
label_337cb4:
    // 0x337cb4: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x337cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x337cb8: 0x24500738  addiu       $s0, $v0, 0x738
    ctx->pc = 0x337cb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1848));
    // 0x337cbc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x337cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3E0738u));
    // 0x337cc0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x337CC0u;
    {
        const bool branch_taken_0x337cc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x337CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337CC0u;
        // 0x337cc4: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337cc0) {
            ctx->pc = 0x337CF8u;
            goto label_337cf8;
        }
    }
    ctx->pc = 0x337CC8u;
    // 0x337cc8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x337cc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337ccc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x337cccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337cd0: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x337cd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337cd4: 0xc0cc99c  jal         func_332670
    ctx->pc = 0x337CD4u;
    SET_GPR_U32(ctx, 31, 0x337CDCu);
    ctx->pc = 0x337CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337CD4u;
    // 0x337cd8: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332670u, 0x337CD4u, 0x337CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337CDCu;
label_337cdc:
    // 0x337cdc: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x337cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x337ce0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x337ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x337ce4: 0x24630748  addiu       $v1, $v1, 0x748
    ctx->pc = 0x337ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1864));
    // 0x337ce8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x337ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x337cec: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x337cecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x3E0748u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E0748u, _value); } while (0);
    // 0x337cf0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x337cf0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3E074Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E074Cu, _value); } while (0);
    // 0x337cf4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x337cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_337cf8:
    // 0x337cf8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x337cf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_337cfc:
    // 0x337cfc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x337cfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x337d00: 0x3e00008  jr          $ra
    ctx->pc = 0x337D00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x337D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337D00u;
        // 0x337d04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337D00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x337D08u;
    // 0x337d08: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x337d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x337d0c: 0x0  nop
    ctx->pc = 0x337d0cu;
    // NOP
    // 0x337d10: 0x0  nop
    ctx->pc = 0x337d10u;
    // NOP
    // 0x337d14: 0x0  nop
    ctx->pc = 0x337d14u;
    // NOP
    // 0x337d18: 0xa4651006  sh          $a1, 0x1006($v1)
    ctx->pc = 0x337d18u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4102), (uint16_t)GPR_U32(ctx, 5));
    // 0x337d1c: 0x0  nop
    ctx->pc = 0x337d1cu;
    // NOP
    ctx->pc = 0x337d20u;
}
