#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r803_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r803
{
// Function: __do_global_dtors
// Address: 0x799780 - 0x7997d8
void ps2___do_global_dtors_0x799780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_dtors_0x799780");
#endif

    switch (ctx->pc) {
        case 0x799780u: goto label_799780;
        case 0x799784u: goto label_799784;
        case 0x799788u: goto label_799788;
        case 0x79978cu: goto label_79978c;
        case 0x799790u: goto label_799790;
        case 0x799794u: goto label_799794;
        case 0x799798u: goto label_799798;
        case 0x79979cu: goto label_79979c;
        case 0x7997a0u: goto label_7997a0;
        case 0x7997a4u: goto label_7997a4;
        case 0x7997a8u: goto label_7997a8;
        case 0x7997acu: goto label_7997ac;
        case 0x7997b0u: goto label_7997b0;
        case 0x7997b4u: goto label_7997b4;
        case 0x7997b8u: goto label_7997b8;
        case 0x7997bcu: goto label_7997bc;
        case 0x7997c0u: goto label_7997c0;
        case 0x7997c4u: goto label_7997c4;
        case 0x7997c8u: goto label_7997c8;
        case 0x7997ccu: goto label_7997cc;
        case 0x7997d0u: goto label_7997d0;
        case 0x7997d4u: goto label_7997d4;
        default: break;
    }

    ctx->pc = 0x799780u;

label_799780:
    // 0x799780: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x799780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_799784:
    // 0x799784: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x799784u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
label_799788:
    // 0x799788: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x799788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_79978c:
    // 0x79978c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x79978cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_799790:
    // 0x799790: 0x8c829900  lw          $v0, -0x6700($a0)
    ctx->pc = 0x799790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294940928)));
label_799794:
    // 0x799794: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_799798:
    // 0x799798: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_79979c:
    if (ctx->pc == 0x79979Cu) {
        ctx->pc = 0x79979Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799798u;
        // 0x79979c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7997A0u;
        goto label_7997a0;
    }
    ctx->pc = 0x799798u;
    {
        const bool branch_taken_0x799798 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79979Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799798u;
        // 0x79979c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799798) {
            ctx->pc = 0x7997C4u;
            goto label_7997c4;
        }
    }
    ctx->pc = 0x7997A0u;
label_7997a0:
    // 0x7997a0: 0x8e029900  lw          $v0, -0x6700($s0)
    ctx->pc = 0x7997a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294940928)));
label_7997a4:
    // 0x7997a4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x7997a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_7997a8:
    // 0x7997a8: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x7997a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_7997ac:
    // 0x7997ac: 0x60f809  jalr        $v1
label_7997b0:
    if (ctx->pc == 0x7997B0u) {
        ctx->pc = 0x7997B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997ACu;
        // 0x7997b0: 0xae029900  sw          $v0, -0x6700($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294940928), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7997B4u;
        goto label_7997b4;
    }
    ctx->pc = 0x7997ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x7997B4u);
        ctx->pc = 0x7997B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997ACu;
        // 0x7997b0: 0xae029900  sw          $v0, -0x6700($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294940928), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7997ACu, 0x7997B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x7997B4u;
label_7997b4:
    // 0x7997b4: 0x8e029900  lw          $v0, -0x6700($s0)
    ctx->pc = 0x7997b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294940928)));
label_7997b8:
    // 0x7997b8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x7997b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_7997bc:
    // 0x7997bc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_7997c0:
    if (ctx->pc == 0x7997C0u) {
        ctx->pc = 0x7997C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997BCu;
        // 0x7997c0: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7997C4u;
        goto label_7997c4;
    }
    ctx->pc = 0x7997BCu;
    {
        const bool branch_taken_0x7997bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x7997C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997BCu;
        // 0x7997c0: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7997bc) {
            ctx->pc = 0x7997A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7997a8;
        }
    }
    ctx->pc = 0x7997C4u;
label_7997c4:
    // 0x7997c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x7997c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_7997c8:
    // 0x7997c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x7997c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_7997cc:
    // 0x7997cc: 0x3e00008  jr          $ra
label_7997d0:
    if (ctx->pc == 0x7997D0u) {
        ctx->pc = 0x7997D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997CCu;
        // 0x7997d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7997D4u;
        goto label_7997d4;
    }
    ctx->pc = 0x7997CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7997D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997CCu;
        // 0x7997d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7997CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7997D4u;
label_7997d4:
    // 0x7997d4: 0x0  nop
    ctx->pc = 0x7997d4u;
    // NOP
    ctx->pc = 0x7997d8u;
}
} // namespace gh_r803
