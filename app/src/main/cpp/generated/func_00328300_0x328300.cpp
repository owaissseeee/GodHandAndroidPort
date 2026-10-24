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

// Function: func_00328300
// Address: 0x328300 - 0x328368
void func_00328300_0x328300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00328300_0x328300");
#endif

    switch (ctx->pc) {
        case 0x328314u: goto label_328314;
        default: break;
    }

    ctx->pc = 0x328300u;

    // 0x328300: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x328300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x328304: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x328304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x328308: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x328308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x32830c: 0xc0ca40a  jal         func_329028
    ctx->pc = 0x32830Cu;
    SET_GPR_U32(ctx, 31, 0x328314u);
    ctx->pc = 0x328310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32830Cu;
    // 0x328310: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329028u, 0x32830Cu, 0x328314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328314u;
label_328314:
    // 0x328314: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x328314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x328318: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x328318u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x32831c: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x32831cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
    // 0x328320: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x328320u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x328324: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x328324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x328328: 0x34840200  ori         $a0, $a0, 0x200
    ctx->pc = 0x328328u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)512);
    // 0x32832c: 0x14440008  bne         $v0, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x32832Cu;
    {
        const bool branch_taken_0x32832c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x328330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32832Cu;
        // 0x328330: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32832c) {
            ctx->pc = 0x328350u;
            goto label_328350;
        }
    }
    ctx->pc = 0x328334u;
    // 0x328334: 0x82030047  lb          $v1, 0x47($s0)
    ctx->pc = 0x328334u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 71)));
    // 0x328338: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x328338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32833c: 0x14650006  bne         $v1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x32833Cu;
    {
        const bool branch_taken_0x32833c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x328340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32833Cu;
        // 0x328340: 0xa2020048  sb          $v0, 0x48($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 72), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32833c) {
            ctx->pc = 0x328358u;
            goto label_328358;
        }
    }
    ctx->pc = 0x328344u;
    // 0x328344: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x328344u;
    {
        const bool branch_taken_0x328344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328344u;
        // 0x328348: 0xa2000047  sb          $zero, 0x47($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 71), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328344) {
            ctx->pc = 0x328358u;
            goto label_328358;
        }
    }
    ctx->pc = 0x32834Cu;
    // 0x32834c: 0x0  nop
    ctx->pc = 0x32834cu;
    // NOP
label_328350:
    // 0x328350: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x328350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x328354: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x328354u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_328358:
    // 0x328358: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x328358u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32835c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x32835cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x328360: 0x80ca410  j           func_329040
    ctx->pc = 0x328360u;
    ctx->pc = 0x328364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328360u;
    // 0x328364: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329040u, 0x328360u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x328368u;
}
