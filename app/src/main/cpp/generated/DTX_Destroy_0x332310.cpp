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

// Function: DTX_Destroy
// Address: 0x332310 - 0x332378
void DTX_Destroy_0x332310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DTX_Destroy_0x332310");
#endif

    switch (ctx->pc) {
        case 0x332338u: goto label_332338;
        case 0x332340u: goto label_332340;
        case 0x332354u: goto label_332354;
        default: break;
    }

    ctx->pc = 0x332310u;

    // 0x332310: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x332310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x332314: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x332314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x332318: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x332318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33231c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33231cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332320: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x332320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x332324: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x332324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x332328: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x332328u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x33232c: 0x82020001  lb          $v0, 0x1($s0)
    ctx->pc = 0x33232cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x332330: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x332330u;
    {
        const bool branch_taken_0x332330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x332334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332330u;
        // 0x332334: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332330) {
            ctx->pc = 0x33234Cu;
            goto label_33234c;
        }
    }
    ctx->pc = 0x332338u;
label_332338:
    // 0x332338: 0xc0cc9de  jal         func_332778
    ctx->pc = 0x332338u;
    SET_GPR_U32(ctx, 31, 0x332340u);
    ctx->pc = 0x332778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332778u, 0x332338u, 0x332340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332340u;
label_332340:
    // 0x332340: 0x82020001  lb          $v0, 0x1($s0)
    ctx->pc = 0x332340u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x332344: 0x1051fffc  beq         $v0, $s1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x332344u;
    {
        const bool branch_taken_0x332344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x332344) {
            ctx->pc = 0x332338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_332338;
        }
    }
    ctx->pc = 0x33234Cu;
label_33234c:
    // 0x33234c: 0xc0cc824  jal         func_332090
    ctx->pc = 0x33234Cu;
    SET_GPR_U32(ctx, 31, 0x332354u);
    ctx->pc = 0x332350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33234Cu;
    // 0x332350: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332090u, 0x33234Cu, 0x332354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332354u;
label_332354:
    // 0x332354: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x332354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332358: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x332358u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33235c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33235cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332360: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x332360u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x332364: 0x24060044  addiu       $a2, $zero, 0x44
    ctx->pc = 0x332364u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x332368: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x332368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33236c: 0x80e94bc  j           func_3A52F0
    ctx->pc = 0x33236Cu;
    ctx->pc = 0x332370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33236Cu;
    // 0x332370: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x33236Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x332374u;
    // 0x332374: 0x0  nop
    ctx->pc = 0x332374u;
    // NOP
    ctx->pc = 0x332378u;
}
