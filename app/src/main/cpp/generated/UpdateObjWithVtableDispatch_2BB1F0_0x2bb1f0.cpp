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

// Function: UpdateObjWithVtableDispatch_2BB1F0
// Address: 0x2bb1f0 - 0x2bb258
void UpdateObjWithVtableDispatch_2BB1F0_0x2bb1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UpdateObjWithVtableDispatch_2BB1F0_0x2bb1f0");
#endif

    switch (ctx->pc) {
        case 0x2bb1f0u: goto label_2bb1f0;
        case 0x2bb1f4u: goto label_2bb1f4;
        case 0x2bb1f8u: goto label_2bb1f8;
        case 0x2bb1fcu: goto label_2bb1fc;
        case 0x2bb200u: goto label_2bb200;
        case 0x2bb204u: goto label_2bb204;
        case 0x2bb208u: goto label_2bb208;
        case 0x2bb20cu: goto label_2bb20c;
        case 0x2bb210u: goto label_2bb210;
        case 0x2bb214u: goto label_2bb214;
        case 0x2bb218u: goto label_2bb218;
        case 0x2bb21cu: goto label_2bb21c;
        case 0x2bb220u: goto label_2bb220;
        case 0x2bb224u: goto label_2bb224;
        case 0x2bb228u: goto label_2bb228;
        case 0x2bb22cu: goto label_2bb22c;
        case 0x2bb230u: goto label_2bb230;
        case 0x2bb234u: goto label_2bb234;
        case 0x2bb238u: goto label_2bb238;
        case 0x2bb23cu: goto label_2bb23c;
        case 0x2bb240u: goto label_2bb240;
        case 0x2bb244u: goto label_2bb244;
        case 0x2bb248u: goto label_2bb248;
        case 0x2bb24cu: goto label_2bb24c;
        case 0x2bb250u: goto label_2bb250;
        case 0x2bb254u: goto label_2bb254;
        default: break;
    }

    ctx->pc = 0x2bb1f0u;

label_2bb1f0:
    // 0x2bb1f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bb1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2bb1f4:
    // 0x2bb1f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bb1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bb1f8:
    // 0x2bb1f8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2bb1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2bb1fc:
    // 0x2bb1fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bb1fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2bb200:
    // 0x2bb200: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2bb200u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2bb204:
    // 0x2bb204: 0x92030004  lbu         $v1, 0x4($s0)
    ctx->pc = 0x2bb204u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
label_2bb208:
    // 0x2bb208: 0x30640001  andi        $a0, $v1, 0x1
    ctx->pc = 0x2bb208u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2bb20c:
    // 0x2bb20c: 0x5482000a  bnel        $a0, $v0, . + 4 + (0xA << 2)
label_2bb210:
    if (ctx->pc == 0x2BB210u) {
        ctx->pc = 0x2BB210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB20Cu;
        // 0x2bb210: 0x8e020100  lw          $v0, 0x100($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB214u;
        goto label_2bb214;
    }
    ctx->pc = 0x2BB20Cu;
    {
        const bool branch_taken_0x2bb20c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bb20c) {
            ctx->pc = 0x2BB210u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB20Cu;
            // 0x2bb210: 0x8e020100  lw          $v0, 0x100($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB238u;
            goto label_2bb238;
        }
    }
    ctx->pc = 0x2BB214u;
label_2bb214:
    // 0x2bb214: 0x3107b  dsra        $v0, $v1, 1
    ctx->pc = 0x2bb214u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 3) >> 1);
label_2bb218:
    // 0x2bb218: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2bb218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2bb21c:
    // 0x2bb21c: 0x54440006  bnel        $v0, $a0, . + 4 + (0x6 << 2)
label_2bb220:
    if (ctx->pc == 0x2BB220u) {
        ctx->pc = 0x2BB220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB21Cu;
        // 0x2bb220: 0x8e020100  lw          $v0, 0x100($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB224u;
        goto label_2bb224;
    }
    ctx->pc = 0x2BB21Cu;
    {
        const bool branch_taken_0x2bb21c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2bb21c) {
            ctx->pc = 0x2BB220u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB21Cu;
            // 0x2bb220: 0x8e020100  lw          $v0, 0x100($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB238u;
            goto label_2bb238;
        }
    }
    ctx->pc = 0x2BB224u;
label_2bb224:
    // 0x2bb224: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x2bb224u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2bb228:
    // 0x2bb228: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x2bb228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_2bb22c:
    // 0x2bb22c: 0xc051d52  jal         func_147548
label_2bb230:
    if (ctx->pc == 0x2BB230u) {
        ctx->pc = 0x2BB230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB22Cu;
        // 0x2bb230: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB234u;
        goto label_2bb234;
    }
    ctx->pc = 0x2BB22Cu;
    SET_GPR_U32(ctx, 31, 0x2BB234u);
    ctx->pc = 0x2BB230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB22Cu;
    // 0x2bb230: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147548u, 0x2BB22Cu, 0x2BB234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB234u;
label_2bb234:
    // 0x2bb234: 0x8e020100  lw          $v0, 0x100($s0)
    ctx->pc = 0x2bb234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
label_2bb238:
    // 0x2bb238: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x2bb238u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_2bb23c:
    // 0x2bb23c: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x2bb23cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_2bb240:
    // 0x2bb240: 0x60f809  jalr        $v1
label_2bb244:
    if (ctx->pc == 0x2BB244u) {
        ctx->pc = 0x2BB244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB240u;
        // 0x2bb244: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB248u;
        goto label_2bb248;
    }
    ctx->pc = 0x2BB240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2BB248u);
        ctx->pc = 0x2BB244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB240u;
        // 0x2bb244: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB240u, 0x2BB248u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BB248u;
label_2bb248:
    // 0x2bb248: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2bb248u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2bb24c:
    // 0x2bb24c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bb24cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2bb250:
    // 0x2bb250: 0x3e00008  jr          $ra
label_2bb254:
    if (ctx->pc == 0x2BB254u) {
        ctx->pc = 0x2BB254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB250u;
        // 0x2bb254: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB258u;
        goto label_fallthrough_0x2bb250;
    }
    ctx->pc = 0x2BB250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB250u;
        // 0x2bb254: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB250u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2bb250:
    ctx->pc = 0x2BB258u;
}
