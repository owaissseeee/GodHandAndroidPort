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

// Function: _sceMpegDispatchMpegCallback
// Address: 0x39ab20 - 0x39ab98
void _sceMpegDispatchMpegCallback_0x39ab20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sceMpegDispatchMpegCallback_0x39ab20");
#endif

    switch (ctx->pc) {
        case 0x39ab20u: goto label_39ab20;
        case 0x39ab24u: goto label_39ab24;
        case 0x39ab28u: goto label_39ab28;
        case 0x39ab2cu: goto label_39ab2c;
        case 0x39ab30u: goto label_39ab30;
        case 0x39ab34u: goto label_39ab34;
        case 0x39ab38u: goto label_39ab38;
        case 0x39ab3cu: goto label_39ab3c;
        case 0x39ab40u: goto label_39ab40;
        case 0x39ab44u: goto label_39ab44;
        case 0x39ab48u: goto label_39ab48;
        case 0x39ab4cu: goto label_39ab4c;
        case 0x39ab50u: goto label_39ab50;
        case 0x39ab54u: goto label_39ab54;
        case 0x39ab58u: goto label_39ab58;
        case 0x39ab5cu: goto label_39ab5c;
        case 0x39ab60u: goto label_39ab60;
        case 0x39ab64u: goto label_39ab64;
        case 0x39ab68u: goto label_39ab68;
        case 0x39ab6cu: goto label_39ab6c;
        case 0x39ab70u: goto label_39ab70;
        case 0x39ab74u: goto label_39ab74;
        case 0x39ab78u: goto label_39ab78;
        case 0x39ab7cu: goto label_39ab7c;
        case 0x39ab80u: goto label_39ab80;
        case 0x39ab84u: goto label_39ab84;
        case 0x39ab88u: goto label_39ab88;
        case 0x39ab8cu: goto label_39ab8c;
        case 0x39ab90u: goto label_39ab90;
        case 0x39ab94u: goto label_39ab94;
        default: break;
    }

    ctx->pc = 0x39ab20u;

label_39ab20:
    // 0x39ab20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39ab20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_39ab24:
    // 0x39ab24: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x39ab24u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39ab28:
    // 0x39ab28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x39ab28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_39ab2c:
    // 0x39ab2c: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
label_39ab30:
    if (ctx->pc == 0x39AB30u) {
        ctx->pc = 0x39AB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AB2Cu;
        // 0x39ab30: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39AB34u;
        goto label_39ab34;
    }
    ctx->pc = 0x39AB2Cu;
    {
        const bool branch_taken_0x39ab2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x39AB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AB2Cu;
        // 0x39ab30: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ab2c) {
            ctx->pc = 0x39AB84u;
            goto label_39ab84;
        }
    }
    ctx->pc = 0x39AB34u;
label_39ab34:
    // 0x39ab34: 0x8c860040  lw          $a2, 0x40($a0)
    ctx->pc = 0x39ab34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_39ab38:
    // 0x39ab38: 0x10c00012  beqz        $a2, . + 4 + (0x12 << 2)
label_39ab3c:
    if (ctx->pc == 0x39AB3Cu) {
        ctx->pc = 0x39AB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AB38u;
        // 0x39ab3c: 0x2408000c  addiu       $t0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39AB40u;
        goto label_39ab40;
    }
    ctx->pc = 0x39AB38u;
    {
        const bool branch_taken_0x39ab38 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x39AB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AB38u;
        // 0x39ab3c: 0x2408000c  addiu       $t0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ab38) {
            ctx->pc = 0x39AB84u;
            goto label_39ab84;
        }
    }
    ctx->pc = 0x39AB40u;
label_39ab40:
    // 0x39ab40: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x39ab40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_39ab44:
    // 0x39ab44: 0x681818  mult        $v1, $v1, $t0
    ctx->pc = 0x39ab44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_39ab48:
    // 0x39ab48: 0xc31021  addu        $v0, $a2, $v1
    ctx->pc = 0x39ab48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_39ab4c:
    // 0x39ab4c: 0x8c47000c  lw          $a3, 0xC($v0)
    ctx->pc = 0x39ab4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_39ab50:
    // 0x39ab50: 0x10e0000d  beqz        $a3, . + 4 + (0xD << 2)
label_39ab54:
    if (ctx->pc == 0x39AB54u) {
        ctx->pc = 0x39AB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AB50u;
        // 0x39ab54: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39AB58u;
        goto label_39ab58;
    }
    ctx->pc = 0x39AB50u;
    {
        const bool branch_taken_0x39ab50 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x39AB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AB50u;
        // 0x39ab54: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ab50) {
            ctx->pc = 0x39AB88u;
            goto label_39ab88;
        }
    }
    ctx->pc = 0x39AB58u;
label_39ab58:
    // 0x39ab58: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x39ab58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_39ab5c:
    // 0x39ab5c: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x39ab5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_39ab60:
    // 0x39ab60: 0x60e02d  daddu       $gp, $v1, $zero
    ctx->pc = 0x39ab60u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_39ab64:
    // 0x39ab64: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x39ab64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_39ab68:
    // 0x39ab68: 0x481818  mult        $v1, $v0, $t0
    ctx->pc = 0x39ab68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_39ab6c:
    // 0x39ab6c: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x39ab6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_39ab70:
    // 0x39ab70: 0xe0f809  jalr        $a3
label_39ab74:
    if (ctx->pc == 0x39AB74u) {
        ctx->pc = 0x39AB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AB70u;
        // 0x39ab74: 0x8c460010  lw          $a2, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39AB78u;
        goto label_39ab78;
    }
    ctx->pc = 0x39AB70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x39AB78u);
        ctx->pc = 0x39AB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AB70u;
        // 0x39ab74: 0x8c460010  lw          $a2, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39AB70u, 0x39AB78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39AB78u;
label_39ab78:
    // 0x39ab78: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x39ab78u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39ab7c:
    // 0x39ab7c: 0x380102d  daddu       $v0, $gp, $zero
    ctx->pc = 0x39ab7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_39ab80:
    // 0x39ab80: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x39ab80u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39ab84:
    // 0x39ab84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39ab84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_39ab88:
    // 0x39ab88: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x39ab88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_39ab8c:
    // 0x39ab8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39ab8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39ab90:
    // 0x39ab90: 0x3e00008  jr          $ra
label_39ab94:
    if (ctx->pc == 0x39AB94u) {
        ctx->pc = 0x39AB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AB90u;
        // 0x39ab94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39AB98u;
        goto label_fallthrough_0x39ab90;
    }
    ctx->pc = 0x39AB90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39AB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AB90u;
        // 0x39ab94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39AB90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x39ab90:
    ctx->pc = 0x39AB98u;
}
