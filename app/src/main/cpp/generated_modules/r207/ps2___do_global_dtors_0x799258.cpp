#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r207_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r207
{
// Function: __do_global_dtors
// Address: 0x799258 - 0x7992b0
void ps2___do_global_dtors_0x799258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_dtors_0x799258");
#endif

    switch (ctx->pc) {
        case 0x799258u: goto label_799258;
        case 0x79925cu: goto label_79925c;
        case 0x799260u: goto label_799260;
        case 0x799264u: goto label_799264;
        case 0x799268u: goto label_799268;
        case 0x79926cu: goto label_79926c;
        case 0x799270u: goto label_799270;
        case 0x799274u: goto label_799274;
        case 0x799278u: goto label_799278;
        case 0x79927cu: goto label_79927c;
        case 0x799280u: goto label_799280;
        case 0x799284u: goto label_799284;
        case 0x799288u: goto label_799288;
        case 0x79928cu: goto label_79928c;
        case 0x799290u: goto label_799290;
        case 0x799294u: goto label_799294;
        case 0x799298u: goto label_799298;
        case 0x79929cu: goto label_79929c;
        case 0x7992a0u: goto label_7992a0;
        case 0x7992a4u: goto label_7992a4;
        case 0x7992a8u: goto label_7992a8;
        case 0x7992acu: goto label_7992ac;
        default: break;
    }

    ctx->pc = 0x799258u;

label_799258:
    // 0x799258: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x799258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_79925c:
    // 0x79925c: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x79925cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
label_799260:
    // 0x799260: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x799260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_799264:
    // 0x799264: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x799264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_799268:
    // 0x799268: 0x8c829380  lw          $v0, -0x6C80($a0)
    ctx->pc = 0x799268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294939520)));
label_79926c:
    // 0x79926c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79926cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_799270:
    // 0x799270: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_799274:
    if (ctx->pc == 0x799274u) {
        ctx->pc = 0x799274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799270u;
        // 0x799274: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799278u;
        goto label_799278;
    }
    ctx->pc = 0x799270u;
    {
        const bool branch_taken_0x799270 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799270u;
        // 0x799274: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799270) {
            ctx->pc = 0x79929Cu;
            goto label_79929c;
        }
    }
    ctx->pc = 0x799278u;
label_799278:
    // 0x799278: 0x8e029380  lw          $v0, -0x6C80($s0)
    ctx->pc = 0x799278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294939520)));
label_79927c:
    // 0x79927c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x79927cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_799280:
    // 0x799280: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x799280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_799284:
    // 0x799284: 0x60f809  jalr        $v1
label_799288:
    if (ctx->pc == 0x799288u) {
        ctx->pc = 0x799288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799284u;
        // 0x799288: 0xae029380  sw          $v0, -0x6C80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294939520), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79928Cu;
        goto label_79928c;
    }
    ctx->pc = 0x799284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x79928Cu);
        ctx->pc = 0x799288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799284u;
        // 0x799288: 0xae029380  sw          $v0, -0x6C80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294939520), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799284u, 0x79928Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79928Cu;
label_79928c:
    // 0x79928c: 0x8e029380  lw          $v0, -0x6C80($s0)
    ctx->pc = 0x79928cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294939520)));
label_799290:
    // 0x799290: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_799294:
    // 0x799294: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_799298:
    if (ctx->pc == 0x799298u) {
        ctx->pc = 0x799298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799294u;
        // 0x799298: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79929Cu;
        goto label_79929c;
    }
    ctx->pc = 0x799294u;
    {
        const bool branch_taken_0x799294 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x799298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799294u;
        // 0x799298: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799294) {
            ctx->pc = 0x799280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799280;
        }
    }
    ctx->pc = 0x79929Cu;
label_79929c:
    // 0x79929c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79929cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_7992a0:
    // 0x7992a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x7992a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_7992a4:
    // 0x7992a4: 0x3e00008  jr          $ra
label_7992a8:
    if (ctx->pc == 0x7992A8u) {
        ctx->pc = 0x7992A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992A4u;
        // 0x7992a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7992ACu;
        goto label_7992ac;
    }
    ctx->pc = 0x7992A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7992A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992A4u;
        // 0x7992a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
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
label_7992ac:
    // 0x7992ac: 0x0  nop
    ctx->pc = 0x7992acu;
    // NOP
    ctx->pc = 0x7992b0u;
}
} // namespace gh_r207
