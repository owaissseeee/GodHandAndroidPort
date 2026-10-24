#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r105_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r105
{
// Function: __do_global_dtors
// Address: 0x79a4f0 - 0x79a548
void ps2___do_global_dtors_0x79a4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_dtors_0x79a4f0");
#endif

    switch (ctx->pc) {
        case 0x79a4f0u: goto label_79a4f0;
        case 0x79a4f4u: goto label_79a4f4;
        case 0x79a4f8u: goto label_79a4f8;
        case 0x79a4fcu: goto label_79a4fc;
        case 0x79a500u: goto label_79a500;
        case 0x79a504u: goto label_79a504;
        case 0x79a508u: goto label_79a508;
        case 0x79a50cu: goto label_79a50c;
        case 0x79a510u: goto label_79a510;
        case 0x79a514u: goto label_79a514;
        case 0x79a518u: goto label_79a518;
        case 0x79a51cu: goto label_79a51c;
        case 0x79a520u: goto label_79a520;
        case 0x79a524u: goto label_79a524;
        case 0x79a528u: goto label_79a528;
        case 0x79a52cu: goto label_79a52c;
        case 0x79a530u: goto label_79a530;
        case 0x79a534u: goto label_79a534;
        case 0x79a538u: goto label_79a538;
        case 0x79a53cu: goto label_79a53c;
        case 0x79a540u: goto label_79a540;
        case 0x79a544u: goto label_79a544;
        default: break;
    }

    ctx->pc = 0x79a4f0u;

label_79a4f0:
    // 0x79a4f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x79a4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_79a4f4:
    // 0x79a4f4: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x79a4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
label_79a4f8:
    // 0x79a4f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x79a4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_79a4fc:
    // 0x79a4fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x79a4fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_79a500:
    // 0x79a500: 0x8c82a798  lw          $v0, -0x5868($a0)
    ctx->pc = 0x79a500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294944664)));
label_79a504:
    // 0x79a504: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79a504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79a508:
    // 0x79a508: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_79a50c:
    if (ctx->pc == 0x79A50Cu) {
        ctx->pc = 0x79A50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A508u;
        // 0x79a50c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A510u;
        goto label_79a510;
    }
    ctx->pc = 0x79A508u;
    {
        const bool branch_taken_0x79a508 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A508u;
        // 0x79a50c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a508) {
            ctx->pc = 0x79A534u;
            goto label_79a534;
        }
    }
    ctx->pc = 0x79A510u;
label_79a510:
    // 0x79a510: 0x8e02a798  lw          $v0, -0x5868($s0)
    ctx->pc = 0x79a510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944664)));
label_79a514:
    // 0x79a514: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x79a514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_79a518:
    // 0x79a518: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x79a518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_79a51c:
    // 0x79a51c: 0x60f809  jalr        $v1
label_79a520:
    if (ctx->pc == 0x79A520u) {
        ctx->pc = 0x79A520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A51Cu;
        // 0x79a520: 0xae02a798  sw          $v0, -0x5868($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294944664), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A524u;
        goto label_79a524;
    }
    ctx->pc = 0x79A51Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x79A524u);
        ctx->pc = 0x79A520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A51Cu;
        // 0x79a520: 0xae02a798  sw          $v0, -0x5868($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294944664), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A51Cu, 0x79A524u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79A524u;
label_79a524:
    // 0x79a524: 0x8e02a798  lw          $v0, -0x5868($s0)
    ctx->pc = 0x79a524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944664)));
label_79a528:
    // 0x79a528: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79a528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79a52c:
    // 0x79a52c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_79a530:
    if (ctx->pc == 0x79A530u) {
        ctx->pc = 0x79A530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A52Cu;
        // 0x79a530: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A534u;
        goto label_79a534;
    }
    ctx->pc = 0x79A52Cu;
    {
        const bool branch_taken_0x79a52c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A52Cu;
        // 0x79a530: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a52c) {
            ctx->pc = 0x79A518u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a518;
        }
    }
    ctx->pc = 0x79A534u;
label_79a534:
    // 0x79a534: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79a534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_79a538:
    // 0x79a538: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x79a538u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79a53c:
    // 0x79a53c: 0x3e00008  jr          $ra
label_79a540:
    if (ctx->pc == 0x79A540u) {
        ctx->pc = 0x79A540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A53Cu;
        // 0x79a540: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A544u;
        goto label_79a544;
    }
    ctx->pc = 0x79A53Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A53Cu;
        // 0x79a540: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A53Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A544u;
label_79a544:
    // 0x79a544: 0x0  nop
    ctx->pc = 0x79a544u;
    // NOP
    ctx->pc = 0x79a548u;
}
} // namespace gh_r105
