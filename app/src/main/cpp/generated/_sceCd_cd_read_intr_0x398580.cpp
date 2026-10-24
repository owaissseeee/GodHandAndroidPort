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

// Function: _sceCd_cd_read_intr
// Address: 0x398580 - 0x398638
void _sceCd_cd_read_intr_0x398580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sceCd_cd_read_intr_0x398580");
#endif

    switch (ctx->pc) {
        case 0x3985b0u: goto label_3985b0;
        case 0x398608u: goto label_398608;
        default: break;
    }

    ctx->pc = 0x398580u;

    // 0x398580: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x398580u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x398584: 0x853825  or          $a3, $a0, $a1
    ctx->pc = 0x398584u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x398588: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x398588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x39858c: 0x18400014  blez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x39858Cu;
    {
        const bool branch_taken_0x39858c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x398590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39858Cu;
        // 0x398590: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39858c) {
            ctx->pc = 0x3985E0u;
            goto label_3985e0;
        }
    }
    ctx->pc = 0x398594u;
    // 0x398594: 0x8ce90008  lw          $t1, 0x8($a3)
    ctx->pc = 0x398594u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x398598: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x398598u;
    {
        const bool branch_taken_0x398598 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x39859Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398598u;
        // 0x39859c: 0x1255025  or          $t2, $t1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398598) {
            ctx->pc = 0x3985E0u;
            goto label_3985e0;
        }
    }
    ctx->pc = 0x3985A0u;
    // 0x3985a0: 0x24e80010  addiu       $t0, $a3, 0x10
    ctx->pc = 0x3985a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x3985a4: 0x3c0b0040  lui         $t3, 0x40
    ctx->pc = 0x3985a4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)64 << 16));
    // 0x3985a8: 0x1061021  addu        $v0, $t0, $a2
    ctx->pc = 0x3985a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x3985ac: 0x0  nop
    ctx->pc = 0x3985acu;
    // NOP
label_3985b0:
    // 0x3985b0: 0x1462821  addu        $a1, $t2, $a2
    ctx->pc = 0x3985b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x3985b4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3985b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3985b8: 0x1262021  addu        $a0, $t1, $a2
    ctx->pc = 0x3985b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x3985bc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3985bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3985c0: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x3985c0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3985c4: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x3985c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3985c8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3985c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3985cc: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x3985ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3985d0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3985D0u;
    {
        const bool branch_taken_0x3985d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3985D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3985D0u;
        // 0x3985d4: 0x1061021  addu        $v0, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3985d0) {
            ctx->pc = 0x3985B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3985b0;
        }
    }
    ctx->pc = 0x3985D8u;
    // 0x3985d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3985D8u;
    {
        const bool branch_taken_0x3985d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3985DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3985D8u;
        // 0x3985dc: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3985d8) {
            ctx->pc = 0x3985E8u;
            goto label_3985e8;
        }
    }
    ctx->pc = 0x3985E0u;
label_3985e0:
    // 0x3985e0: 0x3c0b0040  lui         $t3, 0x40
    ctx->pc = 0x3985e0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)64 << 16));
    // 0x3985e4: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x3985e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_3985e8:
    // 0x3985e8: 0x18600011  blez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3985E8u;
    {
        const bool branch_taken_0x3985e8 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x3985ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3985E8u;
        // 0x3985ec: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3985e8) {
            ctx->pc = 0x398630u;
            goto label_398630;
        }
    }
    ctx->pc = 0x3985F0u;
    // 0x3985f0: 0x8ce9000c  lw          $t1, 0xC($a3)
    ctx->pc = 0x3985f0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x3985f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3985f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3985f8: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3985F8u;
    {
        const bool branch_taken_0x3985f8 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x3985FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3985F8u;
        // 0x3985fc: 0x1225025  or          $t2, $t1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3985f8) {
            ctx->pc = 0x398630u;
            goto label_398630;
        }
    }
    ctx->pc = 0x398600u;
    // 0x398600: 0x24e80050  addiu       $t0, $a3, 0x50
    ctx->pc = 0x398600u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 80));
    // 0x398604: 0x1061021  addu        $v0, $t0, $a2
    ctx->pc = 0x398604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_398608:
    // 0x398608: 0x1462821  addu        $a1, $t2, $a2
    ctx->pc = 0x398608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x39860c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x39860cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x398610: 0x1262021  addu        $a0, $t1, $a2
    ctx->pc = 0x398610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x398614: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x398614u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x398618: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x398618u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x39861c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x39861cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x398620: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x398620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x398624: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x398624u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x398628: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x398628u;
    {
        const bool branch_taken_0x398628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39862Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398628u;
        // 0x39862c: 0x1061021  addu        $v0, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398628) {
            ctx->pc = 0x398608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_398608;
        }
    }
    ctx->pc = 0x398630u;
label_398630:
    // 0x398630: 0x80e6136  j           func_3984D8
    ctx->pc = 0x398630u;
    ctx->pc = 0x398634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398630u;
    // 0x398634: 0x256486a0  addiu       $a0, $t3, -0x7960 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 4294936224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3984D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3984D8u, 0x398630u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x398638u;
}
