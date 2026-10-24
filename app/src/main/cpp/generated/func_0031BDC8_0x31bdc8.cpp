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

// Function: func_0031BDC8
// Address: 0x31bdc8 - 0x31be58
void func_0031BDC8_0x31bdc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031BDC8_0x31bdc8");
#endif

    switch (ctx->pc) {
        case 0x31bdf8u: goto label_31bdf8;
        default: break;
    }

    ctx->pc = 0x31bdc8u;

    // 0x31bdc8: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x31bdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x31bdcc: 0x8c627a78  lw          $v0, 0x7A78($v1)
    ctx->pc = 0x31bdccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A78u));
    // 0x31bdd0: 0x2117a  dsrl        $v0, $v0, 5
    ctx->pc = 0x31bdd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 5);
    // 0x31bdd4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x31bdd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x31bdd8: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x31BDD8u;
    {
        const bool branch_taken_0x31bdd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BDD8u;
        // 0x31bddc: 0x60502d  daddu       $t2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bdd8) {
            ctx->pc = 0x31BE50u;
            goto label_31be50;
        }
    }
    ctx->pc = 0x31BDE0u;
    // 0x31bde0: 0x3c070075  lui         $a3, 0x75
    ctx->pc = 0x31bde0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)117 << 16));
    // 0x31bde4: 0x24860100  addiu       $a2, $a0, 0x100
    ctx->pc = 0x31bde4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    // 0x31bde8: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x31bde8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bdec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31bdecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bdf0: 0x3c080075  lui         $t0, 0x75
    ctx->pc = 0x31bdf0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)117 << 16));
    // 0x31bdf4: 0x0  nop
    ctx->pc = 0x31bdf4u;
    // NOP
label_31bdf8:
    // 0x31bdf8: 0x8d225800  lw          $v0, 0x5800($t1)
    ctx->pc = 0x31bdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 22528)));
    // 0x31bdfc: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x31bdfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x31be00: 0x8d035840  lw          $v1, 0x5840($t0)
    ctx->pc = 0x31be00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 22592)));
    // 0x31be04: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x31be04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x31be08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31be08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31be0c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x31be0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x31be10: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x31be10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31be14: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x31be14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x31be18: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x31be18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x31be1c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x31BE1Cu;
    {
        const bool branch_taken_0x31be1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31BE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BE1Cu;
        // 0x31be20: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31be1c) {
            ctx->pc = 0x31BDF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31bdf8;
        }
    }
    ctx->pc = 0x31BE24u;
    // 0x31be24: 0x8ce25800  lw          $v0, 0x5800($a3)
    ctx->pc = 0x31be24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 22528)));
    // 0x31be28: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x31be28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x31be2c: 0x8c645804  lw          $a0, 0x5804($v1)
    ctx->pc = 0x31be2cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x755804u));
    // 0x31be30: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31be30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x31be34: 0x44202a  slt         $a0, $v0, $a0
    ctx->pc = 0x31be34u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x31be38: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31BE38u;
    {
        const bool branch_taken_0x31be38 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x31BE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BE38u;
        // 0x31be3c: 0xace25800  sw          $v0, 0x5800($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 22528), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31be38) {
            ctx->pc = 0x31BE50u;
            goto label_31be50;
        }
    }
    ctx->pc = 0x31BE40u;
    // 0x31be40: 0x8d427a78  lw          $v0, 0x7A78($t2)
    ctx->pc = 0x31be40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 31352)));
    // 0x31be44: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x31be44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x31be48: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x31be48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x31be4c: 0xad427a78  sw          $v0, 0x7A78($t2)
    ctx->pc = 0x31be4cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 31352), GPR_U32(ctx, 2));
label_31be50:
    // 0x31be50: 0x3e00008  jr          $ra
    ctx->pc = 0x31BE50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31BE50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31BE58u;
}
