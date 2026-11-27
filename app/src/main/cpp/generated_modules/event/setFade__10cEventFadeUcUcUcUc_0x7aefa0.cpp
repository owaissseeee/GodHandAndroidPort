#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: setFade__10cEventFadeUcUcUcUc
// Address: 0x7aefa0 - 0x7af078
void setFade__10cEventFadeUcUcUcUc_0x7aefa0(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setFade__10cEventFadeUcUcUcUc_0x7aefa0");
#endif

    if (__builtin_expect(ctx->pc != 0x7aefa0u, 0)) {
        switch (ctx->pc) {
            case 0x7aefe0u: goto label_7aefe0;
            case 0x7aeffcu: goto label_7aeffc;
            case 0x7af03cu: goto label_7af03c;
            case 0x7af04cu: goto label_7af04c;
            default: break;
        }
    }



    // 0x7aefa0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x7aefa4: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x7aefa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x7aefa8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x7aefa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x7aefac: 0x80a02d  daddu       $s4, $a0, $zero
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7aefb0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x7aefb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x7aefb4: 0x30b300ff  andi        $s3, $a1, 0xFF
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x7aefb8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x7aefb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x7aefbc: 0x3c04007b  lui         $a0, 0x7B
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)123 << 16));
    // 0x7aefc0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x7aefc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x7aefc4: 0x30d100ff  andi        $s1, $a2, 0xFF
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x7aefc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7aefc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7aefcc: 0x30f200ff  andi        $s2, $a3, 0xFF
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x7aefd0: 0x311000ff  andi        $s0, $t0, 0xFF
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x7aefd4: 0x24845280  addiu       $a0, $a0, 0x5280
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21120));
    // 0x7aefd8: 0xc1ed280  jal         func_7B4A00
    SET_GPR_U32(ctx, 31, 0x7AEFE0u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AEFD8u;
    // 0x7aefdc: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B4A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B4A00u, 0x7AEFD8u, 0x7AEFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_7aefe0:
    // 0x7aefe0: 0x304200ff  andi        $v0, $v0, 0xFF
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x7aefe4: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x7AEFE4u;
    {
        const bool branch_taken_0x7aefe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7aefe4) {
            ctx->pc = 0x7AEFE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7AEFE4u;
            // 0x7aefe8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7AF058u;
            goto label_7af058;
        }
    }
    // 0x7aefec: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7AEFECu;
    {
        const bool branch_taken_0x7aefec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x7AEFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AEFECu;
        // 0x7aeff0: 0x104600  sll         $t0, $s0, 24 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aefec) {
            ctx->pc = 0x7AF004u;
            goto label_7af004;
        }
    }
    // 0x7aeff4: 0xc1ebc1e  jal         func_7AF078
    SET_GPR_U32(ctx, 31, 0x7AEFFCu);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AEFF4u;
    // 0x7aeff8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AF078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AF078u, 0x7AEFF4u, 0x7AEFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_7aeffc:
    // 0x7aeffc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x7AEFFCu;
    {
        const bool branch_taken_0x7aeffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AF000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AEFFCu;
        // 0x7af000: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aeffc) {
            ctx->pc = 0x7AF058u;
            goto label_7af058;
        }
    }
label_7af004:
    // 0x7af004: 0x111200  sll         $v0, $s1, 8
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 8));
    // 0x7af008: 0x1134025  or          $t0, $t0, $s3
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 19));
    // 0x7af00c: 0x121c00  sll         $v1, $s2, 16
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x7af010: 0x1024025  or          $t0, $t0, $v0
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x7af014: 0x3c100074  lui         $s0, 0x74
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)116 << 16));
    // 0x7af018: 0x1034025  or          $t0, $t0, $v1
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x7af01c: 0x26107470  addiu       $s0, $s0, 0x7470
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 29808));
    // 0x7af020: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7af024: 0x100482d  daddu       $t1, $t0, $zero
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7af028: 0x282d  daddu       $a1, $zero, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7af02c: 0x2406001a  addiu       $a2, $zero, 0x1A
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x7af030: 0x382d  daddu       $a3, $zero, $zero
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7af034: 0xc0c1c82  jal         func_307208
    SET_GPR_U32(ctx, 31, 0x7AF03Cu);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AF034u;
    // 0x7af038: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->callDirectStatic(rdram, ctx, &classFADE_start_0x307208, 0x307208u, 0x7AF03Cu)) {
        return;
    }
label_7af03c:
    // 0x7af03c: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7af040: 0x24050006  addiu       $a1, $zero, 0x6
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x7af044: 0xc0c1dd8  jal         func_307760
    SET_GPR_U32(ctx, 31, 0x7AF04Cu);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AF044u;
    // 0x7af048: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307760u;
    if (!runtime->callDirectStatic(rdram, ctx, &classFADE_setOt_0x307760, 0x307760u, 0x7AF04Cu)) {
        return;
    }
label_7af04c:
    // 0x7af04c: 0x24020001  addiu       $v0, $zero, 0x1
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7af050: 0xa2820018  sb          $v0, 0x18($s4)
    ctx->pc = 0x7af050u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 24), (uint8_t)GPR_U32(ctx, 2));
    // 0x7af054: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x7af054u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_7af058:
    // 0x7af058: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x7af058u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7af05c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x7af05cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7af060: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x7af060u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7af064: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x7af064u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7af068: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7af068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7af06c: 0x3e00008  jr          $ra
    ctx->pc = 0x7AF06Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7AF070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AF06Cu;
        // 0x7af070: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AF06Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x7af074: 0x0  nop
    // NOP
    ctx->pc = 0x7af078u;
}
} // namespace gh_event
