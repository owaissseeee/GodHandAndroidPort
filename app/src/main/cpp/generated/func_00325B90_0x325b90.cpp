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

// Function: func_00325B90
// Address: 0x325b90 - 0x325c60
void func_00325B90_0x325b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00325B90_0x325b90");
#endif

    switch (ctx->pc) {
        case 0x325be0u: goto label_325be0;
        case 0x325bf0u: goto label_325bf0;
        case 0x325bf8u: goto label_325bf8;
        case 0x325c00u: goto label_325c00;
        default: break;
    }

    ctx->pc = 0x325b90u;

    // 0x325b90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x325b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x325b94: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x325b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x325b98: 0x3c16003d  lui         $s6, 0x3D
    ctx->pc = 0x325b98u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)61 << 16));
    // 0x325b9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x325b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x325ba0: 0x26c38160  addiu       $v1, $s6, -0x7EA0
    ctx->pc = 0x325ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294934880));
    // 0x325ba4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x325ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x325ba8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x325ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x325bac: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x325bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x325bb0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x325bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x325bb4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x325bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x325bb8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x325bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x325bbc: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x325bbcu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x3C8160u));
    // 0x325bc0: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x325BC0u;
    {
        const bool branch_taken_0x325bc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x325BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325BC0u;
        // 0x325bc4: 0x3c15003d  lui         $s5, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325bc0) {
            ctx->pc = 0x325C18u;
            goto label_325c18;
        }
    }
    ctx->pc = 0x325BC8u;
    // 0x325bc8: 0x3c14003d  lui         $s4, 0x3D
    ctx->pc = 0x325bc8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)61 << 16));
    // 0x325bcc: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x325bccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325bd0: 0x26b28158  addiu       $s2, $s5, -0x7EA8
    ctx->pc = 0x325bd0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 4294934872));
    // 0x325bd4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x325bd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x325bd8: 0x26908138  addiu       $s0, $s4, -0x7EC8
    ctx->pc = 0x325bd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294934840));
    // 0x325bdc: 0x0  nop
    ctx->pc = 0x325bdcu;
    // NOP
label_325be0:
    // 0x325be0: 0xfe510000  sd          $s1, 0x0($s2)
    ctx->pc = 0x325be0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 17));
    // 0x325be4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x325be4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x325be8: 0xc0ebecc  jal         func_3AFB30
    ctx->pc = 0x325BE8u;
    SET_GPR_U32(ctx, 31, 0x325BF0u);
    ctx->pc = 0x325BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325BE8u;
    // 0x325bec: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFB30u, 0x325BE8u, 0x325BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325BF0u;
label_325bf0:
    // 0x325bf0: 0xc0ebef4  jal         func_3AFBD0
    ctx->pc = 0x325BF0u;
    SET_GPR_U32(ctx, 31, 0x325BF8u);
    ctx->pc = 0x325BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325BF0u;
    // 0x325bf4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFBD0u, 0x325BF0u, 0x325BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325BF8u;
label_325bf8:
    // 0x325bf8: 0xc0c94be  jal         func_3252F8
    ctx->pc = 0x325BF8u;
    SET_GPR_U32(ctx, 31, 0x325C00u);
    ctx->pc = 0x325BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325BF8u;
    // 0x325bfc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3252F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3252F8u, 0x325BF8u, 0x325C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325C00u;
label_325c00:
    // 0x325c00: 0xde630000  ld          $v1, 0x0($s3)
    ctx->pc = 0x325c00u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x325c04: 0x1060fff6  beqz        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x325C04u;
    {
        const bool branch_taken_0x325c04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x325C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325C04u;
        // 0x325c08: 0x26c28160  addiu       $v0, $s6, -0x7EA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294934880));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325c04) {
            ctx->pc = 0x325BE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_325be0;
        }
    }
    ctx->pc = 0x325C0Cu;
    // 0x325c0c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x325C0Cu;
    {
        const bool branch_taken_0x325c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325C0Cu;
        // 0x325c10: 0xdfb60030  ld          $s6, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325c0c) {
            ctx->pc = 0x325C24u;
            goto label_325c24;
        }
    }
    ctx->pc = 0x325C14u;
    // 0x325c14: 0x0  nop
    ctx->pc = 0x325c14u;
    // NOP
label_325c18:
    // 0x325c18: 0x3c14003d  lui         $s4, 0x3D
    ctx->pc = 0x325c18u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)61 << 16));
    // 0x325c1c: 0x26c28160  addiu       $v0, $s6, -0x7EA0
    ctx->pc = 0x325c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294934880));
    // 0x325c20: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x325c20u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_325c24:
    // 0x325c24: 0x26a38158  addiu       $v1, $s5, -0x7EA8
    ctx->pc = 0x325c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294934872));
    // 0x325c28: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x325c28u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x325c2c: 0x26848138  addiu       $a0, $s4, -0x7EC8
    ctx->pc = 0x325c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294934840));
    // 0x325c30: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x325c30u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x325c34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x325c34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x325c38: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x325c38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x325c3c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x325c3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x325c40: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x325c40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x325c44: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x325c44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x325c48: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x325c48u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x325c4c: 0xfc600000  sd          $zero, 0x0($v1)
    ctx->pc = 0x325c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
    // 0x325c50: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x325c50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x325c54: 0x3e00008  jr          $ra
    ctx->pc = 0x325C54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x325C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325C54u;
        // 0x325c58: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325C54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x325C5Cu;
    // 0x325c5c: 0x0  nop
    ctx->pc = 0x325c5cu;
    // NOP
    ctx->pc = 0x325c60u;
}
