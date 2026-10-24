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

// Function: FreeMultiSlotResources_190250
// Address: 0x190250 - 0x1902f8
void FreeMultiSlotResources_190250_0x190250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FreeMultiSlotResources_190250_0x190250");
#endif

    switch (ctx->pc) {
        case 0x190290u: goto label_190290;
        case 0x1902a4u: goto label_1902a4;
        case 0x1902c8u: goto label_1902c8;
        case 0x1902d8u: goto label_1902d8;
        default: break;
    }

    ctx->pc = 0x190250u;

    // 0x190250: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x190250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x190254: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x190254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x190258: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x190258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x19025c: 0x24423f58  addiu       $v0, $v0, 0x3F58
    ctx->pc = 0x19025cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16216));
    // 0x190260: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x190260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x190264: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x190264u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190268: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x190268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x19026c: 0x26500600  addiu       $s0, $s2, 0x600
    ctx->pc = 0x19026cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1536));
    // 0x190270: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x190270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x190274: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x190274u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x190278: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x190278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x19027c: 0x3c130057  lui         $s3, 0x57
    ctx->pc = 0x19027cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)87 << 16));
    // 0x190280: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x190280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x190284: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x190284u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190288: 0xae420214  sw          $v0, 0x214($s2)
    ctx->pc = 0x190288u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 532), GPR_U32(ctx, 2));
    // 0x19028c: 0x0  nop
    ctx->pc = 0x19028cu;
    // NOP
label_190290:
    // 0x190290: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x190290u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x190294: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x190294u;
    {
        const bool branch_taken_0x190294 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x190294) {
            ctx->pc = 0x190298u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190294u;
            // 0x190298: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1902ACu;
            goto label_1902ac;
        }
    }
    ctx->pc = 0x19029Cu;
    // 0x19029c: 0xc07f89e  jal         func_1FE278
    ctx->pc = 0x19029Cu;
    SET_GPR_U32(ctx, 31, 0x1902A4u);
    ctx->pc = 0x1902A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19029Cu;
    // 0x1902a0: 0x26644380  addiu       $a0, $s3, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE278u, 0x19029Cu, 0x1902A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1902A4u;
label_1902a4:
    // 0x1902a4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1902a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1902a8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1902a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1902ac:
    // 0x1902ac: 0x621fff8  bgez        $s1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1902ACu;
    {
        const bool branch_taken_0x1902ac = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x1902B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1902ACu;
        // 0x1902b0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1902ac) {
            ctx->pc = 0x190290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_190290;
        }
    }
    ctx->pc = 0x1902B4u;
    // 0x1902b4: 0x8e450610  lw          $a1, 0x610($s2)
    ctx->pc = 0x1902b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1552)));
    // 0x1902b8: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1902B8u;
    {
        const bool branch_taken_0x1902b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1902BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1902B8u;
        // 0x1902bc: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1902b8) {
            ctx->pc = 0x1902CCu;
            goto label_1902cc;
        }
    }
    ctx->pc = 0x1902C0u;
    // 0x1902c0: 0xc07f852  jal         func_1FE148
    ctx->pc = 0x1902C0u;
    SET_GPR_U32(ctx, 31, 0x1902C8u);
    ctx->pc = 0x1902C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1902C0u;
    // 0x1902c4: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE148u, 0x1902C0u, 0x1902C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1902C8u;
label_1902c8:
    // 0x1902c8: 0xae400610  sw          $zero, 0x610($s2)
    ctx->pc = 0x1902c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1552), GPR_U32(ctx, 0));
label_1902cc:
    // 0x1902cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1902ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1902d0: 0xc06dbce  jal         func_1B6F38
    ctx->pc = 0x1902D0u;
    SET_GPR_U32(ctx, 31, 0x1902D8u);
    ctx->pc = 0x1902D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1902D0u;
    // 0x1902d4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6F38u, 0x1902D0u, 0x1902D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1902D8u;
label_1902d8:
    // 0x1902d8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1902d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1902dc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1902dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1902e0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1902e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1902e4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1902e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1902e8: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1902e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1902ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1902ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1902f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1902F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1902F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1902F0u;
        // 0x1902f4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1902F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1902F8u;
}
