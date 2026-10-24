#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r801_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r801
{
// Function: R801PreInit__Fv
// Address: 0x799220 - 0x7992b0
void R801PreInit__Fv_0x799220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R801PreInit__Fv_0x799220");
#endif

    switch (ctx->pc) {
        case 0x799248u: goto label_799248;
        case 0x799258u: goto label_799258;
        case 0x799268u: goto label_799268;
        case 0x799294u: goto label_799294;
        default: break;
    }

    ctx->pc = 0x799220u;

    // 0x799220: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x799220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x799224: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x799224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x799228: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x799228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x79922c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x79922cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x799230: 0x24509780  addiu       $s0, $v0, -0x6880
    ctx->pc = 0x799230u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940544));
    // 0x799234: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x799234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x799238: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x799238u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79923c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79923cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799240: 0x3c12003c  lui         $s2, 0x3C
    ctx->pc = 0x799240u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
    // 0x799244: 0x0  nop
    ctx->pc = 0x799244u;
    // NOP
label_799248:
    // 0x799248: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x799248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x79924c: 0x24050806  addiu       $a1, $zero, 0x806
    ctx->pc = 0x79924cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2054));
    // 0x799250: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x799250u;
    SET_GPR_U32(ctx, 31, 0x799258u);
    ctx->pc = 0x799254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799250u;
    // 0x799254: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x799250u, 0x799258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799258u;
label_799258:
    // 0x799258: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x799258u;
    {
        const bool branch_taken_0x799258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79925Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799258u;
        // 0x79925c: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799258) {
            ctx->pc = 0x799268u;
            goto label_799268;
        }
    }
    ctx->pc = 0x799260u;
    // 0x799260: 0xc0b14ac  jal         func_2C52B0
    ctx->pc = 0x799260u;
    SET_GPR_U32(ctx, 31, 0x799268u);
    ctx->pc = 0x799264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799260u;
    // 0x799264: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C52B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C52B0u, 0x799260u, 0x799268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799268u;
label_799268:
    // 0x799268: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x799268u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x79926c: 0x2e220006  sltiu       $v0, $s1, 0x6
    ctx->pc = 0x79926cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x799270: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x799270u;
    {
        const bool branch_taken_0x799270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799270u;
        // 0x799274: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799270) {
            ctx->pc = 0x799248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799248;
        }
    }
    ctx->pc = 0x799278u;
    // 0x799278: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x799278u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x79927c: 0x3c070074  lui         $a3, 0x74
    ctx->pc = 0x79927cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)116 << 16));
    // 0x799280: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x799280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x799284: 0x24e77ac0  addiu       $a3, $a3, 0x7AC0
    ctx->pc = 0x799284u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 31424));
    // 0x799288: 0x24050801  addiu       $a1, $zero, 0x801
    ctx->pc = 0x799288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2049));
    // 0x79928c: 0xc07ed36  jal         func_1FB4D8
    ctx->pc = 0x79928Cu;
    SET_GPR_U32(ctx, 31, 0x799294u);
    ctx->pc = 0x799290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79928Cu;
    // 0x799290: 0x24060806  addiu       $a2, $zero, 0x806 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2054));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB4D8u, 0x79928Cu, 0x799294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799294u;
label_799294:
    // 0x799294: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x799294u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799298: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x799298u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79929c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x79929cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7992a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7992a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7992a4: 0x3e00008  jr          $ra
    ctx->pc = 0x7992A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7992A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992A4u;
        // 0x7992a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7992A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7992ACu;
    // 0x7992ac: 0x0  nop
    ctx->pc = 0x7992acu;
    // NOP
    ctx->pc = 0x7992b0u;
}
} // namespace gh_r801
