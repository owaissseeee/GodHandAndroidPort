#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r040_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r040
{
// Function: __12PetitDevilId
// Address: 0x799220 - 0x7992c0
void ps2___12PetitDevilId_0x799220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___12PetitDevilId_0x799220");
#endif

    switch (ctx->pc) {
        case 0x799254u: goto label_799254;
        case 0x799258u: goto label_799258;
        case 0x799264u: goto label_799264;
        case 0x79927cu: goto label_79927c;
        case 0x799288u: goto label_799288;
        case 0x799294u: goto label_799294;
        default: break;
    }

    ctx->pc = 0x799220u;

    // 0x799220: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x799220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x799224: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x799224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x799228: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x799228u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79922c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x79922cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x799230: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x799230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x799234: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x799234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x799238: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x799238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x79923c: 0x2411000c  addiu       $s1, $zero, 0xC
    ctx->pc = 0x79923cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x799240: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799244: 0x26500060  addiu       $s0, $s2, 0x60
    ctx->pc = 0x799244u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x799248: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x799248u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x79924c: 0xc0aa770  jal         func_2A9DC0
    ctx->pc = 0x79924Cu;
    SET_GPR_U32(ctx, 31, 0x799254u);
    ctx->pc = 0x799250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79924Cu;
    // 0x799250: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DC0u, 0x79924Cu, 0x799254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799254u;
label_799254:
    // 0x799254: 0x0  nop
    ctx->pc = 0x799254u;
    // NOP
label_799258:
    // 0x799258: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79925c: 0xc0b5758  jal         func_2D5D60
    ctx->pc = 0x79925Cu;
    SET_GPR_U32(ctx, 31, 0x799264u);
    ctx->pc = 0x799260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79925Cu;
    // 0x799260: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5D60u, 0x79925Cu, 0x799264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799264u;
label_799264:
    // 0x799264: 0x0  nop
    ctx->pc = 0x799264u;
    // NOP
    // 0x799268: 0x1633fffb  bne         $s1, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x799268u;
    {
        const bool branch_taken_0x799268 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        ctx->pc = 0x79926Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799268u;
        // 0x79926c: 0x2610007c  addiu       $s0, $s0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799268) {
            ctx->pc = 0x799258u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799258;
        }
    }
    ctx->pc = 0x799270u;
    // 0x799270: 0x264406b0  addiu       $a0, $s2, 0x6B0
    ctx->pc = 0x799270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1712));
    // 0x799274: 0xc0aa770  jal         func_2A9DC0
    ctx->pc = 0x799274u;
    SET_GPR_U32(ctx, 31, 0x79927Cu);
    ctx->pc = 0x799278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799274u;
    // 0x799278: 0x26500700  addiu       $s0, $s2, 0x700 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DC0u, 0x799274u, 0x79927Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79927Cu;
label_79927c:
    // 0x79927c: 0x2411000f  addiu       $s1, $zero, 0xF
    ctx->pc = 0x79927cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x799280: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x799280u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799284: 0x0  nop
    ctx->pc = 0x799284u;
    // NOP
label_799288:
    // 0x799288: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79928c: 0xc0b5758  jal         func_2D5D60
    ctx->pc = 0x79928Cu;
    SET_GPR_U32(ctx, 31, 0x799294u);
    ctx->pc = 0x799290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79928Cu;
    // 0x799290: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5D60u, 0x79928Cu, 0x799294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799294u;
label_799294:
    // 0x799294: 0x0  nop
    ctx->pc = 0x799294u;
    // NOP
    // 0x799298: 0x1633fffb  bne         $s1, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x799298u;
    {
        const bool branch_taken_0x799298 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        ctx->pc = 0x79929Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799298u;
        // 0x79929c: 0x2610007c  addiu       $s0, $s0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799298) {
            ctx->pc = 0x799288u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799288;
        }
    }
    ctx->pc = 0x7992A0u;
    // 0x7992a0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x7992a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992a4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x7992a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7992a8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x7992a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7992ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x7992acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7992b0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x7992b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7992b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7992b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7992b8: 0x3e00008  jr          $ra
    ctx->pc = 0x7992B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7992BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992B8u;
        // 0x7992bc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7992B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7992C0u;
}
} // namespace gh_r040
